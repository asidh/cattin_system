#include "change_pwd.h"
#include "ui_change_pwd.h"
#include <QDesktopWidget>

change_pwd::change_pwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_pwd)
{
    ui->setupUi(this);

    //连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); //添加数据库
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("990709");
    db.setPort(3306);
    db.setDatabaseName("Order");

     if(!db.open())
     {
        QMessageBox::warning(this,"提示","无法连接数据库");
     }
}

change_pwd::~change_pwd()
{
    delete ui;
}

void change_pwd::on_configureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    QString name = ui->userEdit->text();//用户名
    QString pwd = ui->oldpwd_Edit->text();//旧密码
    QString new_pw = ui->newpwd_Edit->text();//新密码

    std::string s1 = name.toStdString();
    std::string s3 = new_pw.toStdString();

    QString temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
    query.exec(temp);
    query.next();
    if(query.value("密码").toString() != pwd)
    {
        QMessageBox::warning(this,"提示","用户名或密码错误!");
    }
    else
    {
        sprintf(str,"update  用户 set 密码 = '%s' where 用户名 = '%s'",s3.c_str(),s1.c_str());
        query.exec(str);
         temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
         query.exec(temp);
          query.next();
          if(query.value("密码").toString() == new_pw)
          {
              QMessageBox::warning(this,"提示","修改成功!");
              close();
          }
          else
          {
              QMessageBox::warning(this,"提示","修改失败!");
          }

    }
}

void change_pwd::on_cancelBt_clicked()
{
    close();
}
