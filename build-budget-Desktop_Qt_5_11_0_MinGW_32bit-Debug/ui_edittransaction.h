/********************************************************************************
** Form generated from reading UI file 'edittransaction.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTRANSACTION_H
#define UI_EDITTRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editTransaction
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *transactionNameEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *transactionCategoryEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QDateEdit *transactionDateEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *transactionAmountEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *editTransaction)
    {
        if (editTransaction->objectName().isEmpty())
            editTransaction->setObjectName(QStringLiteral("editTransaction"));
        editTransaction->resize(556, 128);
        layoutWidget = new QWidget(editTransaction);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 564, 62));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        transactionNameEdit = new QLineEdit(layoutWidget);
        transactionNameEdit->setObjectName(QStringLiteral("transactionNameEdit"));

        verticalLayout->addWidget(transactionNameEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        transactionCategoryEdit = new QLineEdit(layoutWidget);
        transactionCategoryEdit->setObjectName(QStringLiteral("transactionCategoryEdit"));

        verticalLayout_2->addWidget(transactionCategoryEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        transactionDateEdit = new QDateEdit(layoutWidget);
        transactionDateEdit->setObjectName(QStringLiteral("transactionDateEdit"));
        transactionDateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        verticalLayout_3->addWidget(transactionDateEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        transactionAmountEdit = new QDoubleSpinBox(layoutWidget);
        transactionAmountEdit->setObjectName(QStringLiteral("transactionAmountEdit"));
        transactionAmountEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        verticalLayout_4->addWidget(transactionAmountEdit);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(editTransaction);

        QMetaObject::connectSlotsByName(editTransaction);
    } // setupUi

    void retranslateUi(QDialog *editTransaction)
    {
        editTransaction->setWindowTitle(QApplication::translate("editTransaction", "Edit Transaction", nullptr));
        label->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Name</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Category</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Date</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("editTransaction", "<html><head/><body><p align=\"center\">Amount</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editTransaction: public Ui_editTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTRANSACTION_H
