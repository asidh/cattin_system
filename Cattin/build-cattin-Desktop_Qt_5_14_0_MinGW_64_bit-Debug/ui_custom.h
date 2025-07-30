/********************************************************************************
** Form generated from reading UI file 'custom.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_H
#define UI_CUSTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_custom
{
public:

    void setupUi(QWidget *custom)
    {
        if (custom->objectName().isEmpty())
            custom->setObjectName(QString::fromUtf8("custom"));
        custom->resize(400, 300);

        retranslateUi(custom);

        QMetaObject::connectSlotsByName(custom);
    } // setupUi

    void retranslateUi(QWidget *custom)
    {
        custom->setWindowTitle(QCoreApplication::translate("custom", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class custom: public Ui_custom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_H
