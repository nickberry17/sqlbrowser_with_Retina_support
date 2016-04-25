/********************************************************************************
** Form generated from reading UI file 'VacuumDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VACUUMDIALOG_H
#define UI_VACUUMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VacuumDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelSavepointWarning;
    QLabel *label;
    QTreeWidget *treeSelectedObjects;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VacuumDialog)
    {
        if (VacuumDialog->objectName().isEmpty())
            VacuumDialog->setObjectName(QString::fromUtf8("VacuumDialog"));
        VacuumDialog->resize(475, 439);
        verticalLayout = new QVBoxLayout(VacuumDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelSavepointWarning = new QLabel(VacuumDialog);
        labelSavepointWarning->setObjectName(QString::fromUtf8("labelSavepointWarning"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelSavepointWarning->setFont(font);
        labelSavepointWarning->setWordWrap(true);
        labelSavepointWarning->setMargin(5);

        verticalLayout->addWidget(labelSavepointWarning);

        label = new QLabel(VacuumDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        treeSelectedObjects = new QTreeWidget(VacuumDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeSelectedObjects->setHeaderItem(__qtreewidgetitem);
        treeSelectedObjects->setObjectName(QString::fromUtf8("treeSelectedObjects"));
        treeSelectedObjects->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeSelectedObjects->setProperty("showDropIndicator", QVariant(false));
        treeSelectedObjects->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeSelectedObjects->setRootIsDecorated(false);
        treeSelectedObjects->setItemsExpandable(false);
        treeSelectedObjects->setExpandsOnDoubleClick(false);
        treeSelectedObjects->header()->setVisible(false);

        verticalLayout->addWidget(treeSelectedObjects);

        buttonBox = new QDialogButtonBox(VacuumDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(treeSelectedObjects);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(treeSelectedObjects, buttonBox);

        retranslateUi(VacuumDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VacuumDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VacuumDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VacuumDialog);
    } // setupUi

    void retranslateUi(QDialog *VacuumDialog)
    {
        VacuumDialog->setWindowTitle(QApplication::translate("VacuumDialog", "Compact Database", 0, QApplication::UnicodeUTF8));
        labelSavepointWarning->setText(QApplication::translate("VacuumDialog", "Warning: Compacting the database will commit all changes you made.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VacuumDialog", "Please select the objects to compact:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VacuumDialog: public Ui_VacuumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VACUUMDIALOG_H
