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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_updateBudgetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *updateBudgetDialog)
    {
        if (updateBudgetDialog->objectName().isEmpty())
            updateBudgetDialog->setObjectName(QStringLiteral("updateBudgetDialog"));
        updateBudgetDialog->resize(390, 111);
        verticalLayout = new QVBoxLayout(updateBudgetDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(updateBudgetDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(updateBudgetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(updateBudgetDialog);

        QMetaObject::connectSlotsByName(updateBudgetDialog);
    } // setupUi

    void retranslateUi(QDialog *updateBudgetDialog)
    {
        updateBudgetDialog->setWindowTitle(QApplication::translate("updateBudgetDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateBudgetDialog: public Ui_updateBudgetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBUDGETDIALOG_H
