/********************************************************************************
** Form generated from reading UI file 'EditDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttomImport;
    QPushButton *buttonExport;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboEditor;
    QPushButton *buttonClear;
    QStackedWidget *editorStack;
    QWidget *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelBinayWarning;
    QTextEdit *editorText;
    QWidget *editorBinary;
    QScrollArea *editorImageScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *editorImage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelType;
    QLabel *labelSize;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(618, 382);
        verticalLayout_5 = new QVBoxLayout(EditDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttomImport = new QPushButton(EditDialog);
        buttomImport->setObjectName(QString::fromUtf8("buttomImport"));

        horizontalLayout->addWidget(buttomImport);

        buttonExport = new QPushButton(EditDialog);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));

        horizontalLayout->addWidget(buttonExport);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboEditor = new QComboBox(EditDialog);
        comboEditor->setObjectName(QString::fromUtf8("comboEditor"));

        horizontalLayout->addWidget(comboEditor);

        buttonClear = new QPushButton(EditDialog);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));

        horizontalLayout->addWidget(buttonClear);


        verticalLayout_5->addLayout(horizontalLayout);

        editorStack = new QStackedWidget(EditDialog);
        editorStack->setObjectName(QString::fromUtf8("editorStack"));
        verticalLayout_4 = new QWidget();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout(verticalLayout_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelBinayWarning = new QLabel(verticalLayout_4);
        labelBinayWarning->setObjectName(QString::fromUtf8("labelBinayWarning"));

        verticalLayout_3->addWidget(labelBinayWarning);

        editorText = new QTextEdit(verticalLayout_4);
        editorText->setObjectName(QString::fromUtf8("editorText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        editorText->setFont(font);
        editorText->setAcceptRichText(false);

        verticalLayout_3->addWidget(editorText);

        editorStack->addWidget(verticalLayout_4);
        editorBinary = new QWidget();
        editorBinary->setObjectName(QString::fromUtf8("editorBinary"));
        editorStack->addWidget(editorBinary);
        editorImageScrollArea = new QScrollArea();
        editorImageScrollArea->setObjectName(QString::fromUtf8("editorImageScrollArea"));
        editorImageScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 76, 29));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        editorImage = new QLabel(scrollAreaWidgetContents);
        editorImage->setObjectName(QString::fromUtf8("editorImage"));

        verticalLayout_2->addWidget(editorImage);

        editorImageScrollArea->setWidget(scrollAreaWidgetContents);
        editorStack->addWidget(editorImageScrollArea);

        verticalLayout_5->addWidget(editorStack);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelType = new QLabel(EditDialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        verticalLayout->addWidget(labelType);

        labelSize = new QLabel(EditDialog);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        verticalLayout->addWidget(labelSize);


        horizontalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(EditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_5->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(buttomImport, buttonExport);
        QWidget::setTabOrder(buttonExport, comboEditor);
        QWidget::setTabOrder(comboEditor, buttonClear);
        QWidget::setTabOrder(buttonClear, buttonBox);

        retranslateUi(EditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditDialog, SLOT(reject()));
        QObject::connect(buttomImport, SIGNAL(clicked()), EditDialog, SLOT(importData()));
        QObject::connect(buttonExport, SIGNAL(clicked()), EditDialog, SLOT(exportData()));
        QObject::connect(buttonClear, SIGNAL(clicked()), EditDialog, SLOT(clearData()));
        QObject::connect(editorText, SIGNAL(textChanged()), EditDialog, SLOT(editTextChanged()));
        QObject::connect(comboEditor, SIGNAL(currentIndexChanged(int)), editorStack, SLOT(setCurrentIndex(int)));
        QObject::connect(editorStack, SIGNAL(currentChanged(int)), comboEditor, SLOT(setCurrentIndex(int)));

        editorStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QApplication::translate("EditDialog", "Edit database cell", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttomImport->setToolTip(QApplication::translate("EditDialog", "Import text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttomImport->setWhatsThis(QApplication::translate("EditDialog", "Opens a file dialog used to import text to this database cell.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttomImport->setText(QApplication::translate("EditDialog", "&Import", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonExport->setToolTip(QApplication::translate("EditDialog", "Export text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonExport->setWhatsThis(QApplication::translate("EditDialog", "Opens a file dialog used to export the contents of this database cell to a text file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonExport->setText(QApplication::translate("EditDialog", "&Export", 0, QApplication::UnicodeUTF8));
        comboEditor->clear();
        comboEditor->insertItems(0, QStringList()
         << QApplication::translate("EditDialog", "Text", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditDialog", "Binary", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        buttonClear->setToolTip(QApplication::translate("EditDialog", "Clear cell data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonClear->setWhatsThis(QApplication::translate("EditDialog", "Erases the contents of the cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonClear->setText(QApplication::translate("EditDialog", "&Clear", 0, QApplication::UnicodeUTF8));
        labelBinayWarning->setText(QApplication::translate("EditDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#c00000;\">Warning: Editing binary content in text mode may result in corrupted data!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        editorText->setWhatsThis(QApplication::translate("EditDialog", "This area displays information about the data present in this database cell", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        editorImage->setText(QString());
        labelType->setText(QApplication::translate("EditDialog", "Type of data currently in cell", 0, QApplication::UnicodeUTF8));
        labelSize->setText(QApplication::translate("EditDialog", "Size of data currently in table", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
