/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created: Mon Jun 9 15:09:51 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDlg
{
public:
    QFrame *frame;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *usrlineEdit;
    QLineEdit *pwdlineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginBtn;
    QPushButton *extBtn;
    QLabel *label;
    QPushButton *usbcameraButton;
    QLabel *label_6;

    void setupUi(QDialog *loginDlg)
    {
        if (loginDlg->objectName().isEmpty())
            loginDlg->setObjectName(QString::fromUtf8("loginDlg"));
        loginDlg->resize(760, 420);
        frame = new QFrame(loginDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(280, 190, 211, 161));
        frame->setAcceptDrops(false);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 61, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\346\255\243\351\273\221"));
        font.setPointSize(24);
        label_5->setFont(font);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 100, 81, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\277\346\255\243\351\273\221"));
        font1.setPointSize(28);
        label_4->setFont(font1);
        layoutWidget = new QWidget(loginDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 70, 212, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usrlineEdit = new QLineEdit(layoutWidget);
        usrlineEdit->setObjectName(QString::fromUtf8("usrlineEdit"));

        verticalLayout->addWidget(usrlineEdit);

        pwdlineEdit = new QLineEdit(layoutWidget);
        pwdlineEdit->setObjectName(QString::fromUtf8("pwdlineEdit"));

        verticalLayout->addWidget(pwdlineEdit);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loginBtn = new QPushButton(layoutWidget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));

        horizontalLayout_2->addWidget(loginBtn);

        extBtn = new QPushButton(layoutWidget);
        extBtn->setObjectName(QString::fromUtf8("extBtn"));

        horizontalLayout_2->addWidget(extBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        label = new QLabel(loginDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 121, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/\347\233\221\346\216\247.jpg")));
        usbcameraButton = new QPushButton(loginDlg);
        usbcameraButton->setObjectName(QString::fromUtf8("usbcameraButton"));
        usbcameraButton->setGeometry(QRect(550, 210, 177, 177));
        usbcameraButton->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/icon/images/\346\221\204\345\203\217\345\244\264.jpg);"));
        label_6 = new QLabel(loginDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(640, 20, 121, 111));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/\346\261\237\345\215\227\345\244\247\345\255\246.jpg")));

        retranslateUi(loginDlg);
        QObject::connect(extBtn, SIGNAL(clicked()), loginDlg, SLOT(close()));

        QMetaObject::connectSlotsByName(loginDlg);
    } // setupUi

    void retranslateUi(QDialog *loginDlg)
    {
        loginDlg->setWindowTitle(QApplication::translate("loginDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("loginDlg", "\346\257\225\344\270\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("loginDlg", "\350\256\276\350\256\241", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("loginDlg", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("loginDlg", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("loginDlg", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        extBtn->setText(QApplication::translate("loginDlg", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        usbcameraButton->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginDlg: public Ui_loginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
