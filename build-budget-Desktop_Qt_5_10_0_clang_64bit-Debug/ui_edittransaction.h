/********************************************************************************
** Form generated from reading UI file 'edittransaction.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTRANSACTION_H
#define UI_EDITTRANSACTION_H

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

class Ui_editTransaction
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *Name;
    QLabel *transactionNameLabel;
    QLineEdit *transactionNameEdit;
    QVBoxLayout *Category;
    QLabel *transactionCategoryLabel;
    QComboBox *transactionCategoryEdit;
    QVBoxLayout *Date;
    QLabel *transactionDateLabel;
    QDateEdit *transactionDateEdit;
    QVBoxLayout *Amount;
    QLabel *transactionAmountLabel;
    QDoubleSpinBox *transactionAmountEdit;
    QVBoxLayout *Type;
    QLabel *transactionTypeLabel;
    QComboBox *transactionTypeEdit;

    void setupUi(QDialog *editTransaction)
    {
        if (editTransaction->objectName().isEmpty())
            editTransaction->setObjectName(QStringLiteral("editTransaction"));
        editTransaction->resize(556, 111);
        buttonBox = new QDialogButtonBox(editTransaction);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(200, 80, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(editTransaction);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 535, 62));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Name = new QVBoxLayout();
        Name->setObjectName(QStringLiteral("Name"));
        transactionNameLabel = new QLabel(layoutWidget);
        transactionNameLabel->setObjectName(QStringLiteral("transactionNameLabel"));

        Name->addWidget(transactionNameLabel);

        transactionNameEdit = new QLineEdit(layoutWidget);
        transactionNameEdit->setObjectName(QStringLiteral("transactionNameEdit"));

        Name->addWidget(transactionNameEdit);


        horizontalLayout_2->addLayout(Name);

        Category = new QVBoxLayout();
        Category->setObjectName(QStringLiteral("Category"));
        transactionCategoryLabel = new QLabel(layoutWidget);
        transactionCategoryLabel->setObjectName(QStringLiteral("transactionCategoryLabel"));

        Category->addWidget(transactionCategoryLabel);

        transactionCategoryEdit = new QComboBox(layoutWidget);
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->addItem(QString());
        transactionCategoryEdit->setObjectName(QStringLiteral("transactionCategoryEdit"));

        Category->addWidget(transactionCategoryEdit);


        horizontalLayout_2->addLayout(Category);

        Date = new QVBoxLayout();
        Date->setObjectName(QStringLiteral("Date"));
        transactionDateLabel = new QLabel(layoutWidget);
        transactionDateLabel->setObjectName(QStringLiteral("transactionDateLabel"));

        Date->addWidget(transactionDateLabel);

        transactionDateEdit = new QDateEdit(layoutWidget);
        transactionDateEdit->setObjectName(QStringLiteral("transactionDateEdit"));
        transactionDateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        transactionDateEdit->setDate(QDate(2018, 3, 6));

        Date->addWidget(transactionDateEdit);


        horizontalLayout_2->addLayout(Date);

        Amount = new QVBoxLayout();
        Amount->setObjectName(QStringLiteral("Amount"));
        transactionAmountLabel = new QLabel(layoutWidget);
        transactionAmountLabel->setObjectName(QStringLiteral("transactionAmountLabel"));

        Amount->addWidget(transactionAmountLabel);

        transactionAmountEdit = new QDoubleSpinBox(layoutWidget);
        transactionAmountEdit->setObjectName(QStringLiteral("transactionAmountEdit"));
        transactionAmountEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        transactionAmountEdit->setMaximum(1e+8);

        Amount->addWidget(transactionAmountEdit);


        horizontalLayout_2->addLayout(Amount);

        Type = new QVBoxLayout();
        Type->setObjectName(QStringLiteral("Type"));
        transactionTypeLabel = new QLabel(layoutWidget);
        transactionTypeLabel->setObjectName(QStringLiteral("transactionTypeLabel"));

        Type->addWidget(transactionTypeLabel);

        transactionTypeEdit = new QComboBox(layoutWidget);
        transactionTypeEdit->addItem(QString());
        transactionTypeEdit->addItem(QString());
        transactionTypeEdit->setObjectName(QStringLiteral("transactionTypeEdit"));

        Type->addWidget(transactionTypeEdit);


        horizontalLayout_2->addLayout(Type);


        retranslateUi(editTransaction);
        QObject::connect(buttonBox, SIGNAL(accepted()), editTransaction, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editTransaction, SLOT(reject()));

        QMetaObject::connectSlotsByName(editTransaction);
    } // setupUi

    void retranslateUi(QDialog *editTransaction)
    {
        editTransaction->setWindowTitle(QApplication::translate("editTransaction", "Dialog", nullptr));
        transactionNameLabel->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\"><span style=\" color:#030303;\">Name</span></p></body></html>", nullptr));
        transactionCategoryLabel->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Category</p></body></html>", nullptr));
        transactionCategoryEdit->setItemText(0, QApplication::translate("editTransaction", "Bills", nullptr));
        transactionCategoryEdit->setItemText(1, QApplication::translate("editTransaction", "Grocery/Food", nullptr));
        transactionCategoryEdit->setItemText(2, QApplication::translate("editTransaction", "Gas", nullptr));
        transactionCategoryEdit->setItemText(3, QApplication::translate("editTransaction", "Entertainment/Misc", nullptr));

        transactionDateLabel->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Date</p></body></html>", nullptr));
        transactionDateEdit->setDisplayFormat(QApplication::translate("editTransaction", "M/dd/yy", nullptr));
        transactionAmountLabel->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Amount</p></body></html>", nullptr));
        transactionTypeLabel->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Type</p></body></html>", nullptr));
        transactionTypeEdit->setItemText(0, QApplication::translate("editTransaction", "Expense", nullptr));
        transactionTypeEdit->setItemText(1, QApplication::translate("editTransaction", "Income", nullptr));

    } // retranslateUi

};

namespace Ui {
    class editTransaction: public Ui_editTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTRANSACTION_H
