/********************************************************************************
** Form generated from reading UI file 'mjpgstreamer.ui'
**
** Created: Mon Jun 9 15:09:51 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MJPGSTREAMER_H
#define UI_MJPGSTREAMER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_mjpgStreamer
{
public:
    QTextBrowser *list;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *mjpgStreamer)
    {
        if (mjpgStreamer->objectName().isEmpty())
            mjpgStreamer->setObjectName(QString::fromUtf8("mjpgStreamer"));
        mjpgStreamer->resize(760, 420);
        list = new QTextBrowser(mjpgStreamer);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(80, 110, 521, 271));
        pushButton_2 = new QPushButton(mjpgStreamer);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 10, 98, 27));
        pushButton = new QPushButton(mjpgStreamer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 10, 98, 27));
        label = new QLabel(mjpgStreamer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 711, 31));

        retranslateUi(mjpgStreamer);

        QMetaObject::connectSlotsByName(mjpgStreamer);
    } // setupUi

    void retranslateUi(QDialog *mjpgStreamer)
    {
        mjpgStreamer->setWindowTitle(QApplication::translate("mjpgStreamer", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("mjpgStreamer", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("mjpgStreamer", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mjpgStreamer", "\350\257\267\345\234\250\346\265\217\350\247\210\345\231\250\344\270\212\350\276\223http://192.168.1.230:8080/javascript.html\346\237\245\347\234\213\347\233\221\346\216\247\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mjpgStreamer: public Ui_mjpgStreamer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MJPGSTREAMER_H
