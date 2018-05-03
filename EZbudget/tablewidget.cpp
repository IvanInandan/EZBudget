#include "tablewidget.h"
#include "ui_tablewidget.h"
#include "expensedialog.h"
#include "removedialog.h"
#include "rowselection.h"
#include <QTableWidget>
#include "maindashboard.h"
#include <QMessageBox>
#include <QDebug>
#include "databasereaderwriter.h"
#include "account.h"
#include "edittransaction.h"

tableWidget::tableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tableWidget)
{
    ui->setupUi(this);
    setMinimumSize(800, 500);
    setMaximumSize(800, 500);
    setWindowTitle("Transactions");
    setStyleSheet("QWidget {background: #a9e5aa}");
}

tableWidget::~tableWidget()
{
    delete ui;
}

void tableWidget::on_addTransactionButton_clicked()
{

    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();

    int res;
    int row = ui->tableView->rowCount();
    QString transacName;
    QString transacDate;
    QString transacCategory;
    QString transacType;
    double transacAmount;

    ExpenseDialog ed(this);
    res = ed.exec();
    if (res == QDialog::Rejected)
        return;

    transacName = ed.transactionName();
    transacDate = ed.transactionDate().toString("M/dd/yy");
    transacAmount = ed.transactionAmount();
    transacCategory = ed.transactionCategory();
    transacType = windowTitle();

    ui->tableView->insertRow(ui->tableView->rowCount());
    ui->tableView->setItem(row, NAME,
                           new QTableWidgetItem(transacName));
    ui->tableView->setItem(row, CATEGORY,
                           new QTableWidgetItem(transacCategory));
    ui->tableView->setItem(row, DATE,
                           new QTableWidgetItem(transacDate));
    ui->tableView->setItem(row, AMOUNT,
                           new QTableWidgetItem(QString::number(transacAmount)));

    currentAccount->addTransactions(transacCategory, transacName, transacDate, transacType, transacAmount);
    db -> addTransaction(transacCategory, transacName, transacDate, transacType, transacAmount);
}


void tableWidget::on_removeTransactionButton_clicked()
{
    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();
    mainDashboard *currentDashboard = currentAccount->getDash();

    QItemSelectionModel *rowCheck = ui->tableView->selectionModel();
    QModelIndexList selectRowCheck = rowCheck->selectedRows();
    if(selectRowCheck.size()!=1)
    {
        qDebug() << "Selection Error";
        QMessageBox rowError;
        rowError.setText("No rows have been selected! Please select one row.");
        rowError.exec();
        return;
    }


    QItemSelectionModel *select = ui->tableView->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    if(selectedRows.size()!=1)
    {
        // Error
        qDebug() << "Error";
    }
    QModelIndex index = selectedRows.at(0);
    int transacRow = index.row();
    qDebug() << "Row is " << transacRow;


    ui->tableView->removeRow(transacRow);

    QString transacType;
    if(currentDashboard->getFlag() == 0)
    {
        transacType = "Expenses";
    }

    currentAccount->removeTransactions(transacRow, transacType);
    db -> removeTransaction(transacRow, transacType);
}

void tableWidget::on_editTransactionButton_clicked()
{
    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();
    mainDashboard *currentDashboard = currentAccount->getDash();

    QItemSelectionModel *rowCheck = ui->tableView->selectionModel();
    QModelIndexList selectRowCheck = rowCheck->selectedRows();
    if(selectRowCheck.size()!=1)
    {
        qDebug() << "Selection Error";
        QMessageBox rowError;
        rowError.setText("No rows have been selected! Please select one row.");
        rowError.exec();
        return;
    }

    int editPass;
    editTransaction edit(this);
    editPass = edit.exec();

    if(editPass == QDialog::Rejected)
        return;

    QString transacName = edit.transactionName();
    QString transacDate = edit.transactionDate().toString("M/dd/yy");
    QString transacCategory = edit.transactionCategory();
    double transacAmount = edit.transactionAmount();


    // Changes UI Display of Table ------------------------------------------------------

    QItemSelectionModel *select = ui->tableView->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    if(selectedRows.size()!=1)
    {
        // Error
        qDebug() << "Error";
    }
    QModelIndex index = selectedRows.at(0);
    int transacRow = index.row();

    qDebug() << "Row is " << transacRow;


    ui->tableView->setItem(transacRow, NAME,
                           new QTableWidgetItem(transacName));
    ui->tableView->setItem(transacRow, CATEGORY,
                           new QTableWidgetItem(transacCategory));
    ui->tableView->setItem(transacRow, DATE,
                           new QTableWidgetItem(transacDate));

    ui->tableView->setItem(transacRow, AMOUNT,
                           new QTableWidgetItem(QString::number(transacAmount)));

    QString transactionType;
    if(currentDashboard->getFlag() == 0)
    {
        transactionType = "Expenses";
    }


    qDebug() << "Transaction Type: " << transactionType << "\n";

    currentAccount->editTransactions(transacCategory, transacName, transacDate, transactionType, transacAmount, transacRow); // Edits Account
    db->editTransaction(transacCategory, transacName, transacDate, transactionType, transacAmount, transacRow);  // Edits Database


}

void tableWidget::updateUi(QString type)
{
    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();
    QString transacName, transacDate, transacCategory;
    int amount;


    for(int i = 0; i < currentAccount->getTotaNumberOfTransactions(type); i++)
    {
        int row = ui->tableView->rowCount();

        currentAccount->getTransaction(row, transacCategory, transacName, transacDate, type, amount);

        ui->tableView->insertRow(row);
        ui->tableView->setItem(row, NAME, new QTableWidgetItem(transacName));
        ui->tableView->setItem(row, CATEGORY, new QTableWidgetItem(transacCategory));
        ui->tableView->setItem(row, DATE, new QTableWidgetItem(transacDate));
        ui->tableView->setItem(row, AMOUNT, new QTableWidgetItem(QString::number(amount)));
    }
}

int tableWidget::getRowCount()
{
    return ui->tableView->rowCount();
}
