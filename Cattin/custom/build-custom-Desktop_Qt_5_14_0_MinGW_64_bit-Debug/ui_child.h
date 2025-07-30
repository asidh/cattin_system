/********************************************************************************
** Form generated from reading UI file 'child.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD_H
#define UI_CHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_child
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *child)
    {
        if (child->objectName().isEmpty())
            child->setObjectName(QString::fromUtf8("child"));
        child->resize(800, 500);
        label = new QLabel(child);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 91, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(child);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 10, 61, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(child);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(410, 10, 41, 21));
        tableWidget = new QTableWidget(child);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 100, 301, 381));
        tableWidget_2 = new QTableWidget(child);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(490, 100, 301, 381));
        label_3 = new QLabel(child);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(600, 60, 91, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        widget = new QWidget(child);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(360, 150, 114, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(child);

        QMetaObject::connectSlotsByName(child);
    } // setupUi

    void retranslateUi(QWidget *child)
    {
        child->setWindowTitle(QCoreApplication::translate("child", "Form", nullptr));
        label->setText(QCoreApplication::translate("child", "\346\234\252\344\270\212\351\244\220\345\223\201", nullptr));
        label_2->setText(QCoreApplication::translate("child", "\346\241\214\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("child", "\345\267\262\344\270\212\351\244\220\345\223\201", nullptr));
        pushButton->setText(QCoreApplication::translate("child", "\345\202\254\351\244\220", nullptr));
        pushButton_2->setText(QCoreApplication::translate("child", "\345\212\240\351\244\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("child", "\351\200\200\351\244\220", nullptr));
        pushButton_4->setText(QCoreApplication::translate("child", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class child: public Ui_child {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD_H
