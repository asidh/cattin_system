#include "change_food_status.h"
#include "ui_change_food_status.h"

change_food_status::change_food_status(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_food_status)
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

change_food_status::~change_food_status()
{
    delete ui;
}

void change_food_status::on_configureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    QString number = ui->foodnum_Edit->text();//菜名
    QString limit = ui->comboBox->currentText();//权限

    std::string s1 = number.toStdString();
    std::string s2 = limit.toStdString();

    QString temp=QString::fromUtf8("select 菜名 from 菜单 where 序号 ='%1'").arg(number);
    query.exec(temp);
    query.next();
    if(query.value("菜名").toString() ==  "\0")
    {
        QMessageBox::warning(this,"提示","菜品不存在!请重新输入!");
    }
    else
    {
        sprintf(str,"update  菜单 set 状态 = '%s' where 序号 = '%s'",s2.c_str(),s1.c_str());
        query.exec(str);
         //qDebug()<<str;
         temp=QString::fromUtf8("select 状态 from 菜单 where 序号 ='%1'").arg(number);
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

void change_food_status::on_cancelBt_clicked()
{
    close();
}
