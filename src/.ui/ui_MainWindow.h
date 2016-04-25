/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ExtendedTableWidget.h"
#include "qcustomplot.h"
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *fileNewAction;
    QAction *fileOpenAction;
    QAction *fileCloseAction;
    QAction *fileRevertAction;
    QAction *fileSaveAction;
    QAction *fileCompactAction;
    QAction *fileExitAction;
    QAction *fileImportSQLAction;
    QAction *fileImportCSVAction;
    QAction *fileExportSQLAction;
    QAction *fileExportCSVAction;
    QAction *editCreateTableAction;
    QAction *editDeleteObjectAction;
    QAction *editModifyTableAction;
    QAction *editCreateIndexAction;
    QAction *viewPreferencesAction;
    QAction *viewDBToolbarAction;
    QAction *helpWhatsThisAction;
    QAction *helpAboutAction;
    QAction *actionRecent_y_opened;
    QAction *actionSqlOpenTab;
    QAction *actionExecuteSql;
    QAction *actionSqlOpenFile;
    QAction *actionSqlSaveFile;
    QAction *actionLoadExtension;
    QAction *actionSqlExecuteLine;
    QAction *actionExportCsvPopup;
    QAction *actionWiki;
    QAction *actionBug_report;
    QAction *actionWebsite;
    QAction *actionSaveProject;
    QAction *actionOpenProject;
    QAction *fileAttachAction;
    QAction *actionEncryption;
    QAction *actionSqlSaveFileAs;
    QAction *actionSqlSaveFilePopup;
    QAction *actionEditBrowseTable;
    QAction *actionEditCopyCreateStatement;
    QAction *actionBrowseTableEditDisplayFormat;
    QAction *actionShowRowidColumn;
    QAction *actionSetTableEncoding;
    QAction *actionSetAllTablesEncoding;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *mainTab;
    QWidget *structure;
    QVBoxLayout *verticalLayout;
    QToolBar *dbToolbar;
    QTreeView *dbTreeWidget;
    QWidget *browser;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBrowseTable;
    QToolButton *buttonRefresh;
    QToolButton *buttonClearFilters;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonNewRecord;
    QPushButton *buttonDeleteRecord;
    ExtendedTableWidget *dataTable;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *buttonBegin;
    QToolButton *buttonPrevious;
    QLabel *labelRecordset;
    QToolButton *buttonNext;
    QToolButton *buttonEnd;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonGoto;
    QLineEdit *editGoto;
    QWidget *pragmas;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollareaPragmas;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *labelPragmaAutoVacuum;
    QComboBox *comboboxPragmaAutoVacuum;
    QLabel *labelPragmaAutomaticIndex;
    QCheckBox *checkboxPragmaAutomaticIndex;
    QLabel *labelPragmaCheckpointFullFsync;
    QCheckBox *checkboxPragmaCheckpointFullFsync;
    QLabel *labelPragmaForeignKeys;
    QCheckBox *checkboxPragmaForeignKeys;
    QLabel *labelPragmaFullFsync;
    QCheckBox *checkboxPragmaFullFsync;
    QLabel *labelPragmaIgnoreCheckConstraints;
    QCheckBox *checkboxPragmaIgnoreCheckConstraints;
    QLabel *labelPragmaJournalMode;
    QComboBox *comboboxPragmaJournalMode;
    QLabel *labelJournalSizeLimit;
    QSpinBox *spinPragmaJournalSizeLimit;
    QLabel *labelPragmaLockingMode;
    QComboBox *comboboxPragmaLockingMode;
    QLabel *labelPragmaMaxPageCount;
    QSpinBox *spinPragmaMaxPageCount;
    QLabel *labelPragmaPageSize;
    QSpinBox *spinPragmaPageSize;
    QLabel *labelPragmaRecursiveTriggers;
    QCheckBox *checkboxPragmaRecursiveTriggers;
    QLabel *labelPragmaSecureDelete;
    QCheckBox *checkboxPragmaSecureDelete;
    QLabel *labelPragmaSynchronous;
    QComboBox *comboboxPragmaSynchronous;
    QLabel *labelPragmaTempStore;
    QComboBox *comboboxPragmaTempStore;
    QLabel *labelPragmaUserVersion;
    QSpinBox *spinPragmaUserVersion;
    QLabel *labelPragmaWalAutoCheckpoint;
    QSpinBox *spinPragmaWalAutoCheckpoint;
    QDialogButtonBox *buttonBoxPragmas;
    QWidget *query;
    QVBoxLayout *verticalLayout_3;
    QToolBar *toolbarSql;
    QTabWidget *tabSqlAreas;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *menuImport;
    QMenu *menuExport;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QStatusBar *statusbar;
    QToolBar *toolbarDB;
    QDockWidget *dockLog;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelLogSubmittedBy;
    QComboBox *comboLogSubmittedBy;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonLogClear;
    QStackedWidget *stackLog;
    SqlTextEdit *editLogUser;
    SqlTextEdit *editLogApplication;
    QDockWidget *dockPlot;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QSplitter *splitterForPlot;
    QTreeWidget *treePlotColumns;
    QCustomPlot *plotWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *comboLineType;
    QLabel *label_3;
    QComboBox *comboPointShape;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *butSavePlot;
    QDockWidget *dockSchema;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QTreeView *treeSchemaDock;
    QDockWidget *dockEditWindow;
    QWidget *dockWidgetContents_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1037, 630);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/appicon"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        fileNewAction = new QAction(MainWindow);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/db_new"), QSize(), QIcon::Normal, QIcon::Off);
        fileNewAction->setIcon(icon1);
        fileOpenAction = new QAction(MainWindow);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/db_open"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon2);
        fileCloseAction = new QAction(MainWindow);
        fileCloseAction->setObjectName(QString::fromUtf8("fileCloseAction"));
        fileCloseAction->setEnabled(false);
        fileRevertAction = new QAction(MainWindow);
        fileRevertAction->setObjectName(QString::fromUtf8("fileRevertAction"));
        fileRevertAction->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/db_revert"), QSize(), QIcon::Normal, QIcon::Off);
        fileRevertAction->setIcon(icon3);
        fileSaveAction = new QAction(MainWindow);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        fileSaveAction->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/db_save"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon4);
        fileCompactAction = new QAction(MainWindow);
        fileCompactAction->setObjectName(QString::fromUtf8("fileCompactAction"));
        fileCompactAction->setEnabled(false);
        fileExitAction = new QAction(MainWindow);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        fileExitAction->setMenuRole(QAction::QuitRole);
        fileImportSQLAction = new QAction(MainWindow);
        fileImportSQLAction->setObjectName(QString::fromUtf8("fileImportSQLAction"));
        fileImportCSVAction = new QAction(MainWindow);
        fileImportCSVAction->setObjectName(QString::fromUtf8("fileImportCSVAction"));
        fileExportSQLAction = new QAction(MainWindow);
        fileExportSQLAction->setObjectName(QString::fromUtf8("fileExportSQLAction"));
        fileExportCSVAction = new QAction(MainWindow);
        fileExportCSVAction->setObjectName(QString::fromUtf8("fileExportCSVAction"));
        editCreateTableAction = new QAction(MainWindow);
        editCreateTableAction->setObjectName(QString::fromUtf8("editCreateTableAction"));
        editCreateTableAction->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/table_create"), QSize(), QIcon::Normal, QIcon::Off);
        editCreateTableAction->setIcon(icon5);
        editDeleteObjectAction = new QAction(MainWindow);
        editDeleteObjectAction->setObjectName(QString::fromUtf8("editDeleteObjectAction"));
        editDeleteObjectAction->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/table_delete"), QSize(), QIcon::Normal, QIcon::Off);
        editDeleteObjectAction->setIcon(icon6);
        editModifyTableAction = new QAction(MainWindow);
        editModifyTableAction->setObjectName(QString::fromUtf8("editModifyTableAction"));
        editModifyTableAction->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/table_modify"), QSize(), QIcon::Normal, QIcon::Off);
        editModifyTableAction->setIcon(icon7);
        editCreateIndexAction = new QAction(MainWindow);
        editCreateIndexAction->setObjectName(QString::fromUtf8("editCreateIndexAction"));
        editCreateIndexAction->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/index_create"), QSize(), QIcon::Normal, QIcon::Off);
        editCreateIndexAction->setIcon(icon8);
        viewPreferencesAction = new QAction(MainWindow);
        viewPreferencesAction->setObjectName(QString::fromUtf8("viewPreferencesAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/settings"), QSize(), QIcon::Normal, QIcon::Off);
        viewPreferencesAction->setIcon(icon9);
        viewPreferencesAction->setMenuRole(QAction::PreferencesRole);
        viewDBToolbarAction = new QAction(MainWindow);
        viewDBToolbarAction->setObjectName(QString::fromUtf8("viewDBToolbarAction"));
        viewDBToolbarAction->setCheckable(true);
        helpWhatsThisAction = new QAction(MainWindow);
        helpWhatsThisAction->setObjectName(QString::fromUtf8("helpWhatsThisAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/whatis"), QSize(), QIcon::Normal, QIcon::Off);
        helpWhatsThisAction->setIcon(icon10);
        helpAboutAction = new QAction(MainWindow);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        helpAboutAction->setMenuRole(QAction::AboutRole);
        actionRecent_y_opened = new QAction(MainWindow);
        actionRecent_y_opened->setObjectName(QString::fromUtf8("actionRecent_y_opened"));
        actionSqlOpenTab = new QAction(MainWindow);
        actionSqlOpenTab->setObjectName(QString::fromUtf8("actionSqlOpenTab"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/open_tab"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlOpenTab->setIcon(icon11);
        actionExecuteSql = new QAction(MainWindow);
        actionExecuteSql->setObjectName(QString::fromUtf8("actionExecuteSql"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/run"), QSize(), QIcon::Normal, QIcon::Off);
        actionExecuteSql->setIcon(icon12);
        actionSqlOpenFile = new QAction(MainWindow);
        actionSqlOpenFile->setObjectName(QString::fromUtf8("actionSqlOpenFile"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/document_open"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlOpenFile->setIcon(icon13);
        actionSqlSaveFile = new QAction(MainWindow);
        actionSqlSaveFile->setObjectName(QString::fromUtf8("actionSqlSaveFile"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/save_sql"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlSaveFile->setIcon(icon14);
        actionLoadExtension = new QAction(MainWindow);
        actionLoadExtension->setObjectName(QString::fromUtf8("actionLoadExtension"));
        actionLoadExtension->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/load_extension"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadExtension->setIcon(icon15);
        actionSqlExecuteLine = new QAction(MainWindow);
        actionSqlExecuteLine->setObjectName(QString::fromUtf8("actionSqlExecuteLine"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/run_line"), QSize(), QIcon::Normal, QIcon::Off);
        actionSqlExecuteLine->setIcon(icon16);
        actionExportCsvPopup = new QAction(MainWindow);
        actionExportCsvPopup->setObjectName(QString::fromUtf8("actionExportCsvPopup"));
        actionExportCsvPopup->setEnabled(false);
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QString::fromUtf8("actionWiki"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/browser_open"), QSize(), QIcon::Normal, QIcon::Off);
        actionWiki->setIcon(icon17);
        actionBug_report = new QAction(MainWindow);
        actionBug_report->setObjectName(QString::fromUtf8("actionBug_report"));
        actionBug_report->setIcon(icon17);
        actionWebsite = new QAction(MainWindow);
        actionWebsite->setObjectName(QString::fromUtf8("actionWebsite"));
        actionWebsite->setIcon(icon17);
        actionSaveProject = new QAction(MainWindow);
        actionSaveProject->setObjectName(QString::fromUtf8("actionSaveProject"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/project_save"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveProject->setIcon(icon18);
        actionOpenProject = new QAction(MainWindow);
        actionOpenProject->setObjectName(QString::fromUtf8("actionOpenProject"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/project_open"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenProject->setIcon(icon19);
        fileAttachAction = new QAction(MainWindow);
        fileAttachAction->setObjectName(QString::fromUtf8("fileAttachAction"));
        fileAttachAction->setEnabled(false);
        actionEncryption = new QAction(MainWindow);
        actionEncryption->setObjectName(QString::fromUtf8("actionEncryption"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/encryption"), QSize(), QIcon::Normal, QIcon::Off);
        actionEncryption->setIcon(icon20);
        actionSqlSaveFileAs = new QAction(MainWindow);
        actionSqlSaveFileAs->setObjectName(QString::fromUtf8("actionSqlSaveFileAs"));
        actionSqlSaveFileAs->setIcon(icon14);
        actionSqlSaveFilePopup = new QAction(MainWindow);
        actionSqlSaveFilePopup->setObjectName(QString::fromUtf8("actionSqlSaveFilePopup"));
        actionSqlSaveFilePopup->setIcon(icon14);
        actionEditBrowseTable = new QAction(MainWindow);
        actionEditBrowseTable->setObjectName(QString::fromUtf8("actionEditBrowseTable"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons/table"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditBrowseTable->setIcon(icon21);
        actionEditCopyCreateStatement = new QAction(MainWindow);
        actionEditCopyCreateStatement->setObjectName(QString::fromUtf8("actionEditCopyCreateStatement"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCopyCreateStatement->setIcon(icon22);
        actionBrowseTableEditDisplayFormat = new QAction(MainWindow);
        actionBrowseTableEditDisplayFormat->setObjectName(QString::fromUtf8("actionBrowseTableEditDisplayFormat"));
        actionShowRowidColumn = new QAction(MainWindow);
        actionShowRowidColumn->setObjectName(QString::fromUtf8("actionShowRowidColumn"));
        actionShowRowidColumn->setCheckable(true);
        actionSetTableEncoding = new QAction(MainWindow);
        actionSetTableEncoding->setObjectName(QString::fromUtf8("actionSetTableEncoding"));
        actionSetAllTablesEncoding = new QAction(MainWindow);
        actionSetAllTablesEncoding->setObjectName(QString::fromUtf8("actionSetAllTablesEncoding"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        mainTab = new QTabWidget(centralwidget);
        mainTab->setObjectName(QString::fromUtf8("mainTab"));
        structure = new QWidget();
        structure->setObjectName(QString::fromUtf8("structure"));
        verticalLayout = new QVBoxLayout(structure);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dbToolbar = new QToolBar(structure);
        dbToolbar->setObjectName(QString::fromUtf8("dbToolbar"));
        dbToolbar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(dbToolbar);

        dbTreeWidget = new QTreeView(structure);
        dbTreeWidget->setObjectName(QString::fromUtf8("dbTreeWidget"));
        dbTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        dbTreeWidget->setDragEnabled(true);
        dbTreeWidget->setDragDropMode(QAbstractItemView::DragDrop);
        dbTreeWidget->setAlternatingRowColors(true);
        dbTreeWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        dbTreeWidget->setAnimated(true);

        verticalLayout->addWidget(dbTreeWidget);

        mainTab->addTab(structure, QString());
        browser = new QWidget();
        browser->setObjectName(QString::fromUtf8("browser"));
        verticalLayout_2 = new QVBoxLayout(browser);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(browser);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBrowseTable = new QComboBox(browser);
        comboBrowseTable->setObjectName(QString::fromUtf8("comboBrowseTable"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBrowseTable->sizePolicy().hasHeightForWidth());
        comboBrowseTable->setSizePolicy(sizePolicy);
        comboBrowseTable->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBrowseTable);

        buttonRefresh = new QToolButton(browser);
        buttonRefresh->setObjectName(QString::fromUtf8("buttonRefresh"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons/refresh"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRefresh->setIcon(icon23);

        horizontalLayout->addWidget(buttonRefresh);

        buttonClearFilters = new QToolButton(browser);
        buttonClearFilters->setObjectName(QString::fromUtf8("buttonClearFilters"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons/clear_filters"), QSize(), QIcon::Normal, QIcon::Off);
        buttonClearFilters->setIcon(icon24);

        horizontalLayout->addWidget(buttonClearFilters);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonNewRecord = new QPushButton(browser);
        buttonNewRecord->setObjectName(QString::fromUtf8("buttonNewRecord"));

        horizontalLayout->addWidget(buttonNewRecord);

        buttonDeleteRecord = new QPushButton(browser);
        buttonDeleteRecord->setObjectName(QString::fromUtf8("buttonDeleteRecord"));

        horizontalLayout->addWidget(buttonDeleteRecord);


        verticalLayout_2->addLayout(horizontalLayout);

        dataTable = new ExtendedTableWidget(browser);
        dataTable->setObjectName(QString::fromUtf8("dataTable"));
        dataTable->setAcceptDrops(true);
        dataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dataTable->setDragDropMode(QAbstractItemView::DragDrop);
        dataTable->setDefaultDropAction(Qt::CopyAction);
        dataTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_2->addWidget(dataTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonBegin = new QToolButton(browser);
        buttonBegin->setObjectName(QString::fromUtf8("buttonBegin"));
        buttonBegin->setEnabled(false);

        horizontalLayout_2->addWidget(buttonBegin);

        buttonPrevious = new QToolButton(browser);
        buttonPrevious->setObjectName(QString::fromUtf8("buttonPrevious"));
        buttonPrevious->setEnabled(false);

        horizontalLayout_2->addWidget(buttonPrevious);

        labelRecordset = new QLabel(browser);
        labelRecordset->setObjectName(QString::fromUtf8("labelRecordset"));

        horizontalLayout_2->addWidget(labelRecordset);

        buttonNext = new QToolButton(browser);
        buttonNext->setObjectName(QString::fromUtf8("buttonNext"));
        buttonNext->setEnabled(false);

        horizontalLayout_2->addWidget(buttonNext);

        buttonEnd = new QToolButton(browser);
        buttonEnd->setObjectName(QString::fromUtf8("buttonEnd"));
        buttonEnd->setEnabled(false);

        horizontalLayout_2->addWidget(buttonEnd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonGoto = new QPushButton(browser);
        buttonGoto->setObjectName(QString::fromUtf8("buttonGoto"));

        horizontalLayout_2->addWidget(buttonGoto);

        editGoto = new QLineEdit(browser);
        editGoto->setObjectName(QString::fromUtf8("editGoto"));

        horizontalLayout_2->addWidget(editGoto);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mainTab->addTab(browser, QString());
        pragmas = new QWidget();
        pragmas->setObjectName(QString::fromUtf8("pragmas"));
        verticalLayout_4 = new QVBoxLayout(pragmas);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollareaPragmas = new QScrollArea(pragmas);
        scrollareaPragmas->setObjectName(QString::fromUtf8("scrollareaPragmas"));
        scrollareaPragmas->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 280, 558));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelPragmaAutoVacuum = new QLabel(scrollAreaWidgetContents);
        labelPragmaAutoVacuum->setObjectName(QString::fromUtf8("labelPragmaAutoVacuum"));
        labelPragmaAutoVacuum->setOpenExternalLinks(true);
        labelPragmaAutoVacuum->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelPragmaAutoVacuum);

        comboboxPragmaAutoVacuum = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaAutoVacuum->setObjectName(QString::fromUtf8("comboboxPragmaAutoVacuum"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboboxPragmaAutoVacuum);

        labelPragmaAutomaticIndex = new QLabel(scrollAreaWidgetContents);
        labelPragmaAutomaticIndex->setObjectName(QString::fromUtf8("labelPragmaAutomaticIndex"));
        labelPragmaAutomaticIndex->setOpenExternalLinks(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPragmaAutomaticIndex);

        checkboxPragmaAutomaticIndex = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaAutomaticIndex->setObjectName(QString::fromUtf8("checkboxPragmaAutomaticIndex"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkboxPragmaAutomaticIndex);

        labelPragmaCheckpointFullFsync = new QLabel(scrollAreaWidgetContents);
        labelPragmaCheckpointFullFsync->setObjectName(QString::fromUtf8("labelPragmaCheckpointFullFsync"));
        labelPragmaCheckpointFullFsync->setOpenExternalLinks(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelPragmaCheckpointFullFsync);

        checkboxPragmaCheckpointFullFsync = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaCheckpointFullFsync->setObjectName(QString::fromUtf8("checkboxPragmaCheckpointFullFsync"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkboxPragmaCheckpointFullFsync);

        labelPragmaForeignKeys = new QLabel(scrollAreaWidgetContents);
        labelPragmaForeignKeys->setObjectName(QString::fromUtf8("labelPragmaForeignKeys"));
        labelPragmaForeignKeys->setOpenExternalLinks(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelPragmaForeignKeys);

        checkboxPragmaForeignKeys = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaForeignKeys->setObjectName(QString::fromUtf8("checkboxPragmaForeignKeys"));

        formLayout->setWidget(3, QFormLayout::FieldRole, checkboxPragmaForeignKeys);

        labelPragmaFullFsync = new QLabel(scrollAreaWidgetContents);
        labelPragmaFullFsync->setObjectName(QString::fromUtf8("labelPragmaFullFsync"));
        labelPragmaFullFsync->setOpenExternalLinks(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelPragmaFullFsync);

        checkboxPragmaFullFsync = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaFullFsync->setObjectName(QString::fromUtf8("checkboxPragmaFullFsync"));

        formLayout->setWidget(4, QFormLayout::FieldRole, checkboxPragmaFullFsync);

        labelPragmaIgnoreCheckConstraints = new QLabel(scrollAreaWidgetContents);
        labelPragmaIgnoreCheckConstraints->setObjectName(QString::fromUtf8("labelPragmaIgnoreCheckConstraints"));
        labelPragmaIgnoreCheckConstraints->setOpenExternalLinks(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, labelPragmaIgnoreCheckConstraints);

        checkboxPragmaIgnoreCheckConstraints = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaIgnoreCheckConstraints->setObjectName(QString::fromUtf8("checkboxPragmaIgnoreCheckConstraints"));

        formLayout->setWidget(5, QFormLayout::FieldRole, checkboxPragmaIgnoreCheckConstraints);

        labelPragmaJournalMode = new QLabel(scrollAreaWidgetContents);
        labelPragmaJournalMode->setObjectName(QString::fromUtf8("labelPragmaJournalMode"));
        labelPragmaJournalMode->setOpenExternalLinks(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, labelPragmaJournalMode);

        comboboxPragmaJournalMode = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaJournalMode->setObjectName(QString::fromUtf8("comboboxPragmaJournalMode"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboboxPragmaJournalMode);

        labelJournalSizeLimit = new QLabel(scrollAreaWidgetContents);
        labelJournalSizeLimit->setObjectName(QString::fromUtf8("labelJournalSizeLimit"));
        labelJournalSizeLimit->setOpenExternalLinks(true);

        formLayout->setWidget(7, QFormLayout::LabelRole, labelJournalSizeLimit);

        spinPragmaJournalSizeLimit = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaJournalSizeLimit->setObjectName(QString::fromUtf8("spinPragmaJournalSizeLimit"));
        spinPragmaJournalSizeLimit->setMinimum(-1);
        spinPragmaJournalSizeLimit->setMaximum(100000);

        formLayout->setWidget(7, QFormLayout::FieldRole, spinPragmaJournalSizeLimit);

        labelPragmaLockingMode = new QLabel(scrollAreaWidgetContents);
        labelPragmaLockingMode->setObjectName(QString::fromUtf8("labelPragmaLockingMode"));
        labelPragmaLockingMode->setOpenExternalLinks(true);

        formLayout->setWidget(8, QFormLayout::LabelRole, labelPragmaLockingMode);

        comboboxPragmaLockingMode = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaLockingMode->setObjectName(QString::fromUtf8("comboboxPragmaLockingMode"));

        formLayout->setWidget(8, QFormLayout::FieldRole, comboboxPragmaLockingMode);

        labelPragmaMaxPageCount = new QLabel(scrollAreaWidgetContents);
        labelPragmaMaxPageCount->setObjectName(QString::fromUtf8("labelPragmaMaxPageCount"));
        labelPragmaMaxPageCount->setOpenExternalLinks(true);

        formLayout->setWidget(9, QFormLayout::LabelRole, labelPragmaMaxPageCount);

        spinPragmaMaxPageCount = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaMaxPageCount->setObjectName(QString::fromUtf8("spinPragmaMaxPageCount"));
        spinPragmaMaxPageCount->setMaximum(2000000000);

        formLayout->setWidget(9, QFormLayout::FieldRole, spinPragmaMaxPageCount);

        labelPragmaPageSize = new QLabel(scrollAreaWidgetContents);
        labelPragmaPageSize->setObjectName(QString::fromUtf8("labelPragmaPageSize"));
        labelPragmaPageSize->setOpenExternalLinks(true);

        formLayout->setWidget(10, QFormLayout::LabelRole, labelPragmaPageSize);

        spinPragmaPageSize = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaPageSize->setObjectName(QString::fromUtf8("spinPragmaPageSize"));
        spinPragmaPageSize->setMinimum(512);
        spinPragmaPageSize->setMaximum(65536);

        formLayout->setWidget(10, QFormLayout::FieldRole, spinPragmaPageSize);

        labelPragmaRecursiveTriggers = new QLabel(scrollAreaWidgetContents);
        labelPragmaRecursiveTriggers->setObjectName(QString::fromUtf8("labelPragmaRecursiveTriggers"));
        labelPragmaRecursiveTriggers->setOpenExternalLinks(true);

        formLayout->setWidget(11, QFormLayout::LabelRole, labelPragmaRecursiveTriggers);

        checkboxPragmaRecursiveTriggers = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaRecursiveTriggers->setObjectName(QString::fromUtf8("checkboxPragmaRecursiveTriggers"));

        formLayout->setWidget(11, QFormLayout::FieldRole, checkboxPragmaRecursiveTriggers);

        labelPragmaSecureDelete = new QLabel(scrollAreaWidgetContents);
        labelPragmaSecureDelete->setObjectName(QString::fromUtf8("labelPragmaSecureDelete"));
        labelPragmaSecureDelete->setOpenExternalLinks(true);

        formLayout->setWidget(12, QFormLayout::LabelRole, labelPragmaSecureDelete);

        checkboxPragmaSecureDelete = new QCheckBox(scrollAreaWidgetContents);
        checkboxPragmaSecureDelete->setObjectName(QString::fromUtf8("checkboxPragmaSecureDelete"));

        formLayout->setWidget(12, QFormLayout::FieldRole, checkboxPragmaSecureDelete);

        labelPragmaSynchronous = new QLabel(scrollAreaWidgetContents);
        labelPragmaSynchronous->setObjectName(QString::fromUtf8("labelPragmaSynchronous"));
        labelPragmaSynchronous->setOpenExternalLinks(true);

        formLayout->setWidget(13, QFormLayout::LabelRole, labelPragmaSynchronous);

        comboboxPragmaSynchronous = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaSynchronous->setObjectName(QString::fromUtf8("comboboxPragmaSynchronous"));

        formLayout->setWidget(13, QFormLayout::FieldRole, comboboxPragmaSynchronous);

        labelPragmaTempStore = new QLabel(scrollAreaWidgetContents);
        labelPragmaTempStore->setObjectName(QString::fromUtf8("labelPragmaTempStore"));
        labelPragmaTempStore->setOpenExternalLinks(true);

        formLayout->setWidget(14, QFormLayout::LabelRole, labelPragmaTempStore);

        comboboxPragmaTempStore = new QComboBox(scrollAreaWidgetContents);
        comboboxPragmaTempStore->setObjectName(QString::fromUtf8("comboboxPragmaTempStore"));

        formLayout->setWidget(14, QFormLayout::FieldRole, comboboxPragmaTempStore);

        labelPragmaUserVersion = new QLabel(scrollAreaWidgetContents);
        labelPragmaUserVersion->setObjectName(QString::fromUtf8("labelPragmaUserVersion"));
        labelPragmaUserVersion->setOpenExternalLinks(true);

        formLayout->setWidget(15, QFormLayout::LabelRole, labelPragmaUserVersion);

        spinPragmaUserVersion = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaUserVersion->setObjectName(QString::fromUtf8("spinPragmaUserVersion"));
        spinPragmaUserVersion->setMaximum(2147483647);

        formLayout->setWidget(15, QFormLayout::FieldRole, spinPragmaUserVersion);

        labelPragmaWalAutoCheckpoint = new QLabel(scrollAreaWidgetContents);
        labelPragmaWalAutoCheckpoint->setObjectName(QString::fromUtf8("labelPragmaWalAutoCheckpoint"));
        labelPragmaWalAutoCheckpoint->setOpenExternalLinks(true);

        formLayout->setWidget(16, QFormLayout::LabelRole, labelPragmaWalAutoCheckpoint);

        spinPragmaWalAutoCheckpoint = new QSpinBox(scrollAreaWidgetContents);
        spinPragmaWalAutoCheckpoint->setObjectName(QString::fromUtf8("spinPragmaWalAutoCheckpoint"));
        spinPragmaWalAutoCheckpoint->setMaximum(10000);

        formLayout->setWidget(16, QFormLayout::FieldRole, spinPragmaWalAutoCheckpoint);

        scrollareaPragmas->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollareaPragmas);

        buttonBoxPragmas = new QDialogButtonBox(pragmas);
        buttonBoxPragmas->setObjectName(QString::fromUtf8("buttonBoxPragmas"));
        buttonBoxPragmas->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        buttonBoxPragmas->setCenterButtons(false);

        verticalLayout_4->addWidget(buttonBoxPragmas);

        mainTab->addTab(pragmas, QString());
        query = new QWidget();
        query->setObjectName(QString::fromUtf8("query"));
        verticalLayout_3 = new QVBoxLayout(query);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolbarSql = new QToolBar(query);
        toolbarSql->setObjectName(QString::fromUtf8("toolbarSql"));

        verticalLayout_3->addWidget(toolbarSql);

        tabSqlAreas = new QTabWidget(query);
        tabSqlAreas->setObjectName(QString::fromUtf8("tabSqlAreas"));
        tabSqlAreas->setTabsClosable(true);
        tabSqlAreas->setMovable(true);

        verticalLayout_3->addWidget(tabSqlAreas);

        mainTab->addTab(query, QString());

        verticalLayout_7->addWidget(mainTab);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1037, 29));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        menuImport = new QMenu(fileMenu);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuExport = new QMenu(fileMenu);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        editMenu = new QMenu(menubar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolbarDB = new QToolBar(MainWindow);
        toolbarDB->setObjectName(QString::fromUtf8("toolbarDB"));
        toolbarDB->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolbarDB);
        dockLog = new QDockWidget(MainWindow);
        dockLog->setObjectName(QString::fromUtf8("dockLog"));
        dockLog->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelLogSubmittedBy = new QLabel(dockWidgetContents);
        labelLogSubmittedBy->setObjectName(QString::fromUtf8("labelLogSubmittedBy"));

        horizontalLayout_3->addWidget(labelLogSubmittedBy);

        comboLogSubmittedBy = new QComboBox(dockWidgetContents);
        comboLogSubmittedBy->setObjectName(QString::fromUtf8("comboLogSubmittedBy"));

        horizontalLayout_3->addWidget(comboLogSubmittedBy);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        buttonLogClear = new QPushButton(dockWidgetContents);
        buttonLogClear->setObjectName(QString::fromUtf8("buttonLogClear"));

        horizontalLayout_3->addWidget(buttonLogClear);


        verticalLayout_5->addLayout(horizontalLayout_3);

        stackLog = new QStackedWidget(dockWidgetContents);
        stackLog->setObjectName(QString::fromUtf8("stackLog"));
        editLogUser = new SqlTextEdit();
        editLogUser->setObjectName(QString::fromUtf8("editLogUser"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        editLogUser->setFont(font);
        editLogUser->setReadOnly(true);
        stackLog->addWidget(editLogUser);
        editLogApplication = new SqlTextEdit();
        editLogApplication->setObjectName(QString::fromUtf8("editLogApplication"));
        editLogApplication->setFont(font);
        editLogApplication->setReadOnly(true);
        stackLog->addWidget(editLogApplication);

        verticalLayout_5->addWidget(stackLog);

        dockLog->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockLog);
        dockPlot = new QDockWidget(MainWindow);
        dockPlot->setObjectName(QString::fromUtf8("dockPlot"));
        dockPlot->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        splitterForPlot = new QSplitter(dockWidgetContents_2);
        splitterForPlot->setObjectName(QString::fromUtf8("splitterForPlot"));
        splitterForPlot->setOrientation(Qt::Vertical);
        treePlotColumns = new QTreeWidget(splitterForPlot);
        treePlotColumns->setObjectName(QString::fromUtf8("treePlotColumns"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(treePlotColumns->sizePolicy().hasHeightForWidth());
        treePlotColumns->setSizePolicy(sizePolicy1);
        treePlotColumns->setColumnCount(4);
        splitterForPlot->addWidget(treePlotColumns);
        treePlotColumns->header()->setDefaultSectionSize(100);
        plotWidget = new QCustomPlot(splitterForPlot);
        plotWidget->setObjectName(QString::fromUtf8("plotWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(8);
        sizePolicy2.setHeightForWidth(plotWidget->sizePolicy().hasHeightForWidth());
        plotWidget->setSizePolicy(sizePolicy2);
        splitterForPlot->addWidget(plotWidget);

        verticalLayout_6->addWidget(splitterForPlot);

        widget = new QWidget(dockWidgetContents_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        comboLineType = new QComboBox(widget);
        comboLineType->setObjectName(QString::fromUtf8("comboLineType"));

        horizontalLayout_4->addWidget(comboLineType);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboPointShape = new QComboBox(widget);
        comboPointShape->setObjectName(QString::fromUtf8("comboPointShape"));

        horizontalLayout_4->addWidget(comboPointShape);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        butSavePlot = new QPushButton(widget);
        butSavePlot->setObjectName(QString::fromUtf8("butSavePlot"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons/save_table"), QSize(), QIcon::Normal, QIcon::Off);
        butSavePlot->setIcon(icon25);
        butSavePlot->setCheckable(false);
        butSavePlot->setAutoDefault(false);
        butSavePlot->setDefault(false);
        butSavePlot->setFlat(false);

        horizontalLayout_4->addWidget(butSavePlot);


        verticalLayout_6->addWidget(widget);

        dockPlot->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockPlot);
        dockSchema = new QDockWidget(MainWindow);
        dockSchema->setObjectName(QString::fromUtf8("dockSchema"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_9 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        treeSchemaDock = new QTreeView(dockWidgetContents_3);
        treeSchemaDock->setObjectName(QString::fromUtf8("treeSchemaDock"));
        treeSchemaDock->setAlternatingRowColors(true);
        treeSchemaDock->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeSchemaDock->setAnimated(true);

        verticalLayout_9->addWidget(treeSchemaDock);

        dockSchema->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockSchema);
        dockEditWindow = new QDockWidget(MainWindow);
        dockEditWindow->setObjectName(QString::fromUtf8("dockEditWindow"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        dockEditWindow->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockEditWindow);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBrowseTable);
        labelPragmaAutoVacuum->setBuddy(comboboxPragmaAutoVacuum);
        labelPragmaAutomaticIndex->setBuddy(checkboxPragmaAutomaticIndex);
        labelPragmaCheckpointFullFsync->setBuddy(checkboxPragmaCheckpointFullFsync);
        labelPragmaForeignKeys->setBuddy(checkboxPragmaForeignKeys);
        labelPragmaFullFsync->setBuddy(checkboxPragmaFullFsync);
        labelPragmaIgnoreCheckConstraints->setBuddy(checkboxPragmaIgnoreCheckConstraints);
        labelPragmaJournalMode->setBuddy(comboboxPragmaJournalMode);
        labelJournalSizeLimit->setBuddy(spinPragmaJournalSizeLimit);
        labelPragmaLockingMode->setBuddy(comboboxPragmaLockingMode);
        labelPragmaMaxPageCount->setBuddy(spinPragmaMaxPageCount);
        labelPragmaPageSize->setBuddy(spinPragmaPageSize);
        labelPragmaRecursiveTriggers->setBuddy(checkboxPragmaRecursiveTriggers);
        labelPragmaSecureDelete->setBuddy(checkboxPragmaSecureDelete);
        labelPragmaSynchronous->setBuddy(comboboxPragmaSynchronous);
        labelPragmaTempStore->setBuddy(comboboxPragmaTempStore);
        labelPragmaUserVersion->setBuddy(spinPragmaUserVersion);
        labelPragmaWalAutoCheckpoint->setBuddy(spinPragmaWalAutoCheckpoint);
        labelLogSubmittedBy->setBuddy(comboLogSubmittedBy);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(dbTreeWidget, comboBrowseTable);
        QWidget::setTabOrder(comboBrowseTable, buttonRefresh);
        QWidget::setTabOrder(buttonRefresh, buttonClearFilters);
        QWidget::setTabOrder(buttonClearFilters, buttonNewRecord);
        QWidget::setTabOrder(buttonNewRecord, buttonDeleteRecord);
        QWidget::setTabOrder(buttonDeleteRecord, dataTable);
        QWidget::setTabOrder(dataTable, buttonPrevious);
        QWidget::setTabOrder(buttonPrevious, buttonNext);
        QWidget::setTabOrder(buttonNext, buttonGoto);
        QWidget::setTabOrder(buttonGoto, editGoto);
        QWidget::setTabOrder(editGoto, scrollareaPragmas);
        QWidget::setTabOrder(scrollareaPragmas, comboboxPragmaAutoVacuum);
        QWidget::setTabOrder(comboboxPragmaAutoVacuum, checkboxPragmaAutomaticIndex);
        QWidget::setTabOrder(checkboxPragmaAutomaticIndex, checkboxPragmaCheckpointFullFsync);
        QWidget::setTabOrder(checkboxPragmaCheckpointFullFsync, checkboxPragmaForeignKeys);
        QWidget::setTabOrder(checkboxPragmaForeignKeys, checkboxPragmaFullFsync);
        QWidget::setTabOrder(checkboxPragmaFullFsync, checkboxPragmaIgnoreCheckConstraints);
        QWidget::setTabOrder(checkboxPragmaIgnoreCheckConstraints, comboboxPragmaJournalMode);
        QWidget::setTabOrder(comboboxPragmaJournalMode, spinPragmaJournalSizeLimit);
        QWidget::setTabOrder(spinPragmaJournalSizeLimit, comboboxPragmaLockingMode);
        QWidget::setTabOrder(comboboxPragmaLockingMode, spinPragmaMaxPageCount);
        QWidget::setTabOrder(spinPragmaMaxPageCount, spinPragmaPageSize);
        QWidget::setTabOrder(spinPragmaPageSize, checkboxPragmaRecursiveTriggers);
        QWidget::setTabOrder(checkboxPragmaRecursiveTriggers, checkboxPragmaSecureDelete);
        QWidget::setTabOrder(checkboxPragmaSecureDelete, comboboxPragmaSynchronous);
        QWidget::setTabOrder(comboboxPragmaSynchronous, comboboxPragmaTempStore);
        QWidget::setTabOrder(comboboxPragmaTempStore, spinPragmaUserVersion);
        QWidget::setTabOrder(spinPragmaUserVersion, spinPragmaWalAutoCheckpoint);
        QWidget::setTabOrder(spinPragmaWalAutoCheckpoint, comboLogSubmittedBy);
        QWidget::setTabOrder(comboLogSubmittedBy, buttonLogClear);

        dbToolbar->addAction(editCreateTableAction);
        dbToolbar->addAction(editModifyTableAction);
        dbToolbar->addAction(editDeleteObjectAction);
        toolbarSql->addAction(actionSqlOpenTab);
        toolbarSql->addAction(actionSqlOpenFile);
        toolbarSql->addAction(actionSqlSaveFilePopup);
        toolbarSql->addSeparator();
        toolbarSql->addAction(actionExecuteSql);
        toolbarSql->addAction(actionSqlExecuteLine);
        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(editMenu->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileNewAction);
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileAttachAction);
        fileMenu->addAction(fileCloseAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileRevertAction);
        fileMenu->addAction(fileCompactAction);
        fileMenu->addAction(actionEncryption);
        fileMenu->addAction(actionLoadExtension);
        fileMenu->addSeparator();
        fileMenu->addAction(menuImport->menuAction());
        fileMenu->addAction(menuExport->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(actionOpenProject);
        fileMenu->addAction(actionSaveProject);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        menuImport->addAction(fileImportSQLAction);
        menuImport->addAction(fileImportCSVAction);
        menuExport->addAction(fileExportSQLAction);
        menuExport->addAction(fileExportCSVAction);
        editMenu->addAction(editCreateTableAction);
        editMenu->addAction(editModifyTableAction);
        editMenu->addAction(editDeleteObjectAction);
        editMenu->addSeparator();
        editMenu->addAction(editCreateIndexAction);
        viewMenu->addAction(viewDBToolbarAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewPreferencesAction);
        helpMenu->addAction(helpWhatsThisAction);
        helpMenu->addAction(actionWebsite);
        helpMenu->addAction(actionWiki);
        helpMenu->addAction(actionBug_report);
        helpMenu->addAction(helpAboutAction);
        toolbarDB->addAction(fileNewAction);
        toolbarDB->addAction(fileOpenAction);
        toolbarDB->addSeparator();
        toolbarDB->addAction(fileSaveAction);
        toolbarDB->addAction(fileRevertAction);

        retranslateUi(MainWindow);
        QObject::connect(fileExitAction, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(fileOpenAction, SIGNAL(triggered()), MainWindow, SLOT(fileOpen()));
        QObject::connect(fileNewAction, SIGNAL(triggered()), MainWindow, SLOT(fileNew()));
        QObject::connect(fileCloseAction, SIGNAL(triggered()), MainWindow, SLOT(fileClose()));
        QObject::connect(comboBrowseTable, SIGNAL(activated(QString)), MainWindow, SLOT(populateTable(QString)));
        QObject::connect(buttonNewRecord, SIGNAL(clicked()), MainWindow, SLOT(addRecord()));
        QObject::connect(buttonDeleteRecord, SIGNAL(clicked()), MainWindow, SLOT(deleteRecord()));
        QObject::connect(buttonPrevious, SIGNAL(clicked()), MainWindow, SLOT(navigatePrevious()));
        QObject::connect(buttonNext, SIGNAL(clicked()), MainWindow, SLOT(navigateNext()));
        QObject::connect(buttonGoto, SIGNAL(clicked()), MainWindow, SLOT(navigateGoto()));
        QObject::connect(editGoto, SIGNAL(returnPressed()), MainWindow, SLOT(navigateGoto()));
        QObject::connect(buttonRefresh, SIGNAL(clicked()), MainWindow, SLOT(browseRefresh()));
        QObject::connect(fileCompactAction, SIGNAL(triggered()), MainWindow, SLOT(compact()));
        QObject::connect(helpWhatsThisAction, SIGNAL(triggered()), MainWindow, SLOT(helpWhatsThis()));
        QObject::connect(helpAboutAction, SIGNAL(triggered()), MainWindow, SLOT(helpAbout()));
        QObject::connect(mainTab, SIGNAL(currentChanged(int)), MainWindow, SLOT(mainTabSelected(int)));
        QObject::connect(fileImportCSVAction, SIGNAL(triggered()), MainWindow, SLOT(importTableFromCSV()));
        QObject::connect(fileExportCSVAction, SIGNAL(triggered()), MainWindow, SLOT(exportTableToCSV()));
        QObject::connect(fileRevertAction, SIGNAL(triggered()), MainWindow, SLOT(fileRevert()));
        QObject::connect(fileSaveAction, SIGNAL(triggered()), MainWindow, SLOT(fileSave()));
        QObject::connect(editCreateIndexAction, SIGNAL(triggered()), MainWindow, SLOT(createIndex()));
        QObject::connect(editDeleteObjectAction, SIGNAL(triggered()), MainWindow, SLOT(deleteObject()));
        QObject::connect(editModifyTableAction, SIGNAL(triggered()), MainWindow, SLOT(editTable()));
        QObject::connect(fileExportSQLAction, SIGNAL(triggered()), MainWindow, SLOT(exportDatabaseToSQL()));
        QObject::connect(fileImportSQLAction, SIGNAL(triggered()), MainWindow, SLOT(importDatabaseFromSQL()));
        QObject::connect(viewPreferencesAction, SIGNAL(triggered()), MainWindow, SLOT(openPreferences()));
        QObject::connect(dbTreeWidget, SIGNAL(customContextMenuRequested(QPoint)), MainWindow, SLOT(createTreeContextMenu(QPoint)));
        QObject::connect(viewDBToolbarAction, SIGNAL(toggled(bool)), toolbarDB, SLOT(setVisible(bool)));
        QObject::connect(editCreateTableAction, SIGNAL(triggered()), MainWindow, SLOT(createTable()));
        QObject::connect(buttonBoxPragmas, SIGNAL(rejected()), MainWindow, SLOT(loadPragmas()));
        QObject::connect(buttonBoxPragmas, SIGNAL(accepted()), MainWindow, SLOT(savePragmas()));
        QObject::connect(buttonLogClear, SIGNAL(clicked()), editLogApplication, SLOT(clear()));
        QObject::connect(buttonLogClear, SIGNAL(clicked()), editLogUser, SLOT(clear()));
        QObject::connect(comboLogSubmittedBy, SIGNAL(currentIndexChanged(int)), stackLog, SLOT(setCurrentIndex(int)));
        QObject::connect(dataTable, SIGNAL(doubleClicked(QModelIndex)), MainWindow, SLOT(doubleClickTable(QModelIndex)));
        QObject::connect(tabSqlAreas, SIGNAL(tabCloseRequested(int)), MainWindow, SLOT(closeSqlTab(int)));
        QObject::connect(actionExecuteSql, SIGNAL(triggered()), MainWindow, SLOT(executeQuery()));
        QObject::connect(actionSqlOpenTab, SIGNAL(triggered()), MainWindow, SLOT(openSqlTab()));
        QObject::connect(actionSqlOpenFile, SIGNAL(triggered()), MainWindow, SLOT(openSqlFile()));
        QObject::connect(actionSqlSaveFile, SIGNAL(triggered()), MainWindow, SLOT(saveSqlFile()));
        QObject::connect(actionLoadExtension, SIGNAL(triggered()), MainWindow, SLOT(loadExtension()));
        QObject::connect(actionSqlExecuteLine, SIGNAL(triggered()), MainWindow, SLOT(executeQuery()));
        QObject::connect(actionExportCsvPopup, SIGNAL(triggered()), MainWindow, SLOT(exportTableToCSV()));
        QObject::connect(actionOpenProject, SIGNAL(triggered()), MainWindow, SLOT(loadProject()));
        QObject::connect(actionSaveProject, SIGNAL(triggered()), MainWindow, SLOT(saveProject()));
        QObject::connect(fileAttachAction, SIGNAL(triggered()), MainWindow, SLOT(fileAttach()));
        QObject::connect(actionEncryption, SIGNAL(triggered()), MainWindow, SLOT(editEncryption()));
        QObject::connect(actionSqlSaveFilePopup, SIGNAL(triggered()), MainWindow, SLOT(saveSqlFile()));
        QObject::connect(actionSqlSaveFileAs, SIGNAL(triggered()), MainWindow, SLOT(saveSqlFileAs()));
        QObject::connect(buttonEnd, SIGNAL(clicked()), MainWindow, SLOT(navigateEnd()));
        QObject::connect(buttonBegin, SIGNAL(clicked()), MainWindow, SLOT(navigateBegin()));
        QObject::connect(actionEditBrowseTable, SIGNAL(triggered()), MainWindow, SLOT(switchToBrowseDataTab()));
        QObject::connect(actionEditCopyCreateStatement, SIGNAL(triggered()), MainWindow, SLOT(copyCurrentCreateStatement()));
        QObject::connect(dataTable, SIGNAL(foreignKeyClicked(QString,QString,QByteArray)), MainWindow, SLOT(jumpToRow(QString,QString,QByteArray)));
        QObject::connect(actionBrowseTableEditDisplayFormat, SIGNAL(triggered()), MainWindow, SLOT(editDataColumnDisplayFormat()));
        QObject::connect(actionShowRowidColumn, SIGNAL(triggered(bool)), MainWindow, SLOT(showRowidColumn(bool)));
        QObject::connect(actionSetTableEncoding, SIGNAL(triggered()), MainWindow, SLOT(browseDataSetTableEncoding()));
        QObject::connect(actionSetAllTablesEncoding, SIGNAL(triggered()), MainWindow, SLOT(browseDataSetDefaultTableEncoding()));

        mainTab->setCurrentIndex(0);
        tabSqlAreas->setCurrentIndex(-1);
        stackLog->setCurrentIndex(0);
        comboLineType->setCurrentIndex(1);
        comboPointShape->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DB Browser for SQLite", 0, QApplication::UnicodeUTF8));
        fileNewAction->setText(QApplication::translate("MainWindow", "&New Database...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileNewAction->setToolTip(QApplication::translate("MainWindow", "Create a new database file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        fileNewAction->setStatusTip(QApplication::translate("MainWindow", "Create a new database file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        fileNewAction->setWhatsThis(QApplication::translate("MainWindow", "This option is used to create a new database file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileNewAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setText(QApplication::translate("MainWindow", "&Open Database...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileOpenAction->setToolTip(QApplication::translate("MainWindow", "Open an existing database file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        fileOpenAction->setStatusTip(QApplication::translate("MainWindow", "Open an existing database file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        fileOpenAction->setWhatsThis(QApplication::translate("MainWindow", "This option is used to open an existing database file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileOpenAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        fileCloseAction->setText(QApplication::translate("MainWindow", "&Close Database", 0, QApplication::UnicodeUTF8));
        fileCloseAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        fileRevertAction->setText(QApplication::translate("MainWindow", "&Revert Changes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileRevertAction->setToolTip(QApplication::translate("MainWindow", "Revert database to last saved state", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileRevertAction->setWhatsThis(QApplication::translate("MainWindow", "This option is used to revert the current database file to its last saved state. All changes made since the last save operation are lost.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileSaveAction->setText(QApplication::translate("MainWindow", "&Write Changes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileSaveAction->setToolTip(QApplication::translate("MainWindow", "Write changes to the database file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileSaveAction->setWhatsThis(QApplication::translate("MainWindow", "This option is used to save changes to the database file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileSaveAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        fileCompactAction->setText(QApplication::translate("MainWindow", "Compact &Database", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileCompactAction->setToolTip(QApplication::translate("MainWindow", "Compact the database file, removing space wasted by deleted records", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        fileCompactAction->setStatusTip(QApplication::translate("MainWindow", "Compact the database file, removing space wasted by deleted records.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        fileCompactAction->setWhatsThis(QApplication::translate("MainWindow", "Compact the database file, removing space wasted by deleted records.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileExitAction->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        fileImportSQLAction->setText(QApplication::translate("MainWindow", "&Database from SQL file...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileImportSQLAction->setToolTip(QApplication::translate("MainWindow", "Import data from an .sql dump text file into a new or existing database.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileImportSQLAction->setWhatsThis(QApplication::translate("MainWindow", "This option lets you import data from an .sql dump text file into a new or existing database. SQL dump files can be created on most database engines, including MySQL and PostgreSQL.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileImportCSVAction->setText(QApplication::translate("MainWindow", "&Table from CSV file...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileImportCSVAction->setToolTip(QApplication::translate("MainWindow", "Open a wizard that lets you import data from a comma separated text file into a database table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileImportCSVAction->setWhatsThis(QApplication::translate("MainWindow", "Open a wizard that lets you import data from a comma separated text file into a database table. CSV files can be created on most database and spreadsheet applications.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileExportSQLAction->setText(QApplication::translate("MainWindow", "&Database to SQL file...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileExportSQLAction->setToolTip(QApplication::translate("MainWindow", "Export a database to a .sql dump text file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileExportSQLAction->setWhatsThis(QApplication::translate("MainWindow", "This option lets you export a database to a .sql dump text file. SQL dump files contain all data necessary to recreate the database on most database engines, including MySQL and PostgreSQL.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileExportCSVAction->setText(QApplication::translate("MainWindow", "&Table(s) as CSV file...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileExportCSVAction->setToolTip(QApplication::translate("MainWindow", "Export a database table as a comma separated text file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileExportCSVAction->setWhatsThis(QApplication::translate("MainWindow", "Export a database table as a comma separated text file, ready to be imported into other database or spreadsheet applications.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        editCreateTableAction->setText(QApplication::translate("MainWindow", "&Create Table...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        editCreateTableAction->setWhatsThis(QApplication::translate("MainWindow", "Open the Create Table wizard, where it is possible to define the name and fields for a new table in the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        editDeleteObjectAction->setText(QApplication::translate("MainWindow", "&Delete Table...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editDeleteObjectAction->setToolTip(QApplication::translate("MainWindow", "Delete Table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        editDeleteObjectAction->setWhatsThis(QApplication::translate("MainWindow", "Open the Delete Table wizard, where you can select a database table to be dropped.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        editModifyTableAction->setText(QApplication::translate("MainWindow", "&Modify Table...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        editModifyTableAction->setWhatsThis(QApplication::translate("MainWindow", "Open the Modify Table wizard, where it is possible to rename an existing table. It is also possible to add or delete fields form a table, as well as modify field names and types.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        editCreateIndexAction->setText(QApplication::translate("MainWindow", "Create &Index...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        editCreateIndexAction->setWhatsThis(QApplication::translate("MainWindow", "Open the Create Index wizard, where it is possible to define a new index on an existing database table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        viewPreferencesAction->setText(QApplication::translate("MainWindow", "&Preferences...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewPreferencesAction->setToolTip(QApplication::translate("MainWindow", "Open the preferences window.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        viewPreferencesAction->setWhatsThis(QApplication::translate("MainWindow", "Open the preferences window.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        viewDBToolbarAction->setText(QApplication::translate("MainWindow", "&DB Toolbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        viewDBToolbarAction->setWhatsThis(QApplication::translate("MainWindow", "Shows or hides the Database toolbar.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        helpWhatsThisAction->setText(QApplication::translate("MainWindow", "W&hat's This?", 0, QApplication::UnicodeUTF8));
        helpWhatsThisAction->setShortcut(QApplication::translate("MainWindow", "Shift+F1", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setText(QApplication::translate("MainWindow", "&About...", 0, QApplication::UnicodeUTF8));
        actionRecent_y_opened->setText(QApplication::translate("MainWindow", "&Recently opened", 0, QApplication::UnicodeUTF8));
        actionSqlOpenTab->setText(QApplication::translate("MainWindow", "Open &tab", 0, QApplication::UnicodeUTF8));
        actionSqlOpenTab->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionExecuteSql->setText(QApplication::translate("MainWindow", "&Execute SQL", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExecuteSql->setToolTip(QApplication::translate("MainWindow", "Execute SQL [F5, Ctrl+Return]", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExecuteSql->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionSqlOpenFile->setText(QApplication::translate("MainWindow", "Open SQL file", 0, QApplication::UnicodeUTF8));
        actionSqlSaveFile->setText(QApplication::translate("MainWindow", "Save SQL file", 0, QApplication::UnicodeUTF8));
        actionLoadExtension->setText(QApplication::translate("MainWindow", "&Load extension", 0, QApplication::UnicodeUTF8));
        actionSqlExecuteLine->setText(QApplication::translate("MainWindow", "Execute current line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSqlExecuteLine->setToolTip(QApplication::translate("MainWindow", "Execute current line [Ctrl+E]", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSqlExecuteLine->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionExportCsvPopup->setText(QApplication::translate("MainWindow", "Export as CSV file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExportCsvPopup->setToolTip(QApplication::translate("MainWindow", "Export table as comma separated values file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWiki->setText(QApplication::translate("MainWindow", "&Wiki...", 0, QApplication::UnicodeUTF8));
        actionBug_report->setText(QApplication::translate("MainWindow", "Bug &report...", 0, QApplication::UnicodeUTF8));
        actionWebsite->setText(QApplication::translate("MainWindow", "Web&site...", 0, QApplication::UnicodeUTF8));
        actionSaveProject->setText(QApplication::translate("MainWindow", "Sa&ve Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveProject->setToolTip(QApplication::translate("MainWindow", "Save the current session to a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSaveProject->setStatusTip(QApplication::translate("MainWindow", "Save the current session to a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionOpenProject->setText(QApplication::translate("MainWindow", "Open &Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenProject->setToolTip(QApplication::translate("MainWindow", "Load a working session from a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionOpenProject->setStatusTip(QApplication::translate("MainWindow", "Load a working session from a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fileAttachAction->setText(QApplication::translate("MainWindow", "&Attach Database", 0, QApplication::UnicodeUTF8));
        actionEncryption->setText(QApplication::translate("MainWindow", "&Set Encryption", 0, QApplication::UnicodeUTF8));
        actionSqlSaveFileAs->setText(QApplication::translate("MainWindow", "Save SQL file as", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSqlSaveFileAs->setToolTip(QApplication::translate("MainWindow", "Save SQL file as", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSqlSaveFilePopup->setText(QApplication::translate("MainWindow", "Save SQL file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSqlSaveFilePopup->setToolTip(QApplication::translate("MainWindow", "Save SQL file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEditBrowseTable->setText(QApplication::translate("MainWindow", "&Browse Table", 0, QApplication::UnicodeUTF8));
        actionEditCopyCreateStatement->setText(QApplication::translate("MainWindow", "Copy Create statement", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEditCopyCreateStatement->setToolTip(QApplication::translate("MainWindow", "Copy the CREATE statement of the item to the clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBrowseTableEditDisplayFormat->setText(QApplication::translate("MainWindow", "Edit display format", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBrowseTableEditDisplayFormat->setToolTip(QApplication::translate("MainWindow", "Edit the display format of the data in this column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowRowidColumn->setText(QApplication::translate("MainWindow", "Show rowid column", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowRowidColumn->setToolTip(QApplication::translate("MainWindow", "Toggle the visibility of the rowid column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetTableEncoding->setText(QApplication::translate("MainWindow", "Set encoding", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetTableEncoding->setToolTip(QApplication::translate("MainWindow", "Change the encoding of the text in the table cells", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetAllTablesEncoding->setText(QApplication::translate("MainWindow", "Set encoding for all tables", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetAllTablesEncoding->setToolTip(QApplication::translate("MainWindow", "Change the default encoding assumed for all tables in the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dbToolbar->setWindowTitle(QApplication::translate("MainWindow", "toolBar1", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(structure), QApplication::translate("MainWindow", "Database &Structure", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Table:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        comboBrowseTable->setToolTip(QApplication::translate("MainWindow", "Select a table to browse data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        comboBrowseTable->setWhatsThis(QApplication::translate("MainWindow", "Use this list to select a table to be displayed in the database view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        buttonRefresh->setToolTip(QApplication::translate("MainWindow", "Refresh the data in the selected table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonRefresh->setWhatsThis(QApplication::translate("MainWindow", "This button refreshes the data in the currently selected table.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonRefresh->setText(QString());
        buttonRefresh->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonClearFilters->setToolTip(QApplication::translate("MainWindow", "Clear all filters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonClearFilters->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonNewRecord->setToolTip(QApplication::translate("MainWindow", "Insert a new record in the current table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonNewRecord->setWhatsThis(QApplication::translate("MainWindow", "This button creates a new, empty record in the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonNewRecord->setText(QApplication::translate("MainWindow", "New Record", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonDeleteRecord->setToolTip(QApplication::translate("MainWindow", "Delete the current record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonDeleteRecord->setWhatsThis(QApplication::translate("MainWindow", "This button deletes the record currently selected in the database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonDeleteRecord->setText(QApplication::translate("MainWindow", "Delete Record", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        dataTable->setWhatsThis(QApplication::translate("MainWindow", "This is the database view. You can double-click any record to edit its contents in the cell editor window.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        buttonBegin->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Scroll to the beginning</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonBegin->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Clicking this button navigates to the beginning in the table view above.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonBegin->setText(QApplication::translate("MainWindow", "|<", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonPrevious->setToolTip(QApplication::translate("MainWindow", "Scroll 100 records upwards", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonPrevious->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Clicking this button navigates 100 records upwards in the table view above.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonPrevious->setText(QApplication::translate("MainWindow", "<", 0, QApplication::UnicodeUTF8));
        labelRecordset->setText(QApplication::translate("MainWindow", "0 - 0 of 0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonNext->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Scroll 100 records downwards</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonNext->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Clicking this button navigates 100 records downwards in the table view above.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonNext->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonEnd->setToolTip(QApplication::translate("MainWindow", "Scroll to the end", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonEnd->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>&lt;html&gt;&lt;head/&gt;&lt;body&gt;&lt;p&gt;Clicking this button navigates up to the end in the table view above.&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonEnd->setText(QApplication::translate("MainWindow", ">|", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonGoto->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Click here to jump to the specified record</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonGoto->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>This button is used to navigate to the record number specified in the Go to area.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonGoto->setText(QApplication::translate("MainWindow", "Go to:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editGoto->setToolTip(QApplication::translate("MainWindow", "Enter record number to browse", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        editGoto->setWhatsThis(QApplication::translate("MainWindow", "Type a record number in this area and click the Go to: button to display the record in the database view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        editGoto->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(browser), QApplication::translate("MainWindow", "&Browse Data", 0, QApplication::UnicodeUTF8));
        labelPragmaAutoVacuum->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_auto_vacuum\"><span style=\" text-decoration: underline; color:#0000ff;\">Auto Vacuum</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboboxPragmaAutoVacuum->clear();
        comboboxPragmaAutoVacuum->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Full", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Incremental", 0, QApplication::UnicodeUTF8)
        );
        labelPragmaAutomaticIndex->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_automatic_index\"><span style=\" text-decoration: underline; color:#0000ff;\">Automatic Index</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaAutomaticIndex->setText(QString());
        labelPragmaCheckpointFullFsync->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_checkpoint_fullfsync\"><span style=\" text-decoration: underline; color:#0000ff;\">Checkpoint Full FSYNC</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaCheckpointFullFsync->setText(QString());
        labelPragmaForeignKeys->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_foreign_keys\"><span style=\" text-decoration: underline; color:#0000ff;\">Foreign Keys</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaForeignKeys->setText(QString());
        labelPragmaFullFsync->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_fullfsync\"><span style=\" text-decoration: underline; color:#0000ff;\">Full FSYNC</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaFullFsync->setText(QString());
        labelPragmaIgnoreCheckConstraints->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_ignore_check_constraints\"><span style=\" text-decoration: underline; color:#0000ff;\">Ignore Check Constraints</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaIgnoreCheckConstraints->setText(QString());
        labelPragmaJournalMode->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_journal_mode\"><span style=\" text-decoration: underline; color:#0000ff;\">Journal Mode</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboboxPragmaJournalMode->clear();
        comboboxPragmaJournalMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Truncate", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Persist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Memory", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "WAL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Off", 0, QApplication::UnicodeUTF8)
        );
        labelJournalSizeLimit->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_journal_size_limit\"><span style=\" text-decoration: underline; color:#0000ff;\">Journal Size Limit</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelPragmaLockingMode->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_locking_mode\"><span style=\" text-decoration: underline; color:#0000ff;\">Locking Mode</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboboxPragmaLockingMode->clear();
        comboboxPragmaLockingMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Exclusive", 0, QApplication::UnicodeUTF8)
        );
        labelPragmaMaxPageCount->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_max_page_count\"><span style=\" text-decoration: underline; color:#0000ff;\">Max Page Count</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelPragmaPageSize->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_page_size\"><span style=\" text-decoration: underline; color:#0000ff;\">Page Size</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelPragmaRecursiveTriggers->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_recursive_triggers\"><span style=\" text-decoration: underline; color:#0000ff;\">Recursive Triggers</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaRecursiveTriggers->setText(QString());
        labelPragmaSecureDelete->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_secure_delete\"><span style=\" text-decoration: underline; color:#0000ff;\">Secure Delete</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkboxPragmaSecureDelete->setText(QString());
        labelPragmaSynchronous->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_synchronous\"><span style=\" text-decoration: underline; color:#0000ff;\">Synchronous</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboboxPragmaSynchronous->clear();
        comboboxPragmaSynchronous->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Full", 0, QApplication::UnicodeUTF8)
        );
        labelPragmaTempStore->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_temp_store\"><span style=\" text-decoration: underline; color:#0000ff;\">Temp Store</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        comboboxPragmaTempStore->clear();
        comboboxPragmaTempStore->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Memory", 0, QApplication::UnicodeUTF8)
        );
        labelPragmaUserVersion->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_schema_version\"><span style=\" text-decoration: underline; color:#0000ff;\">User Version</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelPragmaWalAutoCheckpoint->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"http://www.sqlite.org/pragma.html#pragma_wal_autocheckpoint\"><span style=\" text-decoration: underline; color:#0000ff;\">WAL Auto Checkpoint</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(pragmas), QApplication::translate("MainWindow", "Edit &Pragmas", 0, QApplication::UnicodeUTF8));
        toolbarSql->setWindowTitle(QApplication::translate("MainWindow", "toolBar1", 0, QApplication::UnicodeUTF8));
        mainTab->setTabText(mainTab->indexOf(query), QApplication::translate("MainWindow", "E&xecute SQL", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuImport->setTitle(QApplication::translate("MainWindow", "&Import", 0, QApplication::UnicodeUTF8));
        menuExport->setTitle(QApplication::translate("MainWindow", "&Export", 0, QApplication::UnicodeUTF8));
        editMenu->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        viewMenu->setTitle(QApplication::translate("MainWindow", "&View", 0, QApplication::UnicodeUTF8));
        helpMenu->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        toolbarDB->setWindowTitle(QApplication::translate("MainWindow", "DB Toolbar", 0, QApplication::UnicodeUTF8));
        dockLog->setWindowTitle(QApplication::translate("MainWindow", "SQL &Log", 0, QApplication::UnicodeUTF8));
        labelLogSubmittedBy->setText(QApplication::translate("MainWindow", "Show S&QL submitted by", 0, QApplication::UnicodeUTF8));
        comboLogSubmittedBy->clear();
        comboLogSubmittedBy->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "User", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Application", 0, QApplication::UnicodeUTF8)
        );
        buttonLogClear->setText(QApplication::translate("MainWindow", "&Clear", 0, QApplication::UnicodeUTF8));
        dockPlot->setWindowTitle(QApplication::translate("MainWindow", "&Plot", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treePlotColumns->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "_", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Columns", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Line type:", 0, QApplication::UnicodeUTF8));
        comboLineType->clear();
        comboLineType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "StepLeft", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "StepRight", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "StepCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Impulse", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "Point shape:", 0, QApplication::UnicodeUTF8));
        comboPointShape->clear();
        comboPointShape->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cross", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Plus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Disc", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Diamond", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Star", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "TriangleInverted", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CrossSquare", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "PlusSquare", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CrossCircle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "PlusCircle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Peace", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        butSavePlot->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save current plot...</p><p>File format chosen by extension (png, jpg, pdf, bmp)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        butSavePlot->setStatusTip(QApplication::translate("MainWindow", "Save current plot...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        butSavePlot->setText(QString());
        dockSchema->setWindowTitle(QApplication::translate("MainWindow", "DB Sche&ma", 0, QApplication::UnicodeUTF8));
        dockEditWindow->setWindowTitle(QApplication::translate("MainWindow", "Edit &cell", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
