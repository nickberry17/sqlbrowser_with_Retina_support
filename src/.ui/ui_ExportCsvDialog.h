/********************************************************************************
** Form generated from reading UI file 'ExportCsvDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCSVDIALOG_H
#define UI_EXPORTCSVDIALOG_H

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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ExportCsvDialog
{
public:
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *labelTable;
    QListWidget *listTables;
    QLabel *labelHeader;
    QCheckBox *checkHeader;
    QLabel *labelFieldSeparator;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboFieldSeparator;
    QLineEdit *editCustomSeparator;
    QSpacerItem *horizontalSpacer;
    QLabel *labelQuoteCharacter;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboQuoteCharacter;
    QLineEdit *editCustomQuote;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportCsvDialog)
    {
        if (ExportCsvDialog->objectName().isEmpty())
            ExportCsvDialog->setObjectName(QString::fromUtf8("ExportCsvDialog"));
        ExportCsvDialog->resize(540, 300);
        gridLayout_2 = new QGridLayout(ExportCsvDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelTable = new QLabel(ExportCsvDialog);
        labelTable->setObjectName(QString::fromUtf8("labelTable"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTable);

        listTables = new QListWidget(ExportCsvDialog);
        listTables->setObjectName(QString::fromUtf8("listTables"));
        listTables->setSelectionMode(QAbstractItemView::MultiSelection);
        listTables->setSortingEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, listTables);

        labelHeader = new QLabel(ExportCsvDialog);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelHeader);

        checkHeader = new QCheckBox(ExportCsvDialog);
        checkHeader->setObjectName(QString::fromUtf8("checkHeader"));
        checkHeader->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, checkHeader);

        labelFieldSeparator = new QLabel(ExportCsvDialog);
        labelFieldSeparator->setObjectName(QString::fromUtf8("labelFieldSeparator"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelFieldSeparator);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboFieldSeparator = new QComboBox(ExportCsvDialog);
        comboFieldSeparator->setObjectName(QString::fromUtf8("comboFieldSeparator"));

        horizontalLayout->addWidget(comboFieldSeparator);

        editCustomSeparator = new QLineEdit(ExportCsvDialog);
        editCustomSeparator->setObjectName(QString::fromUtf8("editCustomSeparator"));
        editCustomSeparator->setMaxLength(1);

        horizontalLayout->addWidget(editCustomSeparator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        labelQuoteCharacter = new QLabel(ExportCsvDialog);
        labelQuoteCharacter->setObjectName(QString::fromUtf8("labelQuoteCharacter"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelQuoteCharacter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboQuoteCharacter = new QComboBox(ExportCsvDialog);
        comboQuoteCharacter->setObjectName(QString::fromUtf8("comboQuoteCharacter"));

        horizontalLayout_2->addWidget(comboQuoteCharacter);

        editCustomQuote = new QLineEdit(ExportCsvDialog);
        editCustomQuote->setObjectName(QString::fromUtf8("editCustomQuote"));
        editCustomQuote->setMaxLength(1);

        horizontalLayout_2->addWidget(editCustomQuote);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ExportCsvDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelTable->setBuddy(listTables);
        labelHeader->setBuddy(checkHeader);
        labelFieldSeparator->setBuddy(comboFieldSeparator);
        labelQuoteCharacter->setBuddy(comboQuoteCharacter);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(listTables, checkHeader);
        QWidget::setTabOrder(checkHeader, comboFieldSeparator);
        QWidget::setTabOrder(comboFieldSeparator, editCustomSeparator);
        QWidget::setTabOrder(editCustomSeparator, comboQuoteCharacter);
        QWidget::setTabOrder(comboQuoteCharacter, editCustomQuote);

        retranslateUi(ExportCsvDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportCsvDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCsvDialog, SLOT(reject()));
        QObject::connect(comboFieldSeparator, SIGNAL(currentIndexChanged(int)), ExportCsvDialog, SLOT(showCustomCharEdits()));
        QObject::connect(comboQuoteCharacter, SIGNAL(currentIndexChanged(int)), ExportCsvDialog, SLOT(showCustomCharEdits()));

        QMetaObject::connectSlotsByName(ExportCsvDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportCsvDialog)
    {
        ExportCsvDialog->setWindowTitle(QApplication::translate("ExportCsvDialog", "Export data as CSV", 0, QApplication::UnicodeUTF8));
        labelTable->setText(QApplication::translate("ExportCsvDialog", "&Table(s)", 0, QApplication::UnicodeUTF8));
        labelHeader->setText(QApplication::translate("ExportCsvDialog", "&Column names in first line", 0, QApplication::UnicodeUTF8));
        checkHeader->setText(QString());
        labelFieldSeparator->setText(QApplication::translate("ExportCsvDialog", "Field &separator", 0, QApplication::UnicodeUTF8));
        comboFieldSeparator->clear();
        comboFieldSeparator->insertItems(0, QStringList()
         << QApplication::translate("ExportCsvDialog", ",", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCsvDialog", ";", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCsvDialog", "Tab", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCsvDialog", "|", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCsvDialog", "Other", 0, QApplication::UnicodeUTF8)
        );
        labelQuoteCharacter->setText(QApplication::translate("ExportCsvDialog", "&Quote character", 0, QApplication::UnicodeUTF8));
        comboQuoteCharacter->clear();
        comboQuoteCharacter->insertItems(0, QStringList()
         << QApplication::translate("ExportCsvDialog", "\"", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExportCsvDialog", "'", 0, QApplication::UnicodeUTF8)
         << QString()
         << QApplication::translate("ExportCsvDialog", "Other", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class ExportCsvDialog: public Ui_ExportCsvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCSVDIALOG_H
