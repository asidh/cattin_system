#include "change_user_root.h"
#include "ui_change_user_root.h"

change_user_root::change_user_root(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_user_root)
{
    ui->setupUi(this);
    //配置数据库信息，连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); //添加数据库
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("990709");
    db.setPort(3306);
    db.setDatabaseName("Order");

    if(!db.open())
    {
       QMessageBox::warning(this,"提示","无法连接数据库");
    }

}

change_user_root::~change_user_root()
{
    delete ui;
}


void change_user_root::on_configureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    QString name = ui->user_Edit->text();//用户名
    QString pw = ui->pwd_Edit->text();//密码
    QString limit = ui->comboBox->currentText();//权限

    std::string s1 = name.toStdString();
    //std::string s2 = pwm.toStdString();
    std::string s3 = limit.toStdString();

    QString temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
    query.exec(temp);
    query.next();
    if(query.value("密码").toString() !=  pw)
    {
        QMessageBox::warning(this,"提示","用户名或密码错误!");
    }
    else
    {
        sprintf(str,"update  用户 set 权限 = '%s' where 用户名 = '%s'",s3.c_str(),s1.c_str());
        query.exec(str);
         //qDebug()<<str;
         temp=QString::fromUtf8("select 权限 from 用户 where 用户名 ='%1'").arg(name);
         query.exec(temp);
          query.next();
          if(query.value("权限").toString() == limit)
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

//取消按钮
void change_user_root::on_cancelBt_clicked()
{
    close();
}
