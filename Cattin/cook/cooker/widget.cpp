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
#include<QTcpSocket>
#include<QTableWidgetItem>
#include <QVariant>

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Init();
    client();
}


Widget::~Widget()
{
    delete ui;
}

//向服务端发送上菜操作
void Widget::on_pushButton_clicked()
{
    //初始化订单数据，放入标志位
    foodVec.clear();
    strcpy(F_head.table,"\0");
    strcpy(F_head.number,"\0");
    strcpy(F_head.food,"chef_in");  //放入标志位(厨房上菜)
    strcpy(F_head.price,"\0");
    strcpy(F_head.quatity,"\0");
    strcpy(F_head.post,"\0");
    foodVec.push_back(F_head);//订单信息标志位放入容器中首元素


    int currow = ui->tableWidget->currentRow();//获取行号
    if(currow == -1)
    {
        QMessageBox::warning(this,"提示","操作有误!");
    }
    //选中做好的菜
    else
    {
        QString str = ui->tableWidget->item(currow,0)->text(); //获取桌号
        QString str1 = ui->tableWidget->item(currow,1)->text();//获取序号
        QString str2 = ui->tableWidget->item(currow,2)->text();//获取菜名
        QString str3 = ui->tableWidget->item(currow,3)->text();//获取价格
        QString str4 = ui->tableWidget->item(currow,4)->text();//获取数量
        QString str5 = ui->tableWidget->item(currow,5)->text();//获取备注

        QByteArray ba = str.toUtf8();
        memcpy(F_head.table,ba.data(),ba.size()+1);  //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str1.toUtf8();
        memcpy(F_head.number,ba.data(),ba.size()+1);  //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str2.toUtf8();
        memcpy(F_head.food,ba.data(),ba.size()+1);    //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str3.toUtf8();
        memcpy(F_head.price,ba.data(),ba.size()+1);   //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str4.toUtf8();
        memcpy(F_head.quatity,ba.data(),ba.size()+1); //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        ba = str5.toUtf8();
        memcpy(F_head.post,ba.data(),ba.size()+1);    //加1是为了最后的终结符，否则转换回来的时候不知道什么时候截止
        foodVec.push_back(F_head);//菜品信息放入容器中

        //删除选中的菜品
        ui->tableWidget->removeRow(currow);

        //发送所上菜品信息
        QByteArray a1;
        a1.resize(sizeof(FoodInfo)*foodVec.size());
        memcpy(a1.data(),foodVec.data(),sizeof(FoodInfo)*foodVec.size());
        tcpsocket->write(a1);
    }

}

//刷新，重新向服务端发送chef
void Widget::on_pushButton_2_clicked()
{
    foodVec.clear();
    strcpy(F_head.table,"\0");
    strcpy(F_head.number,"\0");
    strcpy(F_head.food,"chef");  //放入标志位
    strcpy(F_head.price,"\0");
    strcpy(F_head.quatity,"\0");
    strcpy(F_head.post,"\0");
    foodVec.push_back(F_head);//订单信息标志位放入容器中首元素
    QByteArray a1;
    a1.resize(sizeof(FoodInfo)*foodVec.size());
    memcpy(a1.data(),foodVec.data(),sizeof(FoodInfo)*foodVec.size());
    tcpsocket->write(a1);
}


//退出
void Widget::on_pushButton_3_clicked()
{
    exit(-1);
}

//初始化，进行TCP通信流程的设置
void Widget::Init()//初始化
{
    tcpsocket = new QTcpSocket;//创建客户端套接字


    connect(tcpsocket,&QTcpSocket::connected,//请求连接信号
           [=]()
    {
        //ui->textEdit->setText("成功连接服务器");
    }
    );

    QString ip = "172.16.12.26";
    qint16 port = 8888;
    tcpsocket->connectToHost(QHostAddress(ip),port);
}

void Widget::client()  //客服端操作
{
    foodVec.clear();
    strcpy(F_head.table,"\0");
    strcpy(F_head.number,"\0");
    strcpy(F_head.food,"chef");  //放入标志位
    strcpy(F_head.price,"\0");
    strcpy(F_head.quatity,"\0");
    strcpy(F_head.post,"\0");
    foodVec.push_back(F_head);//订单信息标志位放入容器中首元素
    QByteArray a1;
    a1.resize(sizeof(FoodInfo)*foodVec.size());
    memcpy(a1.data(),foodVec.data(),sizeof(FoodInfo)*foodVec.size());
    tcpsocket->write(a1);


    connect(tcpsocket,&QTcpSocket::readyRead,
            [=]()
    {
        QByteArray array = tcpsocket->readAll();
        Order_print(array);     //订单打印
    }
    );
}

//接受服务端发来的数据并打印
void Widget::Order_print(QByteArray array) //订单打印
{
    FoodVec.clear();
    FoodVec.resize(array.size()/sizeof(FoodInfo));
    memcpy(FoodVec.data(),array.data(),array.size());

    QStringList headtext;
    headtext<<"桌号"<<"序号"<<"餐名"<<"价格"<<"数量"<<"备注";
    ui->tableWidget->setColumnCount(headtext.count());     //列表设置为和headtext相等
    ui->tableWidget->setHorizontalHeaderLabels(headtext);  //插入表头
    ui->tableWidget->setRowCount(0);
    int rowcount;
    qDebug()<< FoodVec.size();
    for (int j=0;j< FoodVec.size();j++)
    {
        qDebug()<<FoodVec[j].food;
        rowcount = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(rowcount);
        QTableWidgetItem *column = new QTableWidgetItem(FoodVec[j].table);
        QTableWidgetItem *column1 = new QTableWidgetItem(FoodVec[j].number);
        QTableWidgetItem *column2 = new QTableWidgetItem(FoodVec[j].food);
        QTableWidgetItem *column3 = new QTableWidgetItem(FoodVec[j].price);
        QTableWidgetItem *column4 = new QTableWidgetItem(FoodVec[j].quatity);
        QTableWidgetItem *column5 = new QTableWidgetItem(FoodVec[j].post);

        ui->tableWidget->setItem(rowcount,0,column);
        ui->tableWidget->setItem(rowcount,1,column1);
        ui->tableWidget->setItem(rowcount,2,column2);
        ui->tableWidget->setItem(rowcount,3,column3);
        ui->tableWidget->setItem(rowcount,4,column4);
        ui->tableWidget->setItem(rowcount,5,column5);
    }

}
