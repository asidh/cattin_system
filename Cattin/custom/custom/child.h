#ifndef CHILD_H
#define CHILD_H

#include <QWidget>
#include<QDesktopWidget>
#include<QMessageBox>
#include<vector>
#include"widget.h"
#include "struct.h"

using namespace std;
namespace Ui {
class child;
}

class child : public QWidget
{
    Q_OBJECT

signals:
    void Interface();//显示父窗口
    void Inter_delete();//退餐
public:
    explicit child(QWidget *parent = nullptr);
    ~child();
    void getvec(vector<FoodInfo> FoodVec_no,vector<FoodInfo> FoodVec_in);//打印订单
    void Delete_food();//退餐
    void getData(QWidget *parent);   //通过this把父窗口的指针传到子窗口当中
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::child *ui;
    FoodInfo F_head;//订单结构体
    vector<FoodInfo> *FoodVec_No;//未上菜单容器
    vector<FoodInfo> *FoodVec;//已上菜单容器
    vector<FoodInfo> DeleteVec;//退餐容器
    QTcpSocket *tcpsocket;
    Widget * p;
};

#endif // CHILD_H
