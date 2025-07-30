#ifndef CHANGE_DRINK_STATUS_H
#define CHANGE_DRINK_STATUS_H

#include <QWidget>

#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>

#include<QMessageBox>//对话框
#include <QDesktopWidget>
namespace Ui {
class change_drink_status;
}

class change_drink_status : public QWidget
{
    Q_OBJECT

public:
    explicit change_drink_status(QWidget *parent = nullptr);
    ~change_drink_status();

private slots:
    void on_cinfigureBt_clicked();

    void on_cancelBt_clicked();

private:
    Ui::change_drink_status *ui;
    QSqlDatabase db;
};

#endif // CHANGE_DRINK_STATUS_H
