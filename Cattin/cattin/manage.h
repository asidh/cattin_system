#ifndef MANAGE_H
#define MANAGE_H

#include <QWidget>
#include "struct.h"
//tcp通信
#include<QTcpSocket>//建立套接字的类
#include<QTcpServer>//监听套接字的类

//sql数据库
#include<QSqlError>
#include<QSqlDatabase>
#include<QSqlQuery>   // SQL数据查询操作的头文件
#include<QSqlDatabase>  //SQL增删查改的头文件

#include <vector>
//定义的其它类
#include "widget.h"
#include "add_user.h"
#include "change_pwd.h"
#include "change_user_root.h"
#include "aboutbill.h"
#include "add_food.h"
#include "change_food_price.h"
#include "change_food_status.h"
#include "add_drink.h"
#include "change_drink_price.h"
#include "change_drink_status.h"

using namespace std;

namespace Ui {
class manage;
}

class manage : public QWidget
{
    Q_OBJECT

public:
    explicit manage(QWidget *parent = nullptr);
    ~manage();

    void getname(QString name); //打印登陆的管理者名字
    void gettime(QString time);
    void user_frint();
    void Menu_frint();
    void bill_frint();
    void Init(); //页面初始化



private slots:
    //用户管理槽函数
    void on_add_user_Bt_clicked();

    void on_del_user_Bt_clicked();

    void on_change_pwd_Bt_clicked();

    void on_change_root_Bt_clicked();

    void on_reload_Bt_clicked();

    void on_exit_Bt_clicked();

    void on_flush_user_Bt_clicked();


    void on_about_bill_Bt_clicked();

    void on_flush_bill_Bt_clicked();

    void on_add_food_Bt_clicked();

    void on_flush_food_Bt_clicked();

    void on_del_food_Bt_clicked();

    void on_change_food_Bt_clicked();

    void on_status_food_Bt_clicked();

    void on_add_drink_Bt_clicked();

    void on_del_drink_Bt_clicked();

    void on_change_drink_Bt_clicked();

    void on_statu_drink_Bt_clicked();

    void on_flush_drink_Bt_clicked();

private:
    Ui::manage *ui;
    QSqlDatabase db;
    QTcpServer *Server;
    QTcpSocket *Socket;
    vector<MenuInfo> MenuVec;//菜单容器
    vector<MenuInfo> DrinkVec; //饮品容器
    FoodInfo F_head;//订单结构体
    MenuInfo M_head;//菜单结构体

  //  QString login_user;
  //  QString login_time;



};

#endif // MANAGE_H
