/********************************************************************************
** Form generated from reading UI file 'expensedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSEDIALOG_H
#define UI_EXPENSEDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpenseDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *transactionNameLabel;
    QLineEdit *transactionNameEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *transactionCategoryLabel;
    QLineEdit *transactionCategoryEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *transactionDateLabel;
    QDateEdit *transactionDateEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *transactionAmountLabel;
    QDoubleSpinBox *transactionAmountEdit;

    void setupUi(QDialog *ExpenseDialog)
    {
        if (ExpenseDialog->objectName().isEmpty())
            ExpenseDialog->setObjectName(QStringLiteral("ExpenseDialog"));
        ExpenseDialog->resize(504, 139);
        buttonBox = new QDialogButtonBox(ExpenseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(340, 80, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(ExpenseDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 484, 66));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        transactionNameLabel = new QLabel(layoutWidget);
        transactionNameLabel->setObjectName(QStringLiteral("transactionNameLabel"));

        verticalLayout->addWidget(transactionNameLabel);

        transactionNameEdit = new QLineEdit(layoutWidget);
        transactionNameEdit->setObjectName(QStringLiteral("transactionNameEdit"));

        verticalLayout->addWidget(transactionNameEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        transactionCategoryLabel = new QLabel(layoutWidget);
        transactionCategoryLabel->setObjectName(QStringLiteral("transactionCategoryLabel"));

        verticalLayout_4->addWidget(transactionCategoryLabel);

        transactionCategoryEdit = new QLineEdit(layoutWidget);
        transactionCategoryEdit->setObjectName(QStringLiteral("transactionCategoryEdit"));

        verticalLayout_4->addWidget(transactionCategoryEdit);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        transactionDateLabel = new QLabel(layoutWidget);
        transactionDateLabel->setObjectName(QStringLiteral("transactionDateLabel"));

        verticalLayout_2->addWidget(transactionDateLabel);

        transactionDateEdit = new QDateEdit(layoutWidget);
        transactionDateEdit->setObjectName(QStringLiteral("transactionDateEdit"));
        transactionDateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        transactionDateEdit->setDate(QDate(2018, 3, 6));

        verticalLayout_2->addWidget(transactionDateEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        transactionAmountLabel = new QLabel(layoutWidget);
        transactionAmountLabel->setObjectName(QStringLiteral("transactionAmountLabel"));

        verticalLayout_3->addWidget(transactionAmountLabel);

        transactionAmountEdit = new QDoubleSpinBox(layoutWidget);
        transactionAmountEdit->setObjectName(QStringLiteral("transactionAmountEdit"));
        transactionAmountEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        transactionAmountEdit->setMaximum(1e+8);

        verticalLayout_3->addWidget(transactionAmountEdit);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(ExpenseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExpenseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExpenseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExpenseDialog);
    } // setupUi

    void retranslateUi(QDialog *ExpenseDialog)
    {
        ExpenseDialog->setWindowTitle(QApplication::translate("ExpenseDialog", "Add Transaction", nullptr));
        transactionNameLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\"><span style=\" color:#030303;\">Name</span></p></body></html>", nullptr));
        transactionCategoryLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Category</p></body></html>", nullptr));
        transactionDateLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Date</p></body></html>", nullptr));
        transactionDateEdit->setDisplayFormat(QApplication::translate("ExpenseDialog", "M/dd/yy", nullptr));
        transactionAmountLabel->setText(QApplication::translate("ExpenseDialog", "<html><head/><body><p align=\"center\">Amount</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpenseDialog: public Ui_ExpenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSEDIALOG_H
