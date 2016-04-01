/********************************************************************************
** Form generated from reading UI file 'image.ui'
**
** Created: Mon Jun 9 15:09:51 2014
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_H
#define UI_IMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Image
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Image)
    {
        if (Image->objectName().isEmpty())
            Image->setObjectName(QString::fromUtf8("Image"));
        Image->resize(760, 420);
        lineEdit = new QLineEdit(Image);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(121, 40, 131, 27));
        pushButton = new QPushButton(Image);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 73, 85, 27));
        label_3 = new QLabel(Image);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(29, 160, 48, 26));
        QFont font;
        font.setFamily(QString::fromUtf8("Purisa"));
        font.setPointSize(12);
        label_3->setFont(font);
        pushButton_3 = new QPushButton(Image);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 200, 85, 27));
        pushButton_4 = new QPushButton(Image);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 200, 85, 27));
        pushButton_2 = new QPushButton(Image);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(121, 73, 85, 27));
        label = new QLabel(Image);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 320, 240));
        label_2 = new QLabel(Image);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 48, 26));
        label_2->setFont(font);
        lineEdit_2 = new QLineEdit(Image);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 160, 131, 27));

        retranslateUi(Image);

        QMetaObject::connectSlotsByName(Image);
    } // setupUi

    void retranslateUi(QDialog *Image)
    {
        Image->setWindowTitle(QApplication::translate("Image", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Image", "\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Image", "\345\233\276\347\211\207\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Image", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Image", "\346\230\276\347\244\272\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Image", "\351\207\215\346\226\260\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("Image", "\350\247\206\351\242\221\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Image: public Ui_Image {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_H
