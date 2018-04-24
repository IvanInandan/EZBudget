#-------------------------------------------------
#
# Project created by QtCreator 2018-02-24T20:40:48
#
#-------------------------------------------------

QT       += core gui sql \
            charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = budget
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        account.cpp \
    transaction.cpp \
    maindashboard.cpp \
    spendingsbreakdownchart.cpp \
    spendingsbreakdownslice.cpp \
    login.cpp \
    databasereaderwriter.cpp \
    expensedialog.cpp \
    removedialog.cpp \
    tablewidget.cpp \
    rowselection.cpp \
    edittransaction.cpp \
    updatebudgetdialog.cpp \
    button.cpp \
    createnewaccount.cpp \
    loginwithlogo.cpp \
    forgotpassword.cpp \
    calculator.cpp

HEADERS += \
        account.h \
    transaction.h \
    spendingsbreakdownchart.h \
    spendingsbreakdownslice.h \
    databasereaderwriter.h \
    maindashboard.h \
    expensedialog.h \
    removedialog.h \
    tablewidget.h \
    login.h \
    ui_expensedialog.h \
    ui_removedialog.h \
    ui_tablewidget.h \
    rowselection.h \
    edittransaction.h \
    updatebudgetdialog.h \
    calculator.h \
    createnewaccount.h \
    loginwithlogo.h \
    forgotpassword.h \
    button.h

FORMS += \
    maindashboard.ui \
    expensedialog.ui \
    maindashboard.ui \
    login.ui \
    removedialog.ui \
    tablewidget.ui \
    rowselection.ui \
    edittransaction.ui \
    createnewaccount.ui \
    loginwithlogo.ui \
    forgotpassword.ui \
    updatebudgetdialog.ui

target.path = $$[QT_INSTALL_EXAMPLES]/charts/donutchart
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/calculator
INSTALLS += target

SUBDIRS += \
    budget.pro
