#ifndef CHANGE_DRINK_PRICE_H
#define CHANGE_DRINK_PRICE_H

#include <QWidget>

#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

#include<QMessageBox>//对话框
#include <QDesktopWidget>

namespace Ui {
class change_drink_price;
}

class change_drink_price : public QWidget
{
    Q_OBJECT

public:
    explicit change_drink_price(QWidget *parent = nullptr);
    ~change_drink_price();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::change_drink_price *ui;
    QSqlDatabase db;
};

#endif // CHANGE_DRINK_PRICE_H
