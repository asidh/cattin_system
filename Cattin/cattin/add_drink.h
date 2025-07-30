#ifndef ADD_DRINK_H
#define ADD_DRINK_H

#include <QWidget>

#include<QSqlQuery>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlError>

namespace Ui {
class add_drink;
}

class add_drink : public QWidget
{
    Q_OBJECT

public:
    explicit add_drink(QWidget *parent = nullptr);
    ~add_drink();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::add_drink *ui;
    QSqlDatabase db;
};

#endif // ADD_DRINK_H
