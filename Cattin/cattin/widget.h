#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QDateTime>   //获取时间
#include<QSqlQuery>   // SQL数据查询操作的头文件
#include<QSqlDatabase>  //SQL增删查改的头文件

#include<QTcpServer>   //监听套接字的类
#include<QTcpSocket>   //建立套接字的类

#include"mythread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void tcp(); //tcp套接字通信函数

private slots:
    void on_exitlogBt_clicked();

    void on_logBt_clicked();

private:
    Ui::Widget *ui;

    QSqlDatabase db;       //数据库句柄
    QTcpServer *tcpserver; //创建套接字服务器QTcpServer对象
    QTcpSocket *tcpsocket; //套接字对象QTcpSocket
};
#endif // WIDGET_H
