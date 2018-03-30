/*
 * Author: Alex Shershnov
 * Date last edited: 3/30/2018
 * Type: Header file
 * This is a header file for login UI and implementation
 */

#ifndef LOGIN_H
#define LOGIN_H
#include <QMainWindow>
#include <QtDebug>
#include <QString>


#include "databasereaderwriter.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;
    DatabaseReaderWriter* db = DatabaseReaderWriter::Instance();
};


#endif // LOGIN_H
