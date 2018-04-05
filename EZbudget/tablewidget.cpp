#include "tablewidget.h"
#include "ui_tablewidget.h"
#include "expensedialog.h"
#include "removedialog.h"
#include "rowselection.h"
#include <QTableWidget>
#include <QDebug>
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

    //removeFromExpenditures(transacRow);

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

    edit.saveChangestoExpenditures(transacCategory, transacName, transacDate, transacAmount, transacRow);
   //ui->tableView->removeRow(transacRow-1);
   // ----------------------------------------------------------------------------------


}

void tableWidget::updateUi()
{
    Account *currentAccount = new Account;
    currentAccount-> thisAcc();

    QString transacName = "Netflix"; //currentAccount->getExpenditureTransactionName(1,0);
    QString transacDate = "01/09/19"; //currentAccount->getExpenditureTransactionDate(1,0); << using these values gives a runtime error: [index out of range]
    QString transacCategory = "Bills"; //currentAccount->getCategoryTitle(1);
    double amount = 7.99; //currentAccount->getExpenditureTransactionSize(0); <-- this displays a 0 for all the indexes

    int row = ui->tableView->rowCount();
    ui->tableView->insertRow(row);
    ui->tableView->setItem(row, NAME, new QTableWidgetItem(transacName));
    ui->tableView->setItem(row, CATEGORY, new QTableWidgetItem(transacCategory));
    ui->tableView->setItem(row, DATE, new QTableWidgetItem(transacDate));
    ui->tableView->setItem(row, AMOUNT, new QTableWidgetItem(QString::number(amount)));

    QString transacName1 = "Thin Mints";
    QString transacDate1 = "03/17/19";
    QString transacCategory1 = "Grocery/Food";
    double amount1 = 20;

    int row1 = ui->tableView->rowCount();
    ui->tableView->insertRow(row1);
    ui->tableView->setItem(row1, NAME, new QTableWidgetItem(transacName1));
    ui->tableView->setItem(row1, CATEGORY, new QTableWidgetItem(transacCategory1));
    ui->tableView->setItem(row1, DATE, new QTableWidgetItem(transacDate1));
    ui->tableView->setItem(row1, AMOUNT, new QTableWidgetItem(QString::number(amount1)));

    QString transacName2 = "Concert Tickets";
    QString transacDate2 = "02/20/19";
    QString transacCategory2 = "Entertainment/Misc";
    double amount2 = 300.55;

    int row2 = ui->tableView->rowCount();
    ui->tableView->insertRow(row2);
    ui->tableView->setItem(row2, NAME, new QTableWidgetItem(transacName2));
    ui->tableView->setItem(row2, CATEGORY, new QTableWidgetItem(transacCategory2));
    ui->tableView->setItem(row2, DATE, new QTableWidgetItem(transacDate2));
    ui->tableView->setItem(row2, AMOUNT, new QTableWidgetItem(QString::number(amount2)));


//using this loop, program compiles but nothing happens
    /*for(int i = 0; i < currentAccount->getExpenditureSize(); i++)
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
        }*/


}


int tableWidget::getRowCount()
{
    return ui->tableView->rowCount();
}

/*void tableWidget::removeFromExpenditures(int index)
{
    Account *currentAccount = new Account;
    currentAccount->thisAcc();

    currentAccount->removeFromExpenditureTransaction(index);
}*/
