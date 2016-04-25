/********************************************************************************
** Form generated from reading UI file 'ColumnDisplayFormatDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNDISPLAYFORMATDIALOG_H
#define UI_COLUMNDISPLAYFORMATDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_ColumnDisplayFormatDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDisplayFormat;
    QComboBox *comboDisplayFormat;
    SqlTextEdit *editDisplayFormat;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColumnDisplayFormatDialog)
    {
        if (ColumnDisplayFormatDialog->objectName().isEmpty())
            ColumnDisplayFormatDialog->setObjectName(QString::fromUtf8("ColumnDisplayFormatDialog"));
        ColumnDisplayFormatDialog->resize(624, 205);
        verticalLayout = new QVBoxLayout(ColumnDisplayFormatDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ColumnDisplayFormatDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelDisplayFormat = new QLabel(groupBox);
        labelDisplayFormat->setObjectName(QString::fromUtf8("labelDisplayFormat"));

        verticalLayout_2->addWidget(labelDisplayFormat);

        comboDisplayFormat = new QComboBox(groupBox);
        comboDisplayFormat->setObjectName(QString::fromUtf8("comboDisplayFormat"));

        verticalLayout_2->addWidget(comboDisplayFormat);

        editDisplayFormat = new SqlTextEdit(groupBox);
        editDisplayFormat->setObjectName(QString::fromUtf8("editDisplayFormat"));
        editDisplayFormat->setReadOnly(true);

        verticalLayout_2->addWidget(editDisplayFormat);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(ColumnDisplayFormatDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(comboDisplayFormat, editDisplayFormat);

        retranslateUi(ColumnDisplayFormatDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColumnDisplayFormatDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColumnDisplayFormatDialog, SLOT(reject()));
        QObject::connect(comboDisplayFormat, SIGNAL(currentIndexChanged(int)), ColumnDisplayFormatDialog, SLOT(updateSqlCode()));

        QMetaObject::connectSlotsByName(ColumnDisplayFormatDialog);
    } // setupUi

    void retranslateUi(QDialog *ColumnDisplayFormatDialog)
    {
        ColumnDisplayFormatDialog->setWindowTitle(QApplication::translate("ColumnDisplayFormatDialog", "Choose display format", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ColumnDisplayFormatDialog", "Display format", 0, QApplication::UnicodeUTF8));
        labelDisplayFormat->setText(QApplication::translate("ColumnDisplayFormatDialog", "Choose a display format for the column '%1' which is applied to each value prior to showing it.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColumnDisplayFormatDialog: public Ui_ColumnDisplayFormatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNDISPLAYFORMATDIALOG_H
