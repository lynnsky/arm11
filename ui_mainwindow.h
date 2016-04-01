/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jun 9 15:09:51 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *USBcamera;
    QAction *video;
    QAction *sendmessage;
    QAction *image;
    QAction *action;
    QWidget *centralWidget;
    QPushButton *videoButton;
    QPushButton *gsmButton;
    QPushButton *usbcameraButton;
    QPushButton *imgageButton;
    QLabel *label;
    QLabel *label_6;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 420);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        USBcamera = new QAction(MainWindow);
        USBcamera->setObjectName(QString::fromUtf8("USBcamera"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/\346\221\204\345\203\217\345\244\264.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        USBcamera->setIcon(icon);
        video = new QAction(MainWindow);
        video->setObjectName(QString::fromUtf8("video"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/images/\347\233\221\346\216\247.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        video->setIcon(icon1);
        sendmessage = new QAction(MainWindow);
        sendmessage->setObjectName(QString::fromUtf8("sendmessage"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/images/\347\237\255\344\277\241.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        sendmessage->setIcon(icon2);
        image = new QAction(MainWindow);
        image->setObjectName(QString::fromUtf8("image"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/images/\345\233\276\347\211\207.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        image->setIcon(icon3);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/images/0.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        videoButton = new QPushButton(centralWidget);
        videoButton->setObjectName(QString::fromUtf8("videoButton"));
        videoButton->setGeometry(QRect(10, 40, 131, 131));
        videoButton->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/icon/images/\347\233\221\346\216\247.jpg);"));
        gsmButton = new QPushButton(centralWidget);
        gsmButton->setObjectName(QString::fromUtf8("gsmButton"));
        gsmButton->setGeometry(QRect(400, 10, 231, 151));
        gsmButton->setAutoFillBackground(false);
        gsmButton->setStyleSheet(QString::fromUtf8("background-image: url(:/icon/images/\347\237\255\344\277\241.jpg);"));
        usbcameraButton = new QPushButton(centralWidget);
        usbcameraButton->setObjectName(QString::fromUtf8("usbcameraButton"));
        usbcameraButton->setGeometry(QRect(180, 150, 177, 177));
        usbcameraButton->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/icon/images/\346\221\204\345\203\217\345\244\264.jpg);"));
        imgageButton = new QPushButton(centralWidget);
        imgageButton->setObjectName(QString::fromUtf8("imgageButton"));
        imgageButton->setGeometry(QRect(530, 230, 61, 61));
        imgageButton->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/icon/images/\345\233\276\347\211\207.jpg);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 336, 171, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(650, 30, 121, 111));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/\346\261\237\345\215\227\345\244\247\345\255\246.jpg")));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(USBcamera);
        mainToolBar->addAction(video);
        mainToolBar->addAction(sendmessage);
        mainToolBar->addAction(image);
        mainToolBar->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        USBcamera->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        USBcamera->setToolTip(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        video->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\347\233\221\346\216\247", 0, QApplication::UnicodeUTF8));
        sendmessage->setText(QApplication::translate("MainWindow", "\347\237\255\344\277\241", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendmessage->setToolTip(QApplication::translate("MainWindow", "\347\237\255\344\277\241", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        image->setText(QApplication::translate("MainWindow", " \345\233\276\347\211\207\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        image->setToolTip(QApplication::translate("MainWindow", " \345\233\276\347\211\207\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action->setText(QApplication::translate("MainWindow", "\346\227\245\345\216\206", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("MainWindow", "\346\227\245\345\216\206", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        videoButton->setText(QString());
        gsmButton->setText(QString());
        usbcameraButton->setText(QString());
        imgageButton->setText(QString());
        label->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
