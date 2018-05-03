/********************************************************************************
** Form generated from reading UI file 'updatebudgetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
    QLabel *budgetPrompt;
    QLabel *dollarSign;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QDoubleSpinBox *budgetEntered;
    QLabel *budgetWarning;

    void setupUi(QDialog *updateBudgetDialog)
    {
        if (updateBudgetDialog->objectName().isEmpty())
            updateBudgetDialog->setObjectName(QStringLiteral("updateBudgetDialog"));
        updateBudgetDialog->resize(489, 111);
        budgetPrompt = new QLabel(updateBudgetDialog);
        budgetPrompt->setObjectName(QStringLiteral("budgetPrompt"));
        budgetPrompt->setGeometry(QRect(12, 12, 205, 16));
        dollarSign = new QLabel(updateBudgetDialog);
        dollarSign->setObjectName(QStringLiteral("dollarSign"));
        dollarSign->setGeometry(QRect(13, 43, 16, 16));
        layoutWidget = new QWidget(updateBudgetDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 70, 164, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_2->addWidget(okButton);

        budgetEntered = new QDoubleSpinBox(updateBudgetDialog);
        budgetEntered->setObjectName(QStringLiteral("budgetEntered"));
        budgetEntered->setGeometry(QRect(30, 40, 441, 24));
        budgetEntered->setAutoFillBackground(false);
        budgetEntered->setButtonSymbols(QAbstractSpinBox::NoButtons);
        budgetEntered->setDecimals(0);
        budgetEntered->setMaximum(1e+41);
        budgetWarning = new QLabel(updateBudgetDialog);
        budgetWarning->setObjectName(QStringLiteral("budgetWarning"));
        budgetWarning->setGeometry(QRect(30, 80, 244, 16));

        retranslateUi(updateBudgetDialog);

        QMetaObject::connectSlotsByName(updateBudgetDialog);
    } // setupUi

    void retranslateUi(QDialog *updateBudgetDialog)
    {
        updateBudgetDialog->setWindowTitle(QApplication::translate("updateBudgetDialog", "Dialog", nullptr));
        budgetPrompt->setText(QApplication::translate("updateBudgetDialog", "Please enter your desired budget:", nullptr));
        dollarSign->setText(QApplication::translate("updateBudgetDialog", "$", nullptr));
        cancelButton->setText(QApplication::translate("updateBudgetDialog", "Cancel", nullptr));
        okButton->setText(QApplication::translate("updateBudgetDialog", "OK", nullptr));
        budgetWarning->setText(QApplication::translate("updateBudgetDialog", "Please enter budget within your income.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateBudgetDialog: public Ui_updateBudgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBUDGETDIALOG_H
