#include "custom.h"
#include "ui_custom.h"

custom::custom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::custom)
{
    ui->setupUi(this);
}

custom::~custom()
{
    delete ui;
}
