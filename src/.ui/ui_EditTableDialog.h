/********************************************************************************
** Form generated from reading UI file 'EditTableDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLEDIALOG_H
#define UI_EDITTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditTableDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupTable;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *editTableName;
    QToolButton *buttonMore;
    QWidget *widgetExtension;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkWithoutRowid;
    QGroupBox *groupFields;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addFieldButton;
    QToolButton *removeFieldButton;
    QToolButton *buttonMoveUp;
    QToolButton *buttonMoveDown;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    SqlTextEdit *sqlTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditTableDialog)
    {
        if (EditTableDialog->objectName().isEmpty())
            EditTableDialog->setObjectName(QString::fromUtf8("EditTableDialog"));
        EditTableDialog->resize(650, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/table"), QSize(), QIcon::Normal, QIcon::Off);
        EditTableDialog->setWindowIcon(icon);
        EditTableDialog->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(EditTableDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupTable = new QGroupBox(EditTableDialog);
        groupTable->setObjectName(QString::fromUtf8("groupTable"));
        verticalLayout_3 = new QVBoxLayout(groupTable);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        editTableName = new QLineEdit(groupTable);
        editTableName->setObjectName(QString::fromUtf8("editTableName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editTableName->setFont(font);

        verticalLayout_3->addWidget(editTableName);

        buttonMore = new QToolButton(groupTable);
        buttonMore->setObjectName(QString::fromUtf8("buttonMore"));
        buttonMore->setCheckable(true);
        buttonMore->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMore->setArrowType(Qt::DownArrow);

        verticalLayout_3->addWidget(buttonMore);

        widgetExtension = new QWidget(groupTable);
        widgetExtension->setObjectName(QString::fromUtf8("widgetExtension"));
        verticalLayout_5 = new QVBoxLayout(widgetExtension);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkWithoutRowid = new QCheckBox(widgetExtension);
        checkWithoutRowid->setObjectName(QString::fromUtf8("checkWithoutRowid"));

        verticalLayout_5->addWidget(checkWithoutRowid);


        verticalLayout_3->addWidget(widgetExtension);


        verticalLayout_2->addWidget(groupTable);

        groupFields = new QGroupBox(EditTableDialog);
        groupFields->setObjectName(QString::fromUtf8("groupFields"));
        verticalLayout = new QVBoxLayout(groupFields);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addFieldButton = new QToolButton(groupFields);
        addFieldButton->setObjectName(QString::fromUtf8("addFieldButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/field_add"), QSize(), QIcon::Normal, QIcon::Off);
        addFieldButton->setIcon(icon1);
        addFieldButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        addFieldButton->setAutoRaise(true);

        horizontalLayout->addWidget(addFieldButton);

        removeFieldButton = new QToolButton(groupFields);
        removeFieldButton->setObjectName(QString::fromUtf8("removeFieldButton"));
        removeFieldButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/field_delete"), QSize(), QIcon::Normal, QIcon::Off);
        removeFieldButton->setIcon(icon2);
        removeFieldButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        removeFieldButton->setAutoRaise(true);

        horizontalLayout->addWidget(removeFieldButton);

        buttonMoveUp = new QToolButton(groupFields);
        buttonMoveUp->setObjectName(QString::fromUtf8("buttonMoveUp"));
        buttonMoveUp->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/up"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMoveUp->setIcon(icon3);
        buttonMoveUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMoveUp->setAutoRaise(true);

        horizontalLayout->addWidget(buttonMoveUp);

        buttonMoveDown = new QToolButton(groupFields);
        buttonMoveDown->setObjectName(QString::fromUtf8("buttonMoveDown"));
        buttonMoveDown->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/down"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMoveDown->setIcon(icon4);
        buttonMoveDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMoveDown->setAutoRaise(true);

        horizontalLayout->addWidget(buttonMoveDown);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(groupFields);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 140));
        treeWidget->setRootIsDecorated(false);
        splitter->addWidget(treeWidget);
        sqlTextEdit = new SqlTextEdit(splitter);
        sqlTextEdit->setObjectName(QString::fromUtf8("sqlTextEdit"));
        sqlTextEdit->setReadOnly(true);
        splitter->addWidget(sqlTextEdit);

        verticalLayout_4->addWidget(splitter);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(groupFields);

        buttonBox = new QDialogButtonBox(EditTableDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(editTableName, buttonMore);
        QWidget::setTabOrder(buttonMore, checkWithoutRowid);
        QWidget::setTabOrder(checkWithoutRowid, addFieldButton);
        QWidget::setTabOrder(addFieldButton, removeFieldButton);
        QWidget::setTabOrder(removeFieldButton, buttonMoveUp);
        QWidget::setTabOrder(buttonMoveUp, buttonMoveDown);
        QWidget::setTabOrder(buttonMoveDown, treeWidget);
        QWidget::setTabOrder(treeWidget, sqlTextEdit);

        retranslateUi(EditTableDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTableDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTableDialog, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(itemSelectionChanged()), EditTableDialog, SLOT(fieldSelectionChanged()));
        QObject::connect(addFieldButton, SIGNAL(clicked()), EditTableDialog, SLOT(addField()));
        QObject::connect(removeFieldButton, SIGNAL(clicked()), EditTableDialog, SLOT(removeField()));
        QObject::connect(editTableName, SIGNAL(textChanged(QString)), EditTableDialog, SLOT(checkInput()));
        QObject::connect(buttonMoveUp, SIGNAL(clicked()), EditTableDialog, SLOT(moveUp()));
        QObject::connect(buttonMoveDown, SIGNAL(clicked()), EditTableDialog, SLOT(moveDown()));
        QObject::connect(buttonMore, SIGNAL(toggled(bool)), widgetExtension, SLOT(setVisible(bool)));
        QObject::connect(checkWithoutRowid, SIGNAL(toggled(bool)), EditTableDialog, SLOT(setWithoutRowid(bool)));
        QObject::connect(treeWidget, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)), EditTableDialog, SLOT(fieldSelectionChanged()));

        QMetaObject::connectSlotsByName(EditTableDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTableDialog)
    {
        EditTableDialog->setWindowTitle(QApplication::translate("EditTableDialog", "Edit table definition", 0, QApplication::UnicodeUTF8));
        groupTable->setTitle(QApplication::translate("EditTableDialog", "Table", 0, QApplication::UnicodeUTF8));
        buttonMore->setText(QApplication::translate("EditTableDialog", "Advanced", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkWithoutRowid->setToolTip(QApplication::translate("EditTableDialog", "Make this a 'WITHOUT rowid' table. Setting this flag requires a field of type INTEGER with the primary key flag set and the auto increment flag unset.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkWithoutRowid->setText(QApplication::translate("EditTableDialog", "Without Rowid", 0, QApplication::UnicodeUTF8));
        groupFields->setTitle(QApplication::translate("EditTableDialog", "Fields", 0, QApplication::UnicodeUTF8));
        addFieldButton->setText(QApplication::translate("EditTableDialog", "Add field", 0, QApplication::UnicodeUTF8));
        removeFieldButton->setText(QApplication::translate("EditTableDialog", "Remove field", 0, QApplication::UnicodeUTF8));
        buttonMoveUp->setText(QApplication::translate("EditTableDialog", "Move field up", 0, QApplication::UnicodeUTF8));
        buttonMoveDown->setText(QApplication::translate("EditTableDialog", "Move field down", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(8, QApplication::translate("EditTableDialog", "Foreign Key", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(7, QApplication::translate("EditTableDialog", "Check", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(6, QApplication::translate("EditTableDialog", "Default", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(5, QApplication::translate("EditTableDialog", "U", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("EditTableDialog", "AI", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("EditTableDialog", "PK", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("EditTableDialog", "Not null", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("EditTableDialog", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("EditTableDialog", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(7, QApplication::translate("EditTableDialog", "Check constraint", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setToolTip(6, QApplication::translate("EditTableDialog", "Default value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("EditTableDialog", "Unique", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setToolTip(4, QApplication::translate("EditTableDialog", "Autoincrement", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setToolTip(3, QApplication::translate("EditTableDialog", "Primary key", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setToolTip(2, QApplication::translate("EditTableDialog", "Not null", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class EditTableDialog: public Ui_EditTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLEDIALOG_H
