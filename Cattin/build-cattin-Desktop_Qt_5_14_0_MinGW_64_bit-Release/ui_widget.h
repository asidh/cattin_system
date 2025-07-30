/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *adminLabel;
    QLineEdit *adminEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pwdLabel;
    QLineEdit *pwdEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *logBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitlogBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 320);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 141, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 80, 291, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        adminLabel = new QLabel(layoutWidget);
        adminLabel->setObjectName(QString::fromUtf8("adminLabel"));
        QFont font1;
        font1.setPointSize(13);
        adminLabel->setFont(font1);
        adminLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(adminLabel);

        adminEdit = new QLineEdit(layoutWidget);
        adminEdit->setObjectName(QString::fromUtf8("adminEdit"));
        QFont font2;
        font2.setPointSize(14);
        adminEdit->setFont(font2);
        adminEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_4->addWidget(adminEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pwdLabel = new QLabel(layoutWidget);
        pwdLabel->setObjectName(QString::fromUtf8("pwdLabel"));
        pwdLabel->setFont(font1);
        pwdLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pwdLabel);

        pwdEdit = new QLineEdit(layoutWidget);
        pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
        pwdEdit->setFont(font2);
        pwdEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pwdEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        logBt = new QPushButton(layoutWidget);
        logBt->setObjectName(QString::fromUtf8("logBt"));
        logBt->setFont(font2);

        horizontalLayout_3->addWidget(logBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        exitlogBt = new QPushButton(layoutWidget);
        exitlogBt->setObjectName(QString::fromUtf8("exitlogBt"));
        exitlogBt->setFont(font2);

        horizontalLayout_3->addWidget(exitlogBt);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        adminLabel->setText(QCoreApplication::translate("Widget", "\350\264\246\345\217\267", nullptr));
        pwdLabel->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        logBt->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        exitlogBt->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
