/********************************************************************************
** Form generated from reading UI file 'add_drink.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DRINK_H
#define UI_ADD_DRINK_H

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

class Ui_add_drink
{
public:
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *drinkname_Edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *drinkprice_Edit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *add_drink)
    {
        if (add_drink->objectName().isEmpty())
            add_drink->setObjectName(QString::fromUtf8("add_drink"));
        add_drink->resize(400, 300);
        label_3 = new QLabel(add_drink);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 0, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        widget = new QWidget(add_drink);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 240, 370, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        configureBt = new QPushButton(widget);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        QFont font1;
        font1.setPointSize(14);
        configureBt->setFont(font1);

        horizontalLayout->addWidget(configureBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelBt = new QPushButton(widget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font1);

        horizontalLayout->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget1 = new QWidget(add_drink);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(54, 61, 315, 119));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        drinkname_Edit = new QLineEdit(widget1);
        drinkname_Edit->setObjectName(QString::fromUtf8("drinkname_Edit"));

        horizontalLayout_2->addWidget(drinkname_Edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        drinkprice_Edit = new QLineEdit(widget1);
        drinkprice_Edit->setObjectName(QString::fromUtf8("drinkprice_Edit"));

        horizontalLayout_3->addWidget(drinkprice_Edit);


        verticalLayout->addLayout(horizontalLayout_3);

        widget2 = new QWidget(add_drink);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(40, 190, 341, 37));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);

        horizontalLayout_4->addWidget(comboBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        retranslateUi(add_drink);

        QMetaObject::connectSlotsByName(add_drink);
    } // setupUi

    void retranslateUi(QWidget *add_drink)
    {
        add_drink->setWindowTitle(QCoreApplication::translate("add_drink", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("add_drink", "\346\267\273\345\212\240\351\245\256\345\223\201", nullptr));
        configureBt->setText(QCoreApplication::translate("add_drink", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("add_drink", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("add_drink", "\351\245\256\345\223\201\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("add_drink", "\351\245\256\345\223\201\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("add_drink", "\347\212\266\346\200\201", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("add_drink", "\346\234\211", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("add_drink", "\346\227\240", nullptr));

    } // retranslateUi

};

namespace Ui {
    class add_drink: public Ui_add_drink {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DRINK_H
