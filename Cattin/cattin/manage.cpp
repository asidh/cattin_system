#include "manage.h"
#include "ui_manage.h"

manage::manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manage)
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

    Init();//页面初始化
}

manage::~manage()
{
    delete ui;
}

/*
void manage::Init()
{
        QSqlQuery query;

        //======================= 菜单加载 ========================
        bool ret = query.exec("SELECT * FROM 菜单");
        if (!ret)
        {
            QSqlError error = query.lastError();
            QString str = QString("错误信息: %1, %2").arg(error.driverText()).arg(error.databaseText());
            QMessageBox::warning(this, "提示", str);
        }

        MenuVec.clear();  // 每次重新加载前清空，避免重复
        while (query.next())
        {
            MenuInfo menuItem;  // 用结构体对象接收

            menuItem.number = query.value("序号").toString();   // 直接使用 QString
            menuItem.food   = query.value("菜名").toString();   //
            menuItem.price  = query.value("价格").toString();
            menuItem.state  = query.value("状态").toString();

            MenuVec.push_back(menuItem);
        }

        //======================= 饮品加载 ========================
        ret = query.exec("SELECT * FROM 饮品");
        if (!ret)
        {
            QSqlError error = query.lastError();
            QString str = QString("错误信息: %1, %2").arg(error.driverText()).arg(error.databaseText());
            QMessageBox::warning(this, "提示", str);
        }

        DrinkVec.clear();  // 新增饮品容器清空
        while (query.next())
        {
            MenuInfo drinkItem;  // 复用结构体 MenuInfo

            drinkItem.number = query.value("序号").toString();   // 修改：直接用 QString
            drinkItem.food   = query.value("饮品名").toString(); // 修改：字段不同（饮品名）
            drinkItem.price  = query.value("价格").toString();
            drinkItem.state  = query.value("状态").toString();

            DrinkVec.push_back(drinkItem);  // 修改：放入饮品容器
        }

        //======================= 数据打印展示 ========================
        Menu_frint();  // 打印菜单
        user_frint();  // 打印用户
        bill_frint();  // 打印账单

     //   ui->name_Edit->setText(login_user);
     //   ui->time_Edit->setText(login_time);

}
*/
void manage::Init()
{
    QSqlQuery query;
    //获得菜单信息
    bool ret = query.exec("select *from 菜单");//数据库执行语句
    if(!ret)
    {
        QSqlError error = query.lastError();
        QString str = QString("错误信息:%1,%2").arg(error.driverText()).arg(error.databaseText());
        QMessageBox::warning(this,"提示",str);
    }

    MenuVec.clear();
    while (query.next())   //读取下一行信息
    {

        QString str = query.value("序号").toString();
        QString str1 = query.value("菜名").toString();
        QString str2 = query.value("价格").toString();
        QString str3 = query.value("状态").toString();

        char Number[10];
        char food[100];
        char Price[10];
        char State[20];
        QByteArray ba = str.toUtf8();
        memcpy(Number,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str1.toUtf8();
        memcpy(food,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str2.toUtf8();
        memcpy(Price,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str3.toUtf8();
        memcpy(State,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        strcpy(M_head.number,Number);
        strcpy(M_head.food, food);
        strcpy(M_head.price ,Price);
        strcpy(M_head.state , State);
        MenuVec.push_back(M_head);//菜单信息放入容器中
    }

    ret = query.exec("select *from 饮品");//数据库执行语句
    if(!ret)
    {
        QSqlError error = query.lastError();
        QString str = QString("错误信息:%1,%2").arg(error.driverText()).arg(error.databaseText());
        QMessageBox::warning(this,"提示",str);
    }

    DrinkVec.clear();
    while (query.next())   //读取下一行信息
    {

        QString str = query.value("序号").toString();
        QString str1 = query.value("饮品名").toString();
        QString str2 = query.value("价格").toString();
        QString str3 = query.value("状态").toString();

        char Number[10];
        char food[100];
        char Price[10];
        char State[20];
        QByteArray ba = str.toUtf8();
        memcpy(Number,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str1.toUtf8();
        memcpy(food,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str2.toUtf8();
        memcpy(Price,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str3.toUtf8();
        memcpy(State,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        strcpy(M_head.number,Number);
        strcpy(M_head.food, food);
        strcpy(M_head.price ,Price);
        strcpy(M_head.state , State);
        DrinkVec.push_back(M_head);//菜单信息放入容器中
    }

    Menu_frint();//打印菜单
    user_frint();  // 打印用户
    bill_frint();  // 打印账单
}

//提取名字
void manage::getname(QString name)
{
    ui->name_Edit->setText(name);
    //login_user = name;
}

//获取时间
void manage::gettime(QString time)
{
    ui->time_Edit->setText(time);
    //login_time = time;
}

//重新登录
void manage::on_reload_Bt_clicked()
{
    this->hide();
    Widget *child=new Widget();
    child->show();
}

//退出登录
void manage::on_exit_Bt_clicked()
{
    exit(-1);
}

/*************************************************************************/
//用户管理界面界面
//添加用户
void manage::on_add_user_Bt_clicked()
{
    add_user *child=new add_user();
    child->show();
}


//删除操作，先判断是否选中行再操作
void manage::on_del_user_Bt_clicked()
{
    QSqlQuery query(db);
    int currow = ui->user_tableWidget->currentRow();//当前行

    if(currow == -1)
    {
        QMessageBox::warning(this,"提示","请先选中要删除的用户！");
        return ;
    }

    QString name= ui->user_tableWidget->item(currow,0)->text();
    std::string s1 = name.toStdString();

    // 构造 SQL 删除语句
    char str[100];
    sprintf(str,"delete from 用户 where 用户名 = '%s'",s1.c_str());
    query.exec(str);

    // 检查是否删除成功（查询该用户名是否还存在）
    QString temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
    query.exec(temp);
    query.next();

    if(query.value("密码").toString() != "\0")
    {
        QMessageBox::warning(this,"提示","删除失败!");
    }
    else
    {
        ui->user_tableWidget->removeRow(currow);//删除当前行
        QMessageBox::warning(this,"提示","删除成功!");
    }

}

void manage::on_change_pwd_Bt_clicked()
{
    change_pwd *child= new change_pwd();
    child->show();

}

void manage::on_change_root_Bt_clicked()
{
    change_user_root *child=new change_user_root();
    child->show();
}

void manage::on_flush_user_Bt_clicked()
{
    user_frint();
}

void manage::user_frint()
{
     QSqlQuery query(db);
      //打印菜用户信息
     bool ret = query.exec("select *from 用户");//数据库执行语句
      if(!ret)
      {
          QSqlError error = query.lastError();
          QString str = QString("错误信息:%1,%2").arg(error.driverText()).arg(error.databaseText());
          QMessageBox::warning(this,"提示",str);
      }

      //tablewifget操作
      QStringList headtext;
      headtext<<"用户名"<<"密码"<<"权限";

      ui->user_tableWidget->setColumnCount(headtext.count());//列表设置为和headtext相等
      ui->user_tableWidget->setHorizontalHeaderLabels(headtext);//插入表头

      ui->user_tableWidget->setRowCount(0);
      while (query.next())   //读取下一行信息
      {
          int rowcount = ui->user_tableWidget->rowCount();

          ui->user_tableWidget->insertRow(rowcount);


          QTableWidgetItem *column = new QTableWidgetItem(query.value("用户名").toString());
          QTableWidgetItem *column1 = new QTableWidgetItem(query.value("密码").toString());
          QTableWidgetItem *column2 = new QTableWidgetItem(query.value("权限").toString());

          ui->user_tableWidget->setItem(rowcount,0,column);
          ui->user_tableWidget->setItem(rowcount,1,column1);
          ui->user_tableWidget->setItem(rowcount,2,column2);
      }
}
/*************************************************************************/

/*************************************************************************/
//账单界面槽函数
//查询账单
void manage::on_about_bill_Bt_clicked()
{
    aboutbill *child=new aboutbill();
    child->show();
}

//账单刷新
void manage::on_flush_bill_Bt_clicked()
{
    bill_frint();
}

void manage::bill_frint()
{
    QSqlQuery query(db);
      //打印账单信息
     bool ret = query.exec("select *from 账单");//数据库执行语句
      if(!ret)
      {
          QSqlError error = query.lastError();
          QString str = QString("错误信息:%1,%2").arg(error.driverText()).arg(error.databaseText());
          QMessageBox::warning(this,"提示",str);
      }

      //tablewifget操作
      QStringList headtext;
      headtext<<"交易号"<<"时间"<<"桌号"<<"消费额"<<"收银人";

      ui->bill_tableWidget->setColumnCount(headtext.count());//列表设置为和headtext相等
      ui->bill_tableWidget->setHorizontalHeaderLabels(headtext);//插入表头

      ui->bill_tableWidget->setRowCount(0);
      while (query.next())   //读取下一行信息
      {
          int rowcount = ui->bill_tableWidget->rowCount();

          ui->bill_tableWidget->insertRow(rowcount);

          QTableWidgetItem *column = new QTableWidgetItem(query.value("交易号").toString());
          QTableWidgetItem *column1 = new QTableWidgetItem(query.value("时间").toString());
          QTableWidgetItem *column2 = new QTableWidgetItem(query.value("桌号").toString());
          QTableWidgetItem *column3 = new QTableWidgetItem(query.value("消费额").toString());
          QTableWidgetItem *column4 = new QTableWidgetItem(query.value("收银人").toString());

          ui->bill_tableWidget->setItem(rowcount,0,column);
          ui->bill_tableWidget->setItem(rowcount,1,column1);
          ui->bill_tableWidget->setItem(rowcount,2,column2);
          ui->bill_tableWidget->setItem(rowcount,3,column3);
          ui->bill_tableWidget->setItem(rowcount,4,column4);
      }
}

/*************************************************************************/
//菜品管理界面槽函数
void manage::on_add_food_Bt_clicked()
{
    add_food *child=new add_food();
    child->show();

}

//删除菜品
void manage::on_del_food_Bt_clicked()
{
    QSqlQuery query(db);
    int currow = ui->food_tableWidget->currentRow();//当前行

    if(currow == -1)
    {
        QMessageBox::warning(this,"提示","操作有误!");
        return;
    }

    QString number= ui->food_tableWidget->item(currow,0)->text();
    std::string s1 = number.toStdString();

    char str[100];
    sprintf(str,"delete from 菜单 where 序号 = '%s'",s1.c_str());
    query.exec(str);
    QString temp=QString::fromUtf8("select 菜名 from 菜单 where 序号 ='%1'").arg(number);
    query.exec(temp);
    query.next();
    if(query.value("菜名").toString() != "\0")
    {
        QMessageBox::warning(this,"提示","删除失败!");
    }
    else
    {
        ui->food_tableWidget->removeRow(currow);//删除当前行
        QMessageBox::warning(this,"提示","删除成功!");
    }
}

void manage::on_change_food_Bt_clicked()
{
    change_food_price *child=new change_food_price();
    child->show();
}

void manage::on_status_food_Bt_clicked()
{
    change_food_status *child=new change_food_status();
    child->show();
}

void manage::on_flush_food_Bt_clicked()
{
   Init(); //让数据库新加的菜单加载到结构体
   Menu_frint();
}


void manage::Menu_frint()
{
    //===== 设置菜单表头 =====
    QStringList headtext;
    headtext << "序号" << "餐名" << "价格" << "状态";
    ui->food_tableWidget->setColumnCount(headtext.count());
    ui->food_tableWidget->setHorizontalHeaderLabels(headtext);
    ui->food_tableWidget->setRowCount(0);

    //===== 设置饮品表头 =====
    QStringList headtext1;
    headtext1 << "序号" << "饮品名" << "价格" << "状态";
    ui->drink_tableWidget->setColumnCount(headtext1.count());
    ui->drink_tableWidget->setHorizontalHeaderLabels(headtext1);
    ui->drink_tableWidget->setRowCount(0);

    //===== 加载菜单数据 =====
    for (int j = 0; j < MenuVec.size(); ++j)
    {
        int rowcount = ui->food_tableWidget->rowCount();
        ui->food_tableWidget->insertRow(rowcount);
        ui->food_tableWidget->setItem(rowcount, 0, new QTableWidgetItem(MenuVec[j].number));
        ui->food_tableWidget->setItem(rowcount, 1, new QTableWidgetItem(MenuVec[j].food));
        ui->food_tableWidget->setItem(rowcount, 2, new QTableWidgetItem(MenuVec[j].price));
        ui->food_tableWidget->setItem(rowcount, 3, new QTableWidgetItem(MenuVec[j].state));
    }

    //===== 加载饮品数据 =====
    for (int j = 0; j < DrinkVec.size(); ++j)
    {
        int rowcount = ui->drink_tableWidget->rowCount();
        ui->drink_tableWidget->insertRow(rowcount);
        ui->drink_tableWidget->setItem(rowcount, 0, new QTableWidgetItem(DrinkVec[j].number));
        ui->drink_tableWidget->setItem(rowcount, 1, new QTableWidgetItem(DrinkVec[j].food));
        ui->drink_tableWidget->setItem(rowcount, 2, new QTableWidgetItem(DrinkVec[j].price));
        ui->drink_tableWidget->setItem(rowcount, 3, new QTableWidgetItem(DrinkVec[j].state));
    }
}

/*************************************************************************/

/*************************************************************************/
//饮品管理

void manage::on_add_drink_Bt_clicked()
{
    add_drink *child=new add_drink();
    child->show();
}

void manage::on_del_drink_Bt_clicked()
{
    QSqlQuery query(db);

    int currow = ui->drink_tableWidget->currentRow();//当前行


    if(currow == -1)
    {
        QMessageBox::warning(this,"提示","操作有误!");
        return;
    }

    QString number= ui->drink_tableWidget->item(currow,0)->text();
    std::string s1 = number.toStdString();

    char str[100];
    sprintf(str,"delete from 饮品 where 序号 = '%s'",s1.c_str());

    query.exec(str);

    QString temp=QString::fromUtf8("select 饮品名 from 菜单 where 序号 ='%1'").arg(number);
    query.exec(temp);
    query.next();
    if(query.value("饮品名").toString() != "\0")
    {
        QMessageBox::warning(this,"提示","删除失败!");
    }
    else
    {
        ui->drink_tableWidget->removeRow(currow);//删除当前行
        QMessageBox::warning(this,"提示","删除成功!");

    }

}

void manage::on_change_drink_Bt_clicked()
{
    change_drink_price *child=new change_drink_price();
    child->show();
}

void manage::on_statu_drink_Bt_clicked()
{
    change_drink_status *child=new change_drink_status;
    child->show();
}

void manage::on_flush_drink_Bt_clicked()
{
    Init(); //初始化，让数据库的数据重新读取到饮品结构体中
    Menu_frint();
}
