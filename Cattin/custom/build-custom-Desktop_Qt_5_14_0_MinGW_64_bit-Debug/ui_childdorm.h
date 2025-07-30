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
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *childdorm)
    {
        if (childdorm->objectName().isEmpty())
            childdorm->setObjectName(QString::fromUtf8("childdorm"));
        childdorm->resize(800, 500);
        label = new QLabel(childdorm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 20, 51, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(childdorm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 20, 41, 20));
        tableWidget = new QTableWidget(childdorm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 301, 391));
        tableWidget_2 = new QTableWidget(childdorm);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(490, 80, 301, 391));
        label_2 = new QLabel(childdorm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 101, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(childdorm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 50, 101, 21));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(childdorm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 130, 71, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(childdorm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 210, 71, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(childdorm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 290, 71, 31));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(childdorm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 370, 71, 31));
        pushButton_4->setFont(font);

        retranslateUi(childdorm);

        QMetaObject::connectSlotsByName(childdorm);
    } // setupUi

    void retranslateUi(QWidget *childdorm)
    {
        childdorm->setWindowTitle(QCoreApplication::translate("childdorm", "Form", nullptr));
        label->setText(QCoreApplication::translate("childdorm", "\346\241\214\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("childdorm", "\346\234\252\344\270\212\350\217\234\345\223\201", nullptr));
        label_3->setText(QCoreApplication::translate("childdorm", "\345\267\262\344\270\212\350\217\234\345\223\201", nullptr));
        pushButton->setText(QCoreApplication::translate("childdorm", "\345\202\254\351\244\220", nullptr));
        pushButton_2->setText(QCoreApplication::translate("childdorm", "\345\212\240\351\244\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("childdorm", "\351\200\200\351\244\220", nullptr));
        pushButton_4->setText(QCoreApplication::translate("childdorm", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class childdorm: public Ui_childdorm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDORM_H
