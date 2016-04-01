/********************************************************************************
** Form generated from reading UI file 'calendar.ui'
**
** Created: Mon Jun 9 15:09:51 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calendar
{
public:
    QFrame *frame_2;
    QLabel *labell;
    QLabel *label;
    QCalendarWidget *calendarWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *Calendar)
    {
        if (Calendar->objectName().isEmpty())
            Calendar->setObjectName(QString::fromUtf8("Calendar"));
        Calendar->resize(400, 330);
        frame_2 = new QFrame(Calendar);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 270, 391, 51));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        labell = new QLabel(frame_2);
        labell->setObjectName(QString::fromUtf8("labell"));
        labell->setGeometry(QRect(10, 1, 101, 20));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 211, 21));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        calendarWidget = new QCalendarWidget(Calendar);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 0, 391, 271));
        horizontalLayoutWidget = new QWidget(Calendar);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(250, 70, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Calendar);

        QMetaObject::connectSlotsByName(Calendar);
    } // setupUi

    void retranslateUi(QDialog *Calendar)
    {
        Calendar->setWindowTitle(QApplication::translate("Calendar", "Dialog", 0, QApplication::UnicodeUTF8));
        labell->setText(QApplication::translate("Calendar", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Calendar", "0000-00-00 00:00:00 \346\230\237\346\234\237\346\227\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calendar: public Ui_Calendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
