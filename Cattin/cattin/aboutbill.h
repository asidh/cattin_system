#ifndef ABOUTBILL_H
#define ABOUTBILL_H

#include <QWidget>

//数据库相关头文件
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

#include<QMessageBox>//对话框
#include <QDesktopWidget>
namespace Ui {
class aboutbill;
}

class aboutbill : public QWidget
{
    Q_OBJECT

public:
    explicit aboutbill(QWidget *parent = nullptr);
    ~aboutbill();

private slots:
    void on_queryBt_clicked();

    void on_closeBt_clicked();

private:
    Ui::aboutbill *ui;
    QSqlDatabase db;
};

#endif // ABOUTBILL_H
