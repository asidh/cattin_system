/********************************************************************************
** Form generated from reading UI file 'add_food.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FOOD_H
#define UI_ADD_FOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_food
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *food_Edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *price_Edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *add_food)
    {
        if (add_food->objectName().isEmpty())
            add_food->setObjectName(QString::fromUtf8("add_food"));
        add_food->resize(400, 300);
        widget = new QWidget(add_food);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 250, 370, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        configureBt = new QPushButton(widget);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        QFont font;
        font.setPointSize(14);
        configureBt->setFont(font);

        horizontalLayout->addWidget(configureBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancelBt = new QPushButton(widget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font);

        horizontalLayout->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget1 = new QWidget(add_food);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 20, 261, 41));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        widget2 = new QWidget(add_food);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 80, 371, 151));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        food_Edit = new QLineEdit(widget2);
        food_Edit->setObjectName(QString::fromUtf8("food_Edit"));
        food_Edit->setFont(font);

        horizontalLayout_3->addWidget(food_Edit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        price_Edit = new QLineEdit(widget2);
        price_Edit->setObjectName(QString::fromUtf8("price_Edit"));
        price_Edit->setFont(font);

        horizontalLayout_4->addWidget(price_Edit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_5->addWidget(comboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        retranslateUi(add_food);

        QMetaObject::connectSlotsByName(add_food);
    } // setupUi

    void retranslateUi(QWidget *add_food)
    {
        add_food->setWindowTitle(QCoreApplication::translate("add_food", "Form", nullptr));
        configureBt->setText(QCoreApplication::translate("add_food", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("add_food", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("add_food", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("add_food", "\350\217\234\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("add_food", "\344\273\267\346\240\274", nullptr));
        label_3->setText(QCoreApplication::translate("add_food", "\347\212\266\346\200\201", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("add_food", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("add_food", "\346\234\211", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("add_food", "\346\227\240", nullptr));

    } // retranslateUi

};

namespace Ui {
    class add_food: public Ui_add_food {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FOOD_H
