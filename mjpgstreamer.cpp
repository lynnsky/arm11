#include "mjpgstreamer.h"
#include "ui_mjpgstreamer.h"
#include <QProcess>
#include <QDebug>
QProcess *proc_usb;
extern void mySleep(uint ms);

mjpgStreamer::mjpgStreamer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mjpgStreamer)
{
    ui->setupUi(this);
    proc_usb=new QProcess(this);
   connect(proc_usb,SIGNAL(readyReadStandardOutput()),this,SLOT(readFromStdOut()));
}

mjpgStreamer::~mjpgStreamer()
{
    delete ui;
}

void mjpgStreamer::readFromStdOut()
{
    QString s=QString(proc_usb->readAllStandardOutput());
    qDebug()<<s;
    ui->list->insertPlainText(s);
}

void mjpgStreamer::on_pushButton_2_clicked()
{

         proc_usb->start("ls");
          mySleep(200);

    proc_usb->start("/mjpg-streamer/start_uvc_yuv.sh");
    ui->list->insertPlainText("已打开");
}

void mjpgStreamer::on_pushButton_clicked()
{

      proc_usb->execute("pkill mjpg_streamer");
      ui->list->insertPlainText("已关闭");

}
void mjpgStreamer::open_mjpgstreamer()
{

 on_pushButton_2_clicked();
}

void mjpgStreamer::close_mjpgstreamer()
{
    on_pushButton_clicked();

}
