#include <QtGui/QApplication>
#include "mainwindow.h"
#include  "logindlg.h" //包含登入框头文件
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //中文支持

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //支持Tr中文

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    //支持中文文件名显示
     QFont font;
    font.setPointSize(16);
    //实际上是16的字号，但设成16却不行
    font.setFamily(("wenquanyi"));
     font.setBold(false);
    a.setFont(font);
    MainWindow w;
    loginDlg login;   ////建立自己新建的类的对象login
   if(login.exec()==QDialog::Accepted)//利用 Accepted 信号判断loginBtn 是否被按下
   {
     w.show();          //如果被按下，显示主窗口
     return a.exec();   //程序一直执行，直到主窗口关闭
   }
    else return 0;       //如果没被按下，则不会进入主窗口，整个程序结束运行

}
