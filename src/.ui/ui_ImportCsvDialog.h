/********************************************************************************
** Form generated from reading UI file 'ImportCsvDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTCSVDIALOG_H
#define UI_IMPORTCSVDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportCsvDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *editName;
    QLabel *labelHeader;
    QCheckBox *checkboxHeader;
    QLabel *labelSeparator;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboSeparator;
    QLineEdit *editCustomSeparator;
    QSpacerItem *horizontalSpacer;
    QLabel *labelQuote;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboQuote;
    QLineEdit *editCustomQuote;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelEncoding;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboEncoding;
    QLineEdit *editCustomEncoding;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelTrim;
    QCheckBox *checkBoxTrimFields;
    QTableWidget *tablePreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportCsvDialog)
    {
        if (ImportCsvDialog->objectName().isEmpty())
            ImportCsvDialog->setObjectName(QString::fromUtf8("ImportCsvDialog"));
        ImportCsvDialog->resize(738, 490);
        verticalLayout = new QVBoxLayout(ImportCsvDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelName = new QLabel(ImportCsvDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        editName = new QLineEdit(ImportCsvDialog);
        editName->setObjectName(QString::fromUtf8("editName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editName);

        labelHeader = new QLabel(ImportCsvDialog);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelHeader);

        checkboxHeader = new QCheckBox(ImportCsvDialog);
        checkboxHeader->setObjectName(QString::fromUtf8("checkboxHeader"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkboxHeader);

        labelSeparator = new QLabel(ImportCsvDialog);
        labelSeparator->setObjectName(QString::fromUtf8("labelSeparator"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelSeparator);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboSeparator = new QComboBox(ImportCsvDialog);
        comboSeparator->setObjectName(QString::fromUtf8("comboSeparator"));

        horizontalLayout->addWidget(comboSeparator);

        editCustomSeparator = new QLineEdit(ImportCsvDialog);
        editCustomSeparator->setObjectName(QString::fromUtf8("editCustomSeparator"));
        editCustomSeparator->setMaxLength(1);

        horizontalLayout->addWidget(editCustomSeparator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        labelQuote = new QLabel(ImportCsvDialog);
        labelQuote->setObjectName(QString::fromUtf8("labelQuote"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelQuote);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboQuote = new QComboBox(ImportCsvDialog);
        comboQuote->setObjectName(QString::fromUtf8("comboQuote"));

        horizontalLayout_2->addWidget(comboQuote);

        editCustomQuote = new QLineEdit(ImportCsvDialog);
        editCustomQuote->setObjectName(QString::fromUtf8("editCustomQuote"));
        editCustomQuote->setMaxLength(1);

        horizontalLayout_2->addWidget(editCustomQuote);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        labelEncoding = new QLabel(ImportCsvDialog);
        labelEncoding->setObjectName(QString::fromUtf8("labelEncoding"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelEncoding);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboEncoding = new QComboBox(ImportCsvDialog);
        comboEncoding->setObjectName(QString::fromUtf8("comboEncoding"));

        horizontalLayout_3->addWidget(comboEncoding);

        editCustomEncoding = new QLineEdit(ImportCsvDialog);
        editCustomEncoding->setObjectName(QString::fromUtf8("editCustomEncoding"));

        horizontalLayout_3->addWidget(editCustomEncoding);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_3);

        labelTrim = new QLabel(ImportCsvDialog);
        labelTrim->setObjectName(QString::fromUtf8("labelTrim"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelTrim);

        checkBoxTrimFields = new QCheckBox(ImportCsvDialog);
        checkBoxTrimFields->setObjectName(QString::fromUtf8("checkBoxTrimFields"));
        checkBoxTrimFields->setChecked(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, checkBoxTrimFields);


        verticalLayout->addLayout(formLayout);

        tablePreview = new QTableWidget(ImportCsvDialog);
        tablePreview->setObjectName(QString::fromUtf8("tablePreview"));

        verticalLayout->addWidget(tablePreview);

        buttonBox = new QDialogButtonBox(ImportCsvDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelName->setBuddy(editName);
        labelHeader->setBuddy(checkboxHeader);
        labelSeparator->setBuddy(comboSeparator);
        labelQuote->setBuddy(comboQuote);
        labelEncoding->setBuddy(comboEncoding);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editName, checkboxHeader);
        QWidget::setTabOrder(checkboxHeader, comboSeparator);
        QWidget::setTabOrder(comboSeparator, editCustomSeparator);
        QWidget::setTabOrder(editCustomSeparator, comboQuote);
        QWidget::setTabOrder(comboQuote, editCustomQuote);
        QWidget::setTabOrder(editCustomQuote, comboEncoding);
        QWidget::setTabOrder(comboEncoding, editCustomEncoding);
        QWidget::setTabOrder(editCustomEncoding, tablePreview);

        retranslateUi(ImportCsvDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImportCsvDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportCsvDialog, SLOT(reject()));
        QObject::connect(checkboxHeader, SIGNAL(toggled(bool)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(comboSeparator, SIGNAL(currentIndexChanged(int)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(comboQuote, SIGNAL(currentIndexChanged(int)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(editName, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(checkInput()));
        QObject::connect(editCustomSeparator, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(editCustomQuote, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(comboEncoding, SIGNAL(currentIndexChanged(int)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(editCustomEncoding, SIGNAL(textChanged(QString)), ImportCsvDialog, SLOT(updatePreview()));
        QObject::connect(checkBoxTrimFields, SIGNAL(toggled(bool)), ImportCsvDialog, SLOT(updatePreview()));

        QMetaObject::connectSlotsByName(ImportCsvDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportCsvDialog)
    {
        ImportCsvDialog->setWindowTitle(QApplication::translate("ImportCsvDialog", "Import CSV file", 0, QApplication::UnicodeUTF8));
        labelName->setText(QApplication::translate("ImportCsvDialog", "&Table name", 0, QApplication::UnicodeUTF8));
        labelHeader->setText(QApplication::translate("ImportCsvDialog", "&Column names in first line", 0, QApplication::UnicodeUTF8));
        checkboxHeader->setText(QString());
        labelSeparator->setText(QApplication::translate("ImportCsvDialog", "Field &separator", 0, QApplication::UnicodeUTF8));
        comboSeparator->clear();
        comboSeparator->insertItems(0, QStringList()
         << QApplication::translate("ImportCsvDialog", ",", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", ";", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "Tab", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "|", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "Other", 0, QApplication::UnicodeUTF8)
        );
        labelQuote->setText(QApplication::translate("ImportCsvDialog", "&Quote character", 0, QApplication::UnicodeUTF8));
        comboQuote->clear();
        comboQuote->insertItems(0, QStringList()
         << QApplication::translate("ImportCsvDialog", "\"", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "'", 0, QApplication::UnicodeUTF8)
         << QString()
         << QApplication::translate("ImportCsvDialog", "Other", 0, QApplication::UnicodeUTF8)
        );
        labelEncoding->setText(QApplication::translate("ImportCsvDialog", "&Encoding", 0, QApplication::UnicodeUTF8));
        comboEncoding->clear();
        comboEncoding->insertItems(0, QStringList()
         << QApplication::translate("ImportCsvDialog", "UTF-8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "UTF-16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "ISO-8859-1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImportCsvDialog", "Other", 0, QApplication::UnicodeUTF8)
        );
        labelTrim->setText(QApplication::translate("ImportCsvDialog", "Trim fields?", 0, QApplication::UnicodeUTF8));
        checkBoxTrimFields->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImportCsvDialog: public Ui_ImportCsvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTCSVDIALOG_H
