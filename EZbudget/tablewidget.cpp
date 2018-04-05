#include "tablewidget.h"
#include "ui_tablewidget.h"
#include "expensedialog.h"
#include "removedialog.h"
#include "rowselection.h"
#include <QTableWidget>
#include <QDebug>
#include "account.h"
#include "category.h"
#include "edittransaction.h"

tableWidget::tableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tableWidget)
{
    ui->setupUi(this);
    setMinimumSize(800, 500);
    setMaximumSize(800, 500);
    setWindowTitle("Transactions");
}

tableWidget::~tableWidget()
{
    delete ui;
}

void tableWidget::on_addTransactionButton_clicked()
{
  Account *currentAccount = new Account();
  currentAccount->thisAcc();

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

    //ed.setWindowTitle("Add Transaction");
    transacName = ed.transactionName();
    transacDate = ed.transactionDate().toString("M/dd/yy");
    transacAmount = ed.transactionAmount();
    transacCategory = ed.transactionCategory();
    transacType = windowTitle();
   // transacType = ed.transactionType(); // Check

    ui->tableView->insertRow(ui->tableView->rowCount());
    ui->tableView->setItem(row, NAME,
                           new QTableWidgetItem(transacName));
    ui->tableView->setItem(row, CATEGORY,
                           new QTableWidgetItem(transacCategory));
    ui->tableView->setItem(row, DATE,
                           new QTableWidgetItem(transacDate));
    ui->tableView->setItem(row, AMOUNT,
                           new QTableWidgetItem(QString::number(transacAmount)));
  /*
    ui->tableView->setItem(row, DATE,
                           new QTableWidgetItem(transacType));
                           */


for(int i=0;i<4;i++)
{
    Category C;
    currentAccount->getCategory(i,C);

    if(transacCategory == C.getCategoryName())
    {
     C.addTransaction(transacCategory, transacName, transacDate, transacAmount, transacType);
    }
    currentAccount->setCategory(i,C);
}


}



void tableWidget::on_removeTransactionButton_clicked()
{
    Account *currentAccount = new Account;
    currentAccount->thisAcc();

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

    /*
    int rem, transacRow;

    RemoveDialog rd(this);
    rem = rd.exec();

    if(rem == QDialog::Rejected)
        return;


    rd.setWindowTitle("Remove Transaction");

    transacRow = rd.removeRowNumber();
    */

    ui->tableView->removeRow(transacRow);

    /*for(int i=0;i<4;i++)
    {
        Category C;
        currentAccount->getCategory(i,C);

        if(transacCategory == C.getCategoryName())
        {
         C.removeTransaction(transacRow-1);
        }
        currentAccount->setCategory(i,C);
    }*/

}

void tableWidget::on_editTransactionButton_clicked()
{
   /*
    int rowEdit, transacRow;

    rowSelection row(this);
    rowEdit = row.exec();

    if(rowEdit == QDialog::Rejected)
            return;

   row.setWindowTitle("Edit Transaction");
   transacRow = row.editRowNumber();
*/

   int editPass;
   editTransaction edit(this);
   editPass = edit.exec();

   if(editPass == QDialog::Rejected)
       return;

   //edit.setWindowTitle("Edit Transaction");

   QString transacName = edit.transactionName();
   QString transacDate = edit.transactionDate().toString("M/dd/yy");
   QString transacCategory = edit.transactionCategory();
   double transacAmount = edit.transactionAmount();
   //QString transacType = edit.transactionType();

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


   //ui->tableView->insertRow(transacRow);
   ui->tableView->setItem(transacRow, NAME,
                          new QTableWidgetItem(transacName));
   ui->tableView->setItem(transacRow, CATEGORY,
                          new QTableWidgetItem(transacCategory));
   ui->tableView->setItem(transacRow, DATE,
                          new QTableWidgetItem(transacDate));
   ui->tableView->setItem(transacRow, AMOUNT,
                          new QTableWidgetItem(QString::number(transacAmount)));
   //ui->tableView->removeRow(transacRow-1);
   // ----------------------------------------------------------------------------------

/*
    Account *currentAccount = new Account();
    currentAccount->thisAcc();

    for(int i=0;i<4;i++)
    {
        Category C;
        currentAccount->getCategory(i,C);

        if(transactionCategory() == C.getCategoryName())
        {

            C.editTransaction(transactionCategory(), transactionName(), transactionDate(), transactionAmount(), transactionType(), transacRow);

         // Need help altering the values in the assigned transaction vector (either by transaction[index] = edit value)
         // or by deleting vector position and appending new one in its position.
        }
        currentAccount->setCategory(i,C);
    }
   */


}

void tableWidget::updateUi()
{
    Account *currentAccount = new Account;
    currentAccount-> thisAcc();

    /*QString transacName = "Netflix"; //currentAccount->getExpenditureTransactionName(1,1);
    QString transacDate = "01/09/19"; //currentAccount->getExpenditureTransactionDate(1,1);
    QString transacCategory = "Bills"; //currentAccount->getCategoryTitle(1);
    double amount = currentAccount->getExpenditureTransactionSize(3); //currentAccount->getExpenditureTransactionAmount(1,1);

    int row = ui->tableView->rowCount();
    ui->tableView->insertRow(row);
    ui->tableView->setItem(row, NAME, new QTableWidgetItem(transacName));
    ui->tableView->setItem(row, CATEGORY, new QTableWidgetItem(transacCategory));
    ui->tableView->setItem(row, DATE, new QTableWidgetItem(transacDate));
    ui->tableView->setItem(row, AMOUNT, new QTableWidgetItem(QString::number(amount)));
    */



    for(int i = 0; i < currentAccount->getExpenditureSize(); i++)
        {
           for(int j = 0; j < currentAccount->getExpenditureTransactionSize(i); j++)
           {
               int row = ui->tableView->rowCount();;

               QString transacName = currentAccount->getExpenditureTransactionName(i,j);
               QString transacDate = currentAccount->getExpenditureTransactionDate(i,j);
               QString transacCategory = currentAccount->getCategoryTitle(i);
               double amount = currentAccount->getExpenditureTransactionAmount(i,j);

               ui->tableView->insertRow(row);
               ui->tableView->setItem(row, NAME, new QTableWidgetItem(transacName));
               ui->tableView->setItem(row, CATEGORY, new QTableWidgetItem(transacCategory));
               ui->tableView->setItem(row, DATE, new QTableWidgetItem(transacDate));
               ui->tableView->setItem(row, AMOUNT, new QTableWidgetItem(QString::number(amount)));
           }
        }


}


int tableWidget::getRowCount()
{
    return ui->tableView->rowCount();
}
