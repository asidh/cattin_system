#include "change_food_price.h"
#include "ui_change_food_price.h"

change_food_price::change_food_price(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_food_price)
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

change_food_price::~change_food_price()
{
    delete ui;
}

void change_food_price::on_confirmBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    QString number = ui->num_Exit->text();//菜名
    QString price = ui->price_Exit->text();//价格

    std::string s1 = number.toStdString();
    std::string s2 = price.toStdString();

    QString temp=QString::fromUtf8("select 菜名 from 菜单 where 序号 ='%1'").arg(number);
    query.exec(temp);
    query.next();
    if(query.value("菜名").toString() ==  "\0")
    {
        QMessageBox::warning(this,"提示","菜品不存在!请重新输入!");
    }
    else
    {
        sprintf(str,"update  菜单 set 价格 = '%s' where 序号 = '%s'",s2.c_str(),s1.c_str());
        query.exec(str);
         //qDebug()<<str;
         temp=QString::fromUtf8("select 价格 from 菜单 where 序号 ='%1'").arg(number);
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

void change_food_price::on_cancelBt_clicked()
{
    close();
}
