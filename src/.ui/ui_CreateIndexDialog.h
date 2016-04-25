/********************************************************************************
** Form generated from reading UI file 'CreateIndexDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEINDEXDIALOG_H
#define UI_CREATEINDEXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateIndexDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelIndexName;
    QLineEdit *editIndexName;
    QLabel *labelIndexColumns;
    QTableWidget *tableIndexColumns;
    QLabel *labelTableName;
    QComboBox *comboTableName;
    QLabel *labelIndexUnique;
    QCheckBox *checkIndexUnique;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateIndexDialog)
    {
        if (CreateIndexDialog->objectName().isEmpty())
            CreateIndexDialog->setObjectName(QString::fromUtf8("CreateIndexDialog"));
        CreateIndexDialog->resize(610, 342);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/index_create"), QSize(), QIcon::Normal, QIcon::Off);
        CreateIndexDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CreateIndexDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelIndexName = new QLabel(CreateIndexDialog);
        labelIndexName->setObjectName(QString::fromUtf8("labelIndexName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelIndexName);

        editIndexName = new QLineEdit(CreateIndexDialog);
        editIndexName->setObjectName(QString::fromUtf8("editIndexName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editIndexName);

        labelIndexColumns = new QLabel(CreateIndexDialog);
        labelIndexColumns->setObjectName(QString::fromUtf8("labelIndexColumns"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelIndexColumns);

        tableIndexColumns = new QTableWidget(CreateIndexDialog);
        if (tableIndexColumns->columnCount() < 3)
            tableIndexColumns->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableIndexColumns->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableIndexColumns->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableIndexColumns->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableIndexColumns->setObjectName(QString::fromUtf8("tableIndexColumns"));
        tableIndexColumns->setMinimumSize(QSize(0, 250));
        tableIndexColumns->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableIndexColumns->setProperty("showDropIndicator", QVariant(false));
        tableIndexColumns->setAlternatingRowColors(true);
        tableIndexColumns->setSelectionMode(QAbstractItemView::NoSelection);
        tableIndexColumns->verticalHeader()->setVisible(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, tableIndexColumns);

        labelTableName = new QLabel(CreateIndexDialog);
        labelTableName->setObjectName(QString::fromUtf8("labelTableName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelTableName);

        comboTableName = new QComboBox(CreateIndexDialog);
        comboTableName->setObjectName(QString::fromUtf8("comboTableName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboTableName);

        labelIndexUnique = new QLabel(CreateIndexDialog);
        labelIndexUnique->setObjectName(QString::fromUtf8("labelIndexUnique"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelIndexUnique);

        checkIndexUnique = new QCheckBox(CreateIndexDialog);
        checkIndexUnique->setObjectName(QString::fromUtf8("checkIndexUnique"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkIndexUnique);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(CreateIndexDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelIndexName->setBuddy(editIndexName);
        labelIndexColumns->setBuddy(tableIndexColumns);
        labelTableName->setBuddy(comboTableName);
        labelIndexUnique->setBuddy(checkIndexUnique);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editIndexName, comboTableName);
        QWidget::setTabOrder(comboTableName, checkIndexUnique);
        QWidget::setTabOrder(checkIndexUnique, tableIndexColumns);
        QWidget::setTabOrder(tableIndexColumns, buttonBox);

        retranslateUi(CreateIndexDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateIndexDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateIndexDialog, SLOT(reject()));
        QObject::connect(comboTableName, SIGNAL(currentIndexChanged(QString)), CreateIndexDialog, SLOT(tableChanged(QString)));
        QObject::connect(editIndexName, SIGNAL(textChanged(QString)), CreateIndexDialog, SLOT(checkInput()));
        QObject::connect(tableIndexColumns, SIGNAL(cellChanged(int,int)), CreateIndexDialog, SLOT(checkInput()));

        QMetaObject::connectSlotsByName(CreateIndexDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateIndexDialog)
    {
        CreateIndexDialog->setWindowTitle(QApplication::translate("CreateIndexDialog", "Create New Index", 0, QApplication::UnicodeUTF8));
        labelIndexName->setText(QApplication::translate("CreateIndexDialog", "&Name", 0, QApplication::UnicodeUTF8));
        labelIndexColumns->setText(QApplication::translate("CreateIndexDialog", "&Columns", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableIndexColumns->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CreateIndexDialog", "Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableIndexColumns->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CreateIndexDialog", "Use in Index", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableIndexColumns->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CreateIndexDialog", "Order", 0, QApplication::UnicodeUTF8));
        labelTableName->setText(QApplication::translate("CreateIndexDialog", "&Table", 0, QApplication::UnicodeUTF8));
        labelIndexUnique->setText(QApplication::translate("CreateIndexDialog", "&Unique", 0, QApplication::UnicodeUTF8));
        checkIndexUnique->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateIndexDialog: public Ui_CreateIndexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEINDEXDIALOG_H
