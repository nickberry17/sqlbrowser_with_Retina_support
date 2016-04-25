/********************************************************************************
** Form generated from reading UI file 'CipherDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIPHERDIALOG_H
#define UI_CIPHERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CipherDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelDialogDescription;
    QFormLayout *formLayout;
    QLabel *labelPassword;
    QLineEdit *editPassword;
    QLabel *labelPassword2;
    QLineEdit *editPassword2;
    QLabel *label_3;
    QSpinBox *spinPageSize;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CipherDialog)
    {
        if (CipherDialog->objectName().isEmpty())
            CipherDialog->setObjectName(QString::fromUtf8("CipherDialog"));
        CipherDialog->resize(712, 147);
        verticalLayout = new QVBoxLayout(CipherDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelDialogDescription = new QLabel(CipherDialog);
        labelDialogDescription->setObjectName(QString::fromUtf8("labelDialogDescription"));

        verticalLayout->addWidget(labelDialogDescription);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelPassword = new QLabel(CipherDialog);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelPassword);

        editPassword = new QLineEdit(CipherDialog);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, editPassword);

        labelPassword2 = new QLabel(CipherDialog);
        labelPassword2->setObjectName(QString::fromUtf8("labelPassword2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword2);

        editPassword2 = new QLineEdit(CipherDialog);
        editPassword2->setObjectName(QString::fromUtf8("editPassword2"));
        editPassword2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, editPassword2);

        label_3 = new QLabel(CipherDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinPageSize = new QSpinBox(CipherDialog);
        spinPageSize->setObjectName(QString::fromUtf8("spinPageSize"));
        spinPageSize->setMinimum(1);
        spinPageSize->setMaximum(8092);
        spinPageSize->setValue(1024);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinPageSize);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(CipherDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelPassword->setBuddy(editPassword);
        labelPassword2->setBuddy(editPassword2);
        label_3->setBuddy(spinPageSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(CipherDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CipherDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CipherDialog, SLOT(reject()));
        QObject::connect(editPassword, SIGNAL(textChanged(QString)), CipherDialog, SLOT(checkInputFields()));
        QObject::connect(editPassword2, SIGNAL(textChanged(QString)), CipherDialog, SLOT(checkInputFields()));

        QMetaObject::connectSlotsByName(CipherDialog);
    } // setupUi

    void retranslateUi(QDialog *CipherDialog)
    {
        CipherDialog->setWindowTitle(QApplication::translate("CipherDialog", "SQLCipher encryption", 0, QApplication::UnicodeUTF8));
        labelPassword->setText(QApplication::translate("CipherDialog", "&Password", 0, QApplication::UnicodeUTF8));
        labelPassword2->setText(QApplication::translate("CipherDialog", "&Reenter password", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CipherDialog", "Page &size", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CipherDialog: public Ui_CipherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIPHERDIALOG_H
