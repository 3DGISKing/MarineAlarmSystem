/********************************************************************************
** Form generated from reading UI file 'qgswmssourceselectbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWMSSOURCESELECTBASE_H
#define UI_QGSWMSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsWMSSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QLabel *labelStatus;
    QTabWidget *tabServers;
    QWidget *tabLayers;
    QGridLayout *gridLayout;
    QComboBox *cmbConnections;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnAddDefault;
    QTreeWidget *lstLayers;
    QGroupBox *btnGrpImageEncoding;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QGroupBox *gbCRS;
    QGridLayout *gridLayout1;
    QLabel *labelCoordRefSys;
    QPushButton *btnChangeSpatialRefSys;
    QLineEdit *mTileWidth;
    QLabel *label_2;
    QLineEdit *mTileHeight;
    QLabel *label_3;
    QLineEdit *mFeatureCount;
    QWidget *tabLayerOrder;
    QGridLayout *gridLayout2;
    QPushButton *mLayerUpButton;
    QPushButton *mLayerDownButton;
    QSpacerItem *spacerItem;
    QTreeWidget *mLayerOrderTreeWidget;
    QWidget *tabTilesets;
    QGridLayout *gridLayout_3;
    QTableWidget *lstTilesets;
    QWidget *tabServerSearch;
    QGridLayout *gridLayout3;
    QLineEdit *leSearchTerm;
    QPushButton *btnSearch;
    QTableWidget *tableWidgetWMSList;
    QPushButton *btnAddWMS;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leLayerName;

    void setupUi(QDialog *QgsWMSSourceSelectBase)
    {
        if (QgsWMSSourceSelectBase->objectName().isEmpty())
            QgsWMSSourceSelectBase->setObjectName(QString::fromUtf8("QgsWMSSourceSelectBase"));
        QgsWMSSourceSelectBase->resize(773, 539);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsWMSSourceSelectBase->setWindowIcon(icon);
        QgsWMSSourceSelectBase->setSizeGripEnabled(true);
        QgsWMSSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsWMSSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsWMSSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        labelStatus = new QLabel(QgsWMSSourceSelectBase);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
        labelStatus->setSizePolicy(sizePolicy);
        labelStatus->setWordWrap(false);

        gridLayout_2->addWidget(labelStatus, 4, 0, 1, 1);

        tabServers = new QTabWidget(QgsWMSSourceSelectBase);
        tabServers->setObjectName(QString::fromUtf8("tabServers"));
        tabServers->setEnabled(true);
        tabLayers = new QWidget();
        tabLayers->setObjectName(QString::fromUtf8("tabLayers"));
        gridLayout = new QGridLayout(tabLayers);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cmbConnections = new QComboBox(tabLayers);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 12);

        btnConnect = new QPushButton(tabLayers);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setEnabled(false);

        gridLayout->addWidget(btnConnect, 1, 0, 1, 2);

        btnNew = new QPushButton(tabLayers);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        gridLayout->addWidget(btnNew, 1, 2, 1, 2);

        btnEdit = new QPushButton(tabLayers);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        gridLayout->addWidget(btnEdit, 1, 4, 1, 1);

        btnDelete = new QPushButton(tabLayers);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        gridLayout->addWidget(btnDelete, 1, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 7, 1, 1);

        btnAddDefault = new QPushButton(tabLayers);
        btnAddDefault->setObjectName(QString::fromUtf8("btnAddDefault"));

        gridLayout->addWidget(btnAddDefault, 1, 11, 1, 1);

        lstLayers = new QTreeWidget(tabLayers);
        lstLayers->setObjectName(QString::fromUtf8("lstLayers"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lstLayers->sizePolicy().hasHeightForWidth());
        lstLayers->setSizePolicy(sizePolicy1);
        lstLayers->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstLayers->setAllColumnsShowFocus(true);

        gridLayout->addWidget(lstLayers, 2, 0, 1, 12);

        btnGrpImageEncoding = new QGroupBox(tabLayers);
        btnGrpImageEncoding->setObjectName(QString::fromUtf8("btnGrpImageEncoding"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnGrpImageEncoding->sizePolicy().hasHeightForWidth());
        btnGrpImageEncoding->setSizePolicy(sizePolicy2);
        btnGrpImageEncoding->setMinimumSize(QSize(16, 64));

        gridLayout->addWidget(btnGrpImageEncoding, 3, 0, 1, 12);

        btnSave = new QPushButton(tabLayers);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout->addWidget(btnSave, 1, 9, 1, 1);

        btnLoad = new QPushButton(tabLayers);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        gridLayout->addWidget(btnLoad, 1, 8, 1, 1);

        gbCRS = new QGroupBox(tabLayers);
        gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
        gridLayout1 = new QGridLayout(gbCRS);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

        gridLayout1->addWidget(labelCoordRefSys, 3, 0, 1, 2);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QString::fromUtf8("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        gridLayout1->addWidget(btnChangeSpatialRefSys, 3, 2, 1, 1);

        mTileWidth = new QLineEdit(gbCRS);
        mTileWidth->setObjectName(QString::fromUtf8("mTileWidth"));

        gridLayout1->addWidget(mTileWidth, 1, 1, 1, 1);

        label_2 = new QLabel(gbCRS);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        mTileHeight = new QLineEdit(gbCRS);
        mTileHeight->setObjectName(QString::fromUtf8("mTileHeight"));

        gridLayout1->addWidget(mTileHeight, 1, 2, 1, 1);

        label_3 = new QLabel(gbCRS);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 2);

        mFeatureCount = new QLineEdit(gbCRS);
        mFeatureCount->setObjectName(QString::fromUtf8("mFeatureCount"));

        gridLayout1->addWidget(mFeatureCount, 2, 2, 1, 1);


        gridLayout->addWidget(gbCRS, 4, 0, 1, 12);

        tabServers->addTab(tabLayers, QString());
        tabLayerOrder = new QWidget();
        tabLayerOrder->setObjectName(QString::fromUtf8("tabLayerOrder"));
        gridLayout2 = new QGridLayout(tabLayerOrder);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        mLayerUpButton = new QPushButton(tabLayerOrder);
        mLayerUpButton->setObjectName(QString::fromUtf8("mLayerUpButton"));

        gridLayout2->addWidget(mLayerUpButton, 0, 0, 1, 1);

        mLayerDownButton = new QPushButton(tabLayerOrder);
        mLayerDownButton->setObjectName(QString::fromUtf8("mLayerDownButton"));

        gridLayout2->addWidget(mLayerDownButton, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(391, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 2, 1, 1);

        mLayerOrderTreeWidget = new QTreeWidget(tabLayerOrder);
        mLayerOrderTreeWidget->setObjectName(QString::fromUtf8("mLayerOrderTreeWidget"));
        mLayerOrderTreeWidget->setColumnCount(2);

        gridLayout2->addWidget(mLayerOrderTreeWidget, 1, 0, 1, 3);

        tabServers->addTab(tabLayerOrder, QString());
        tabTilesets = new QWidget();
        tabTilesets->setObjectName(QString::fromUtf8("tabTilesets"));
        gridLayout_3 = new QGridLayout(tabTilesets);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lstTilesets = new QTableWidget(tabTilesets);
        if (lstTilesets->columnCount() < 6)
            lstTilesets->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstTilesets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        lstTilesets->setObjectName(QString::fromUtf8("lstTilesets"));
        lstTilesets->setAlternatingRowColors(true);
        lstTilesets->setSelectionMode(QAbstractItemView::SingleSelection);
        lstTilesets->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstTilesets->setCornerButtonEnabled(false);
        lstTilesets->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(lstTilesets, 0, 0, 1, 1);

        tabServers->addTab(tabTilesets, QString());
        tabServerSearch = new QWidget();
        tabServerSearch->setObjectName(QString::fromUtf8("tabServerSearch"));
        gridLayout3 = new QGridLayout(tabServerSearch);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        leSearchTerm = new QLineEdit(tabServerSearch);
        leSearchTerm->setObjectName(QString::fromUtf8("leSearchTerm"));

        gridLayout3->addWidget(leSearchTerm, 0, 0, 1, 1);

        btnSearch = new QPushButton(tabServerSearch);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setDefault(true);

        gridLayout3->addWidget(btnSearch, 0, 1, 1, 1);

        tableWidgetWMSList = new QTableWidget(tabServerSearch);
        if (tableWidgetWMSList->columnCount() < 3)
            tableWidgetWMSList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetWMSList->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidgetWMSList->setObjectName(QString::fromUtf8("tableWidgetWMSList"));
        tableWidgetWMSList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetWMSList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetWMSList->setCornerButtonEnabled(false);
        tableWidgetWMSList->verticalHeader()->setVisible(false);

        gridLayout3->addWidget(tableWidgetWMSList, 1, 0, 1, 2);

        btnAddWMS = new QPushButton(tabServerSearch);
        btnAddWMS->setObjectName(QString::fromUtf8("btnAddWMS"));

        gridLayout3->addWidget(btnAddWMS, 2, 0, 1, 2);

        tabServers->addTab(tabServerSearch, QString());

        gridLayout_2->addWidget(tabServers, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsWMSSourceSelectBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        leLayerName = new QLineEdit(QgsWMSSourceSelectBase);
        leLayerName->setObjectName(QString::fromUtf8("leLayerName"));

        horizontalLayout->addWidget(leLayerName);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelCoordRefSys->setBuddy(btnChangeSpatialRefSys);
        label_2->setBuddy(mTileWidth);
        label_3->setBuddy(mFeatureCount);
        label->setBuddy(leLayerName);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabServers, cmbConnections);
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, btnLoad);
        QWidget::setTabOrder(btnLoad, btnSave);
        QWidget::setTabOrder(btnSave, btnAddDefault);
        QWidget::setTabOrder(btnAddDefault, lstLayers);
        QWidget::setTabOrder(lstLayers, leLayerName);
        QWidget::setTabOrder(leLayerName, mTileWidth);
        QWidget::setTabOrder(mTileWidth, mTileHeight);
        QWidget::setTabOrder(mTileHeight, mFeatureCount);
        QWidget::setTabOrder(mFeatureCount, btnChangeSpatialRefSys);
        QWidget::setTabOrder(btnChangeSpatialRefSys, mLayerUpButton);
        QWidget::setTabOrder(mLayerUpButton, mLayerDownButton);
        QWidget::setTabOrder(mLayerDownButton, mLayerOrderTreeWidget);
        QWidget::setTabOrder(mLayerOrderTreeWidget, lstTilesets);
        QWidget::setTabOrder(lstTilesets, leSearchTerm);
        QWidget::setTabOrder(leSearchTerm, btnSearch);
        QWidget::setTabOrder(btnSearch, tableWidgetWMSList);
        QWidget::setTabOrder(tableWidgetWMSList, btnAddWMS);
        QWidget::setTabOrder(btnAddWMS, buttonBox);

        retranslateUi(QgsWMSSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsWMSSourceSelectBase, SLOT(reject()));

        tabServers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsWMSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWMSSourceSelectBase)
    {
        QgsWMSSourceSelectBase->setWindowTitle(QApplication::translate("QgsWMSSourceSelectBase", "Add Layer(s) from a WM(T)S Server", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QApplication::translate("QgsWMSSourceSelectBase", "Ready", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsWMSSourceSelectBase", "C&onnect", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("QgsWMSSourceSelectBase", "&New", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("QgsWMSSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("QgsWMSSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        btnAddDefault->setStatusTip(QApplication::translate("QgsWMSSourceSelectBase", "Adds a few example WMS servers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        btnAddDefault->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        btnAddDefault->setText(QApplication::translate("QgsWMSSourceSelectBase", "Add default servers", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = lstLayers->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsWMSSourceSelectBase", "Abstract", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsWMSSourceSelectBase", "Title", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsWMSSourceSelectBase", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsWMSSourceSelectBase", "ID", 0, QApplication::UnicodeUTF8));
        btnGrpImageEncoding->setTitle(QApplication::translate("QgsWMSSourceSelectBase", "Image encoding", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Save connections to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsWMSSourceSelectBase", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Load connections from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsWMSSourceSelectBase", "Load", 0, QApplication::UnicodeUTF8));
        gbCRS->setTitle(QApplication::translate("QgsWMSSourceSelectBase", "Options", 0, QApplication::UnicodeUTF8));
        labelCoordRefSys->setText(QApplication::translate("QgsWMSSourceSelectBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
        btnChangeSpatialRefSys->setText(QApplication::translate("QgsWMSSourceSelectBase", "Change...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsWMSSourceSelectBase", "Tile size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsWMSSourceSelectBase", "Feature limit for GetFeatureInfo", 0, QApplication::UnicodeUTF8));
        mFeatureCount->setText(QApplication::translate("QgsWMSSourceSelectBase", "10", 0, QApplication::UnicodeUTF8));
        tabServers->setTabText(tabServers->indexOf(tabLayers), QApplication::translate("QgsWMSSourceSelectBase", "Layers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerUpButton->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Move selected layer UP", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerUpButton->setText(QApplication::translate("QgsWMSSourceSelectBase", "Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerDownButton->setToolTip(QApplication::translate("QgsWMSSourceSelectBase", "Move selected layer DOWN", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerDownButton->setText(QApplication::translate("QgsWMSSourceSelectBase", "Down", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = mLayerOrderTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("QgsWMSSourceSelectBase", "Title", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("QgsWMSSourceSelectBase", "Style", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("QgsWMSSourceSelectBase", "Layer", 0, QApplication::UnicodeUTF8));
        tabServers->setTabText(tabServers->indexOf(tabLayerOrder), QApplication::translate("QgsWMSSourceSelectBase", "Layer Order", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = lstTilesets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsWMSSourceSelectBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = lstTilesets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsWMSSourceSelectBase", "Format", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = lstTilesets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsWMSSourceSelectBase", "Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = lstTilesets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsWMSSourceSelectBase", "Style", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = lstTilesets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsWMSSourceSelectBase", "Tileset", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = lstTilesets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsWMSSourceSelectBase", "CRS", 0, QApplication::UnicodeUTF8));
        tabServers->setTabText(tabServers->indexOf(tabTilesets), QApplication::translate("QgsWMSSourceSelectBase", "Tilesets", 0, QApplication::UnicodeUTF8));
        btnSearch->setText(QApplication::translate("QgsWMSSourceSelectBase", "Search", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetWMSList->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsWMSSourceSelectBase", "Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetWMSList->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsWMSSourceSelectBase", "Description", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetWMSList->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("QgsWMSSourceSelectBase", "URL", 0, QApplication::UnicodeUTF8));
        btnAddWMS->setText(QApplication::translate("QgsWMSSourceSelectBase", "Add selected row to WMS list", 0, QApplication::UnicodeUTF8));
        tabServers->setTabText(tabServers->indexOf(tabServerSearch), QApplication::translate("QgsWMSSourceSelectBase", "Server Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsWMSSourceSelectBase", "Layer name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsWMSSourceSelectBase: public Ui_QgsWMSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWMSSOURCESELECTBASE_H
