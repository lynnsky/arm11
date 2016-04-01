#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include  "gsm.h"
#include  "mjpgstreamer.h"
#include  "usbcamera.h"
#include  "image.h"
#include  "calendar.h"
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void video();

private:
    Ui::MainWindow *ui;
    Usbcamera usbcamera;
    Gsm gsm;
    Image image;
    mjpgStreamer mjpgstreamer;
    Calendar calendar;
private slots:
    void on_action_triggered();
    void on_imgageButton_clicked();
    void on_gsmButton_clicked();
    void on_usbcameraButton_clicked();
    void on_videoButton_clicked();
    void on_image_triggered();
    void on_sendmessage_triggered();
    void on_video_triggered();
    void on_USBcamera_triggered();
    void buttonClicked();
};

#endif // MAINWINDOW_H
