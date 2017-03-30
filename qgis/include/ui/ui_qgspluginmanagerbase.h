/********************************************************************************
** Form generated from reading UI file 'qgspluginmanagerbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPLUGINMANAGERBASE_H
#define UI_QGSPLUGINMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>
#include "qgscollapsiblegroupbox.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPluginManagerBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mPluginsTabFrame;
    QVBoxLayout *verticalLayout_5;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *vlayoutRightColumn;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *pagePlugins;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblFilter;
    QgsFilterLineEdit *leFilter;
    QSplitter *mPluginsDetailsSplitter;
    QWidget *layoutWidget_pluginList;
    QVBoxLayout *verticalLayout_4;
    QListView *vwPlugins;
    QWidget *layoutWidget_pluginDetails;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_12;
    QWebView *wvDetails;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *buttonUpgradeAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonUninstall;
    QPushButton *buttonInstall;
    QWidget *pageSettings;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelNoPython;
    QFrame *frameSettings;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *ckbCheckUpdates;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboInterval;
    QLabel *lblCheckUpdates;
    QSpacerItem *verticalSpacer;
    QgsCollapsibleGroupBox *ckbExperimental;
    QVBoxLayout *verticalLayout_9;
    QLabel *lblExperimental;
    QSpacerItem *verticalSpacer_2;
    QgsCollapsibleGroupBox *ckbDeprecated;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblDeprecated;
    QSpacerItem *verticalSpacer_3;
    QLabel *lblRepositories;
    QTreeWidget *treeRepositories;
    QFrame *frameRepBut;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonRefreshRepos;
    QSpacerItem *spacer_3;
    QPushButton *buttonAddRep;
    QPushButton *buttonEditRep;
    QPushButton *buttonDeleteRep;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPluginManagerBase)
    {
        if (QgsPluginManagerBase->objectName().isEmpty())
            QgsPluginManagerBase->setObjectName(QString::fromUtf8("QgsPluginManagerBase"));
        QgsPluginManagerBase->resize(936, 565);
        QgsPluginManagerBase->setMinimumSize(QSize(790, 0));
        QgsPluginManagerBase->setModal(true);
        verticalLayout = new QVBoxLayout(QgsPluginManagerBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsPluginManagerBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setOpaqueResize(true);
        mOptionsSplitter->setHandleWidth(7);
        mOptionsSplitter->setChildrenCollapsible(false);
        mPluginsTabFrame = new QFrame(mOptionsSplitter);
        mPluginsTabFrame->setObjectName(QString::fromUtf8("mPluginsTabFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPluginsTabFrame->sizePolicy().hasHeightForWidth());
        mPluginsTabFrame->setSizePolicy(sizePolicy);
        mPluginsTabFrame->setMaximumSize(QSize(200, 16777215));
        mPluginsTabFrame->setFrameShape(QFrame::NoFrame);
        mPluginsTabFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(mPluginsTabFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mOptionsListWidget = new QListWidget(mPluginsTabFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugins.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-installed.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        __qlistwidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-upgrade.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        __qlistwidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        __qlistwidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/plugin-incompatible.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        __qlistwidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        __qlistwidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsListWidget->sizePolicy().hasHeightForWidth());
        mOptionsListWidget->setSizePolicy(sizePolicy1);
        mOptionsListWidget->setMinimumSize(QSize(140, 0));
        mOptionsListWidget->setMaximumSize(QSize(200, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_5->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mPluginsTabFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy2);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Plain);
        mOptionsFrame->setLineWidth(0);
        vlayoutRightColumn = new QVBoxLayout(mOptionsFrame);
        vlayoutRightColumn->setSpacing(6);
        vlayoutRightColumn->setContentsMargins(0, 0, 0, 0);
        vlayoutRightColumn->setObjectName(QString::fromUtf8("vlayoutRightColumn"));
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptionsStackedWidget->setLineWidth(0);
        pagePlugins = new QWidget();
        pagePlugins->setObjectName(QString::fromUtf8("pagePlugins"));
        verticalLayout_8 = new QVBoxLayout(pagePlugins);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblFilter = new QLabel(pagePlugins);
        lblFilter->setObjectName(QString::fromUtf8("lblFilter"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblFilter->sizePolicy().hasHeightForWidth());
        lblFilter->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(lblFilter);

        leFilter = new QgsFilterLineEdit(pagePlugins);
        leFilter->setObjectName(QString::fromUtf8("leFilter"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(leFilter->sizePolicy().hasHeightForWidth());
        leFilter->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(leFilter);


        verticalLayout_8->addLayout(horizontalLayout_4);

        mPluginsDetailsSplitter = new QSplitter(pagePlugins);
        mPluginsDetailsSplitter->setObjectName(QString::fromUtf8("mPluginsDetailsSplitter"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mPluginsDetailsSplitter->sizePolicy().hasHeightForWidth());
        mPluginsDetailsSplitter->setSizePolicy(sizePolicy5);
        mPluginsDetailsSplitter->setOrientation(Qt::Horizontal);
        mPluginsDetailsSplitter->setChildrenCollapsible(false);
        layoutWidget_pluginList = new QWidget(mPluginsDetailsSplitter);
        layoutWidget_pluginList->setObjectName(QString::fromUtf8("layoutWidget_pluginList"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(layoutWidget_pluginList->sizePolicy().hasHeightForWidth());
        layoutWidget_pluginList->setSizePolicy(sizePolicy6);
        verticalLayout_4 = new QVBoxLayout(layoutWidget_pluginList);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        vwPlugins = new QListView(layoutWidget_pluginList);
        vwPlugins->setObjectName(QString::fromUtf8("vwPlugins"));
        sizePolicy6.setHeightForWidth(vwPlugins->sizePolicy().hasHeightForWidth());
        vwPlugins->setSizePolicy(sizePolicy6);
        vwPlugins->setMinimumSize(QSize(200, 0));
        vwPlugins->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vwPlugins->setProperty("showDropIndicator", QVariant(false));
        vwPlugins->setAlternatingRowColors(true);
        vwPlugins->setSelectionMode(QAbstractItemView::SingleSelection);
        vwPlugins->setSelectionBehavior(QAbstractItemView::SelectItems);
        vwPlugins->setResizeMode(QListView::Adjust);
        vwPlugins->setWordWrap(false);

        verticalLayout_4->addWidget(vwPlugins);

        mPluginsDetailsSplitter->addWidget(layoutWidget_pluginList);
        layoutWidget_pluginDetails = new QWidget(mPluginsDetailsSplitter);
        layoutWidget_pluginDetails->setObjectName(QString::fromUtf8("layoutWidget_pluginDetails"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(2);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(layoutWidget_pluginDetails->sizePolicy().hasHeightForWidth());
        layoutWidget_pluginDetails->setSizePolicy(sizePolicy7);
        verticalLayout_7 = new QVBoxLayout(layoutWidget_pluginDetails);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget_pluginDetails);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_12 = new QVBoxLayout(frame);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        wvDetails = new QWebView(frame);
        wvDetails->setObjectName(QString::fromUtf8("wvDetails"));
        wvDetails->setUrl(QUrl(QString::fromUtf8("about:blank")));

        verticalLayout_12->addWidget(wvDetails);


        verticalLayout_7->addWidget(frame);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        buttonUpgradeAll = new QPushButton(layoutWidget_pluginDetails);
        buttonUpgradeAll->setObjectName(QString::fromUtf8("buttonUpgradeAll"));
        buttonUpgradeAll->setEnabled(false);

        horizontalLayout_6->addWidget(buttonUpgradeAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        buttonUninstall = new QPushButton(layoutWidget_pluginDetails);
        buttonUninstall->setObjectName(QString::fromUtf8("buttonUninstall"));
        buttonUninstall->setEnabled(false);

        horizontalLayout_6->addWidget(buttonUninstall);

        buttonInstall = new QPushButton(layoutWidget_pluginDetails);
        buttonInstall->setObjectName(QString::fromUtf8("buttonInstall"));
        buttonInstall->setEnabled(false);
        buttonInstall->setMinimumSize(QSize(160, 0));

        horizontalLayout_6->addWidget(buttonInstall);


        verticalLayout_7->addLayout(horizontalLayout_6);

        mPluginsDetailsSplitter->addWidget(layoutWidget_pluginDetails);

        verticalLayout_8->addWidget(mPluginsDetailsSplitter);

        mOptionsStackedWidget->addWidget(pagePlugins);
        pageSettings = new QWidget();
        pageSettings->setObjectName(QString::fromUtf8("pageSettings"));
        verticalLayout_2 = new QVBoxLayout(pageSettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 0, 0);
        labelNoPython = new QLabel(pageSettings);
        labelNoPython->setObjectName(QString::fromUtf8("labelNoPython"));
        sizePolicy.setHeightForWidth(labelNoPython->sizePolicy().hasHeightForWidth());
        labelNoPython->setSizePolicy(sizePolicy);
        labelNoPython->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelNoPython->setWordWrap(true);
        labelNoPython->setMargin(20);
        labelNoPython->setIndent(0);

        verticalLayout_2->addWidget(labelNoPython);

        frameSettings = new QFrame(pageSettings);
        frameSettings->setObjectName(QString::fromUtf8("frameSettings"));
        sizePolicy5.setHeightForWidth(frameSettings->sizePolicy().hasHeightForWidth());
        frameSettings->setSizePolicy(sizePolicy5);
        frameSettings->setFrameShape(QFrame::NoFrame);
        frameSettings->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameSettings);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(frameSettings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 355, 695));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        ckbCheckUpdates = new QGroupBox(scrollAreaWidgetContents);
        ckbCheckUpdates->setObjectName(QString::fromUtf8("ckbCheckUpdates"));
        ckbCheckUpdates->setEnabled(true);
        sizePolicy.setHeightForWidth(ckbCheckUpdates->sizePolicy().hasHeightForWidth());
        ckbCheckUpdates->setSizePolicy(sizePolicy);
        ckbCheckUpdates->setCheckable(true);
        ckbCheckUpdates->setChecked(false);
        verticalLayout_6 = new QVBoxLayout(ckbCheckUpdates);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(6, -1, -1, -1);
        comboInterval = new QComboBox(ckbCheckUpdates);
        comboInterval->setObjectName(QString::fromUtf8("comboInterval"));
        sizePolicy3.setHeightForWidth(comboInterval->sizePolicy().hasHeightForWidth());
        comboInterval->setSizePolicy(sizePolicy3);

        verticalLayout_6->addWidget(comboInterval);

        lblCheckUpdates = new QLabel(ckbCheckUpdates);
        lblCheckUpdates->setObjectName(QString::fromUtf8("lblCheckUpdates"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lblCheckUpdates->sizePolicy().hasHeightForWidth());
        lblCheckUpdates->setSizePolicy(sizePolicy8);
        lblCheckUpdates->setMinimumSize(QSize(0, 0));
        lblCheckUpdates->setWordWrap(true);

        verticalLayout_6->addWidget(lblCheckUpdates);


        verticalLayout_10->addWidget(ckbCheckUpdates);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer);

        ckbExperimental = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        ckbExperimental->setObjectName(QString::fromUtf8("ckbExperimental"));
        ckbExperimental->setCheckable(true);
        ckbExperimental->setChecked(false);
        ckbExperimental->setProperty("collapsed", QVariant(false));
        ckbExperimental->setProperty("saveCheckedState", QVariant(true));
        ckbExperimental->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_9 = new QVBoxLayout(ckbExperimental);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        lblExperimental = new QLabel(ckbExperimental);
        lblExperimental->setObjectName(QString::fromUtf8("lblExperimental"));
        sizePolicy8.setHeightForWidth(lblExperimental->sizePolicy().hasHeightForWidth());
        lblExperimental->setSizePolicy(sizePolicy8);
        lblExperimental->setMinimumSize(QSize(0, 0));
        lblExperimental->setTextFormat(Qt::RichText);
        lblExperimental->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblExperimental->setWordWrap(true);

        verticalLayout_9->addWidget(lblExperimental);


        verticalLayout_10->addWidget(ckbExperimental);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_2);

        ckbDeprecated = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        ckbDeprecated->setObjectName(QString::fromUtf8("ckbDeprecated"));
        ckbDeprecated->setCheckable(true);
        ckbDeprecated->setChecked(false);
        ckbDeprecated->setProperty("collapsed", QVariant(false));
        ckbDeprecated->setProperty("saveCheckedState", QVariant(true));
        ckbDeprecated->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_11 = new QVBoxLayout(ckbDeprecated);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        lblDeprecated = new QLabel(ckbDeprecated);
        lblDeprecated->setObjectName(QString::fromUtf8("lblDeprecated"));
        sizePolicy8.setHeightForWidth(lblDeprecated->sizePolicy().hasHeightForWidth());
        lblDeprecated->setSizePolicy(sizePolicy8);
        lblDeprecated->setMinimumSize(QSize(0, 0));
        lblDeprecated->setTextFormat(Qt::RichText);
        lblDeprecated->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDeprecated->setWordWrap(true);

        verticalLayout_11->addWidget(lblDeprecated);


        verticalLayout_10->addWidget(ckbDeprecated);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_3);

        lblRepositories = new QLabel(scrollAreaWidgetContents);
        lblRepositories->setObjectName(QString::fromUtf8("lblRepositories"));

        verticalLayout_10->addWidget(lblRepositories);

        treeRepositories = new QTreeWidget(scrollAreaWidgetContents);
        treeRepositories->setObjectName(QString::fromUtf8("treeRepositories"));
        sizePolicy5.setHeightForWidth(treeRepositories->sizePolicy().hasHeightForWidth());
        treeRepositories->setSizePolicy(sizePolicy5);
        treeRepositories->setMinimumSize(QSize(0, 30));
        treeRepositories->setRootIsDecorated(false);
        treeRepositories->setItemsExpandable(false);

        verticalLayout_10->addWidget(treeRepositories);

        frameRepBut = new QFrame(scrollAreaWidgetContents);
        frameRepBut->setObjectName(QString::fromUtf8("frameRepBut"));
        sizePolicy.setHeightForWidth(frameRepBut->sizePolicy().hasHeightForWidth());
        frameRepBut->setSizePolicy(sizePolicy);
        frameRepBut->setFrameShape(QFrame::NoFrame);
        frameRepBut->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameRepBut);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonRefreshRepos = new QPushButton(frameRepBut);
        buttonRefreshRepos->setObjectName(QString::fromUtf8("buttonRefreshRepos"));

        horizontalLayout_3->addWidget(buttonRefreshRepos);

        spacer_3 = new QSpacerItem(316, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacer_3);

        buttonAddRep = new QPushButton(frameRepBut);
        buttonAddRep->setObjectName(QString::fromUtf8("buttonAddRep"));

        horizontalLayout_3->addWidget(buttonAddRep);

        buttonEditRep = new QPushButton(frameRepBut);
        buttonEditRep->setObjectName(QString::fromUtf8("buttonEditRep"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(buttonEditRep->sizePolicy().hasHeightForWidth());
        buttonEditRep->setSizePolicy(sizePolicy9);

        horizontalLayout_3->addWidget(buttonEditRep);

        buttonDeleteRep = new QPushButton(frameRepBut);
        buttonDeleteRep->setObjectName(QString::fromUtf8("buttonDeleteRep"));

        horizontalLayout_3->addWidget(buttonDeleteRep);


        verticalLayout_10->addWidget(frameRepBut);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_2->addWidget(frameSettings);

        mOptionsStackedWidget->addWidget(pageSettings);

        vlayoutRightColumn->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        buttonBox = new QDialogButtonBox(QgsPluginManagerBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lblFilter->setBuddy(leFilter);
        lblRepositories->setBuddy(treeRepositories);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOptionsListWidget, leFilter);
        QWidget::setTabOrder(leFilter, vwPlugins);
        QWidget::setTabOrder(vwPlugins, wvDetails);
        QWidget::setTabOrder(wvDetails, buttonUpgradeAll);
        QWidget::setTabOrder(buttonUpgradeAll, buttonUninstall);
        QWidget::setTabOrder(buttonUninstall, buttonInstall);
        QWidget::setTabOrder(buttonInstall, buttonBox);

        retranslateUi(QgsPluginManagerBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPluginManagerBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPluginManagerBase, SLOT(reject()));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsPluginManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPluginManagerBase)
    {
        QgsPluginManagerBase->setWindowTitle(QApplication::translate("QgsPluginManagerBase", "Plugin Manager", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsPluginManagerBase", "All", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsPluginManagerBase", "Installed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsPluginManagerBase", "Installed plugins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsPluginManagerBase", "Not installed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsPluginManagerBase", "Not installed plugins available for download", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsPluginManagerBase", "Upgradeable", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsPluginManagerBase", "Installed plugins with more recent version available for download", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsPluginManagerBase", "New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsPluginManagerBase", "Not installed plugins seen for the first time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsPluginManagerBase", "Invalid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsPluginManagerBase", "Broken and incompatible installed plugins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsPluginManagerBase", "Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsPluginManagerBase", "Settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        lblFilter->setText(QApplication::translate("QgsPluginManagerBase", "Search", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonUpgradeAll->setToolTip(QApplication::translate("QgsPluginManagerBase", "Upgrade all upgradeable plugins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonUpgradeAll->setText(QApplication::translate("QgsPluginManagerBase", "Upgrade all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonUninstall->setToolTip(QApplication::translate("QgsPluginManagerBase", "Uninstall the selected plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonUninstall->setText(QApplication::translate("QgsPluginManagerBase", "Uninstall plugin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonInstall->setToolTip(QApplication::translate("QgsPluginManagerBase", "Install, reinstall or upgrade the selected plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonInstall->setText(QApplication::translate("QgsPluginManagerBase", "Reinstall plugin", 0, QApplication::UnicodeUTF8));
        labelNoPython->setText(QApplication::translate("QgsPluginManagerBase", "The settings on this tab are only applicable for Python Plugins. No Python support detected, thus no settings available.", 0, QApplication::UnicodeUTF8));
        ckbCheckUpdates->setTitle(QApplication::translate("QgsPluginManagerBase", "Check for updates on startup", 0, QApplication::UnicodeUTF8));
        comboInterval->clear();
        comboInterval->insertItems(0, QStringList()
         << QApplication::translate("QgsPluginManagerBase", "every time QGIS starts", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsPluginManagerBase", "once a day", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsPluginManagerBase", "every 3 days", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsPluginManagerBase", "every week", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsPluginManagerBase", "every 2 weeks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsPluginManagerBase", "every month", 0, QApplication::UnicodeUTF8)
        );
        lblCheckUpdates->setText(QApplication::translate("QgsPluginManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note:</span> If this function is enabled, QGIS will inform you whenever a new plugin or plugin update is available. Otherwise, fetching repositories will be performed during opening of the Plugin Manager window.</p></body></html>", 0, QApplication::UnicodeUTF8));
        ckbExperimental->setTitle(QApplication::translate("QgsPluginManagerBase", "Show also experimental plugins", 0, QApplication::UnicodeUTF8));
        lblExperimental->setText(QApplication::translate("QgsPluginManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note:</span> Experimental plugins are generally unsuitable for production use. These plugins are in early stages of development, and should be considered 'incomplete' or 'proof of concept' tools. QGIS does not recommend installing these plugins unless you intend to use them for testing purposes.</p></body></html>", 0, QApplication::UnicodeUTF8));
        ckbDeprecated->setTitle(QApplication::translate("QgsPluginManagerBase", "Show also deprecated plugins", 0, QApplication::UnicodeUTF8));
        lblDeprecated->setText(QApplication::translate("QgsPluginManagerBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600;\">Note:</span><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\"> Deprecated plugins are generally unsuitable for production use. These plugins are unmaintained, and should be considered 'obsolete' tools. QGIS does not recommend installing these plugins unless you still need it and there are no other alternatives available.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lblRepositories->setText(QApplication::translate("QgsPluginManagerBase", "Plugin repositories", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeRepositories->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsPluginManagerBase", "URL", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsPluginManagerBase", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsPluginManagerBase", "Status", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonRefreshRepos->setToolTip(QApplication::translate("QgsPluginManagerBase", "Reload repository contents\n"
"(useful when you uploaded a plugin there)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonRefreshRepos->setText(QApplication::translate("QgsPluginManagerBase", "Reload repository", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonAddRep->setToolTip(QApplication::translate("QgsPluginManagerBase", "Configure an additional plugin repository", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonAddRep->setWhatsThis(QApplication::translate("QgsPluginManagerBase", "Add a new plugin repository", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonAddRep->setText(QApplication::translate("QgsPluginManagerBase", "Add...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonEditRep->setToolTip(QApplication::translate("QgsPluginManagerBase", "Edit the selected repository", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonEditRep->setWhatsThis(QApplication::translate("QgsPluginManagerBase", "Edit the selected repository", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonEditRep->setText(QApplication::translate("QgsPluginManagerBase", "Edit...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonDeleteRep->setToolTip(QApplication::translate("QgsPluginManagerBase", "Remove the selected repository", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonDeleteRep->setWhatsThis(QApplication::translate("QgsPluginManagerBase", "Remove the selected repository", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        buttonDeleteRep->setText(QApplication::translate("QgsPluginManagerBase", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsPluginManagerBase: public Ui_QgsPluginManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPLUGINMANAGERBASE_H
