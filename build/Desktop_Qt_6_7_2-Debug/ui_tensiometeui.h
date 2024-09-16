/********************************************************************************
** Form generated from reading UI file 'tensiometeui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENSIOMETEUI_H
#define UI_TENSIOMETEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tensiometeui
{
public:
    QWidget *insoleUI;

    void setupUi(QDialog *tensiometeui)
    {
        if (tensiometeui->objectName().isEmpty())
            tensiometeui->setObjectName("tensiometeui");
        tensiometeui->resize(938, 695);
        insoleUI = new QWidget(tensiometeui);
        insoleUI->setObjectName("insoleUI");
        insoleUI->setGeometry(QRect(30, 20, 861, 631));

        retranslateUi(tensiometeui);

        QMetaObject::connectSlotsByName(tensiometeui);
    } // setupUi

    void retranslateUi(QDialog *tensiometeui)
    {
        tensiometeui->setWindowTitle(QCoreApplication::translate("tensiometeui", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tensiometeui: public Ui_tensiometeui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENSIOMETEUI_H
