/********************************************************************************
** Form generated from reading UI file 'change_drink_price.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_DRINK_PRICE_H
#define UI_CHANGE_DRINK_PRICE_H

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

class Ui_change_drink_price
{
public:
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *drinknum_Edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *drinkprice_Edit;

    void setupUi(QWidget *change_drink_price)
    {
        if (change_drink_price->objectName().isEmpty())
            change_drink_price->setObjectName(QString::fromUtf8("change_drink_price"));
        change_drink_price->resize(400, 300);
        label_3 = new QLabel(change_drink_price);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 20, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        widget = new QWidget(change_drink_price);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 240, 370, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        configureBt = new QPushButton(widget);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        QFont font1;
        font1.setPointSize(14);
        configureBt->setFont(font1);

        horizontalLayout->addWidget(configureBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancelBt = new QPushButton(widget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font1);

        horizontalLayout->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget1 = new QWidget(change_drink_price);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 80, 311, 131));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        drinknum_Edit = new QLineEdit(widget1);
        drinknum_Edit->setObjectName(QString::fromUtf8("drinknum_Edit"));
        drinknum_Edit->setFont(font1);

        horizontalLayout_2->addWidget(drinknum_Edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        drinkprice_Edit = new QLineEdit(widget1);
        drinkprice_Edit->setObjectName(QString::fromUtf8("drinkprice_Edit"));
        drinkprice_Edit->setFont(font1);

        horizontalLayout_3->addWidget(drinkprice_Edit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(change_drink_price);

        QMetaObject::connectSlotsByName(change_drink_price);
    } // setupUi

    void retranslateUi(QWidget *change_drink_price)
    {
        change_drink_price->setWindowTitle(QCoreApplication::translate("change_drink_price", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("change_drink_price", "\344\277\256\346\224\271\351\245\256\345\223\201\344\273\267\346\240\274", nullptr));
        configureBt->setText(QCoreApplication::translate("change_drink_price", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("change_drink_price", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("change_drink_price", "\351\245\256\345\223\201\345\272\217\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("change_drink_price", "\351\245\256\345\223\201\344\273\267\346\240\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_drink_price: public Ui_change_drink_price {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_DRINK_PRICE_H
