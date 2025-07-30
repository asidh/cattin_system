#ifndef CHANGE_USER_ROOT_H
#define CHANGE_USER_ROOT_H

#include <QWidget>

//添加数据库
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

#include<QMessageBox>//对话框
#include <QDesktopWidget>


namespace Ui {
class change_user_root;
}

class change_user_root : public QWidget
{
    Q_OBJECT

public:
    explicit change_user_root(QWidget *parent = nullptr);
    ~change_user_root();

private slots:
    void on_configureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::change_user_root *ui;
    QSqlDatabase db;
};

#endif // CHANGE_USER_ROOT_H
