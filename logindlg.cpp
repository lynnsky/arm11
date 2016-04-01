#include "logindlg.h"
#include "ui_logindlg.h"
#include <QtGui> //如果不加这个头文件，QMessageBox类不可用。

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDlg)
{
    ui->setupUi(this);
    ui->pwdlineEdit->setEchoMode(QLineEdit::Password);//构造函数里，添上初始化语句，使密码显示为小黑点
}

loginDlg::~loginDlg()
{
    delete ui;
}

void loginDlg::on_loginBtn_clicked()
{
    if(ui->usrlineEdit->text().trimmed()==tr("")&&ui->pwdlineEdit->text()==tr(""))////移除字符串开头和结尾的空白字符,判断用户名和密码是否正确
        accept();     //密码正确使这个对话框关闭并发出 Accepted 信号
    else{
      QMessageBox::warning(this,tr("Warning"),tr("user name or password error!"),QMessageBox::Yes);//如果不正确，弹出警告对话框
      ui->usrlineEdit->clear();//用户名清空
      ui->pwdlineEdit->clear();//密码框清空
      ui->usrlineEdit->setFocus();//光标自动跳转到用户名输入框
   }
}
