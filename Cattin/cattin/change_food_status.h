#ifndef CHANGE_FOOD_STATUS_H
#define CHANGE_FOOD_STATUS_H

#include <QWidget>

#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

#include<QMessageBox>//对话框
#include <QDesktopWidget>

namespace Ui {
class change_food_status;
}

class change_food_status : public QWidget
{
    Q_OBJECT

public:
    explicit change_food_status(QWidget *parent = nullptr);
    ~change_food_status();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::change_food_status *ui;
    QSqlDatabase db;
};

#endif // CHANGE_FOOD_STATUS_H
