#ifndef CALENDAR_H
#define CALENDAR_H

#include <QDialog>

namespace Ui {
    class Calendar;
}

class Calendar : public QDialog
{
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = 0);
    ~Calendar();

private:
    Ui::Calendar *ui;

private slots:
    void timerUpDate();
};

#endif // CALENDAR_H
