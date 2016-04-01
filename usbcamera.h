#ifndef USBCAMERA_H
#define USBCAMERA_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <QImage>
#include <QPixmap>
namespace Ui {
    class Usbcamera;
}

class Usbcamera : public QWidget
{
    Q_OBJECT

public:
    explicit Usbcamera(QWidget *parent = 0);
    ~Usbcamera();
    void video();
    void takepicture();
private slots:
    void on_btnQuit_clicked();
    void on_btnVideo_clicked();
    void on_btnOpen_clicked();
    void showMe();
    void camara_quit();
    void on_pushButton_clicked();

signals:
    void quit_signal();
    void close_signal();
    void signal2show();
    void signal2hide();

private:
    Ui::Usbcamera *ui;
    QTimer *timer;
protected:
    void paintEvent(QPaintEvent *);
};

#endif // USBCAMERA_H
