#ifndef ADD_FOOD_H
#define ADD_FOOD_H

#include <QWidget>
//数据库头文件
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlError>

namespace Ui {
class add_food;
}

class add_food : public QWidget
{
    Q_OBJECT

public:
    explicit add_food(QWidget *parent = nullptr);
    ~add_food();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::add_food *ui;
    QSqlDatabase db;
};

#endif // ADD_FOOD_H
