/********************************************************************************
** Form generated from reading UI file 'gsm.ui'
**
** Created: Mon Jun 9 15:23:03 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSM_H
#define UI_GSM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gsm
{
public:
    QTabWidget *tabWidget;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushBtn_1;
    QPushButton *pushBtn_3;
    QPushButton *pushBtn_del;
    QPushButton *pushBtn_2;
    QPushButton *pushBtn_4;
    QPushButton *pushBtn_5;
    QPushButton *pushBtn_9;
    QPushButton *pushBtn_8;
    QPushButton *pushBtn_0;
    QLineEdit *lineEdit;
    QPushButton *pushBtn_6;
    QPushButton *pushBtn_bind;
    QPushButton *pushBtn_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QPushButton *pushBtn_display;
    QPushButton *pushBtn_delbind;
    QWidget *tab;
    QLineEdit *lineEdit_2;
    QPushButton *pushBtn_file;

    void setupUi(QDialog *Gsm)
    {
        if (Gsm->objectName().isEmpty())
            Gsm->setObjectName(QString::fromUtf8("Gsm"));
        Gsm->resize(259, 305);
        tabWidget = new QTabWidget(Gsm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 240, 320));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 70, 71, 51));
        pushBtn_1 = new QPushButton(widget);
        pushBtn_1->setObjectName(QString::fromUtf8("pushBtn_1"));
        pushBtn_1->setGeometry(QRect(10, 70, 50, 50));
        pushBtn_1->setAutoRepeatDelay(300);
        pushBtn_3 = new QPushButton(widget);
        pushBtn_3->setObjectName(QString::fromUtf8("pushBtn_3"));
        pushBtn_3->setGeometry(QRect(110, 70, 50, 50));
        pushBtn_3->setAutoRepeatDelay(300);
        pushBtn_del = new QPushButton(widget);
        pushBtn_del->setObjectName(QString::fromUtf8("pushBtn_del"));
        pushBtn_del->setGeometry(QRect(10, 220, 50, 50));
        pushBtn_del->setAutoRepeatDelay(300);
        pushBtn_2 = new QPushButton(widget);
        pushBtn_2->setObjectName(QString::fromUtf8("pushBtn_2"));
        pushBtn_2->setGeometry(QRect(60, 70, 50, 50));
        pushBtn_2->setAutoRepeatDelay(300);
        pushBtn_4 = new QPushButton(widget);
        pushBtn_4->setObjectName(QString::fromUtf8("pushBtn_4"));
        pushBtn_4->setGeometry(QRect(10, 120, 50, 50));
        pushBtn_4->setAutoRepeatDelay(300);
        pushBtn_5 = new QPushButton(widget);
        pushBtn_5->setObjectName(QString::fromUtf8("pushBtn_5"));
        pushBtn_5->setGeometry(QRect(60, 120, 50, 50));
        pushBtn_5->setAutoRepeatDelay(300);
        pushBtn_9 = new QPushButton(widget);
        pushBtn_9->setObjectName(QString::fromUtf8("pushBtn_9"));
        pushBtn_9->setGeometry(QRect(110, 170, 50, 50));
        pushBtn_9->setAutoRepeatDelay(300);
        pushBtn_8 = new QPushButton(widget);
        pushBtn_8->setObjectName(QString::fromUtf8("pushBtn_8"));
        pushBtn_8->setGeometry(QRect(60, 170, 50, 50));
        pushBtn_8->setAutoRepeatDelay(300);
        pushBtn_0 = new QPushButton(widget);
        pushBtn_0->setObjectName(QString::fromUtf8("pushBtn_0"));
        pushBtn_0->setGeometry(QRect(60, 220, 50, 50));
        pushBtn_0->setAutoRepeatDelay(300);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(19, 20, 201, 31));
        pushBtn_6 = new QPushButton(widget);
        pushBtn_6->setObjectName(QString::fromUtf8("pushBtn_6"));
        pushBtn_6->setGeometry(QRect(110, 120, 51, 50));
        pushBtn_6->setAutoRepeatDelay(300);
        pushBtn_bind = new QPushButton(widget);
        pushBtn_bind->setObjectName(QString::fromUtf8("pushBtn_bind"));
        pushBtn_bind->setGeometry(QRect(110, 220, 121, 50));
        pushBtn_bind->setAutoRepeatDelay(300);
        pushBtn_7 = new QPushButton(widget);
        pushBtn_7->setObjectName(QString::fromUtf8("pushBtn_7"));
        pushBtn_7->setGeometry(QRect(10, 170, 50, 50));
        pushBtn_7->setAutoRepeatDelay(300);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 120, 71, 51));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 170, 71, 51));
        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 191, 191));
        pushBtn_display = new QPushButton(tab_2);
        pushBtn_display->setObjectName(QString::fromUtf8("pushBtn_display"));
        pushBtn_display->setGeometry(QRect(30, 230, 81, 31));
        pushBtn_display->setAutoRepeatDelay(300);
        pushBtn_delbind = new QPushButton(tab_2);
        pushBtn_delbind->setObjectName(QString::fromUtf8("pushBtn_delbind"));
        pushBtn_delbind->setGeometry(QRect(120, 230, 81, 31));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 100, 181, 27));
        pushBtn_file = new QPushButton(tab);
        pushBtn_file->setObjectName(QString::fromUtf8("pushBtn_file"));
        pushBtn_file->setGeometry(QRect(140, 150, 71, 27));
        tabWidget->addTab(tab, QString());

        retranslateUi(Gsm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Gsm);
    } // setupUi

    void retranslateUi(QDialog *Gsm)
    {
        Gsm->setWindowTitle(QApplication::translate("Gsm", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Gsm", "\345\217\221\351\200\201\347\237\255\344\277\241", 0, QApplication::UnicodeUTF8));
        pushBtn_1->setText(QApplication::translate("Gsm", "1", 0, QApplication::UnicodeUTF8));
        pushBtn_3->setText(QApplication::translate("Gsm", "3", 0, QApplication::UnicodeUTF8));
        pushBtn_del->setText(QApplication::translate("Gsm", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pushBtn_2->setText(QApplication::translate("Gsm", "2", 0, QApplication::UnicodeUTF8));
        pushBtn_4->setText(QApplication::translate("Gsm", "4", 0, QApplication::UnicodeUTF8));
        pushBtn_5->setText(QApplication::translate("Gsm", "5", 0, QApplication::UnicodeUTF8));
        pushBtn_9->setText(QApplication::translate("Gsm", "9", 0, QApplication::UnicodeUTF8));
        pushBtn_8->setText(QApplication::translate("Gsm", "8", 0, QApplication::UnicodeUTF8));
        pushBtn_0->setText(QApplication::translate("Gsm", "0", 0, QApplication::UnicodeUTF8));
        pushBtn_6->setText(QApplication::translate("Gsm", "6", 0, QApplication::UnicodeUTF8));
        pushBtn_bind->setText(QApplication::translate("Gsm", "\347\273\221\345\256\232", 0, QApplication::UnicodeUTF8));
        pushBtn_7->setText(QApplication::translate("Gsm", "7", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Gsm", "\345\217\221\351\200\201\345\275\251\344\277\241", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Gsm", "\346\213\250\345\217\267", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("Gsm", "\347\273\221\345\256\232", 0, QApplication::UnicodeUTF8));
        pushBtn_display->setText(QApplication::translate("Gsm", "\346\230\276\347\244\272\345\267\262\347\273\221\345\256\232", 0, QApplication::UnicodeUTF8));
        pushBtn_delbind->setText(QApplication::translate("Gsm", "\345\210\240\351\231\244\347\273\221\345\256\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Gsm", "\345\267\262\347\273\221\345\256\232\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        pushBtn_file->setText(QApplication::translate("Gsm", "\346\226\207\344\273\266\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Gsm", "\346\211\223\345\274\200\345\217\221\351\200\201\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gsm: public Ui_Gsm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSM_H
