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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateBudgetDialog
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *budgetEntered;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *updateBudgetDialog)
    {
        if (updateBudgetDialog->objectName().isEmpty())
            updateBudgetDialog->setObjectName(QStringLiteral("updateBudgetDialog"));
        updateBudgetDialog->resize(390, 111);
        label = new QLabel(updateBudgetDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 12, 205, 16));
        widget = new QWidget(updateBudgetDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 371, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        budgetEntered = new QLineEdit(widget);
        budgetEntered->setObjectName(QStringLiteral("budgetEntered"));

        horizontalLayout->addWidget(budgetEntered);

        widget1 = new QWidget(updateBudgetDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(160, 70, 228, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(widget1);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        okButton = new QPushButton(widget1);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_2->addWidget(okButton);


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
