/********************************************************************************
** Form generated from reading UI file 'updatebudgetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBUDGETDIALOG_H
#define UI_UPDATEBUDGETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateBudgetDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QDoubleSpinBox *budgetEntered;

    void setupUi(QDialog *updateBudgetDialog)
    {
        if (updateBudgetDialog->objectName().isEmpty())
            updateBudgetDialog->setObjectName(QStringLiteral("updateBudgetDialog"));
        updateBudgetDialog->resize(390, 111);
        label = new QLabel(updateBudgetDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 12, 205, 16));
        label_2 = new QLabel(updateBudgetDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(13, 43, 16, 16));
        widget = new QWidget(updateBudgetDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 70, 228, 32));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_2->addWidget(okButton);

        budgetEntered = new QDoubleSpinBox(updateBudgetDialog);
        budgetEntered->setObjectName(QStringLiteral("budgetEntered"));
        budgetEntered->setGeometry(QRect(30, 40, 351, 24));
        budgetEntered->setAutoFillBackground(false);
        budgetEntered->setButtonSymbols(QAbstractSpinBox::NoButtons);
        budgetEntered->setMaximum(1e+41);

        retranslateUi(updateBudgetDialog);

        QMetaObject::connectSlotsByName(updateBudgetDialog);
    } // setupUi

    void retranslateUi(QDialog *updateBudgetDialog)
    {
        updateBudgetDialog->setWindowTitle(QApplication::translate("updateBudgetDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("updateBudgetDialog", "Please enter your desired budget:", nullptr));
        label_2->setText(QApplication::translate("updateBudgetDialog", "$", nullptr));
        cancelButton->setText(QApplication::translate("updateBudgetDialog", "Cancel", nullptr));
        okButton->setText(QApplication::translate("updateBudgetDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateBudgetDialog: public Ui_updateBudgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBUDGETDIALOG_H
