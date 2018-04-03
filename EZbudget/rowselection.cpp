#include "rowselection.h"
#include "ui_rowselection.h"

rowSelection::rowSelection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rowSelection)
{
    ui->setupUi(this);
}

rowSelection::~rowSelection()
{
    delete ui;
}
