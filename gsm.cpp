#include "gsm.h"
#include "ui_gsm.h"
#include <QFileDialog> //整合是去掉
#include "termios.h"
#include "fcntl.h"
#include <QDebug>             //设置串口
#include <QTime>
#include <QMessageBox>
#include <QChar>
#include <QFileInfo>
#include <QFileDialog>    //整合是去掉
//#include <QBuffer>
#include <QCoreApplication>
#include <QList>
//#include <QProcess>
//#include <QDir>
//extern int m_fd;
int m_fd=-1;
void mySleep(uint ms)
{
    QTime dieTime=QTime::currentTime().addMSecs(ms);
    while(QTime::currentTime()<dieTime)
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

int openSerialPort3()
{
    int fd=-1;

    QString devName="/dev/";
    devName+="ttySAC3";

    fd=::open(devName.toAscii(),O_RDWR|O_NONBLOCK);

    if(fd<0){
        return -1;
    }

    termios serialAttr;
    memset(&serialAttr,0,sizeof(serialAttr));
    serialAttr.c_iflag=IGNPAR;
    serialAttr.c_cflag=B9600|HUPCL|CS8|CREAD|CLOCAL;
    serialAttr.c_cc[VMIN]=1;
    if(tcsetattr(fd,TCSANOW,&serialAttr)!=0){
        return -1;
    }
    return fd;
}
bool checkResult(QString s)
{
    char buf[100]={0};
    QByteArray resBuf;
    int n=0;
    bool state=false;
    // 超时判断，5s
    QTime dieTime=QTime::currentTime().addMSecs(5000);
    while(QTime::currentTime()<dieTime)
    {
        n=::read(m_fd,buf,sizeof(buf));
        resBuf.append(buf,n);
        if(resBuf.indexOf(s)>=0)
        {
            state=true;
            //qDebug()<<resBuf;
            break;
        }
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
    qDebug()<<buf;
    return state;
}

void dial(QString number)
{

    QString s("AT+COLP=1");
    QByteArray b;
    b.append(s);
    b.append(0x0d);
    ::write(m_fd,b.data(),b.length());
    char buffer4[100];
    memset(buffer4,0,sizeof(buffer4));
    read(m_fd,buffer4,50);
    printf("%s ~\n",buffer4);
   qDebug()<<"AT+COLP=1 e";
    mySleep(2000);
    QString s1("ATD");
    QByteArray b1;
    b1.append(s1);
     b1.append(number);
      b1.append(";");
    b1.append(0x0d);
    ::write(m_fd,b1.data(),b1.length());
    char buffer3[100];
    memset(buffer3,0,sizeof(buffer3));
    read(m_fd,buffer3,50);
    printf("%s ~\n",buffer3);
  //if(!checkResult("COLP")) return -1;
}
int sendmsg(QString number)
{
       QString s("AT+CMGF=0");
       QByteArray b;
       b.append(s);
       b.append(0x0d);
       ::write(m_fd,b,b.length());
       if(!checkResult("OK")) return -1;


   QString s1("AT+CMGS=31");
   QByteArray b1;
   b1.append(s1);
   b1.append(0x0d);
   ::write(m_fd,b1,b1.length());
   mySleep(100);
   char buffer4[100];
      memset(buffer4,0,sizeof(buffer4));
      read(m_fd,buffer4,50);
      printf("%s ~\n",buffer4);

   QString s2("0011000D9168");
   s2.append(number);
   s2.append("0008A0105BB667095F025E388BF7901F56DEFF01");
   QByteArray b2;
   b2.append(s2);
   ::write(m_fd,b2,b2.length());
   mySleep(100);
   char buffer3[100];
      memset(buffer3,0,sizeof(buffer3));
      read(m_fd,buffer3,50);
      printf("%s ~\n",buffer3);

   QString s3("0xla");
   QByteArray b3;
   b3.append(s3);
   b3.append(0x1a);
   ::write(m_fd,b3,b3.length());
   mySleep(300);
  if(!checkResult("OK")) return -1;
    return 0;
}

int sendpicture(QString picture,QString number)
{


    qint64 size; //图片短信
    QFileInfo info(picture);
    size=info.size();
    int block=256;

    int ii;
//    for(ii=0;ii<5;ii++)
//    {
//        QString s("ATI");
//        QByteArray b;
//        b.append(s.toLatin1());
//        b.append(0x0d);
//        ::write(m_fd,b,b.length());
//        if(checkResult("OK"))break;
//    }
//    if(ii==5)
//    {
//        qDebug()<<"ATI error1";
//        return -1;
//    }

    for(ii=0;ii<3;ii++)
    {
    QString s1("AT+CSQ");
    QByteArray b1;
    b1.append(s1.toLatin1());
    b1.append(0x0d);
    ::write(m_fd,b1,b1.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"AT+CSQ error1";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s2("AT+COPS?");
    QByteArray b2;
    b2.append(s2.toLatin1());
    b2.append(0x0d);
    ::write(m_fd,b2,b2.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"AT+COPS? error1";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s3("at+cmmscurl=\"mmsc.monterner.com\"");
    QByteArray b3;
    b3.append(s3.toLatin1());
    b3.append(0x0d);
    ::write(m_fd,b3,b3.length());
    if(checkResult("OK"))break;
     }
    if(ii==3)
    {
        qDebug()<<"at+cmmscurl=\"mmsc.monterner.com\"";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s4("at+cmmsnetcfg=1,\"cmwap\"");
    QByteArray b4;
    b4.append(s4.toLatin1());
    b4.append(0x0d);
    ::write(m_fd,b4,b4.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmsnetcfg=1,\"cmwap\"";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s5("at+cmmsproto=1,\"10.0.0.172\",80");
    QByteArray b5;
    b5.append(s5.toLatin1());
    b5.append(0x0d);
    ::write(m_fd,b5,b5.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmsproto=1,\"10.0.0.172\",80";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s6("at+cmmssendcfg=6,3,0,0,2,4");
    QByteArray b6;
    b6.append(s6.toLatin1());
    b6.append(0x0d);
    ::write(m_fd,b6,b6.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmssendcfg=6,3,0,0,2,4";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s7("AT+CMMSEDIT=1");
    QByteArray b7;
    b7.append(s7.toLatin1());
    b7.append(0x0d);
    ::write(m_fd,b7,b7.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"AT+CMMSEDIT=1";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
     QString a;
     a.setNum(size);
     QString s15("at+cmmsdown=\"pic\",");
     s15.append(a);
     s15.append(",50000");
    QByteArray b15;
    b15.append(s15.toLatin1());
    b15.append(0x0d);
    ::write(m_fd,b15,b15.length());
    if(checkResult("CONNECT"))break;
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmsdown=\"pic\",";
        return -1;
    }

    QFile file(picture);
    QByteArray baData;
    if(file.open(QIODevice::ReadOnly))
    {
     baData=file.readAll();
    }
    char * buf;
    buf=baData.data();
     for(int i=0;i<(size/block);i++)
      {
     ::write(m_fd,&buf[i*block],block);

      }
     int i=size/block;
     int i1=size%block;
     ::write(m_fd,&buf[i*block],i1);
     if(!checkResult("OK"))return -1;


    for(ii=0;ii<3;ii++)
    {
    QString s8("at+cmmsdown=\"title\",4,5000");
    QByteArray b8;
    b8.append(s8.toLatin1());
    b8.append(0x0d);
    ::write(m_fd,b8,b8.length());
    if(checkResult("CONNECT"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmsdown=\"title\",4,5000";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s16("home");
    QByteArray b16;
    b16.append(s16.toLatin1());
    b16.append(0x0d);
    ::write(m_fd,b16,b16.length());
    if(checkResult("OK"))break;
   }
    if(ii==3)
    {
        qDebug()<<"home";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s9("at+cmmsdown=\"text\",9,5000");
    QByteArray b9;
    b9.append(s9.toLatin1());
    b9.append(0x0d);
    ::write(m_fd,b9,b9.length());
    if(checkResult("CONNECT"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmsdown=\"text\",9,5000";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s10("dangerous");
    QByteArray b10;
    b10.append(s10.toLatin1());
    b10.append(0x0d);
    ::write(m_fd,b10,b10.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"dangerous";
        return -1;
    }

    QString s17("at+cmmsrecp=\"");
    s17.append(number);
    s17.append("\"");
    QByteArray b17;
    b17.append(s17.toLatin1());
    b17.append(0x0d);
    ::write(m_fd,b17,b17.length());
    if(!checkResult("OK"))return -1;


    for(ii=0;ii<3;ii++)
    {
    QString s12("at+cmmsview");
    QByteArray b12;
    b12.append(s12.toLatin1());
    b12.append(0x0d);
    ::write(m_fd,b12,b12.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmsview";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s13("at+cmmssend");
    QByteArray b13;
    b13.append(s13.toLatin1());
    b13.append(0x0d);
    ::write(m_fd,b13,b13.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"at+cmmssend";
        return -1;
    }
    for(ii=0;ii<3;ii++)
    {
    QString s14("AT+CMMSEDIT=0");
    QByteArray b14;
    b14.append(s14.toLatin1());
    b14.append(0x0d);
    ::write(m_fd,b14,b14.length());
    if(checkResult("OK"))break;
    }
    if(ii==3)
    {
        qDebug()<<"AT+CMMSEDIT=0";
        return -1;
    }
//    ::close(m_fd);
//    m_fd=-1;


    return 0;
}

QList<QString> list; //保存手机号码
QList<QString> list1;//两位一反手机号码
Gsm::Gsm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gsm)
{
    ui->setupUi(this);
     qDebug()<<"gsm form open!";
      m_fd=openSerialPort3();
      if(m_fd<0)
      {
        qDebug()<<"open serial fail!";
      }else
      {
           qDebug()<<"open serial succeed";
      }
}

Gsm::~Gsm()
{
    delete ui;
     qDebug()<<"gsm form close!";
     if(m_fd>0){
         ::close(m_fd);
         m_fd=-1;
     }
}

void Gsm::on_pushButton_clicked()  //发送短信
{
    for (int a = 0; a < list1.size(); ++a) {
        ui->pushButton->setText("发送中");
        sendmsg(list1[a]);
        ui->pushButton->setText("发送短信");
     }
}

void Gsm::on_pushButton_2_clicked()  //发送彩信
{   QString picture=ui->lineEdit_2->text();
    for (int a = 0; a < list1.size(); ++a) {
        ui->pushButton_2->setText("发送中");
        sendpicture(picture,list[a]);
        ui->pushButton_2->setText("发送彩信");
     }
}

void Gsm::on_pushBtn_1_clicked()
{   QString test;
    test=ui->lineEdit->text();
    test.append("1");
    ui->lineEdit->setText(test);

}

void Gsm::on_pushBtn_2_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("2");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_3_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("3");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_4_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("4");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_5_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("5");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_6_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("6");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_7_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("7");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_8_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("8");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_9_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("9");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_0_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    test.append("0");
    ui->lineEdit->setText(test);
}

void Gsm::on_pushBtn_del_clicked()
{
    QString test;
    char *date;
    int lth,i;
    test=ui->lineEdit->text();
     date=test.toLatin1().data();
      lth=test.size();
  char butten[lth];
    for(i=0;i<lth-1;i++)
    {
        butten[i]=*date;
        date++;
    }
    butten[lth-1]=0;
    ui->lineEdit->setText(butten);
}

void Gsm::on_pushBtn_display_clicked()
{
    ui->textBrowser->clear();
    for (int a = 0; a < list.size(); ++a)
    {
        ui->textBrowser->insertPlainText(list[a]+"\r");

    }
}

void Gsm::on_pushBtn_delbind_clicked()
{
  list1.removeLast();
  list.removeLast();
}

void Gsm::on_pushBtn_bind_clicked()
{ QString test;
  test=ui->lineEdit->text();
  list.append(test);
  test.append("F");
  QChar* tmp1,*tmp2;
  QChar tmp;
  QChar* data=test.data();
  while (!data->isNull()) {
      tmp1=data;
      tmp2=++data;
      tmp=*tmp1;
      *tmp1=*tmp2;
      *tmp2=tmp;
      ++data;
   }
  list1.append(test);


}

void Gsm::on_pushBtn_file_clicked()  //整合是去掉
{
    QString s = QFileDialog::getOpenFileName(
        this, "open file dialog",
        "/",
        "files (*)");

    ui->lineEdit_2->setText( s.toAscii() );
}

void Gsm::on_pushButton_3_clicked()
{
    QString test;
    test=ui->lineEdit->text();
    dial(test);
}
