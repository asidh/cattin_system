/********************************************************************************
** Form generated from reading UI file 'change_user_root.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_USER_ROOT_H
#define UI_CHANGE_USER_ROOT_H

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

class Ui_change_user_root
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *user_Edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *pwd_Edit;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *change_user_root)
    {
        if (change_user_root->objectName().isEmpty())
            change_user_root->setObjectName(QString::fromUtf8("change_user_root"));
        change_user_root->resize(400, 300);
        widget = new QWidget(change_user_root);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 240, 361, 41));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        configureBt = new QPushButton(widget);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        QFont font;
        font.setPointSize(14);
        configureBt->setFont(font);

        horizontalLayout_4->addWidget(configureBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        cancelBt = new QPushButton(widget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font);

        horizontalLayout_4->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        widget1 = new QWidget(change_user_root);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 20, 271, 41));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        widget2 = new QWidget(change_user_root);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(11, 92, 361, 111));
        horizontalLayout_7 = new QHBoxLayout(widget2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        user_Edit = new QLineEdit(widget2);
        user_Edit->setObjectName(QString::fromUtf8("user_Edit"));

        horizontalLayout->addWidget(user_Edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        pwd_Edit = new QLineEdit(widget2);
        pwd_Edit->setObjectName(QString::fromUtf8("pwd_Edit"));

        horizontalLayout_2->addWidget(pwd_Edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);

        horizontalSpacer_8 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        retranslateUi(change_user_root);

        QMetaObject::connectSlotsByName(change_user_root);
    } // setupUi

    void retranslateUi(QWidget *change_user_root)
    {
        change_user_root->setWindowTitle(QCoreApplication::translate("change_user_root", "Form", nullptr));
        configureBt->setText(QCoreApplication::translate("change_user_root", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("change_user_root", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("change_user_root", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        label_2->setText(QCoreApplication::translate("change_user_root", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("change_user_root", "\345\257\206\347\240\201  ", nullptr));
        label_4->setText(QCoreApplication::translate("change_user_root", "\346\226\260\346\235\203\351\231\220", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("change_user_root", "\347\256\241\347\220\206\345\221\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("change_user_root", "\346\224\266\350\220\245\345\221\230", nullptr));

    } // retranslateUi

};

namespace Ui {
    class change_user_root: public Ui_change_user_root {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_USER_ROOT_H
