/********************************************************************************
** Form generated from reading UI file 'change_drink_status.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_DRINK_STATUS_H
#define UI_CHANGE_DRINK_STATUS_H

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

class Ui_change_drink_status
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *cinfigureBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *number_Edit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *change_drink_status)
    {
        if (change_drink_status->objectName().isEmpty())
            change_drink_status->setObjectName(QString::fromUtf8("change_drink_status"));
        change_drink_status->resize(400, 300);
        label = new QLabel(change_drink_status);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        widget = new QWidget(change_drink_status);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 240, 311, 41));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cinfigureBt = new QPushButton(widget);
        cinfigureBt->setObjectName(QString::fromUtf8("cinfigureBt"));
        QFont font1;
        font1.setPointSize(14);
        cinfigureBt->setFont(font1);

        horizontalLayout_3->addWidget(cinfigureBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cancelBt = new QPushButton(widget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        cancelBt->setFont(font1);

        horizontalLayout_3->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        widget1 = new QWidget(change_drink_status);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(61, 81, 279, 67));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        number_Edit = new QLineEdit(widget1);
        number_Edit->setObjectName(QString::fromUtf8("number_Edit"));
        number_Edit->setFont(font1);

        horizontalLayout->addWidget(number_Edit);

        widget2 = new QWidget(change_drink_status);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(62, 155, 281, 51));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font1);

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        retranslateUi(change_drink_status);

        QMetaObject::connectSlotsByName(change_drink_status);
    } // setupUi

    void retranslateUi(QWidget *change_drink_status)
    {
        change_drink_status->setWindowTitle(QCoreApplication::translate("change_drink_status", "Form", nullptr));
        label->setText(QCoreApplication::translate("change_drink_status", "\344\277\256\346\224\271\351\245\256\345\223\201\347\212\266\346\200\201", nullptr));
        cinfigureBt->setText(QCoreApplication::translate("change_drink_status", "\347\241\256\350\256\244", nullptr));
        cancelBt->setText(QCoreApplication::translate("change_drink_status", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("change_drink_status", "\345\272\217\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("change_drink_status", "\347\212\266\346\200\201", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("change_drink_status", "\346\234\211", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("change_drink_status", "\346\227\240", nullptr));

    } // retranslateUi

};

namespace Ui {
    class change_drink_status: public Ui_change_drink_status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_DRINK_STATUS_H
