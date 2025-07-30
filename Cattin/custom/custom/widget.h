#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSqlQuery>
#include <vector>
#include<QString>
#include<QTcpSocket>
#include "struct.h"
#include "childdorm.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class childdorm;   // 前置声明

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void Init();//初始化
    void client();//客服端
    void flag(QByteArray array);//标志位判断
    void Menu_print();//打印菜单
    void Chef_in(vector<MenuInfo> menuVec);//上菜

    vector<FoodInfo>* getVecNo(){return &FoodVec_no;}
    vector<FoodInfo>* getVec(){return &FoodVec;}
    QTcpSocket * getsocket(){return tcpsocket;}
public:
    float m_sum;//总额
    QSqlDatabase db;
    FoodInfo F_head;//订单结构体
    vector<FoodInfo> foodVec;//通用订单容器
    vector<FoodInfo> FoodVec;//订单容器
    vector<FoodInfo> FoodVec_no;//未上菜单容器
    vector<FoodInfo> FoodVec_in;//已上菜单容器
    QTcpSocket *tcpsocket;
    vector<MenuInfo> MenuVec;//菜单容器
    MenuInfo M_head;//菜单结构体
    childdorm *child;
private slots:
    void on_addBt_clicked();

    void on_deleteBt_clicked();

    void on_submitBt_clicked();

    void on_exitfoodBt_clicked();

    void comeback();//显示此窗口
    void Delete();//退餐

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
