/********************************************************************************
** Form generated from reading UI file 'maindashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDASHBOARD_H
#define UI_MAINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainDashboard
{
public:
    QAction *actionUser_Settings;
    QAction *actionLog_Out;
    QAction *actionQuit;
    QWidget *centralWidget;
    QWidget *spendingChartPlaceholder;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *spendSaveChartPlaceholder;
    QLabel *budgetLabel;
    QLabel *budgetLabelUpdate;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainDashboard)
    {
        if (mainDashboard->objectName().isEmpty())
            mainDashboard->setObjectName(QStringLiteral("mainDashboard"));
        mainDashboard->resize(973, 823);
        actionUser_Settings = new QAction(mainDashboard);
        actionUser_Settings->setObjectName(QStringLiteral("actionUser_Settings"));
        actionLog_Out = new QAction(mainDashboard);
        actionLog_Out->setObjectName(QStringLiteral("actionLog_Out"));
        actionQuit = new QAction(mainDashboard);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(mainDashboard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        spendingChartPlaceholder = new QWidget(centralWidget);
        spendingChartPlaceholder->setObjectName(QStringLiteral("spendingChartPlaceholder"));
        spendingChartPlaceholder->setGeometry(QRect(140, 110, 681, 301));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(350, 670, 141, 32));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(490, 670, 141, 32));
        spendSaveChartPlaceholder = new QWidget(centralWidget);
        spendSaveChartPlaceholder->setObjectName(QStringLiteral("spendSaveChartPlaceholder"));
        spendSaveChartPlaceholder->setGeometry(QRect(40, 440, 901, 191));
        budgetLabel = new QLabel(centralWidget);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setGeometry(QRect(50, 40, 111, 41));
        budgetLabelUpdate = new QLabel(centralWidget);
        budgetLabelUpdate->setObjectName(QStringLiteral("budgetLabelUpdate"));
        budgetLabelUpdate->setGeometry(QRect(150, 40, 131, 41));
        mainDashboard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainDashboard);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 973, 22));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        mainDashboard->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainDashboard);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainDashboard->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainDashboard);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainDashboard->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionUser_Settings);
        menuSettings->addAction(actionLog_Out);
        menuSettings->addAction(actionQuit);

        retranslateUi(mainDashboard);

        QMetaObject::connectSlotsByName(mainDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *mainDashboard)
    {
        mainDashboard->setWindowTitle(QApplication::translate("mainDashboard", "mainDashboard", nullptr));
        actionUser_Settings->setText(QApplication::translate("mainDashboard", "User Settings", nullptr));
        actionLog_Out->setText(QApplication::translate("mainDashboard", "Log Out", nullptr));
        actionQuit->setText(QApplication::translate("mainDashboard", "Quit", nullptr));
        pushButton_5->setText(QApplication::translate("mainDashboard", "Spendings", nullptr));
        pushButton_6->setText(QApplication::translate("mainDashboard", "Income/Savings", nullptr));
        budgetLabel->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:12pt;\">Budget Left:</span></p></body></html>", nullptr));
        budgetLabelUpdate->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        menuSettings->setTitle(QApplication::translate("mainDashboard", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainDashboard: public Ui_mainDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDASHBOARD_H
