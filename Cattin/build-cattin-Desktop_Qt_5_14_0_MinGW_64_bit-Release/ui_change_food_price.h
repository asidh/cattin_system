/********************************************************************************
** Form generated from reading UI file 'change_food_price.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_FOOD_PRICE_H
#define UI_CHANGE_FOOD_PRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_food_price
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *num_Exit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *price_Exit;

    void setupUi(QWidget *change_food_price)
    {
        if (change_food_price->objectName().isEmpty())
            change_food_price->setObjectName(QString::fromUtf8("change_food_price"));
        change_food_price->resize(400, 300);
        widget = new QWidget(change_food_price);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 220, 381, 41));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        confirmBt = new QPushButton(widget);
        confirmBt->setObjectName(QString::fromUtf8("confirmBt"));
        QFont font;
        font.setPointSize(14);
        confirmBt->setFont(font);

        horizontalLayout_3->addWidget(confirmBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cancelBt = new QPushButton(widget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font);

        horizontalLayout_3->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        widget1 = new QWidget(change_food_price);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 30, 341, 40));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        widget2 = new QWidget(change_food_price);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(60, 80, 271, 111));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        num_Exit = new QLineEdit(widget2);
        num_Exit->setObjectName(QString::fromUtf8("num_Exit"));
        num_Exit->setFont(font);

        horizontalLayout->addWidget(num_Exit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        price_Exit = new QLineEdit(widget2);
        price_Exit->setObjectName(QString::fromUtf8("price_Exit"));
        price_Exit->setFont(font);

        horizontalLayout_2->addWidget(price_Exit);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(change_food_price);

        QMetaObject::connectSlotsByName(change_food_price);
    } // setupUi

    void retranslateUi(QWidget *change_food_price)
    {
        change_food_price->setWindowTitle(QCoreApplication::translate("change_food_price", "Form", nullptr));
        confirmBt->setText(QCoreApplication::translate("change_food_price", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("change_food_price", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("change_food_price", "\344\277\256\346\224\271\350\217\234\345\223\201\344\273\267\346\240\274", nullptr));
        label->setText(QCoreApplication::translate("change_food_price", "\345\272\217\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("change_food_price", "\344\273\267\346\240\274", nullptr));
        price_Exit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class change_food_price: public Ui_change_food_price {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_FOOD_PRICE_H
