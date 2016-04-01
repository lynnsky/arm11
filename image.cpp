#include "image.h"
#include "ui_image.h"
#include <QFileDialog>
extern void mySleep(uint ms);
Image::Image(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Image)
{
    ui->setupUi(this);
}

Image::~Image()
{
    delete ui;
}

void Image::on_pushButton_clicked()
{
    QFileDialog dialog;
    dialog.autoFillBackground();
    QString s = dialog.getExistingDirectory(
                        this,tr("Open Directory"),
                         "/",
                QFileDialog::ShowDirsOnly);

    ui->lineEdit->setText( s.toAscii() );

    int i=1;
  while (i<101)
  {

    QPixmap *pixmap;
    QString picname=ui->lineEdit->text();
    picname.append("/");
    QString b;
    b.setNum(i);
    i++;
    picname.append(b);
    picname.append(".jpg");
    pixmap=new QPixmap(picname);
    ui->label->setPixmap(*pixmap);
    mySleep(60);
  }
}

void Image::on_pushButton_2_clicked()
{
    int i=1;
  while (i<101)
  {

    QPixmap *pixmap;
    QString picname=ui->lineEdit->text();
    picname.append("/");
    QString b;
    b.setNum(i);
    i++;
    picname.append(b);
    picname.append(".jpg");
    pixmap=new QPixmap(picname);
    ui->label->setPixmap(*pixmap);
    mySleep(60);
  }
}

void Image::on_pushButton_3_clicked()
{
    QString s = QFileDialog::getOpenFileName(
        this, "open file dialog",
        "/",
        "files (*)");

    ui->lineEdit_2->setText( s.toAscii() );
    QString picname=ui->lineEdit_2->text();
    QPixmap *pixmap;
    pixmap=new QPixmap(picname);
    ui->label->setPixmap(*pixmap);
}

void Image::on_pushButton_4_clicked()
{
    QString picname=ui->lineEdit_2->text();
    QPixmap *pixmap;
    pixmap=new QPixmap(picname);
    ui->label->setPixmap(*pixmap);
}


