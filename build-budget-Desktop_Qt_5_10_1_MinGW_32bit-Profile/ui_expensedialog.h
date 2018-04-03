/********************************************************************************
** Form generated from reading UI file 'expensedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSEDIALOG_H
#define UI_EXPENSEDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpenseDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *transactionNameLabel;
    QLineEdit *transactionNameEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *transactionCategoryLabel;
    QComboBox *transactionCategoryEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *transactionDateLabel;
    QDateEdit *transactionDateEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *transactionAmountLabel;
    QDoubleSpinBox *transactionAmountEdit;
    QVBoxLayout *verticalLayout_6;
    QLabel *transactionTypeLabel;
    QComboBox *transactionType;

    void setupUi(QDialog *ExpenseDialog)
    {
        if (ExpenseDialog->objectName().isEmpty())
            ExpenseDialog->setObjectName(QStringLiteral("ExpenseDialog"));
        ExpenseDialog->resize(504, 95);
        buttonBox = new QDialogButtonBox(ExpenseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(340, 60, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(ExpenseDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 484, 43));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        transactionNameLabel = new QLabel(widget);
        transactionNameLabel->setObjectName(QStringLiteral("transactionNameLabel"));

        verticalLayout->addWidget(transactionNameLabel);

        transactionNameEdit = new QLineEdit(widget);
        transactionNameEdit->setObjectName(QStringLiteral("transactionNameEdit"));

        verticalLayout->addWidget(transactionNameEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        transactionCategoryLabel = new QLabel(widget);
        transactionCategoryLabel->setObjectName(QStringLiteral("transactionCategoryLabel"));

        verticalLayout_4->addWidget(transactionCategoryLabel);

        transactionCategoryEdit = new QComboBox(widget);
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->setObjectName(QStringLiteral("transactionCategoryEdit"));

        verticalLayout_4->addWidget(transactionCategoryEdit);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        transactionDateLabel = new QLabel(widget);
        transactionDateLabel->setObjectName(QStringLiteral("transactionDateLabel"));

        verticalLayout_2->addWidget(transactionDateLabel);

        transactionDateEdit = new QDateEdit(widget);
        transactionDateEdit->setObjectName(QStringLiteral("transactionDateEdit"));
        transactionDateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        transactionDateEdit->setDate(QDate(2018, 3, 6));

        verticalLayout_2->addWidget(transactionDateEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        transactionAmountLabel = new QLabel(widget);
        transactionAmountLabel->setObjectName(QStringLiteral("transactionAmountLabel"));

        verticalLayout_3->addWidget(transactionAmountLabel);

        transactionAmountEdit = new QDoubleSpinBox(widget);
        transactionAmountEdit->setObjectName(QStringLiteral("transactionAmountEdit"));
        transactionAmountEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        transactionAmountEdit->setMaximum(1e+8);

        verticalLayout_3->addWidget(transactionAmountEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        transactionTypeLabel = new QLabel(widget);
        transactionTypeLabel->setObjectName(QStringLiteral("transactionTypeLabel"));

        verticalLayout_6->addWidget(transactionTypeLabel);

        transactionType = new QComboBox(widget);
        transactionType->addItem(QString());
        transactionType->addItem(QString());
        transactionType->setObjectName(QStringLiteral("transactionType"));

        verticalLayout_6->addWidget(transactionType);


        horizontalLayout->addLayout(verticalLayout_6);


        retranslateUi(ExpenseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExpenseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExpenseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExpenseDialog);
    } // setupUi

    void retranslateUi(QDialog *ExpenseDialog)
    {
        ExpenseDialog->setWindowTitle(QApplication::translate("ExpenseDialog", "Dialog", nullptr));
        transactionNameLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\"><span style=\" color:#030303;\">Name</span></p></body></html>", nullptr));
        transactionCategoryLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Category</p></body></html>", nullptr));
        transactionCategoryEdit->setItemText(0, QApplication::translate("ExpenseDialog", "Bills", nullptr));
        transactionCategoryEdit->setItemText(1, QApplication::translate("ExpenseDialog", "Grocery/Food", nullptr));
        transactionCategoryEdit->setItemText(2, QApplication::translate("ExpenseDialog", "Gas", nullptr));
        transactionCategoryEdit->setItemText(3, QApplication::translate("ExpenseDialog", "Entertainment/Misc", nullptr));

        transactionDateLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Date</p></body></html>", nullptr));
        transactionDateEdit->setDisplayFormat(QApplication::translate("ExpenseDialog", "M/dd/yy", nullptr));
        transactionAmountLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Amount</p></body></html>", nullptr));
        transactionTypeLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Type</p></body></html>", nullptr));
        transactionType->setItemText(0, QApplication::translate("ExpenseDialog", "Expense", nullptr));
        transactionType->setItemText(1, QApplication::translate("ExpenseDialog", "Income", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ExpenseDialog: public Ui_ExpenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSEDIALOG_H
