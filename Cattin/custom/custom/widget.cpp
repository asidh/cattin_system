#include "widget.h"
#include "ui_widget.h"
#include <QDesktopWidget>
#include<QSqlQuery>
#include<QDebug>
#include<QString>
#include<cstring>
#include<QMessageBox>
#include<QSqlError>
#include<QHostAddress>
#include<QTableWidgetItem>
#include<QVariant>
#include<unistd.h>

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    Init();//初始化
    client();//客服端启动操作

    QStringList headtext2;
    headtext2<<"序号"<<"餐名"<<"价格"<<"数量"<<"备注";
    ui->ordertableWidget->setColumnCount(headtext2.count());//列表设置为和headtext相等
    ui->ordertableWidget->setHorizontalHeaderLabels(headtext2);//插入表头
    ui->ordertableWidget->setRowCount(0);
    m_sum = 0;

    child = new childdorm();
    child->hide();
    child->getData(this);   //通过this把父窗口的指针传到子窗口当中
    connect(child, &childdorm::Interface, this, &Widget::comeback);
    connect(child, &childdorm::Inter_delete, this, &Widget::Delete);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::Init()//初始化
{
    tcpsocket = new QTcpSocket(this);//创建客户端套接字


    connect(tcpsocket,&QTcpSocket::connected,//请求连接信号
           [=]()
    {
        qDebug()<<"成功连接服务器";
    });

    QString ip = "172.16.12.26";
    qint16 port = 8888;
    tcpsocket->connectToHost(QHostAddress(ip),port);

    strcpy(F_head.table,"\0");
    strcpy(F_head.number,"\0");
    strcpy(F_head.food,"order");  //放入标志位
    strcpy(F_head.price,"\0");
    strcpy(F_head.post,"\0");

    FoodVec.push_back(F_head);//订单信息标志位放入容器中首元素

    strcpy(F_head.food,"order_up");  //放入标志位
    FoodVec_no.push_back(F_head);//订单信息标志位放入容器中首元素
}

 //客服端操作，不同客户端打开时向管理端自动发送的请求
void Widget::client()
{
    strcpy(F_head.table,"\0");
    strcpy(F_head.number,"\0");
    strcpy(F_head.food,"menu");  //放入标志位
    strcpy(F_head.price,"\0");
    strcpy(F_head.post,"\0");
    foodVec.push_back(F_head);   //订单信息标志位放入容器中首元素
    QByteArray a1;
    a1.resize(sizeof(FoodInfo)*foodVec.size());
    memcpy(a1.data(),foodVec.data(),sizeof(FoodInfo)*foodVec.size());
    tcpsocket->write(a1);

    connect(tcpsocket,&QTcpSocket::readyRead,
            [=]()
    {
        QByteArray array = tcpsocket->readAll();
        flag(array);     //数据解析
    }
    );
}

//通过服务端发送的array放入到menuVec中
void Widget::flag(QByteArray array) //服务端信息判断
{

    vector<MenuInfo> menuVec; //菜单容器
    menuVec.resize(array.size()/sizeof(MenuInfo));

    memcpy(menuVec.data(),array.data(),array.size());
    if(strcmp(menuVec[0].food,"menu")==0)
    {
        MenuVec = menuVec;
        Menu_print();
    }
    else if(strcmp(menuVec[0].food,"chef_in")==0)
    {
        Chef_in(menuVec);
    }

}



//添加菜品，通过输入的餐品序号来遍历餐品信息插入到订单中去
void Widget::on_addBt_clicked()
{
    int flag = 0;
    char number[10];
    QString s = ui->lineEdit->text();//餐品序号
    QByteArray ba = s.toUtf8();
    memcpy(number,ba.data(),ba.size()+1);//加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
    QTableWidgetItem *column = new QTableWidgetItem(s);
    QString s1;
    QString s2;
    //根据餐品序号遍历MenuVec获取food和price
    for(int i = 0; i < MenuVec.size(); i++)
    {
        if(strcmp(MenuVec[i].number,number) == 0)
        {
            s1 = QString(MenuVec[i].food);
            s2 = QString(MenuVec[i].price);
            flag = 1;
        }
    }

    //获取餐品数量和备注，并转化为QTableWidgetItem，以便插入到ordertableWidget中
    QTableWidgetItem *column1 = new QTableWidgetItem(s1);

    QTableWidgetItem *column2 = new QTableWidgetItem(s2);

    QString s3 = ui->lineEdit_2->text();//餐品数量
    QTableWidgetItem *column3 = new QTableWidgetItem(s3);

    QString s4 = ui->lineEdit_3->text();//备注
    QTableWidgetItem *column4 = new QTableWidgetItem(s4);

    //更新订单表格
    if(flag == 1)
    {
        int rowcount = ui->ordertableWidget->rowCount();//总行数
        ui->ordertableWidget->insertRow(rowcount);
        ui->ordertableWidget->setItem(rowcount,0,column);
        ui->ordertableWidget->setItem(rowcount,1,column1);
        ui->ordertableWidget->setItem(rowcount,2,column2);
        ui->ordertableWidget->setItem(rowcount,3,column3);
        ui->ordertableWidget->setItem(rowcount,4,column4);
        m_sum = m_sum+s2.toFloat()*s3.toInt();
        //ui->lineEdit_5->display(m_sum);
    }
    else
    {
        QMessageBox::warning(this,"提示","输入有误!");
    }

}

//删除菜品
void Widget::on_deleteBt_clicked()
{
    {
        int currow = ui->ordertableWidget->currentRow();//获取行号
        if(currow == -1)
        {
            QMessageBox::warning(this,"提示","操作有误!");
        }
        else
        {
            ui->ordertableWidget->removeRow(currow);//删除当前行
        }
    }
}


//提交订单，从ordertableWidget中获取数据并放入到FoodVec容器中，FoodVec中有Init()时的order标识符
void Widget::on_submitBt_clicked()
{
    QString S = ui->lineEdit_4->text(); //桌号
    char s[5];
    QByteArray ba = S.toUtf8();
    memcpy(s,ba.data(),ba.size()+1);  //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止

    if(S.isEmpty())
    {
        QMessageBox::warning(this,"提示!","请填写桌号!");
        return;
    }
    else
    {
        strcpy(FoodVec[0].table,s);
         // 获取订单表格中的行数（即订单项数）
        int rowcount = ui->ordertableWidget->rowCount();//总行数

        //遍历每一行，获取菜品信息并填充
        for (int j=0;j<rowcount;j++)
        {
            QString str = ui->ordertableWidget->item(j,0)->text(); //获取序号
            QString str1 = ui->ordertableWidget->item(j,1)->text();//获取菜名
            QString str2 = ui->ordertableWidget->item(j,2)->text();//获取价格
            QString str3 = ui->ordertableWidget->item(j,3)->text();//获取价格
            QString str4 = ui->ordertableWidget->item(j,4)->text();//获取备注

            strcpy(F_head.table,s);
            ba = str.toUtf8();
            memcpy(F_head.number,ba.data(),ba.size()+1);  //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str1.toUtf8();
            memcpy(F_head.food,ba.data(),ba.size()+1);    //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str2.toUtf8();
            memcpy(F_head.price,ba.data(),ba.size()+1);   //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str3.toUtf8();
            memcpy(F_head.quatity,ba.data(),ba.size()+1); //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
            ba = str4.toUtf8();
            memcpy(F_head.post,ba.data(),ba.size()+1);    //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止

            //菜品信息放入容器中
            FoodVec.push_back(F_head);
            //菜品信息放入未上菜单容器中，后面打印未上菜单时会用到
            FoodVec_no.push_back(F_head);
        }

        this->hide();
        //打印已上菜单和未上菜单
        child->getvec(FoodVec_no,FoodVec_in);
        //先传数据再展示
        child->show();

        //向服务端发送订单信息
        QByteArray a1;
        a1.resize(sizeof(FoodInfo)*FoodVec.size());
        memcpy(a1.data(),FoodVec.data(),sizeof(FoodInfo)*FoodVec.size());
        tcpsocket->write(a1);
    }

}

//退出
void Widget::on_exitfoodBt_clicked()
{
   exit(-1);
}

void Widget::Menu_print()//打印菜单
{

    QStringList headtext;
    headtext<<"序号"<<"餐名"<<"价格"<<"状态";
    ui->foodtableWidget->setColumnCount(headtext.count());     //列表设置为和headtext相等
    ui->foodtableWidget->setHorizontalHeaderLabels(headtext);  //插入表头
    ui->foodtableWidget->setRowCount(0);

    QStringList headtext1;
    headtext1<<"序号"<<"饮品名"<<"价格"<<"状态";
    ui->drinktableWidget->setColumnCount(headtext1.count());    //列表设置为和headtext相等
    ui->drinktableWidget->setHorizontalHeaderLabels(headtext1); //插入表头
    ui->drinktableWidget->setRowCount(0);

    for (int j=1;j< MenuVec.size();j++)
    {
        QString temp = QString(MenuVec[j].number);
        int number = temp.toInt();
        if( number < 20000)
        {
            int rowcount = ui->foodtableWidget->rowCount();
            ui->foodtableWidget->insertRow(rowcount);
            QTableWidgetItem *column = new QTableWidgetItem(MenuVec[j].number);
            QTableWidgetItem *column1 = new QTableWidgetItem(MenuVec[j].food);
            QTableWidgetItem *column2 = new QTableWidgetItem(MenuVec[j].price);
            QTableWidgetItem *column3 = new QTableWidgetItem(MenuVec[j].state);

            ui->foodtableWidget->setItem(rowcount,0,column);
            ui->foodtableWidget->setItem(rowcount,1,column1);
            ui->foodtableWidget->setItem(rowcount,2,column2);
            ui->foodtableWidget->setItem(rowcount,3,column3);
        }
        else
        {
            int rowcount = ui->drinktableWidget->rowCount();
            ui->drinktableWidget->insertRow(rowcount);
            QTableWidgetItem *column = new QTableWidgetItem(MenuVec[j].number);
            QTableWidgetItem *column1 = new QTableWidgetItem(MenuVec[j].food);
            QTableWidgetItem *column2 = new QTableWidgetItem(MenuVec[j].price);
            QTableWidgetItem *column3 = new QTableWidgetItem(MenuVec[j].state);

            ui->drinktableWidget->setItem(rowcount,0,column);
            ui->drinktableWidget->setItem(rowcount,1,column1);
            ui->drinktableWidget->setItem(rowcount,2,column2);
            ui->drinktableWidget->setItem(rowcount,3,column3);
        }
     }
}

//管理端发送方上菜的命令
void Widget::Chef_in(vector<MenuInfo> menuVec)//上菜
{
    for(int i = 0; i < FoodVec_no.size(); i++)
    {
        //遍历 FoodVec_no，根据餐品的 number（餐品编号）与厨房传来的 menuVec[1].number 进行比较
        //如果找到匹配的订单（strcmp 比较两个字符串是否相等），将该订单的各项信息（桌号、菜名、价格、数量、备注等）复制到 F_head 结构体中。
        if(strcmp(FoodVec_no[i].number,menuVec[1].number) == 0)
        {
            strcpy(F_head.table,FoodVec_no[i].table);
            strcpy(F_head.number,FoodVec_no[i].number);
            strcpy(F_head.food,FoodVec_no[i].food);
            strcpy(F_head.price,FoodVec_no[i].price);
            strcpy(F_head.quatity,FoodVec_no[i].quatity);
            strcpy(F_head.post,FoodVec_no[i].post);
            //将更新后的订单 F_head 添加到 FoodVec_in 中，表示该订单已经上菜。
            FoodVec_in.push_back(F_head);
            //删除未上菜单中该元素
            FoodVec_no.erase(FoodVec_no.begin ()+i);
        }
    }
    //遍历 FoodVec（所有订单）中的订单，找到已上菜的订单（通过餐品的 number 来进行匹配）
    for(int i = 1; i < FoodVec.size(); i++)
    {
        if(strcmp(FoodVec[i].number,menuVec[1].number) == 0)
        {
            //将该订单的桌号设置为 "0"，标记该菜品已经完成上菜操作。
            strcpy(FoodVec[i].table,"0");
        }
    }

    //通过 child->getvec(FoodVec_no, FoodVec_in) 将更新后的 FoodVec_no 和 FoodVec_in 传递给子窗口
    child->getvec(FoodVec_no,FoodVec_in);
}



//信号槽,显示父窗口,从子窗口返回父窗口
void Widget::comeback()
{
    //判断该桌号是否点过餐
    if(FoodVec.begin() != FoodVec.end())
    {
        QString Table = FoodVec[1].table;
        ui->lineEdit_4->setText(Table);

        ui->lineEdit_4->setFocusPolicy(Qt::NoFocus);  //设置为只读模式
    }
    ui->ordertableWidget->setRowCount(0);
    m_sum = 0;
    this->show();
}

//当子窗口的 Inter_delete 信号被触发时，父窗口会调用 Delete() 方法
void Widget::Delete()
{
    child->Delete_food();
}
