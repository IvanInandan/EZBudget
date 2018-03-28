/********************************************************************************
** Form generated from reading UI file 'removedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEDIALOG_H
#define UI_REMOVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoveDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *removeRowEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoveDialog)
    {
        if (RemoveDialog->objectName().isEmpty())
            RemoveDialog->setObjectName(QStringLiteral("RemoveDialog"));
        RemoveDialog->resize(250, 108);
        verticalLayout_2 = new QVBoxLayout(RemoveDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(RemoveDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        removeRowEdit = new QSpinBox(RemoveDialog);
        removeRowEdit->setObjectName(QStringLiteral("removeRowEdit"));
        removeRowEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        verticalLayout->addWidget(removeRowEdit);

        buttonBox = new QDialogButtonBox(RemoveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(RemoveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoveDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveDialog)
    {
        RemoveDialog->setWindowTitle(QApplication::translate("RemoveDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("RemoveDialog", "Row #:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveDialog: public Ui_RemoveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEDIALOG_H
