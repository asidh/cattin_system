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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *addBt;
    QPushButton *submitBt;
    QPushButton *deleteBt;
    QPushButton *exitfoodBt;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *foodtableWidget;
    QWidget *tab_2;
    QTableWidget *drinktableWidget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *ordertableWidget;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 500);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 160, 181, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget_3 = new QWidget(Widget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(320, 300, 181, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        lineEdit_4 = new QLineEdit(layoutWidget_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        layoutWidget_4 = new QWidget(Widget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(320, 230, 181, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        lineEdit_3 = new QLineEdit(layoutWidget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        addBt = new QPushButton(Widget);
        addBt->setObjectName(QString::fromUtf8("addBt"));
        addBt->setGeometry(QRect(330, 360, 61, 31));
        QFont font1;
        font1.setPointSize(12);
        addBt->setFont(font1);
        submitBt = new QPushButton(Widget);
        submitBt->setObjectName(QString::fromUtf8("submitBt"));
        submitBt->setGeometry(QRect(360, 410, 111, 31));
        submitBt->setFont(font1);
        deleteBt = new QPushButton(Widget);
        deleteBt->setObjectName(QString::fromUtf8("deleteBt"));
        deleteBt->setGeometry(QRect(420, 360, 61, 31));
        QFont font2;
        font2.setPointSize(13);
        deleteBt->setFont(font2);
        exitfoodBt = new QPushButton(Widget);
        exitfoodBt->setObjectName(QString::fromUtf8("exitfoodBt"));
        exitfoodBt->setGeometry(QRect(360, 460, 111, 31));
        exitfoodBt->setFont(font1);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 291, 441));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(18);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font4;
        font4.setPointSize(16);
        tabWidget->setFont(font4);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        foodtableWidget = new QTableWidget(tab);
        foodtableWidget->setObjectName(QString::fromUtf8("foodtableWidget"));
        foodtableWidget->setGeometry(QRect(10, 0, 261, 341));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        drinktableWidget = new QTableWidget(tab_2);
        drinktableWidget->setObjectName(QString::fromUtf8("drinktableWidget"));
        drinktableWidget->setGeometry(QRect(10, 0, 261, 341));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(520, 40, 261, 401));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        ordertableWidget = new QTableWidget(widget1);
        ordertableWidget->setObjectName(QString::fromUtf8("ordertableWidget"));

        verticalLayout_2->addWidget(ordertableWidget);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(320, 100, 181, 32));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget3 = new QWidget(Widget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(610, 460, 171, 38));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Agency FB"));
        font5.setPointSize(16);
        label_5->setFont(font5);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEdit_5 = new QLineEdit(widget3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\344\273\275\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\346\241\214\345\217\267", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\244\207\346\263\250", nullptr));
        addBt->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        submitBt->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
        deleteBt->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        exitfoodBt->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272\347\202\271\351\244\220", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\217\234\345\215\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\344\270\273\351\244\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\351\245\256\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\267\262\347\202\271\350\217\234\345\215\225", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\272\217\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\200\273\351\242\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
