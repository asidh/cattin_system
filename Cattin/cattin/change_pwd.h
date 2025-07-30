#ifndef CHANGE_PWD_H
#define CHANGE_PWD_H

#include <QWidget>

#include <QMessageBox>
//添加数据库
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

namespace Ui {
class change_pwd;
}

class change_pwd : public QWidget
{
    Q_OBJECT

public:
    explicit change_pwd(QWidget *parent = nullptr);
    ~change_pwd();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::change_pwd *ui;
    QSqlDatabase db;
};

#endif // CHANGE_PWD_H
