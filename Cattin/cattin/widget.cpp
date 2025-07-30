#include "widget.h"
#include "ui_widget.h"

#include "manage.h"
#include <QDesktopWidget>
#include<QLabel>
#include<QPalette>
#include<QMessageBox>
#include<QFile>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //配置数据库信息，连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL","1"); //添加数据库
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("990709");
    db.setPort(3306);
    db.setDatabaseName("Order");

    if(!db.open())
    {
       QMessageBox::warning(this,"提示","无法连接数据库");
    }

    //成功连接数据库后进行tcp通信传输账号密码等数据
    tcp();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::tcp()
{

    //套接字对象
    tcpserver=new QTcpServer(this);
    //监听
    tcpserver->listen(QHostAddress::Any,8888);
    connect(tcpserver,&QTcpServer::newConnection, this, [=]() //lambda表达式:accept函数,增加this
    {

        //新建新的套接字
        tcpsocket = tcpserver->nextPendingConnection();//最近一个接进来的客服端

        QString ip =tcpsocket->peerAddress().toString();//得到地址
        int port = tcpsocket->peerPort();
        QString temp = QString::fromUtf8("地址:%1 端口:%2").arg(ip).arg(port);
        qDebug()<<temp;
        qDebug()<<"菜单已发送";
        mythread *thread = new mythread(tcpsocket);  //创建线程
        thread->start();

    });


}

void Widget::on_exitlogBt_clicked()
{
    exit(-1);
}

//登录按钮
void Widget::on_logBt_clicked()
{
    QSqlQuery query(db);

    QString pwm = ui->pwdEdit->text();//读取用户输入的密码
    QString name = ui->adminEdit->text();//读取用户输入的账号
    QString nowTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    QString temp=QString::fromUtf8("select 密码 from 用户 where 用户名 ='%1'").arg(name);
    query.exec(temp);
    query.next();
    if(query.value("密码").toString() == pwm)
    {
        temp=QString::fromUtf8("select 权限 from 用户 where 用户名 ='%1'").arg(name);
        query.exec(temp);
        query.next();
        if(query.value("权限").toString()=="管理员")
        {
            this->hide();   //隐藏登录窗口，主窗口类w并不会释放资源
            manage *child = new manage();
            child->getname(name);
            child->gettime(nowTime);
            child->show();

        }
        else
        {
            QMessageBox qm(this);
            qm.setText(QStringLiteral("该用户不是管理员!"));
            qm.move(this->geometry().center());
            qm.exec();
        }
    }
    else
    {
        QMessageBox qm(this);
        qm.setText(QStringLiteral("账号或密码错误!"));
        qm.move(this->geometry().center());
        qm.exec();
    }
}

