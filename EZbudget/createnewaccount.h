#ifndef CREATENEWACCOUNT_H
#define CREATENEWACCOUNT_H

#include <QDialog>

namespace Ui {
class createNewAccount;
}

class createNewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit createNewAccount(QWidget *parent = 0);
    ~createNewAccount();

private:
    Ui::createNewAccount *ui;
};

#endif // CREATENEWACCOUNT_H
