#ifndef CREATENEWACCOUNT_H
#define CREATENEWACCOUNT_H

#include <QDialog>
#include "databasereaderwriter.h"

namespace Ui {
class createNewAccount;
}

class createNewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit createNewAccount(QWidget *parent = 0);
    ~createNewAccount();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::createNewAccount *ui;
    DatabaseReaderWriter* db = DatabaseReaderWriter::Instance();
};

#endif // CREATENEWACCOUNT_H
