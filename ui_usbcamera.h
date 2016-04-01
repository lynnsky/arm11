/********************************************************************************
** Form generated from reading UI file 'usbcamera.ui'
**
** Created: Mon Jun 9 15:09:51 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USBCAMERA_H
#define UI_USBCAMERA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Usbcamera
{
public:
    QPushButton *btnOpen;
    QLabel *label_image;
    QPushButton *btnVideo;
    QPushButton *pushButton;
    QPushButton *btnQuit;
    QLabel *label;
    QLabel *labelvideo;

    void setupUi(QWidget *Usbcamera)
    {
        if (Usbcamera->objectName().isEmpty())
            Usbcamera->setObjectName(QString::fromUtf8("Usbcamera"));
        Usbcamera->resize(760, 420);
        btnOpen = new QPushButton(Usbcamera);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setGeometry(QRect(50, 320, 75, 23));
        label_image = new QLabel(Usbcamera);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(380, 30, 320, 240));
        btnVideo = new QPushButton(Usbcamera);
        btnVideo->setObjectName(QString::fromUtf8("btnVideo"));
        btnVideo->setGeometry(QRect(404, 320, 101, 23));
        pushButton = new QPushButton(Usbcamera);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 320, 71, 27));
        btnQuit = new QPushButton(Usbcamera);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(550, 320, 131, 23));
        label = new QLabel(Usbcamera);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 380, 211, 21));
        labelvideo = new QLabel(Usbcamera);
        labelvideo->setObjectName(QString::fromUtf8("labelvideo"));
        labelvideo->setGeometry(QRect(40, 380, 211, 21));

        retranslateUi(Usbcamera);

        QMetaObject::connectSlotsByName(Usbcamera);
    } // setupUi

    void retranslateUi(QWidget *Usbcamera)
    {
        Usbcamera->setWindowTitle(QApplication::translate("Usbcamera", "Form", 0, QApplication::UnicodeUTF8));
        btnOpen->setText(QApplication::translate("Usbcamera", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        label_image->setText(QApplication::translate("Usbcamera", "\346\213\215\346\221\204\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        btnVideo->setText(QApplication::translate("Usbcamera", "\346\213\215\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Usbcamera", "\346\213\215\347\205\247", 0, QApplication::UnicodeUTF8));
        btnQuit->setText(QApplication::translate("Usbcamera", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        labelvideo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Usbcamera: public Ui_Usbcamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USBCAMERA_H
