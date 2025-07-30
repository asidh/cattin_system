/********************************************************************************
** Form generated from reading UI file 'change_food_status.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_FOOD_STATUS_H
#define UI_CHANGE_FOOD_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_food_status
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *foodnum_Edit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *change_food_status)
    {
        if (change_food_status->objectName().isEmpty())
            change_food_status->setObjectName(QString::fromUtf8("change_food_status"));
        change_food_status->resize(400, 300);
        widget = new QWidget(change_food_status);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 321, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget1 = new QWidget(change_food_status);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(51, 121, 269, 52));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        foodnum_Edit = new QLineEdit(widget1);
        foodnum_Edit->setObjectName(QString::fromUtf8("foodnum_Edit"));
        foodnum_Edit->setFont(font1);

        horizontalLayout_3->addWidget(foodnum_Edit);

        widget2 = new QWidget(change_food_status);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(60, 180, 249, 37));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        widget3 = new QWidget(change_food_status);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 250, 370, 41));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        configureBt = new QPushButton(widget3);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        configureBt->setFont(font1);

        horizontalLayout_4->addWidget(configureBt);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        cancelBt = new QPushButton(widget3);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font1);

        horizontalLayout_4->addWidget(cancelBt);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        retranslateUi(change_food_status);

        QMetaObject::connectSlotsByName(change_food_status);
    } // setupUi

    void retranslateUi(QWidget *change_food_status)
    {
        change_food_status->setWindowTitle(QCoreApplication::translate("change_food_status", "Form", nullptr));
        label->setText(QCoreApplication::translate("change_food_status", "\344\277\256\346\224\271\350\217\234\345\223\201\347\212\266\346\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("change_food_status", "\350\217\234\345\223\201\345\272\217\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("change_food_status", "\347\212\266\346\200\201  ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("change_food_status", "\346\234\211", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("change_food_status", "\346\227\240", nullptr));

        configureBt->setText(QCoreApplication::translate("change_food_status", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("change_food_status", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_food_status: public Ui_change_food_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_FOOD_STATUS_H
