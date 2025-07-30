#include "change_drink_price.h"
#include "ui_change_drink_price.h"

change_drink_price::change_drink_price(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_drink_price)
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

change_drink_price::~change_drink_price()
{
    delete ui;
}

void change_drink_price::on_configureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    QString number = ui->drinknum_Edit->text();//饮品名
    QString price = ui->drinkprice_Edit->text();//价格

    std::string s1 = number.toStdString();
    std::string s2 = price.toStdString();

    QString temp=QString::fromUtf8("select 饮品名 from 饮品 where 序号 ='%1'").arg(number);
    query.exec(temp);
    query.next();
    if(query.value("饮品名").toString() ==  "\0")
    {
        QMessageBox::warning(this,"提示","饮品不存在!请重新输入!");
    }
    else
    {
        sprintf(str,"update  饮品 set 价格 = '%s' where 序号 = '%s'",s2.c_str(),s1.c_str());
        query.exec(str);
         //qDebug()<<str;
         temp=QString::fromUtf8("select 价格 from 饮品 where 序号 ='%1'").arg(number);
         query.exec(temp);
          query.next();
          if(query.value("价格").toString() == price)
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

void change_drink_price::on_cancelBt_clicked()
{
    close();
}
