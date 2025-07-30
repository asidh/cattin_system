/********************************************************************************
** Form generated from reading UI file 'childdorm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDORM_H
#define UI_CHILDDORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_childdorm
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *flushBt;
    QTableWidget *tableWidget_2;
    QPushButton *queryBt;
    QPushButton *calculateBt;
    QPushButton *reloadBt;
    QPushButton *exitBt;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *cashierEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *desknumEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *moneyEdit;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *desknumEdit_2;

    void setupUi(QWidget *childdorm)
    {
        if (childdorm->objectName().isEmpty())
            childdorm->setObjectName(QString::fromUtf8("childdorm"));
        childdorm->resize(800, 500);
        QFont font;
        font.setPointSize(12);
        childdorm->setFont(font);
        label = new QLabel(childdorm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 151, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        tableWidget = new QTableWidget(childdorm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 100, 241, 351));
        flushBt = new QPushButton(childdorm);
        flushBt->setObjectName(QString::fromUtf8("flushBt"));
        flushBt->setGeometry(QRect(100, 460, 61, 31));
        tableWidget_2 = new QTableWidget(childdorm);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(290, 100, 261, 351));
        queryBt = new QPushButton(childdorm);
        queryBt->setObjectName(QString::fromUtf8("queryBt"));
        queryBt->setGeometry(QRect(600, 220, 61, 31));
        calculateBt = new QPushButton(childdorm);
        calculateBt->setObjectName(QString::fromUtf8("calculateBt"));
        calculateBt->setGeometry(QRect(700, 220, 61, 31));
        reloadBt = new QPushButton(childdorm);
        reloadBt->setObjectName(QString::fromUtf8("reloadBt"));
        reloadBt->setGeometry(QRect(630, 290, 121, 31));
        exitBt = new QPushButton(childdorm);
        exitBt->setObjectName(QString::fromUtf8("exitBt"));
        exitBt->setGeometry(QRect(630, 360, 121, 31));
        widget = new QWidget(childdorm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(280, 10, 181, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        cashierEdit = new QLineEdit(widget);
        cashierEdit->setObjectName(QString::fromUtf8("cashierEdit"));

        horizontalLayout->addWidget(cashierEdit);

        widget1 = new QWidget(childdorm);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(300, 60, 131, 34));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        desknumEdit = new QLineEdit(widget1);
        desknumEdit->setObjectName(QString::fromUtf8("desknumEdit"));

        horizontalLayout_2->addWidget(desknumEdit);

        widget2 = new QWidget(childdorm);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(390, 460, 161, 34));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        moneyEdit = new QLineEdit(widget2);
        moneyEdit->setObjectName(QString::fromUtf8("moneyEdit"));

        horizontalLayout_3->addWidget(moneyEdit);

        widget3 = new QWidget(childdorm);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(600, 120, 151, 34));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        desknumEdit_2 = new QLineEdit(widget3);
        desknumEdit_2->setObjectName(QString::fromUtf8("desknumEdit_2"));

        horizontalLayout_4->addWidget(desknumEdit_2);


        retranslateUi(childdorm);

        QMetaObject::connectSlotsByName(childdorm);
    } // setupUi

    void retranslateUi(QWidget *childdorm)
    {
        childdorm->setWindowTitle(QCoreApplication::translate("childdorm", "Form", nullptr));
        label->setText(QCoreApplication::translate("childdorm", "\351\244\220\346\241\214\344\275\277\347\224\250\347\212\266\346\200\201", nullptr));
        flushBt->setText(QCoreApplication::translate("childdorm", "\345\210\267\346\226\260", nullptr));
        queryBt->setText(QCoreApplication::translate("childdorm", "\346\237\245\350\257\242", nullptr));
        calculateBt->setText(QCoreApplication::translate("childdorm", "\347\273\223\347\256\227", nullptr));
        reloadBt->setText(QCoreApplication::translate("childdorm", "\351\207\215\346\226\260\347\231\273\345\275\225", nullptr));
        exitBt->setText(QCoreApplication::translate("childdorm", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("childdorm", "\346\224\266\350\220\245\345\221\230", nullptr));
        label_3->setText(QCoreApplication::translate("childdorm", "\346\241\214\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("childdorm", "\346\200\273\346\266\210\350\264\271", nullptr));
        label_5->setText(QCoreApplication::translate("childdorm", "\346\241\214\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childdorm: public Ui_childdorm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDORM_H
