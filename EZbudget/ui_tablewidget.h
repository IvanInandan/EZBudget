/********************************************************************************
** Form generated from reading UI file 'tablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWIDGET_H
#define UI_TABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tableWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableView;
    QVBoxLayout *verticalLayout;
    QPushButton *addTransactionButton;
    QPushButton *removeTransactionButton;
    QPushButton *editTransactionButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *tableWidget)
    {
        if (tableWidget->objectName().isEmpty())
            tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->resize(458, 218);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(tableWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableWidget(tableWidget);
        if (tableView->columnCount() < 4)
            tableView->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableView->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addTransactionButton = new QPushButton(tableWidget);
        addTransactionButton->setObjectName(QStringLiteral("addTransactionButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addTransactionButton->sizePolicy().hasHeightForWidth());
        addTransactionButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(addTransactionButton);

        removeTransactionButton = new QPushButton(tableWidget);
        removeTransactionButton->setObjectName(QStringLiteral("removeTransactionButton"));

        verticalLayout->addWidget(removeTransactionButton);

        editTransactionButton = new QPushButton(tableWidget);
        editTransactionButton->setObjectName(QStringLiteral("editTransactionButton"));

        verticalLayout->addWidget(editTransactionButton, 0, Qt::AlignLeft);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(tableWidget);

        QMetaObject::connectSlotsByName(tableWidget);
    } // setupUi

    void retranslateUi(QWidget *tableWidget)
    {
        tableWidget->setWindowTitle(QApplication::translate("tableWidget", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tableWidget", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tableWidget", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tableWidget", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableView->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tableWidget", "Amount", nullptr));
        addTransactionButton->setText(QApplication::translate("tableWidget", "Add Transaction", nullptr));
        removeTransactionButton->setText(QApplication::translate("tableWidget", "Remove Transaction", nullptr));
        editTransactionButton->setText(QApplication::translate("tableWidget", "Edit Transaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tableWidget: public Ui_tableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWIDGET_H
