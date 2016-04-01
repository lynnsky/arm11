#ifndef MJPGSTREAMER_H
#define MJPGSTREAMER_H

#include <QDialog>

namespace Ui {
    class mjpgStreamer;
}

class mjpgStreamer : public QDialog
{
    Q_OBJECT

public:
    explicit mjpgStreamer(QWidget *parent = 0);
    ~mjpgStreamer();
    void open_mjpgstreamer();
    void close_mjpgstreamer();
private:
    Ui::mjpgStreamer *ui;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
void readFromStdOut();

};

#endif // MJPGSTREAMER_H
