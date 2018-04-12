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
    QWidget *spendSaveChartPlaceholder;
    QPushButton *updateBudgetButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *spendingsButton;
    QPushButton *incomeButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *budgetLabel;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *budgetLabelUpdate;
<<<<<<< HEAD
    QPushButton *spendingsButton_2;
=======
    QLabel *currentIncomeUpdate;
    QLabel *currentSavingsUpdate;
>>>>>>> f0fe530978d02116bc5c8b34fc4acde9902bda6b
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
        spendingChartPlaceholder->setGeometry(QRect(160, 110, 651, 291));
        spendSaveChartPlaceholder = new QWidget(centralWidget);
        spendSaveChartPlaceholder->setObjectName(QStringLiteral("spendSaveChartPlaceholder"));
        spendSaveChartPlaceholder->setGeometry(QRect(30, 430, 901, 181));
        updateBudgetButton = new QPushButton(centralWidget);
        updateBudgetButton->setObjectName(QStringLiteral("updateBudgetButton"));
        updateBudgetButton->setGeometry(QRect(800, 20, 141, 32));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(360, 640, 246, 32));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        spendingsButton = new QPushButton(widget);
        spendingsButton->setObjectName(QStringLiteral("spendingsButton"));

        horizontalLayout_5->addWidget(spendingsButton);

        incomeButton = new QPushButton(widget);
        incomeButton->setObjectName(QStringLiteral("incomeButton"));

        horizontalLayout_5->addWidget(incomeButton);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(21, 10, 321, 71));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        budgetLabel = new QLabel(widget1);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));

        horizontalLayout->addWidget(budgetLabel);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        budgetLabelUpdate = new QLabel(widget1);
        budgetLabelUpdate->setObjectName(QStringLiteral("budgetLabelUpdate"));
<<<<<<< HEAD
        budgetLabelUpdate->setGeometry(QRect(170, -10, 131, 41));
        spendingsButton_2 = new QPushButton(centralWidget);
        spendingsButton_2->setObjectName(QStringLiteral("spendingsButton_2"));
        spendingsButton_2->setGeometry(QRect(810, 20, 141, 32));
=======

        verticalLayout->addWidget(budgetLabelUpdate);

        currentIncomeUpdate = new QLabel(widget1);
        currentIncomeUpdate->setObjectName(QStringLiteral("currentIncomeUpdate"));

        verticalLayout->addWidget(currentIncomeUpdate);

        currentSavingsUpdate = new QLabel(widget1);
        currentSavingsUpdate->setObjectName(QStringLiteral("currentSavingsUpdate"));

        verticalLayout->addWidget(currentSavingsUpdate);


        horizontalLayout_2->addLayout(verticalLayout);

>>>>>>> f0fe530978d02116bc5c8b34fc4acde9902bda6b
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
        updateBudgetButton->setText(QApplication::translate("mainDashboard", "Update Budget", nullptr));
        spendingsButton->setText(QApplication::translate("mainDashboard", "Spendings", nullptr));
        incomeButton->setText(QApplication::translate("mainDashboard", "Income", nullptr));
        budgetLabel->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:12pt;\">Budget Left:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("mainDashboard", "Current Income", nullptr));
        label->setText(QApplication::translate("mainDashboard", "Current Savings:", nullptr));
        budgetLabelUpdate->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
<<<<<<< HEAD
        spendingsButton_2->setText(QApplication::translate("mainDashboard", "UpdateBudget", nullptr));
=======
        currentIncomeUpdate->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        currentSavingsUpdate->setText(QApplication::translate("mainDashboard", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
>>>>>>> f0fe530978d02116bc5c8b34fc4acde9902bda6b
        menuSettings->setTitle(QApplication::translate("mainDashboard", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainDashboard: public Ui_mainDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDASHBOARD_H
