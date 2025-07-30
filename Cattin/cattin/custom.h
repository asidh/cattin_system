#ifndef CUSTOM_H
#define CUSTOM_H

#include <QWidget>

namespace Ui {
class custom;
}

class custom : public QWidget
{
    Q_OBJECT

public:
    explicit custom(QWidget *parent = nullptr);
    ~custom();

private:
    Ui::custom *ui;
};

#endif // CUSTOM_H
