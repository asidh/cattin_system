/********************************************************************************
** Form generated from reading UI file 'change_pwd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_PWD_H
#define UI_CHANGE_PWD_H

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

class Ui_change_pwd
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *userEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *oldpwd_label;
    QLineEdit *oldpwd_Edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *newpwd_label;
    QLineEdit *newpwd_Edit;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *change_pwd)
    {
        if (change_pwd->objectName().isEmpty())
            change_pwd->setObjectName(QString::fromUtf8("change_pwd"));
        change_pwd->resize(400, 300);
        widget = new QWidget(change_pwd);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 321, 41));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        widget1 = new QWidget(change_pwd);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 80, 371, 161));
        horizontalLayout_6 = new QHBoxLayout(widget1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_label = new QLabel(widget1);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        QFont font1;
        font1.setPointSize(14);
        user_label->setFont(font1);
        user_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(user_label);

        userEdit = new QLineEdit(widget1);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        horizontalLayout->addWidget(userEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        oldpwd_label = new QLabel(widget1);
        oldpwd_label->setObjectName(QString::fromUtf8("oldpwd_label"));
        oldpwd_label->setFont(font1);
        oldpwd_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(oldpwd_label);

        oldpwd_Edit = new QLineEdit(widget1);
        oldpwd_Edit->setObjectName(QString::fromUtf8("oldpwd_Edit"));

        horizontalLayout_2->addWidget(oldpwd_Edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        newpwd_label = new QLabel(widget1);
        newpwd_label->setObjectName(QString::fromUtf8("newpwd_label"));
        newpwd_label->setFont(font1);
        newpwd_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(newpwd_label);

        newpwd_Edit = new QLineEdit(widget1);
        newpwd_Edit->setObjectName(QString::fromUtf8("newpwd_Edit"));

        horizontalLayout_3->addWidget(newpwd_Edit);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        widget2 = new QWidget(change_pwd);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 260, 371, 31));
        horizontalLayout_5 = new QHBoxLayout(widget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        configureBt = new QPushButton(widget2);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        configureBt->setFont(font1);

        horizontalLayout_4->addWidget(configureBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        cancelBt = new QPushButton(widget2);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font1);

        horizontalLayout_4->addWidget(cancelBt);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        retranslateUi(change_pwd);

        QMetaObject::connectSlotsByName(change_pwd);
    } // setupUi

    void retranslateUi(QWidget *change_pwd)
    {
        change_pwd->setWindowTitle(QCoreApplication::translate("change_pwd", "Form", nullptr));
        label->setText(QCoreApplication::translate("change_pwd", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        user_label->setText(QCoreApplication::translate("change_pwd", "\347\224\250\346\210\267\345\220\215", nullptr));
        oldpwd_label->setText(QCoreApplication::translate("change_pwd", "\346\227\247\345\257\206\347\240\201", nullptr));
        newpwd_label->setText(QCoreApplication::translate("change_pwd", "\346\226\260\345\257\206\347\240\201", nullptr));
        configureBt->setText(QCoreApplication::translate("change_pwd", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("change_pwd", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_pwd: public Ui_change_pwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_PWD_H
