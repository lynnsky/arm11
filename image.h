#ifndef IMAGE_H
#define IMAGE_H

#include <QDialog>

namespace Ui {
    class Image;
}

class Image : public QDialog
{
    Q_OBJECT

public:
    explicit Image(QWidget *parent = 0);
    ~Image();

private:
    Ui::Image *ui;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();
};

#endif // IMAGE_H
