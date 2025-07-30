#ifndef ADD_USER_H
#define ADD_USER_H

#include <QWidget>

#include<QSqlQuery>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlError>

namespace Ui {
class add_user;
}

class add_user : public QWidget
{
    Q_OBJECT

public:
    explicit add_user(QWidget *parent = nullptr);
    ~add_user();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();



private:
    Ui::add_user *ui;
    QSqlDatabase db;
};

#endif // ADD_USER_H
