//#include "maindashboard.h"
#include <QApplication>
#include <QObject>
#include <iostream>
#include "account.h"
//#include "login.h"
//#include "calculator.h"
#include "loginwithlogo.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    #ifdef Q_OS_WIN
        QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    #endif

    a.setStyle("fusion");
    loginWithLogo l;
    l.show();

    return a.exec();
}
