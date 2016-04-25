/********************************************************************************
** Form generated from reading UI file 'ExportSqlDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSQLDIALOG_H
#define UI_EXPORTSQLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ExportSqlDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QFormLayout *formLayout;
    QLabel *labelTable;
    QListWidget *listTables;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonSelectAll;
    QPushButton *buttonDeselectAll;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkColNames;
    QCheckBox *checkMultiple;
    QSpacerItem *verticalSpacer;
    QComboBox *comboWhat;

    void setupUi(QDialog *ExportSqlDialog)
    {
        if (ExportSqlDialog->objectName().isEmpty())
            ExportSqlDialog->setObjectName(QString::fromUtf8("ExportSqlDialog"));
        ExportSqlDialog->resize(497, 338);
        gridLayout_2 = new QGridLayout(ExportSqlDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(ExportSqlDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelTable = new QLabel(ExportSqlDialog);
        labelTable->setObjectName(QString::fromUtf8("labelTable"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTable);

        listTables = new QListWidget(ExportSqlDialog);
        listTables->setObjectName(QString::fromUtf8("listTables"));
        listTables->setSelectionMode(QAbstractItemView::MultiSelection);
        listTables->setSortingEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, listTables);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        buttonSelectAll = new QPushButton(ExportSqlDialog);
        buttonSelectAll->setObjectName(QString::fromUtf8("buttonSelectAll"));

        horizontalLayout->addWidget(buttonSelectAll);

        buttonDeselectAll = new QPushButton(ExportSqlDialog);
        buttonDeselectAll->setObjectName(QString::fromUtf8("buttonDeselectAll"));

        horizontalLayout->addWidget(buttonDeselectAll);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        groupBox = new QGroupBox(ExportSqlDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkColNames = new QCheckBox(groupBox);
        checkColNames->setObjectName(QString::fromUtf8("checkColNames"));
        checkColNames->setChecked(true);

        gridLayout->addWidget(checkColNames, 0, 0, 1, 1);

        checkMultiple = new QCheckBox(groupBox);
        checkMultiple->setObjectName(QString::fromUtf8("checkMultiple"));

        gridLayout->addWidget(checkMultiple, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        comboWhat = new QComboBox(groupBox);
        comboWhat->setObjectName(QString::fromUtf8("comboWhat"));

        gridLayout->addWidget(comboWhat, 2, 0, 1, 1);


        formLayout->setWidget(2, QFormLayout::SpanningRole, groupBox);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelTable->setBuddy(listTables);
#endif // QT_NO_SHORTCUT

        retranslateUi(ExportSqlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportSqlDialog, SLOT(accept()));
        QObject::connect(buttonDeselectAll, SIGNAL(clicked()), ExportSqlDialog, SLOT(doDeselectAll()));
        QObject::connect(buttonSelectAll, SIGNAL(clicked()), ExportSqlDialog, SLOT(doSelectAll()));

        QMetaObject::connectSlotsByName(ExportSqlDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportSqlDialog)
    {
        ExportSqlDialog->setWindowTitle(QApplication::translate("ExportSqlDialog", "Export SQL...", 0, QApplication::UnicodeUTF8));
        labelTable->setText(QApplication::translate("ExportSqlDialog", "Tab&le(s)", 0, QApplication::UnicodeUTF8));
        buttonSelectAll->setText(QApplication::translate("ExportSqlDialog", "Select All", 0, QApplication::UnicodeUTF8));
        buttonDeselectAll->setText(QApplication::translate("ExportSqlDialog", "Deselect All", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ExportSqlDialog", "&Options", 0, QApplication::UnicodeUTF8));
        checkColNames->setText(QApplication::translate("ExportSqlDialog", "Keep column names in INSERT INTO", 0, QApplication::UnicodeUTF8));
        checkMultiple->setText(QApplication::translate("ExportSqlDialog", "Multiple rows (VALUES) per INSERT statement", 0, QApplication::UnicodeUTF8));
        comboWhat->clear();
        comboWhat->insertItems(0, QStringList()
         << QApplication::translate("ExportSqlDialog", "Export everything", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportSqlDialog", "Export schema only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportSqlDialog", "Export data only", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ExportSqlDialog: public Ui_ExportSqlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSQLDIALOG_H
