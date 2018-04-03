#ifndef EDITTRANSACTION_H
#define EDITTRANSACTION_H

#include <QDialog>

namespace Ui {
class editTransaction;
}

class editTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit editTransaction(QWidget *parent = 0);
    ~editTransaction();

private:
    Ui::editTransaction *ui;
};

#endif // EDITTRANSACTION_H
