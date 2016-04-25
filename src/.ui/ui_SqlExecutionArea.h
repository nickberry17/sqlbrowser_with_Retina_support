/********************************************************************************
** Form generated from reading UI file 'SqlExecutionArea.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLEXECUTIONAREA_H
#define UI_SQLEXECUTIONAREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ExtendedTableWidget.h"
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SqlExecutionArea
{
public:
    QAction *actionExportCsv;
    QAction *actionSaveAsView;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    SqlTextEdit *editEditor;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    ExtendedTableWidget *tableResult;
    QHBoxLayout *horizontalLayout;
    QTextEdit *editErrors;
    QToolButton *buttonSave;

    void setupUi(QWidget *SqlExecutionArea)
    {
        if (SqlExecutionArea->objectName().isEmpty())
            SqlExecutionArea->setObjectName(QString::fromUtf8("SqlExecutionArea"));
        SqlExecutionArea->resize(365, 482);
        actionExportCsv = new QAction(SqlExecutionArea);
        actionExportCsv->setObjectName(QString::fromUtf8("actionExportCsv"));
        actionSaveAsView = new QAction(SqlExecutionArea);
        actionSaveAsView->setObjectName(QString::fromUtf8("actionSaveAsView"));
        verticalLayout_2 = new QVBoxLayout(SqlExecutionArea);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(SqlExecutionArea);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        editEditor = new SqlTextEdit(splitter);
        editEditor->setObjectName(QString::fromUtf8("editEditor"));
        splitter->addWidget(editEditor);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableResult = new ExtendedTableWidget(widget);
        tableResult->setObjectName(QString::fromUtf8("tableResult"));
        tableResult->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableResult);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editErrors = new QTextEdit(widget);
        editErrors->setObjectName(QString::fromUtf8("editErrors"));
        editErrors->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        editErrors->setFont(font);
        editErrors->setAcceptDrops(false);
        editErrors->setFrameShape(QFrame::StyledPanel);
        editErrors->setFrameShadow(QFrame::Sunken);
        editErrors->setTabChangesFocus(true);
        editErrors->setUndoRedoEnabled(false);
        editErrors->setReadOnly(true);

        horizontalLayout->addWidget(editErrors);

        buttonSave = new QToolButton(widget);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));
        buttonSave->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/save_table"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSave->setIcon(icon);
        buttonSave->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(buttonSave);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);

        QWidget::setTabOrder(tableResult, editErrors);
        QWidget::setTabOrder(editErrors, buttonSave);

        retranslateUi(SqlExecutionArea);
        QObject::connect(actionExportCsv, SIGNAL(triggered()), SqlExecutionArea, SLOT(saveAsCsv()));
        QObject::connect(actionSaveAsView, SIGNAL(triggered()), SqlExecutionArea, SLOT(saveAsView()));

        QMetaObject::connectSlotsByName(SqlExecutionArea);
    } // setupUi

    void retranslateUi(QWidget *SqlExecutionArea)
    {
        SqlExecutionArea->setWindowTitle(QApplication::translate("SqlExecutionArea", "Form", 0, QApplication::UnicodeUTF8));
        actionExportCsv->setText(QApplication::translate("SqlExecutionArea", "Export to &CSV", 0, QApplication::UnicodeUTF8));
        actionSaveAsView->setText(QApplication::translate("SqlExecutionArea", "Save as &view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveAsView->setToolTip(QApplication::translate("SqlExecutionArea", "Save as view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        editErrors->setToolTip(QApplication::translate("SqlExecutionArea", "Results of the last executed statements", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        editErrors->setWhatsThis(QApplication::translate("SqlExecutionArea", "This field shows the results and status codes of the last executed statements.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SqlExecutionArea: public Ui_SqlExecutionArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLEXECUTIONAREA_H
