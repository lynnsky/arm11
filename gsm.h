#ifndef GSM_H
#define GSM_H

#include <QDialog>

namespace Ui {
    class Gsm;
}

class Gsm : public QDialog
{
    Q_OBJECT

public:
    explicit Gsm(QWidget *parent = 0);
    ~Gsm();

private:
    Ui::Gsm *ui;
private slots:
    void on_pushButton_clicked();  //整合是去掉

    void on_pushBtn_1_clicked();

    void on_pushBtn_2_clicked();

    void on_pushBtn_3_clicked();

    void on_pushBtn_4_clicked();

    void on_pushBtn_5_clicked();

    void on_pushBtn_6_clicked();

    void on_pushBtn_7_clicked();

    void on_pushBtn_8_clicked();

    void on_pushBtn_9_clicked();

    void on_pushBtn_0_clicked();

    void on_pushBtn_del_clicked();

    void on_pushBtn_display_clicked();

    void on_pushBtn_delbind_clicked();

    void on_pushBtn_bind_clicked();

    void on_pushButton_2_clicked();  //整合是去掉

    void on_pushBtn_file_clicked(); //整合是去掉

    void on_pushButton_3_clicked();
};

#endif // GSM_H
