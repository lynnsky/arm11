#include "usbcamera.h"
#include "ui_usbcamera.h"
#include <fcntl.h>


#include <sys/ioctl.h>
#include <sys/mman.h>


#include <linux/videodev2.h>

#include <QApplication>
#include <QDebug>

#include <QBuffer>

 #include <QDateTime>
#include <iostream>
#include <QDir>
#define WIDTH 176
#define HEIGHT 144
#define FRAME_COUNT 1
#define FRAME_IDLE 60

typedef struct VideoBuffer
{
    void   *start;
    size_t  length;
}VideoBuffer;

static int fd;
static VideoBuffer *buffers = NULL;
static unsigned int numBufs = 0;

uchar *pp;


#define QCIF_WIDTH 176 //176
#define QCIF_HEIGHT 144 //144

unsigned int yuv[QCIF_WIDTH*QCIF_HEIGHT  + (QCIF_WIDTH*QCIF_HEIGHT)/2];
int count=0;
int retvalue=0;
unsigned char cdata[10000];
unsigned char vdata[30000];
int cbuffer_size=10000;
unsigned char rgbdata[80000];
int buffersize=80000;
typedef  unsigned int uint8_t;

typedef union
{
    uint8_t data[518];
    struct
    {
      uint8_t  head;
      uint8_t framFlag;
      uint8_t  numOfPak;
      uint8_t  countOfPak;
      uint8_t  dLen;
      uint8_t data[512];
    }pack_struct;
}pack_t;

static int convert_yuv_to_rgb_pixel(int y, int u, int v)
{
    unsigned int pixel32 = 0;
    unsigned char *pixel = (unsigned char *)&pixel32;
    int r, g, b;
    r = y + (1.370705 * (v-128));
    g = y - (0.698001 * (v-128)) - (0.337633 * (u-128));
    b = y + (1.732446 * (u-128));
    if(r > 255) r = 255;
    if(g > 255) g = 255;
    if(b > 255) b = 255;
    if(r < 0) r = 0;
    if(g < 0) g = 0;
    if(b < 0) b = 0;
    pixel[0] = r * 220 / 256;
    pixel[1] = g * 220 / 256;
    pixel[2] = b * 220 / 256;
    return pixel32;
}

static int convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height)
{
    unsigned int in, out = 0;
    unsigned int pixel_16;
    unsigned char pixel_24[3];
    unsigned int pixel32;
    int y0, u, y1, v;
    for(in = 0; in < width * height * 2; in += 4)
    {
        pixel_16 =
                yuv[in + 3] << 24 |
                               yuv[in + 2] << 16 |
                               yuv[in + 1] <<  8 |
                               yuv[in + 0];
        y0 = (pixel_16 & 0x000000ff);
        u  = (pixel_16 & 0x0000ff00) >>  8;
        y1 = (pixel_16 & 0x00ff0000) >> 16;
        v  = (pixel_16 & 0xff000000) >> 24;
        pixel32 = convert_yuv_to_rgb_pixel(y0, u, v);
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
        pixel32 = convert_yuv_to_rgb_pixel(y1, u, v);
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
    }
    return 0;
}



// 获取设备能力
static int v4l2_get_capability(void)
{
    struct v4l2_capability cap;

    if (::ioctl (fd, VIDIOC_QUERYCAP, &cap) == -1)//查询驱动功能
    {
        printf("Get camara capability is fail.\n");
        return -1;
    }

    printf("camara driver: %s\n", cap.driver);
    printf("camara card: %s\n", cap.card);
    printf("camara bus info: %s\n", cap.bus_info);
    printf("camara version: %d\n", cap.version);
    printf("camara capabilities: 0x%x\n", cap.capabilities);

    if (!(cap.capabilities & V4L2_CAP_VIDEO_CAPTURE))
    {
        printf("Camara does not support VIDEO CAPTURE.\n");
        return -1;
    }
    if (!(cap.capabilities & V4L2_CAP_STREAMING))
    {
        printf("Camara does not support STREAMING.\n");
        return -1;
    }
   // 显示所有支持的格式
    struct v4l2_fmtdesc fmt1;
    int ret;
    memset(&fmt1, 0, sizeof(fmt1));
    fmt1.index = 0;
    fmt1.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    while ((ret = ioctl(fd, VIDIOC_ENUM_FMT, &fmt1)) == 0)//VIDIOC_ENUM_FMT：获取当前驱动支持的视频格式
    {
        fmt1.index++;
        printf("{ pixelformat = '%c%c%c%c', description = '%s' }\n",
        fmt1.pixelformat & 0xFF, (fmt1.pixelformat >> 8) & 0xFF,
        (fmt1.pixelformat >> 16) & 0xFF, (fmt1.pixelformat >> 24) & 0xFF,
        fmt1.description);
     }
//    struct v4l2_std_id std;
//    do {
//      ret = ioctl(fd, VIDIOC_QUERYSTD, &std);
//    } while (ret == -1 && errno == EAGAIN);
//    switch (std) {
//        case V4L2_STD_NTSC:
//            printf("Camara support PAL（720X576）.\n");
//        case V4L2_STD_PAL:
//            printf("Camara support NTSC（720X480）.\n");
//    }

    return 0;
}

// 设置视频捕获格式
static int v4l2_set_fmt(void)
{
    struct v4l2_format fmt;// 设置视频捕获格式

    memset(&fmt, 0, sizeof(fmt));
    fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE; // 数据流类型，必须永远是V4L2_BUF_TYPE_VIDEO_CAPTURE
    fmt.fmt.pix.width = WIDTH; // 宽，必须是16的倍数
    fmt.fmt.pix.height = HEIGHT;// 高，必须是16的倍数
    fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_YUYV; // 视频数据存储类型，例如是YUV4：2：2还是RGB
    fmt.fmt.pix.field       = V4L2_FIELD_INTERLACED;
    fmt.fmt.pix.priv = 1;
    printf("Camara set fmt before width=%d,height=%d,pixelformat=%c%c%c%c,field=%d.\n",
           fmt.fmt.pix.width,
           fmt.fmt.pix.height,
           fmt.fmt.pix.pixelformat & 0xFF, (fmt.fmt.pix.pixelformat >> 8) & 0xFF,
           (fmt.fmt.pix.pixelformat >> 16) & 0xFF, (fmt.fmt.pix.pixelformat >> 24) & 0xFF,
           fmt.fmt.pix.field
           );
    if (::ioctl(fd, VIDIOC_S_FMT, &fmt)<0)//设置当前驱动的频捕获格式
    {
        printf("Camara set fmt is errror.\n");
        return -1;
    } else
    {
      printf("Camara set fmt after width=%d,height=%d,pixelformat=%c%c%c%c,field=%d.\n",
             fmt.fmt.pix.width,
             fmt.fmt.pix.height,
             fmt.fmt.pix.pixelformat & 0xFF, (fmt.fmt.pix.pixelformat >> 8) & 0xFF,
             (fmt.fmt.pix.pixelformat >> 16) & 0xFF, (fmt.fmt.pix.pixelformat >> 24) & 0xFF,
             fmt.fmt.pix.field
             );//field=V4L2_FIELD_NONE
    }
    return 0;
}
//为视频捕获分配内存：
static int v4l2_set_memory(void)
{
    struct v4l2_requestbuffers req;
    enum v4l2_buf_type type;
    struct v4l2_buffer buf;

    memset(&req, 0, sizeof (req));
    req.count = FRAME_COUNT;   // 缓存数量，也就是说在缓存队列里保持多少张照片
    req.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;       // 数据流类型，必须永远是V4L2_BUF_TYPE_VIDEO_CAPTURE
    req.memory = V4L2_MEMORY_MMAP;        // V4L2_MEMORY_MMAP 或 V4L2_MEMORY_USERPTR

    if (::ioctl(fd, VIDIOC_REQBUFS, &req) < 0) // 分配内存,申请一个拥有1个缓冲帧的缓冲区
    {
        printf("VIDIOC_REQBUFS failed\n");
        return -1;
    }

    buffers = (VideoBuffer *)calloc(req.count, sizeof(*buffers));//将已申请到的缓冲帧映射到应用程序，用buffers 指针记录

    for (numBufs = 0; numBufs < req.count; numBufs++)
    {
        int ret;
        memset(&buf, 0, sizeof(buf));
        buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        buf.memory = V4L2_MEMORY_MMAP;
        buf.index = numBufs;
        // 申请缓冲
        ret=::ioctl(fd, VIDIOC_QUERYBUF, &buf);
        if (ret== -1)//获取缓冲帧的地址，长度
        {
              printf("VIDIOC_QUERYBUF error1\n");

            return -1;
        }
        //使用mmap函数转换成应用程序中的绝对地址，最后把这段缓存放入缓存队列, 映射内存
        buffers[numBufs].length = buf.length;
        buffers[numBufs].start = mmap(NULL, buf.length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, buf.m.offset);//返回成功映射后的地址，不成功返回MAP_FAILED
        if (buffers[numBufs].start == MAP_FAILED)
        {
             printf(" MAP_FAILED!\n");
            return -1;
        }

        // 将缓冲帧放入队列
        if (::ioctl(fd, VIDIOC_QBUF, &buf) == -1)
        {
            printf(" VIDIOC_QBUF!\n");
            return -1;
        }
    }

    //
    type = V4L2_BUF_TYPE_VIDEO_CAPTURE; // 数据流类型
    // 启动视频采集命令
    if (::ioctl (fd, VIDIOC_STREAMON, &type) < 0)
    {
        printf("VIDIOC_STREAMON error\n");
        return -1;
    }
    return 0;
}

// 读取图像
static int v4l2_read_pic(int index)
{
    struct v4l2_buffer buf;

    memset(&buf,0,sizeof(buf));
    buf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    buf.memory = V4L2_MEMORY_MMAP;
    buf.index = index;

// 从缓冲区取出一个缓冲帧
    if (::ioctl(fd, VIDIOC_DQBUF, &buf) == -1)
        return -1;

 // 将取出的缓冲帧放回缓冲区
    if (::ioctl(fd, VIDIOC_QBUF, &buf) == -1)
        return -1;

    return 0;
}


static int v4l2_init(const char *dev_name)
        // 初始化v4l2
{
    // 应用程序能够使用阻塞模式或非阻塞模式打开视频设备，如果使用非阻塞模式调用视频设备，即使尚未捕获到信息，驱动依旧会把缓存（DQBUFF）里的东西返回给应用程序。
    fd = ::open(dev_name, O_RDWR);
    if (fd == -1)
    {
        printf("open camera is fail.\n");
        return -1;
    } else
    {
        printf("open camera is sucess.fd=%d.\n",fd);
    }

    // 查询设备能力
    if (v4l2_get_capability())
        return -1;

    // 格式化帧
    if (v4l2_set_fmt())
        return -1;

    // 设定内存
    if (v4l2_set_memory())
        return -1;

    return 0;
}


Usbcamera::Usbcamera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Usbcamera)
{
    ui->setupUi(this);
    pp=(uchar *)malloc(WIDTH*HEIGHT*3*sizeof(char));
     qDebug()<<"usbcamera form open!";
}

Usbcamera::~Usbcamera()
{
    delete ui;
    qDebug()<<"usbcamera form close!";
}

// 开启设备
void Usbcamera::on_btnOpen_clicked()
{
    if (v4l2_init("/dev/video2"))
    {
        printf("v4l2 init is error!\n");
        emit(close_signal()); // 发射信号
    }

    // 关联信号
    connect (this, SIGNAL(close_signal()), this, SLOT(camara_quit()));
    connect (this, SIGNAL(quit_signal()), qApp, SLOT(quit()));
        timer = new QTimer(this);
        connect (timer, SIGNAL(timeout()), this, SLOT(showMe()));
        timer->start(FRAME_IDLE);
 ui->btnVideo->setText("拍摄中");

}

void Usbcamera::showMe()
{

    update();

}

void Usbcamera::paintEvent(QPaintEvent *)
{
    if (v4l2_read_pic(0))
        return;

    convert_yuv_to_rgb_buffer((uchar *)buffers[0].start,pp,WIDTH,HEIGHT);

    // 原始图样
    QPainter painter(this);

  QImage *image=new QImage((uchar *)pp,WIDTH,HEIGHT,QImage::Format_RGB888);
  painter.drawImage(30,30, *image, 0, 0, WIDTH, HEIGHT);
  //  QImage image;
    //image.loadFromData((uchar *)buffers[0].start, buffers[0].length, "JPEG");

   // painter.drawImage(40, 30, image, 0, 0, WIDTH, HEIGHT);
}

void Usbcamera::camara_quit()
{
    munmap(buffers[0].start, FRAME_COUNT*buffers[0].length);
    ::close(fd);
    timer->stop();
    emit(quit_signal());
}



void Usbcamera::on_pushButton_clicked()
{
    int a=1;
    QDateTime time=QDateTime::currentDateTime();
    QString sdcard="/sdcard";
    QDir lsdir(sdcard);
    QString dir=time.toString("ddhhmmss");
    bool ok=lsdir.mkdir(dir);
    if (ok)
        qDebug()<<"dir created";
    else
        qDebug()<<"dir not create";

    while (a<2)
    {
    QString fname="/sdcard/";
    fname.append(dir);
    fname.append("/");
    QString b;
    b.setNum(a);
    fname.append(b);
    fname.append(".jpg");
    a++;
    if (v4l2_read_pic(0))
        return;

    convert_yuv_to_rgb_buffer((uchar *)buffers[0].start,pp,WIDTH,HEIGHT);

    // 原始图样
//    QPainter painter(this);
   QImage *image=new QImage((uchar *)pp,WIDTH,HEIGHT,QImage::Format_RGB888);

//    painter.drawImage(50,50, *image, 0, 0, WIDTH, HEIGHT);
    QPixmap pixmap;
    pixmap=pixmap.fromImage(*image);
    ui->label_image->setPixmap(pixmap);
    if(image->save(fname))
    {
    qDebug()<<"Save succeed!";
    }
    else
    {
    qDebug()<<"Save failed!";
    }
    ui->label->setText(fname);
    fname.clear();
    }
}
void Usbcamera::takepicture()
{     if (v4l2_init("/dev/video2"))
    {
        printf("v4l2 init is error!\n");
        emit(close_signal()); // 发射信号
    }
    int a=1;
    QDateTime time=QDateTime::currentDateTime();
    QString sdcard="/sdcard";
    QDir lsdir(sdcard);
    QString dir=time.toString("ddhhmmss");
    bool ok=lsdir.mkdir(dir);
    if (ok)
        qDebug()<<"dir created";
    else
        qDebug()<<"dir not create";

    while (a<2)
    {
    QString fname="/sdcard/";
    fname.append(dir);
    fname.append("/");
    QString b;
    b.setNum(a);
    fname.append(b);
    fname.append(".jpg");
    a++;
    if (v4l2_read_pic(0))
        return;

    convert_yuv_to_rgb_buffer((uchar *)buffers[0].start,pp,WIDTH,HEIGHT);

    // 原始图样
//    QPainter painter(this);
   QImage *image=new QImage((uchar *)pp,WIDTH,HEIGHT,QImage::Format_RGB888);

//    painter.drawImage(50,50, *image, 0, 0, WIDTH, HEIGHT);
      qDebug()<<fname;
    if(image->save(fname))
    {
    qDebug()<<"Save succeed!";
    }
    else
    {
    qDebug()<<"Save failed!";
    }
    ui->label->setText(fname);
    fname.clear();
    }

    munmap(buffers[0].start, FRAME_COUNT*buffers[0].length);
    ::close(fd);

}

void Usbcamera::video()
{   /*   if (v4l2_init("/dev/video2"))
    {
        printf("v4l2 init is error!\n");
        emit(close_signal()); // 发射信号
    }*/
    int a=1;
    QDateTime time=QDateTime::currentDateTime();
    QString sdcard="/sdcard/";
    QDir lsdir(sdcard);
    QString dir=time.toString("MMddhhmmss");

    bool ok=lsdir.mkdir(dir);
    if (ok){
        qDebug()<<"dir created";
        ui->labelvideo->setText(dir);
    }
    else
        qDebug()<<"dir not create";

    while (a<50)
    {
    QString fname="/sdcard/";
    fname.append(dir);
    fname.append("/");
    QString b;
    b.setNum(a);
    fname.append(b);
    fname.append(".jpg");
    a++;
    if (v4l2_read_pic(0))
        return;

    convert_yuv_to_rgb_buffer((uchar *)buffers[0].start,pp,WIDTH,HEIGHT);

    // 原始图样
//    QPainter painter(this);
   QImage *image=new QImage((uchar *)pp,WIDTH,HEIGHT,QImage::Format_RGB888);

    if(image->save(fname))
    {
    qDebug()<<"Save succeed!";
    }
    else
    {
    qDebug()<<"Save failed!";
    }
    fname.clear();
    }
   // munmap(buffers[0].start, FRAME_COUNT*buffers[0].length);
    //::close(fd);
}

void Usbcamera::on_btnVideo_clicked()
{   ui->btnVideo->setText("拍摄中");
    video();
    ui->btnVideo->setText("拍视频");
}

void Usbcamera::on_btnQuit_clicked()
{
    munmap(buffers[0].start, FRAME_COUNT*buffers[0].length);
     ::close(fd);
     timer->stop();

}
