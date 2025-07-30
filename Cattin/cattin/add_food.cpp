#include "add_food.h"
#include "ui_add_food.h"

add_food::add_food(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_food)
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

add_food::~add_food()
{
    delete ui;
}

void add_food::on_configureBt_clicked()
{
    QSqlQuery query(db);
    char str[100];

    bool ret = query.exec("select *from 菜单");//数据库执行语句
     if(!ret)
     {
         QSqlError error = query.lastError();
         QString str = QString("错误信息:%1,%2").arg(error.driverText()).arg(error.databaseText());
         QMessageBox::warning(this,"提示",str);
     }
    int count;//总行数
    while (query.next())   //读取下一行信息
    {
        count = query.value("序号").toInt();
    }
    count++;

    QString name = ui->food_Edit->text();//菜名
    QString price = ui->price_Edit->text();//价格
    QString limit = ui->comboBox->currentText();//状态

    std::string s1 = name.toStdString();
    std::string s2 = price.toStdString();
    std::string s3 = limit.toStdString();

    QString temp=QString::fromUtf8("select 序号 from 菜单 where 菜名 ='%1'").arg(name);
    query.exec(temp);
    query.next();
    if(query.value("序号").toString() !=  "\0")
    {
        QMessageBox::warning(this,"提示","已有该菜品!");
    }
    else
    {
        sprintf(str,"insert into 菜单 values(%d,'%s','%s','%s')",count,s1.c_str(),s2.c_str(),s3.c_str());
        query.exec(str);

        temp=QString::fromUtf8("select 序号 from 菜单 where 菜名 ='%1'").arg(name);
        query.exec(temp);
        query.next();
        if(query.value("序号").toString() != "\0")
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

void add_food::on_cancelBt_clicked()
{
    close();
}
