/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

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

class Ui_add_user
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLineEdit *pwdEdit;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *configureBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBt;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *adminEdit;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *add_user)
    {
        if (add_user->objectName().isEmpty())
            add_user->setObjectName(QString::fromUtf8("add_user"));
        add_user->resize(400, 300);
        label_3 = new QLabel(add_user);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 30, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(add_user);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 341, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        pwdEdit = new QLineEdit(layoutWidget);
        pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));

        horizontalLayout_3->addWidget(pwdEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        layoutWidget1 = new QWidget(add_user);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 230, 238, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        configureBt = new QPushButton(layoutWidget1);
        configureBt->setObjectName(QString::fromUtf8("configureBt"));
        configureBt->setFont(font1);

        horizontalLayout->addWidget(configureBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelBt = new QPushButton(layoutWidget1);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font1);

        horizontalLayout->addWidget(cancelBt);

        layoutWidget2 = new QWidget(add_user);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 180, 182, 37));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);

        horizontalLayout_4->addWidget(comboBox);

        layoutWidget3 = new QWidget(add_user);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 80, 341, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        adminEdit = new QLineEdit(layoutWidget3);
        adminEdit->setObjectName(QString::fromUtf8("adminEdit"));

        horizontalLayout_2->addWidget(adminEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        retranslateUi(add_user);

        QMetaObject::connectSlotsByName(add_user);
    } // setupUi

    void retranslateUi(QWidget *add_user)
    {
        add_user->setWindowTitle(QCoreApplication::translate("add_user", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("add_user", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("add_user", "\345\257\206\347\240\201", nullptr));
        configureBt->setText(QCoreApplication::translate("add_user", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("add_user", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("add_user", "\346\235\203\351\231\220", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("add_user", "\347\256\241\347\220\206\345\221\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("add_user", "\346\224\266\350\220\245\345\221\230", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("add_user", "\350\200\201\346\235\277", nullptr));

        label->setText(QCoreApplication::translate("add_user", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_user: public Ui_add_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H
