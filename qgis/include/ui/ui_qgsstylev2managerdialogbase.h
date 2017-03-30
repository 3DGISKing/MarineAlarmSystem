/********************************************************************************
** Form generated from reading UI file 'qgsstylev2managerdialogbase.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEV2MANAGERDIALOGBASE_H
#define UI_QGSSTYLEV2MANAGERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsStyleV2ManagerDialogBase
{
public:
    QGridLayout *gridLayout;
    QSplitter *mSplitter;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTreeView *groupTree;
    QPushButton *btnAddGroup;
    QPushButton *btnRemoveGroup;
    QPushButton *btnManageGroups;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QgsFilterLineEdit *searchBox;
    QTabWidget *tabItemType;
    QWidget *tabMarker;
    QWidget *tabLine;
    QWidget *tabFill;
    QWidget *tabColorRamp;
    QListView *listItems;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *tagsLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *symbolBtnsLayout;
    QToolButton *btnAddItem;
    QToolButton *btnEditItem;
    QToolButton *btnRemoveItem;
    QToolButton *btnShare;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleV2ManagerDialogBase)
    {
        if (QgsStyleV2ManagerDialogBase->objectName().isEmpty())
            QgsStyleV2ManagerDialogBase->setObjectName(QString::fromUtf8("QgsStyleV2ManagerDialogBase"));
        QgsStyleV2ManagerDialogBase->resize(720, 410);
        QgsStyleV2ManagerDialogBase->setStyleSheet(QString::fromUtf8("QToolButton { padding-left: 3px; padding-right: 3px; }\n"
"/* QMenu::item { padding: 2px 10px 2px 20px; }\n"
"QMenu::item:selected {  background-color: gray; } */\n"
""));
        gridLayout = new QGridLayout(QgsStyleV2ManagerDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSplitter = new QSplitter(QgsStyleV2ManagerDialogBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Horizontal);
        mSplitter->setHandleWidth(3);
        mSplitter->setChildrenCollapsible(false);
        widget = new QWidget(mSplitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 4, 0);
        groupTree = new QTreeView(widget);
        groupTree->setObjectName(QString::fromUtf8("groupTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupTree->sizePolicy().hasHeightForWidth());
        groupTree->setSizePolicy(sizePolicy1);
        groupTree->setMaximumSize(QSize(16777215, 16777215));
        groupTree->setEditTriggers(QAbstractItemView::DoubleClicked);

        gridLayout_2->addWidget(groupTree, 0, 0, 1, 3);

        btnAddGroup = new QPushButton(widget);
        btnAddGroup->setObjectName(QString::fromUtf8("btnAddGroup"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddGroup->setIcon(icon);
        btnAddGroup->setAutoDefault(false);

        gridLayout_2->addWidget(btnAddGroup, 1, 0, 1, 1);

        btnRemoveGroup = new QPushButton(widget);
        btnRemoveGroup->setObjectName(QString::fromUtf8("btnRemoveGroup"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveGroup->setIcon(icon1);
        btnRemoveGroup->setAutoDefault(false);

        gridLayout_2->addWidget(btnRemoveGroup, 1, 1, 1, 1);

        btnManageGroups = new QPushButton(widget);
        btnManageGroups->setObjectName(QString::fromUtf8("btnManageGroups"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionChangeLabelProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnManageGroups->setIcon(icon2);
        btnManageGroups->setAutoDefault(false);

        gridLayout_2->addWidget(btnManageGroups, 1, 2, 1, 1);

        mSplitter->addWidget(widget);
        widget_2 = new QWidget(mSplitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(4, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        searchBox = new QgsFilterLineEdit(widget_2);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        gridLayout_3->addWidget(searchBox, 0, 1, 1, 1);

        tabItemType = new QTabWidget(widget_2);
        tabItemType->setObjectName(QString::fromUtf8("tabItemType"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabItemType->sizePolicy().hasHeightForWidth());
        tabItemType->setSizePolicy(sizePolicy3);
        tabItemType->setIconSize(QSize(20, 20));
        tabMarker = new QWidget();
        tabMarker->setObjectName(QString::fromUtf8("tabMarker"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tabMarker->sizePolicy().hasHeightForWidth());
        tabMarker->setSizePolicy(sizePolicy4);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/styleicons/style-point.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabMarker, icon3, QString());
        tabLine = new QWidget();
        tabLine->setObjectName(QString::fromUtf8("tabLine"));
        sizePolicy4.setHeightForWidth(tabLine->sizePolicy().hasHeightForWidth());
        tabLine->setSizePolicy(sizePolicy4);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/styleicons/style-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabLine, icon4, QString());
        tabFill = new QWidget();
        tabFill->setObjectName(QString::fromUtf8("tabFill"));
        sizePolicy4.setHeightForWidth(tabFill->sizePolicy().hasHeightForWidth());
        tabFill->setSizePolicy(sizePolicy4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/styleicons/style-polygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabFill, icon5, QString());
        tabColorRamp = new QWidget();
        tabColorRamp->setObjectName(QString::fromUtf8("tabColorRamp"));
        sizePolicy4.setHeightForWidth(tabColorRamp->sizePolicy().hasHeightForWidth());
        tabColorRamp->setSizePolicy(sizePolicy4);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/styleicons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabItemType->addTab(tabColorRamp, icon6, QString());

        gridLayout_3->addWidget(tabItemType, 1, 0, 1, 2);

        listItems = new QListView(widget_2);
        listItems->setObjectName(QString::fromUtf8("listItems"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(3);
        sizePolicy5.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy5);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setIconSize(QSize(0, 0));
        listItems->setMovement(QListView::Static);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setGridSize(QSize(0, 0));
        listItems->setViewMode(QListView::IconMode);
        listItems->setWordWrap(true);

        gridLayout_3->addWidget(listItems, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        tagsLineEdit = new QLineEdit(widget_2);
        tagsLineEdit->setObjectName(QString::fromUtf8("tagsLineEdit"));

        horizontalLayout_2->addWidget(tagsLineEdit);


        gridLayout_3->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        symbolBtnsLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        symbolBtnsLayout->setSpacing(-1);
#endif
        symbolBtnsLayout->setObjectName(QString::fromUtf8("symbolBtnsLayout"));
        symbolBtnsLayout->setContentsMargins(0, -1, -1, -1);
        btnAddItem = new QToolButton(widget_2);
        btnAddItem->setObjectName(QString::fromUtf8("btnAddItem"));
        btnAddItem->setMinimumSize(QSize(0, 0));
        btnAddItem->setPopupMode(QToolButton::InstantPopup);

        symbolBtnsLayout->addWidget(btnAddItem);

        btnEditItem = new QToolButton(widget_2);
        btnEditItem->setObjectName(QString::fromUtf8("btnEditItem"));
        btnEditItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        symbolBtnsLayout->addWidget(btnEditItem);

        btnRemoveItem = new QToolButton(widget_2);
        btnRemoveItem->setObjectName(QString::fromUtf8("btnRemoveItem"));

        symbolBtnsLayout->addWidget(btnRemoveItem);

        btnShare = new QToolButton(widget_2);
        btnShare->setObjectName(QString::fromUtf8("btnShare"));
        btnShare->setMinimumSize(QSize(0, 16));
        btnShare->setPopupMode(QToolButton::InstantPopup);
        btnShare->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        symbolBtnsLayout->addWidget(btnShare);


        horizontalLayout->addLayout(symbolBtnsLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        gridLayout_3->addLayout(horizontalLayout, 4, 0, 1, 2);

        mSplitter->addWidget(widget_2);

        gridLayout->addWidget(mSplitter, 3, 0, 1, 1);

        QWidget::setTabOrder(listItems, btnAddItem);
        QWidget::setTabOrder(btnAddItem, btnEditItem);
        QWidget::setTabOrder(btnEditItem, buttonBox);

        retranslateUi(QgsStyleV2ManagerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleV2ManagerDialogBase, SLOT(reject()));

        tabItemType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsStyleV2ManagerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleV2ManagerDialogBase)
    {
        QgsStyleV2ManagerDialogBase->setWindowTitle(QApplication::translate("QgsStyleV2ManagerDialogBase", "Style Manager", 0, QApplication::UnicodeUTF8));
        btnAddGroup->setText(QString());
        btnRemoveGroup->setText(QString());
        btnManageGroups->setText(QString());
        searchBox->setText(QString());
        tabItemType->setTabText(tabItemType->indexOf(tabMarker), QApplication::translate("QgsStyleV2ManagerDialogBase", "Marker", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabLine), QApplication::translate("QgsStyleV2ManagerDialogBase", "Line", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabFill), QApplication::translate("QgsStyleV2ManagerDialogBase", "Fill", 0, QApplication::UnicodeUTF8));
        tabItemType->setTabText(tabItemType->indexOf(tabColorRamp), QApplication::translate("QgsStyleV2ManagerDialogBase", "Color ramp", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Tags", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddItem->setToolTip(QApplication::translate("QgsStyleV2ManagerDialogBase", "Add item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddItem->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditItem->setToolTip(QApplication::translate("QgsStyleV2ManagerDialogBase", "Edit item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEditItem->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRemoveItem->setToolTip(QApplication::translate("QgsStyleV2ManagerDialogBase", "Remove item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemoveItem->setText(QString());
        btnShare->setText(QApplication::translate("QgsStyleV2ManagerDialogBase", "Share", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleV2ManagerDialogBase: public Ui_QgsStyleV2ManagerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEV2MANAGERDIALOGBASE_H
