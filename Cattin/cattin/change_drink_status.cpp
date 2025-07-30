#include "change_drink_status.h"
#include "ui_change_drink_status.h"

change_drink_status::change_drink_status(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_drink_status)
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

change_drink_status::~change_drink_status()
{
    delete ui;
}

void change_drink_status::on_cinfigureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    QString number = ui->number_Edit->text();//饮品名
    QString limit = ui->comboBox->currentText();//权限

    std::string s1 = number.toStdString();
    std::string s2 = limit.toStdString();

    QString temp=QString::fromUtf8("select 饮品名 from 饮品 where 序号 ='%1'").arg(number);
    query.exec(temp);
    query.next();
    if(query.value("饮品名").toString() ==  "\0")
    {
        QMessageBox::warning(this,"提示","饮品不存在!请重新输入!");
    }
    else
    {
        sprintf(str,"update  饮品 set 状态 = '%s' where 序号 = '%s'",s2.c_str(),s1.c_str());
        query.exec(str);
         //qDebug()<<str;
         temp=QString::fromUtf8("select 状态 from 饮品 where 序号 ='%1'").arg(number);
         query.exec(temp);
          query.next();
          if(query.value("状态").toString() == limit)
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

void change_drink_status::on_cancelBt_clicked()
{
    close();
}
