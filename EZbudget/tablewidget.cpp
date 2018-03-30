#include "tablewidget.h"
#include "ui_tablewidget.h"
#include "expensedialog.h"
#include "removedialog.h"
#include <QTableWidget>
#include "account.h"
#include "category.h"

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

    ed.setWindowTitle("Add Transaction");
    transacName = ed.transactionName();
    transacDate = ed.transactionDate().toString("M/dd/yy");
    transacAmount = ed.transactionAmount();
    transacCategory = ed.transactionCategory();
    transacType = "expense";

    ui->tableView->insertRow(ui->tableView->rowCount());
    ui->tableView->setItem(row, NAME,
                           new QTableWidgetItem(transacName));
    ui->tableView->setItem(row, CATEGORY,
                           new QTableWidgetItem(transacCategory));
    ui->tableView->setItem(row, DATE,
                           new QTableWidgetItem(transacDate));
    ui->tableView->setItem(row, AMOUNT,
                           new QTableWidgetItem(QString::number(transacAmount)));


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
    //Account *currentAccount = Account::Instance();

    int rem, transacRow;

    RemoveDialog rd(this);
    rem = rd.exec();

    if(rem == QDialog::Rejected)
        return;


    rd.setWindowTitle("Remove Transaction");


    transacRow = rd.removeRowNumber();

    ui->tableView->removeRow(transacRow-1);

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
