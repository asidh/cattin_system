#ifndef CHANGE_FOOD_PRICE_H
#define CHANGE_FOOD_PRICE_H

#include <QWidget>

#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

#include<QMessageBox>//对话框
#include <QDesktopWidget>

namespace Ui {
class change_food_price;
}

class change_food_price : public QWidget
{
    Q_OBJECT

public:
    explicit change_food_price(QWidget *parent = nullptr);
    ~change_food_price();

private slots:
    void on_confirmBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::change_food_price *ui;
    QSqlDatabase db;
};

#endif // CHANGE_FOOD_PRICE_H
