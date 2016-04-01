#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSocketNotifier>
#include <fcntl.h>
#include <QDebug>



int button_fd=-1;
QSocketNotifier* button_notifier;
extern int sendmsg(QString number);
extern int sendpicture(QString picture,QString number);
//extern int openSerialPort3();
extern void dial();
extern QList<QString> list;
extern QList<QString> list1;
extern void mySleep(uint ms);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug()<<"mainwindow form open!";
    button_fd = ::open("/dev/buttons", O_RDONLY | O_NONBLOCK);
   button_notifier = new QSocketNotifier(button_fd, QSocketNotifier::Read, this);
    connect (button_notifier, SIGNAL(activated(int)), this, SLOT(buttonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
    button_notifier->deleteLater();
     qDebug()<<"mainwindow form close!";

}

void MainWindow::on_USBcamera_triggered()
{
        usbcamera.show();
}

void MainWindow::on_video_triggered()
{
       mjpgstreamer.show();
}

void MainWindow::on_sendmessage_triggered()
{
      gsm.show();
}

void MainWindow::on_image_triggered()
{
        image.show();

}
void MainWindow::on_action_triggered()
{
       calendar.show();
}

void MainWindow::buttonClicked()
{
    char buffer[8];
    memset(buffer, 0, sizeof buffer);
    ::read(button_fd, buffer, sizeof buffer);
    if (buffer[0]=='1')
    {
//        ui->label->setText("触发1 message");
//        mySleep(1000);
//        for (int a = 0; a < list1.size(); ++a)
//        {
//            if(sendmsg(list1[a])==-1)
//            {
//                   ui->label->setText("短信发送失败");
//            }else{
//                ui->label->setText("短信发送成功");
//            }

//         }
        ui->label->setText("触发1 takepicture");
        usbcamera.takepicture();

        qDebug()<<"触发1  takepicture";

    }
    if (buffer[2]=='1')
    {

        ui->label->setText("触发2 mjpgstreamer");
        mjpgstreamer.open_mjpgstreamer();

    }
    if (buffer[4]=='1')
    {

        ui->label->setText("触发3");


    }
    if (buffer[6]=='1')
    {

        ui->label->setText("触发4 close mjpgstreamer");
      mjpgstreamer.close_mjpgstreamer();

    }
}

void MainWindow::video()
{
    usbcamera.video();
}

void MainWindow::on_videoButton_clicked()
{
       mjpgstreamer.show();
}

void MainWindow::on_usbcameraButton_clicked()
{
    usbcamera.show();
}

void MainWindow::on_gsmButton_clicked()
{
    gsm.show();
}

void MainWindow::on_imgageButton_clicked()
{
    image.show();
}


