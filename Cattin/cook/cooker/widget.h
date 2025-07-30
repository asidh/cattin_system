#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSqlQuery>
#include <vector>
#include<QString>
#include<QTcpSocket>
#include "struct.h"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void Init();//初始化
    void client();//客服端
    void Order_print(QByteArray array);//打印订单
public:
    FoodInfo F_head;//订单结构体
    vector<FoodInfo> FoodVec;//订单容器
    vector<FoodInfo> foodVec;//通用容器
    QTcpSocket *tcpsocket;
private slots:
    void on_pushButton_clicked();   //上菜

    void on_pushButton_2_clicked(); //刷新

    void on_pushButton_3_clicked(); //退出

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
