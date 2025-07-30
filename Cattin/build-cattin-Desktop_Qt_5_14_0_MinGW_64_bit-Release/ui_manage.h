/********************************************************************************
** Form generated from reading UI file 'manage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_H
#define UI_MANAGE_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manage
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *add_user_Bt;
    QPushButton *del_user_Bt;
    QPushButton *change_pwd_Bt;
    QPushButton *change_root_Bt;
    QPushButton *flush_user_Bt;
    QTableWidget *user_tableWidget;
    QWidget *tab_2;
    QPushButton *about_bill_Bt;
    QPushButton *flush_bill_Bt;
    QTableWidget *bill_tableWidget;
    QWidget *tab_4;
    QPushButton *add_food_Bt;
    QTableWidget *food_tableWidget;
    QPushButton *del_food_Bt;
    QPushButton *change_food_Bt;
    QPushButton *status_food_Bt;
    QPushButton *flush_food_Bt;
    QWidget *tab_3;
    QPushButton *add_drink_Bt;
    QTableWidget *drink_tableWidget;
    QPushButton *del_drink_Bt;
    QPushButton *change_drink_Bt;
    QPushButton *statu_drink_Bt;
    QPushButton *flush_drink_Bt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *reload_Bt;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit_Bt;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *name_Edit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *time_Edit;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *manage)
    {
        if (manage->objectName().isEmpty())
            manage->setObjectName(QString::fromUtf8("manage"));
        manage->resize(1000, 608);
        tabWidget = new QTabWidget(manage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 961, 501));
        QFont font;
        font.setPointSize(14);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        add_user_Bt = new QPushButton(tab);
        add_user_Bt->setObjectName(QString::fromUtf8("add_user_Bt"));
        add_user_Bt->setGeometry(QRect(10, 50, 91, 31));
        add_user_Bt->setFont(font);
        del_user_Bt = new QPushButton(tab);
        del_user_Bt->setObjectName(QString::fromUtf8("del_user_Bt"));
        del_user_Bt->setGeometry(QRect(10, 130, 91, 31));
        del_user_Bt->setFont(font);
        change_pwd_Bt = new QPushButton(tab);
        change_pwd_Bt->setObjectName(QString::fromUtf8("change_pwd_Bt"));
        change_pwd_Bt->setGeometry(QRect(10, 220, 91, 31));
        change_pwd_Bt->setFont(font);
        change_root_Bt = new QPushButton(tab);
        change_root_Bt->setObjectName(QString::fromUtf8("change_root_Bt"));
        change_root_Bt->setGeometry(QRect(10, 300, 91, 31));
        change_root_Bt->setFont(font);
        flush_user_Bt = new QPushButton(tab);
        flush_user_Bt->setObjectName(QString::fromUtf8("flush_user_Bt"));
        flush_user_Bt->setGeometry(QRect(10, 390, 91, 31));
        flush_user_Bt->setFont(font);
        user_tableWidget = new QTableWidget(tab);
        if (user_tableWidget->columnCount() < 3)
            user_tableWidget->setColumnCount(3);
        QFont font1;
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        user_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        user_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        user_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        user_tableWidget->setObjectName(QString::fromUtf8("user_tableWidget"));
        user_tableWidget->setGeometry(QRect(120, 30, 840, 420));
        user_tableWidget->horizontalHeader()->setDefaultSectionSize(280);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        about_bill_Bt = new QPushButton(tab_2);
        about_bill_Bt->setObjectName(QString::fromUtf8("about_bill_Bt"));
        about_bill_Bt->setGeometry(QRect(10, 140, 91, 31));
        about_bill_Bt->setFont(font);
        flush_bill_Bt = new QPushButton(tab_2);
        flush_bill_Bt->setObjectName(QString::fromUtf8("flush_bill_Bt"));
        flush_bill_Bt->setGeometry(QRect(10, 250, 91, 31));
        flush_bill_Bt->setFont(font);
        bill_tableWidget = new QTableWidget(tab_2);
        if (bill_tableWidget->columnCount() < 5)
            bill_tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        bill_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        bill_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        bill_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        bill_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        bill_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        bill_tableWidget->setObjectName(QString::fromUtf8("bill_tableWidget"));
        bill_tableWidget->setGeometry(QRect(110, 30, 840, 420));
        bill_tableWidget->horizontalHeader()->setDefaultSectionSize(168);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        add_food_Bt = new QPushButton(tab_4);
        add_food_Bt->setObjectName(QString::fromUtf8("add_food_Bt"));
        add_food_Bt->setGeometry(QRect(10, 50, 91, 31));
        add_food_Bt->setFont(font);
        food_tableWidget = new QTableWidget(tab_4);
        if (food_tableWidget->columnCount() < 4)
            food_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        food_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        food_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        food_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        food_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        food_tableWidget->setObjectName(QString::fromUtf8("food_tableWidget"));
        food_tableWidget->setGeometry(QRect(110, 30, 840, 420));
        food_tableWidget->horizontalHeader()->setDefaultSectionSize(210);
        del_food_Bt = new QPushButton(tab_4);
        del_food_Bt->setObjectName(QString::fromUtf8("del_food_Bt"));
        del_food_Bt->setGeometry(QRect(10, 130, 91, 31));
        del_food_Bt->setFont(font);
        change_food_Bt = new QPushButton(tab_4);
        change_food_Bt->setObjectName(QString::fromUtf8("change_food_Bt"));
        change_food_Bt->setGeometry(QRect(10, 210, 91, 31));
        change_food_Bt->setFont(font);
        status_food_Bt = new QPushButton(tab_4);
        status_food_Bt->setObjectName(QString::fromUtf8("status_food_Bt"));
        status_food_Bt->setGeometry(QRect(10, 290, 91, 31));
        status_food_Bt->setFont(font);
        flush_food_Bt = new QPushButton(tab_4);
        flush_food_Bt->setObjectName(QString::fromUtf8("flush_food_Bt"));
        flush_food_Bt->setGeometry(QRect(10, 380, 91, 31));
        flush_food_Bt->setFont(font);
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        add_drink_Bt = new QPushButton(tab_3);
        add_drink_Bt->setObjectName(QString::fromUtf8("add_drink_Bt"));
        add_drink_Bt->setGeometry(QRect(10, 60, 91, 31));
        add_drink_Bt->setFont(font);
        drink_tableWidget = new QTableWidget(tab_3);
        if (drink_tableWidget->columnCount() < 4)
            drink_tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        drink_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        drink_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font1);
        drink_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font1);
        drink_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        drink_tableWidget->setObjectName(QString::fromUtf8("drink_tableWidget"));
        drink_tableWidget->setGeometry(QRect(109, 39, 840, 420));
        drink_tableWidget->horizontalHeader()->setDefaultSectionSize(210);
        del_drink_Bt = new QPushButton(tab_3);
        del_drink_Bt->setObjectName(QString::fromUtf8("del_drink_Bt"));
        del_drink_Bt->setGeometry(QRect(10, 140, 91, 31));
        del_drink_Bt->setFont(font);
        change_drink_Bt = new QPushButton(tab_3);
        change_drink_Bt->setObjectName(QString::fromUtf8("change_drink_Bt"));
        change_drink_Bt->setGeometry(QRect(10, 220, 91, 31));
        change_drink_Bt->setFont(font);
        statu_drink_Bt = new QPushButton(tab_3);
        statu_drink_Bt->setObjectName(QString::fromUtf8("statu_drink_Bt"));
        statu_drink_Bt->setGeometry(QRect(10, 300, 91, 31));
        statu_drink_Bt->setFont(font);
        flush_drink_Bt = new QPushButton(tab_3);
        flush_drink_Bt->setObjectName(QString::fromUtf8("flush_drink_Bt"));
        flush_drink_Bt->setGeometry(QRect(10, 380, 91, 31));
        flush_drink_Bt->setFont(font);
        tabWidget->addTab(tab_3, QString());
        layoutWidget = new QWidget(manage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 560, 971, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        reload_Bt = new QPushButton(layoutWidget);
        reload_Bt->setObjectName(QString::fromUtf8("reload_Bt"));
        reload_Bt->setFont(font);

        horizontalLayout->addWidget(reload_Bt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exit_Bt = new QPushButton(layoutWidget);
        exit_Bt->setObjectName(QString::fromUtf8("exit_Bt"));
        exit_Bt->setFont(font);

        horizontalLayout->addWidget(exit_Bt);

        layoutWidget1 = new QWidget(manage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 961, 36));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);

        horizontalLayout_2->addWidget(label);

        name_Edit = new QLineEdit(layoutWidget1);
        name_Edit->setObjectName(QString::fromUtf8("name_Edit"));
        QFont font3;
        font3.setPointSize(6);
        name_Edit->setFont(font3);
        name_Edit->setEchoMode(QLineEdit::NoEcho);
        name_Edit->setReadOnly(false);

        horizontalLayout_2->addWidget(name_Edit);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);

        time_Edit = new QLineEdit(layoutWidget1);
        time_Edit->setObjectName(QString::fromUtf8("time_Edit"));
        time_Edit->setFont(font3);
        time_Edit->setEchoMode(QLineEdit::NoEcho);
        time_Edit->setReadOnly(true);

        horizontalLayout_3->addWidget(time_Edit);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        retranslateUi(manage);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(manage);
    } // setupUi

    void retranslateUi(QWidget *manage)
    {
        manage->setWindowTitle(QCoreApplication::translate("manage", "Form", nullptr));
        add_user_Bt->setText(QCoreApplication::translate("manage", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        del_user_Bt->setText(QCoreApplication::translate("manage", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        change_pwd_Bt->setText(QCoreApplication::translate("manage", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        change_root_Bt->setText(QCoreApplication::translate("manage", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        flush_user_Bt->setText(QCoreApplication::translate("manage", "\345\210\267\346\226\260\346\230\276\347\244\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = user_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("manage", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = user_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("manage", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = user_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("manage", "\346\235\203\351\231\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("manage", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        about_bill_Bt->setText(QCoreApplication::translate("manage", "\350\264\246\345\215\225\350\257\246\346\203\205", nullptr));
        flush_bill_Bt->setText(QCoreApplication::translate("manage", "\345\210\267\346\226\260\350\264\246\345\215\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bill_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("manage", "\344\272\244\346\230\223\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = bill_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("manage", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = bill_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("manage", "\346\241\214\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = bill_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("manage", "\346\266\210\350\264\271\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = bill_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("manage", "\346\224\266\351\223\266\344\272\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("manage", "\350\264\246\345\215\225", nullptr));
        add_food_Bt->setText(QCoreApplication::translate("manage", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = food_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("manage", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = food_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("manage", "\351\244\220\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = food_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("manage", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = food_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("manage", "\347\212\266\346\200\201", nullptr));
        del_food_Bt->setText(QCoreApplication::translate("manage", "\345\210\240\351\231\244\350\217\234\345\223\201", nullptr));
        change_food_Bt->setText(QCoreApplication::translate("manage", "\344\277\256\346\224\271\344\273\267\346\240\274", nullptr));
        status_food_Bt->setText(QCoreApplication::translate("manage", "\344\277\256\346\224\271\347\212\266\346\200\201", nullptr));
        flush_food_Bt->setText(QCoreApplication::translate("manage", "\345\210\267\346\226\260\346\230\276\347\244\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("manage", "\350\217\234\345\215\225\347\256\241\347\220\206", nullptr));
        add_drink_Bt->setText(QCoreApplication::translate("manage", "\346\267\273\345\212\240\351\245\256\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = drink_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("manage", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = drink_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("manage", "\351\244\220\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = drink_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("manage", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = drink_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("manage", "\347\212\266\346\200\201", nullptr));
        del_drink_Bt->setText(QCoreApplication::translate("manage", "\345\210\240\351\231\244\351\245\256\345\223\201", nullptr));
        change_drink_Bt->setText(QCoreApplication::translate("manage", "\344\277\256\346\224\271\344\273\267\346\240\274", nullptr));
        statu_drink_Bt->setText(QCoreApplication::translate("manage", "\344\277\256\346\224\271\347\212\266\346\200\201", nullptr));
        flush_drink_Bt->setText(QCoreApplication::translate("manage", "\345\210\267\346\226\260\346\230\276\347\244\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("manage", "\351\245\256\345\223\201\347\256\241\347\220\206", nullptr));
        reload_Bt->setText(QCoreApplication::translate("manage", "\351\207\215\346\226\260\347\231\273\345\275\225", nullptr));
        exit_Bt->setText(QCoreApplication::translate("manage", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("manage", "\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("manage", "\346\227\266\351\227\264\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manage: public Ui_manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_H
