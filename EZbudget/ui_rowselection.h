/********************************************************************************
** Form generated from reading UI file 'rowselection.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROWSELECTION_H
#define UI_ROWSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rowSelection
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *editRowNum;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *rowSelection)
    {
        if (rowSelection->objectName().isEmpty())
            rowSelection->setObjectName(QStringLiteral("rowSelection"));
        rowSelection->resize(333, 123);
        verticalLayoutWidget = new QWidget(rowSelection);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 291, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        editRowNum = new QSpinBox(verticalLayoutWidget);
        editRowNum->setObjectName(QStringLiteral("editRowNum"));
        editRowNum->setButtonSymbols(QAbstractSpinBox::NoButtons);

        verticalLayout->addWidget(editRowNum);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(rowSelection);
        QObject::connect(buttonBox, SIGNAL(accepted()), rowSelection, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), rowSelection, SLOT(reject()));

        QMetaObject::connectSlotsByName(rowSelection);
    } // setupUi

    void retranslateUi(QDialog *rowSelection)
    {
        rowSelection->setWindowTitle(QApplication::translate("rowSelection", "Dialog", nullptr));
        label->setText(QApplication::translate("rowSelection", "Please Enter Row # to Edit:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rowSelection: public Ui_rowSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROWSELECTION_H
