#include "add_user.h"
#include "ui_add_user.h"
#include<QComboBox>
#include<QDebug>

add_user::add_user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_user)
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

//析构函数，当添加用户窗口关闭后释放资源
add_user::~add_user()
{
    delete ui;
}

//取消按钮
void add_user::on_cancelBt_clicked()
{
    close();
}


//确认按钮
void add_user::on_configureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];
    QString name = ui->adminEdit->text();//用户名
    QString pwm = ui->pwdEdit->text();//密码
    QString limit = ui->comboBox->currentText();//权限

    std::string s1 = name.toStdString();
    std::string s2 = pwm.toStdString();
    std::string s3 = limit.toStdString();

    QString temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
    query.exec(temp);
    query.next();
    if(query.value("密码").toString() !=  "\0")
    {
        QMessageBox qm(this);
        qm.setText(QStringLiteral("该用户已被注册!\n请重新输入!"));
        qm.move(this->geometry().center());
        qm.exec();
    }
    else
    {
        sprintf(str,"insert into 用户 values('%s','%s','%s')",s1.c_str(),s2.c_str(),s3.c_str());
        query.exec(str);

         temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
         query.exec(temp);
          query.next();
          if(query.value("密码").toString() == pwm)
          {
              QMessageBox::warning(this,"提示","添加成功!");
              close();
          }
          else
          {
              QMessageBox::warning(this,"提示","添加失败!");
          }

    }

}






