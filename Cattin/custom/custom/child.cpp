#include "child.h"
#include "ui_child.h"

child::child(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::child)
{
    ui->setupUi(this);
}

child::~child()
{
    delete ui;
}

void child::on_pushButton_clicked()
{

}

void child::on_pushButton_2_clicked()
{

}

void child::on_pushButton_3_clicked()
{

}
