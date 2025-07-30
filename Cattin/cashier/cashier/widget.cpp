#include "widget.h"
#include "ui_widget.h"
#include "childdorm.h"
#include <QDesktopWidget>
#include<QLabel>
#include<QPalette>
#include<QMessageBox>
#include<QFile>

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    child = new childdorm();
    child->hide();

    connect(child,SIGNAL(Interface()),this,SLOT(comeback()));  //信号槽
    connect(child,SIGNAL(Inter_no()),this,SLOT(comeback_no())); //信号槽
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString pw = ui->lineEdit_2->text();
    child->log_in(name,pw);  //发送登录信息
}

void Widget::on_pushButton_2_clicked()
{
    exit(-1);
}

void Widget::comeback()//信号槽,关闭父窗口
{
    this->hide();
}

void Widget::comeback_no()//信号槽,登录失败
{
    QMessageBox::information(this,"登录失败!","用户名或密码错误!",QMessageBox::Yes,QMessageBox::Yes);
}
