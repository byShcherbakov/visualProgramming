/********************************************************************************
** Form generated from reading UI file 'climatwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIMATWINDOW_H
#define UI_CLIMATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClimatWindow
{
public:

    void setupUi(QWidget *ClimatWindow)
    {
        if (ClimatWindow->objectName().isEmpty())
            ClimatWindow->setObjectName("ClimatWindow");
        ClimatWindow->resize(1061, 713);

        retranslateUi(ClimatWindow);

        QMetaObject::connectSlotsByName(ClimatWindow);
    } // setupUi

    void retranslateUi(QWidget *ClimatWindow)
    {
        ClimatWindow->setWindowTitle(QCoreApplication::translate("ClimatWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClimatWindow: public Ui_ClimatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIMATWINDOW_H
