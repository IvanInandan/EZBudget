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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *spendingsButton;
    QPushButton *incomeButton;
    QWidget *spendSaveChartPlaceholder;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *budgetLabel;
    QLabel *budgetLabel_2;
    QLabel *budgetLabel_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *updateBudgetLeftLabel;
    QLabel *updateCurrentIncomeLeftLabel;
    QLabel *updateCurrentSavingsLabel;
    QLabel *emptyLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *calculatorButton;
    QPushButton *updateBudgetButton;
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
        spendingChartPlaceholder->setGeometry(QRect(110, 130, 761, 311));
        spendingsButton = new QPushButton(centralWidget);
        spendingsButton->setObjectName(QStringLiteral("spendingsButton"));
        spendingsButton->setGeometry(QRect(340, 700, 141, 32));
        incomeButton = new QPushButton(centralWidget);
        incomeButton->setObjectName(QStringLiteral("incomeButton"));
        incomeButton->setGeometry(QRect(490, 700, 141, 32));
        spendSaveChartPlaceholder = new QWidget(centralWidget);
        spendSaveChartPlaceholder->setObjectName(QStringLiteral("spendSaveChartPlaceholder"));
        spendSaveChartPlaceholder->setGeometry(QRect(40, 470, 901, 211));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 0, 251, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        budgetLabel = new QLabel(layoutWidget);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));

        verticalLayout->addWidget(budgetLabel);

        budgetLabel_2 = new QLabel(layoutWidget);
        budgetLabel_2->setObjectName(QStringLiteral("budgetLabel_2"));

        verticalLayout->addWidget(budgetLabel_2);

        budgetLabel_3 = new QLabel(layoutWidget);
        budgetLabel_3->setObjectName(QStringLiteral("budgetLabel_3"));

        verticalLayout->addWidget(budgetLabel_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        updateBudgetLeftLabel = new QLabel(layoutWidget);
        updateBudgetLeftLabel->setObjectName(QStringLiteral("updateBudgetLeftLabel"));

        verticalLayout_2->addWidget(updateBudgetLeftLabel);

        updateCurrentIncomeLeftLabel = new QLabel(layoutWidget);
        updateCurrentIncomeLeftLabel->setObjectName(QStringLiteral("updateCurrentIncomeLeftLabel"));

        verticalLayout_2->addWidget(updateCurrentIncomeLeftLabel);

        updateCurrentSavingsLabel = new QLabel(layoutWidget);
        updateCurrentSavingsLabel->setObjectName(QStringLiteral("updateCurrentSavingsLabel"));

        verticalLayout_2->addWidget(updateCurrentSavingsLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        emptyLabel = new QLabel(centralWidget);
        emptyLabel->setObjectName(QStringLiteral("emptyLabel"));
        emptyLabel->setGeometry(QRect(210, 80, 551, 51));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(820, 20, 134, 66));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        calculatorButton = new QPushButton(widget);
        calculatorButton->setObjectName(QStringLiteral("calculatorButton"));

        verticalLayout_3->addWidget(calculatorButton);

        updateBudgetButton = new QPushButton(widget);
        updateBudgetButton->setObjectName(QStringLiteral("updateBudgetButton"));

        verticalLayout_3->addWidget(updateBudgetButton);

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
        spendingsButton->setText(QApplication::translate("mainDashboard", "Spendings", nullptr));
        incomeButton->setText(QApplication::translate("mainDashboard", "Income", nullptr));
        budgetLabel->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:12pt;\">Budget Left:</span></p></body></html>", nullptr));
        budgetLabel_2->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:12pt;\">Current Income:</span></p></body></html>", nullptr));
        budgetLabel_3->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:12pt;\">Current Savings:</span></p></body></html>", nullptr));
        updateBudgetLeftLabel->setText(QApplication::translate("mainDashboard", "TextLabel", nullptr));
        updateCurrentIncomeLeftLabel->setText(QApplication::translate("mainDashboard", "TextLabel", nullptr));
        updateCurrentSavingsLabel->setText(QApplication::translate("mainDashboard", "TextLabel", nullptr));
        emptyLabel->setText(QApplication::translate("mainDashboard", "It's looking a little empty. Click on the Spendings or Income buttons to see your cash flow!", nullptr));
        calculatorButton->setText(QApplication::translate("mainDashboard", "Calculator", nullptr));
        updateBudgetButton->setText(QApplication::translate("mainDashboard", "Update Budget", nullptr));
        menuSettings->setTitle(QApplication::translate("mainDashboard", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainDashboard: public Ui_mainDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDASHBOARD_H
