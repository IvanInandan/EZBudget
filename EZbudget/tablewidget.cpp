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
}

tableWidget::~tableWidget()
{
    delete ui;
}

void tableWidget::on_addTransactionButton_clicked()
{
  //Account *currentAccount = new Account();
 // currentAccount->thisAcc();

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

   currentAccount->addTransactions(transacCategory, transacName, transacDate, transacType, transacAmount);


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

    //Account *currentAccount = new Account;
   // currentAccount->thisAcc();

//    QItemSelectionModel *rowCheck = ui->tableView->selectionModel();
//    QModelIndexList selectedRowCheck = rowCheck->selectedRows();
//    if(selectedRowCheck.size()!=1)
//    {
//        qDebug() << "ERROR: No rows selected";
//        QMessageBox rowError;
//        rowError.setText("No rows have been selected!");
//        rowError.exec();
//        return;
//    }

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

    QString transacType;
       if(currentDashboard->getFlag() == 0)
        {
            transacType = "Expenses";
        }

        else
        {
          //  transactionType = "Spendings";
        }
    currentAccount->removeTransactions(transacRow, transacType);

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

    /*
    int rowEdit, transacRow;

    rowSelection row(this);
    rowEdit = row.exec();

    if(rowEdit == QDialog::Rejected)
            return;

   row.setWindowTitle("Edit Transaction");
   transacRow = row.editRowNumber();
*/
//   QItemSelectionModel *rowCheck = ui->tableView->selectionModel();
//   QModelIndexList selectedRowCheck = rowCheck->selectedRows();
//   if(selectedRowCheck.size()!=1)
//   {
//       qDebug() << "ERROR: No rows selected";
//       QMessageBox rowError;
//       rowError.setText("No rows have been selected!");
//       rowError.exec();
//       return;
//   }

   int editPass;
   editTransaction edit(this);
   editPass = edit.exec();

   if(editPass == QDialog::Rejected)
       return;

   QString transacName = edit.transactionName();
   QString transacDate = edit.transactionDate().toString("M/dd/yy");
   QString transacCategory = edit.transactionCategory();
   double transacAmount = edit.transactionAmount();
   //QString transacType = ui->tableView->windowTitle();

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
//   ui->tableViews->setItem(transacType, TYPE,
//                           new QTableWidgetItem(transacType));
   ui->tableView->setItem(transacRow, AMOUNT,
                          new QTableWidgetItem(QString::number(transacAmount)));

   QString transactionType;
   if(currentDashboard->getFlag() == 0)
    {
        transactionType = "Expenses";
    }

    else
    {
      //  transactionType = "Spendings";
    }

    qDebug() << "Transaction Type: " << transactionType << "\n";

     currentAccount->editTransactions(transacCategory, transacName, transacDate, transactionType, transacAmount, transacRow);

     // ---------------------------------------------------------------------------------

     // Save into Database: [WORKS WHEN DATABASE FUNCTION 'SAVEPROFILE' IS PUSHED]
     db -> saveProfile(); // Saves changes made to the account into the database
   //ui->tableView->removeRow(transacRow-1);
   // ----------------------------------------------------------------------------------


}

void tableWidget::updateUi(QString type)
{
    //Account *currentAccount = new Account;
    //currentAccount-> thisAcc();

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


/*void tableWidget::removeFromExpenditures(int index)
{
    Account *currentAccount = new Account;
    currentAccount->thisAcc();

    currentAccount->removeFromExpenditureTransaction(index);
}*/
