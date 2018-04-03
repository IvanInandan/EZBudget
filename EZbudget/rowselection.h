#ifndef ROWSELECTION_H
#define ROWSELECTION_H

#include <QDialog>

namespace Ui {
class rowSelection;
}

class rowSelection : public QDialog
{
    Q_OBJECT

public:
    explicit rowSelection(QWidget *parent = 0);
    ~rowSelection();

private:
    Ui::rowSelection *ui;
};

#endif // ROWSELECTION_H
