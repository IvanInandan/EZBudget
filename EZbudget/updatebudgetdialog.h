#ifndef UPDATEBUDGETDIALOG_H
#define UPDATEBUDGETDIALOG_H

#include <QDialog>
#include "databasereaderwriter.h"
#include "account.h"

namespace Ui {
class updateBudgetDialog;
}

class updateBudgetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit updateBudgetDialog(QWidget *parent = 0);
    ~updateBudgetDialog();

    int updateBudget() const;

private slots:

    void on_okButton_clicked(); // Accept update

    void on_cancelButton_clicked(); // Reject update

private:
    Ui::updateBudgetDialog *ui;

    DatabaseReaderWriter *db = DatabaseReaderWriter::Instance();
    Account *currentAccount = db->getAccountInstance();
};

#endif // UPDATEBUDGETDIALOG_H
