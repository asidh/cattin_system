/********************************************************************************
** Form generated from reading UI file 'aboutbill.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBILL_H
#define UI_ABOUTBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutbill
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *number_Edit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *queryBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *aboutbill)
    {
        if (aboutbill->objectName().isEmpty())
            aboutbill->setObjectName(QString::fromUtf8("aboutbill"));
        aboutbill->resize(600, 350);
        widget = new QWidget(aboutbill);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 581, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        number_Edit = new QLineEdit(widget);
        number_Edit->setObjectName(QString::fromUtf8("number_Edit"));

        horizontalLayout->addWidget(number_Edit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        queryBt = new QPushButton(widget);
        queryBt->setObjectName(QString::fromUtf8("queryBt"));
        queryBt->setFont(font1);

        horizontalLayout_2->addWidget(queryBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closeBt = new QPushButton(widget);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));
        closeBt->setFont(font1);

        horizontalLayout_2->addWidget(closeBt);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(aboutbill);

        QMetaObject::connectSlotsByName(aboutbill);
    } // setupUi

    void retranslateUi(QWidget *aboutbill)
    {
        aboutbill->setWindowTitle(QCoreApplication::translate("aboutbill", "Form", nullptr));
        label->setText(QCoreApplication::translate("aboutbill", "\350\264\246\345\215\225\350\257\246\346\203\205", nullptr));
        label_2->setText(QCoreApplication::translate("aboutbill", "\344\272\244\346\230\223\345\217\267", nullptr));
        queryBt->setText(QCoreApplication::translate("aboutbill", "\346\237\245\350\257\242", nullptr));
        closeBt->setText(QCoreApplication::translate("aboutbill", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutbill: public Ui_aboutbill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBILL_H
