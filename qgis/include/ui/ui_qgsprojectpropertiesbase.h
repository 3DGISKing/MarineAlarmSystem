/********************************************************************************
** Form generated from reading UI file 'qgsprojectpropertiesbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTPROPERTIESBASE_H
#define UI_QGSPROJECTPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscodeeditorpython.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgscolorschemelist.h"
#include "qgsprojectionselector.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mProjOpts_01;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QgsCollapsibleGroupBox *titleBox;
    QGridLayout *gridLayout_26;
    QSpacerItem *spacerItem;
    QComboBox *cbxAbsolutePath;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabel1;
    QgsColorButtonV2 *pbnSelectionColor;
    QLabel *label;
    QgsColorButtonV2 *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *titleEdit;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *projectFileName;
    QgsCollapsibleGroupBox *btnGrpMeasureEllipsoid;
    QGridLayout *gridLayoutMeasureTool;
    QLabel *textLabel1_8;
    QLabel *label_41;
    QLineEdit *leSemiMajor;
    QLineEdit *leSemiMinor;
    QLabel *label_42;
    QComboBox *cmbEllipsoid;
    QgsCollapsibleGroupBox *btnGrpMapUnits;
    QVBoxLayout *verticalLayout_19;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_4;
    QRadioButton *radDegrees;
    QRadioButton *radNMiles;
    QRadioButton *radFeet;
    QRadioButton *radMeters;
    QGroupBox *btnGrpDegreeDisplay;
    QVBoxLayout *verticalLayout_20;
    QRadioButton *radD;
    QRadioButton *radDM;
    QRadioButton *radDMS;
    QgsCollapsibleGroupBox *btnGrpPrecision;
    QGridLayout *gridLayout_28;
    QFrame *mPrecisionFrame;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinBoxDP;
    QLabel *labelDP;
    QRadioButton *radManual;
    QRadioButton *radAutomatic;
    QgsCollapsibleGroupBox *grpProjectScales;
    QGridLayout *gridLayout_7;
    QListWidget *lstScales;
    QVBoxLayout *verticalLayout_4;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QWidget *mProjOpts_02;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *cbxProjectionEnabled;
    QVBoxLayout *verticalLayout_21;
    QgsProjectionSelector *projectionSelector;
    QWidget *mProjOpts_03;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_22;
    QTableWidget *twIdentifyLayers;
    QWidget *mProjOpts_04;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_12;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QToolButton *pbtnStyleMarker;
    QLabel *lblStyleLine;
    QLabel *label_14;
    QLabel *pixStyleFill;
    QToolButton *pbtnStyleLine;
    QLabel *pixStyleLine;
    QComboBox *cboStyleFill;
    QLabel *lblStyleColorRamp;
    QComboBox *cboStyleMarker;
    QLabel *pixStyleMarker;
    QLabel *lblStyleMarker;
    QToolButton *pbtnStyleFill;
    QLabel *lblStyleFill;
    QComboBox *cboStyleLine;
    QComboBox *cboStyleColorRamp;
    QToolButton *pbtnStyleColorRamp;
    QgsCollapsibleGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mTransparencyLabel;
    QSlider *mTransparencySlider;
    QSpinBox *mTransparencySpinBox;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *cbxStyleRandomColors;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbtnStyleManager;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QPushButton *mButtonCopyColors;
    QSpacerItem *verticalSpacer_12;
    QPushButton *mButtonAddColor;
    QPushButton *mButtonPasteColors;
    QPushButton *mButtonRemoveColor;
    QgsColorSchemeList *mTreeProjectColors;
    QPushButton *mButtonImportColors;
    QPushButton *mButtonExportColors;
    QWidget *mProjOpts_05;
    QVBoxLayout *verticalLayout_14;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_13;
    QgsCollapsibleGroupBox *grpOWSServiceCapabilities;
    QGridLayout *gridLayout_6;
    QLineEdit *mWMSFees;
    QLineEdit *mWMSAccessConstraints;
    QLabel *label_10;
    QLineEdit *mWMSOnlineResourceLineEdit;
    QLabel *mWMSOnlineResourceLabel;
    QLabel *label_9;
    QLineEdit *mWMSContactMail;
    QLineEdit *mWMSContactPerson;
    QLabel *label_13;
    QLineEdit *mWMSContactOrganization;
    QLabel *label_12;
    QLineEdit *mWMSTitle;
    QLabel *label_15;
    QLineEdit *mWMSContactPhone;
    QTextEdit *mWMSAbstract;
    QLabel *mWMSKeywordListLabel;
    QLineEdit *mWMSKeywordList;
    QLabel *label_11;
    QLabel *mWMSAccessConstraintsLabel;
    QLabel *mWMSFeesLabel;
    QgsCollapsibleGroupBox *grpWMSCapabilities;
    QGridLayout *gridLayout_13;
    QgsCollapsibleGroupBox *mWMSComposerGroupBox;
    QGridLayout *gridLayout_10;
    QListWidget *mComposerListWidget;
    QToolButton *mAddWMSComposerButton;
    QToolButton *mRemoveWMSComposerButton;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBox *mLayerRestrictionsGroupBox;
    QGridLayout *gridLayout;
    QListWidget *mLayerRestrictionsListWidget;
    QToolButton *mAddLayerRestrictionButton;
    QToolButton *mRemoveLayerRestrictionButton;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBox *grpWMSExt;
    QGridLayout *gridLayout_4;
    QLabel *label_16;
    QLineEdit *mWMSExtMinX;
    QLabel *label_17;
    QLineEdit *mWMSExtMinY;
    QLabel *label_18;
    QLineEdit *mWMSExtMaxX;
    QLabel *label_19;
    QLineEdit *mWMSExtMaxY;
    QPushButton *pbnWMSExtCanvas;
    QSpacerItem *verticalSpacer_3;
    QgsCollapsibleGroupBox *grpWMSList;
    QGridLayout *gridLayout_5;
    QToolButton *pbnWMSAddSRS;
    QListWidget *mWMSList;
    QPushButton *pbnWMSSetUsedSRS;
    QToolButton *pbnWMSRemoveSRS;
    QCheckBox *mWmsUseLayerIDs;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mWMSImageQualityLabel;
    QSpinBox *mWMSImageQualitySpinBox;
    QCheckBox *mAddWktGeometryCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *mMaxWidthLabel;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *mMaxHeightLineEdit;
    QLineEdit *mMaxWidthLineEdit;
    QLabel *mMaxHeightLabel;
    QLabel *label_21;
    QHBoxLayout *grpWMSPrecision;
    QLabel *label_5;
    QSpinBox *mWMSPrecisionSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mWMSUrlLabel;
    QLineEdit *mWMSUrlLineEdit;
    QgsCollapsibleGroupBox *grpWFSCapabilities;
    QGridLayout *gridLayout_8;
    QTableWidget *twWFSLayers;
    QPushButton *pbnWFSLayersUnselectAll;
    QPushButton *pbnWFSLayersSelectAll;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mWFSUrlLabel;
    QLineEdit *mWFSUrlLineEdit;
    QgsCollapsibleGroupBox *grpWCSCapabilities;
    QGridLayout *gridLayout_9;
    QTableWidget *twWCSLayers;
    QPushButton *pbnWCSLayersUnselectAll;
    QPushButton *pbnWCSLayersSelectAll;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mWCSUrlLabel;
    QLineEdit *mWCSUrlLineEdit;
    QSpacerItem *verticalSpacer_6;
    QWidget *mProjOpts_06;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *grpPythonMacros;
    QVBoxLayout *verticalLayout_16;
    QgsCodeEditorPython *ptePythonMacros;
    QWidget *mTabRelations;
    QGridLayout *gridLayout_16;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
        if (QgsProjectPropertiesBase->objectName().isEmpty())
            QgsProjectPropertiesBase->setObjectName(QString::fromUtf8("QgsProjectPropertiesBase"));
        QgsProjectPropertiesBase->resize(857, 830);
        QgsProjectPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsProjectPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsProjectPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/map_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/overlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/relation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon6);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mProjOpts_01 = new QWidget();
        mProjOpts_01->setObjectName(QString::fromUtf8("mProjOpts_01"));
        verticalLayout_6 = new QVBoxLayout(mProjOpts_01);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(mProjOpts_01);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 637, 696));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 0, -1, 0);
        titleBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        titleBox->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_26 = new QGridLayout(titleBox);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(spacerItem, 3, 2, 1, 2);

        cbxAbsolutePath = new QComboBox(titleBox);
        cbxAbsolutePath->setObjectName(QString::fromUtf8("cbxAbsolutePath"));

        gridLayout_26->addWidget(cbxAbsolutePath, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textLabel1 = new QLabel(titleBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(textLabel1);

        pbnSelectionColor = new QgsColorButtonV2(titleBox);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnSelectionColor);

        label = new QLabel(titleBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label);

        pbnCanvasColor = new QgsColorButtonV2(titleBox);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnCanvasColor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_26->addLayout(horizontalLayout_5, 2, 0, 1, 4);

        label_3 = new QLabel(titleBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_3, 3, 0, 1, 1);

        titleEdit = new QLineEdit(titleBox);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        gridLayout_26->addWidget(titleEdit, 1, 1, 1, 3);

        label_2 = new QLabel(titleBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(titleBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_4, 0, 0, 1, 1);

        projectFileName = new QLabel(titleBox);
        projectFileName->setObjectName(QString::fromUtf8("projectFileName"));
        sizePolicy2.setHeightForWidth(projectFileName->sizePolicy().hasHeightForWidth());
        projectFileName->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(projectFileName, 0, 1, 1, 1);


        verticalLayout_8->addWidget(titleBox);

        btnGrpMeasureEllipsoid = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        btnGrpMeasureEllipsoid->setObjectName(QString::fromUtf8("btnGrpMeasureEllipsoid"));
        btnGrpMeasureEllipsoid->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayoutMeasureTool = new QGridLayout(btnGrpMeasureEllipsoid);
        gridLayoutMeasureTool->setObjectName(QString::fromUtf8("gridLayoutMeasureTool"));
        textLabel1_8 = new QLabel(btnGrpMeasureEllipsoid);
        textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));

        gridLayoutMeasureTool->addWidget(textLabel1_8, 1, 0, 1, 1);

        label_41 = new QLabel(btnGrpMeasureEllipsoid);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayoutMeasureTool->addWidget(label_41, 2, 1, 1, 1);

        leSemiMajor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMajor->setObjectName(QString::fromUtf8("leSemiMajor"));

        gridLayoutMeasureTool->addWidget(leSemiMajor, 2, 2, 1, 1);

        leSemiMinor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMinor->setObjectName(QString::fromUtf8("leSemiMinor"));

        gridLayoutMeasureTool->addWidget(leSemiMinor, 2, 4, 1, 1);

        label_42 = new QLabel(btnGrpMeasureEllipsoid);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayoutMeasureTool->addWidget(label_42, 2, 3, 1, 1);

        cmbEllipsoid = new QComboBox(btnGrpMeasureEllipsoid);
        cmbEllipsoid->setObjectName(QString::fromUtf8("cmbEllipsoid"));

        gridLayoutMeasureTool->addWidget(cmbEllipsoid, 1, 1, 1, 4);


        verticalLayout_8->addWidget(btnGrpMeasureEllipsoid);

        btnGrpMapUnits = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        btnGrpMapUnits->setObjectName(QString::fromUtf8("btnGrpMapUnits"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnGrpMapUnits->sizePolicy().hasHeightForWidth());
        btnGrpMapUnits->setSizePolicy(sizePolicy3);
        btnGrpMapUnits->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        verticalLayout_19 = new QVBoxLayout(btnGrpMapUnits);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 0, 1, 1);

        radDegrees = new QRadioButton(btnGrpMapUnits);
        radDegrees->setObjectName(QString::fromUtf8("radDegrees"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(radDegrees->sizePolicy().hasHeightForWidth());
        radDegrees->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(radDegrees, 0, 3, 1, 1);

        radNMiles = new QRadioButton(btnGrpMapUnits);
        radNMiles->setObjectName(QString::fromUtf8("radNMiles"));
        sizePolicy4.setHeightForWidth(radNMiles->sizePolicy().hasHeightForWidth());
        radNMiles->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(radNMiles, 0, 2, 1, 1);

        radFeet = new QRadioButton(btnGrpMapUnits);
        radFeet->setObjectName(QString::fromUtf8("radFeet"));
        sizePolicy4.setHeightForWidth(radFeet->sizePolicy().hasHeightForWidth());
        radFeet->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(radFeet, 0, 1, 1, 1);

        radMeters = new QRadioButton(btnGrpMapUnits);
        radMeters->setObjectName(QString::fromUtf8("radMeters"));
        sizePolicy4.setHeightForWidth(radMeters->sizePolicy().hasHeightForWidth());
        radMeters->setSizePolicy(sizePolicy4);
        radMeters->setChecked(true);

        gridLayout_2->addWidget(radMeters, 0, 0, 1, 1);

        btnGrpDegreeDisplay = new QGroupBox(btnGrpMapUnits);
        btnGrpDegreeDisplay->setObjectName(QString::fromUtf8("btnGrpDegreeDisplay"));
        btnGrpDegreeDisplay->setEnabled(false);
        verticalLayout_20 = new QVBoxLayout(btnGrpDegreeDisplay);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        radD = new QRadioButton(btnGrpDegreeDisplay);
        radD->setObjectName(QString::fromUtf8("radD"));

        verticalLayout_20->addWidget(radD);

        radDM = new QRadioButton(btnGrpDegreeDisplay);
        radDM->setObjectName(QString::fromUtf8("radDM"));

        verticalLayout_20->addWidget(radDM);

        radDMS = new QRadioButton(btnGrpDegreeDisplay);
        radDMS->setObjectName(QString::fromUtf8("radDMS"));

        verticalLayout_20->addWidget(radDMS);


        gridLayout_2->addWidget(btnGrpDegreeDisplay, 0, 4, 2, 1);


        verticalLayout_19->addLayout(gridLayout_2);


        verticalLayout_8->addWidget(btnGrpMapUnits);

        btnGrpPrecision = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        btnGrpPrecision->setObjectName(QString::fromUtf8("btnGrpPrecision"));
        btnGrpPrecision->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_28 = new QGridLayout(btnGrpPrecision);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        mPrecisionFrame = new QFrame(btnGrpPrecision);
        mPrecisionFrame->setObjectName(QString::fromUtf8("mPrecisionFrame"));
        mPrecisionFrame->setFrameShape(QFrame::NoFrame);
        mPrecisionFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(mPrecisionFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinBoxDP = new QSpinBox(mPrecisionFrame);
        spinBoxDP->setObjectName(QString::fromUtf8("spinBoxDP"));

        horizontalLayout_4->addWidget(spinBoxDP);

        labelDP = new QLabel(mPrecisionFrame);
        labelDP->setObjectName(QString::fromUtf8("labelDP"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelDP->sizePolicy().hasHeightForWidth());
        labelDP->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(labelDP);


        gridLayout_28->addWidget(mPrecisionFrame, 0, 2, 1, 1);

        radManual = new QRadioButton(btnGrpPrecision);
        radManual->setObjectName(QString::fromUtf8("radManual"));

        gridLayout_28->addWidget(radManual, 0, 1, 1, 1);

        radAutomatic = new QRadioButton(btnGrpPrecision);
        radAutomatic->setObjectName(QString::fromUtf8("radAutomatic"));
        radAutomatic->setChecked(true);

        gridLayout_28->addWidget(radAutomatic, 0, 0, 1, 1);


        verticalLayout_8->addWidget(btnGrpPrecision);

        grpProjectScales = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        grpProjectScales->setObjectName(QString::fromUtf8("grpProjectScales"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(3);
        sizePolicy6.setHeightForWidth(grpProjectScales->sizePolicy().hasHeightForWidth());
        grpProjectScales->setSizePolicy(sizePolicy6);
        grpProjectScales->setCheckable(true);
        grpProjectScales->setChecked(false);
        grpProjectScales->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_7 = new QGridLayout(grpProjectScales);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lstScales = new QListWidget(grpProjectScales);
        lstScales->setObjectName(QString::fromUtf8("lstScales"));

        gridLayout_7->addWidget(lstScales, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pbnAddScale = new QToolButton(grpProjectScales);
        pbnAddScale->setObjectName(QString::fromUtf8("pbnAddScale"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionNewAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddScale->setIcon(icon7);

        verticalLayout_4->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(grpProjectScales);
        pbnRemoveScale->setObjectName(QString::fromUtf8("pbnRemoveScale"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveScale->setIcon(icon8);

        verticalLayout_4->addWidget(pbnRemoveScale);

        pbnImportScales = new QToolButton(grpProjectScales);
        pbnImportScales->setObjectName(QString::fromUtf8("pbnImportScales"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionFolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportScales->setIcon(icon9);

        verticalLayout_4->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(grpProjectScales);
        pbnExportScales->setObjectName(QString::fromUtf8("pbnExportScales"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon10);

        verticalLayout_4->addWidget(pbnExportScales);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_7->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout_8->addWidget(grpProjectScales);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mProjOpts_01);
        mProjOpts_02 = new QWidget();
        mProjOpts_02->setObjectName(QString::fromUtf8("mProjOpts_02"));
        verticalLayout_5 = new QVBoxLayout(mProjOpts_02);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(mProjOpts_02);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 328, 54));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, 0);
        cbxProjectionEnabled = new QGroupBox(scrollAreaWidgetContents);
        cbxProjectionEnabled->setObjectName(QString::fromUtf8("cbxProjectionEnabled"));
        cbxProjectionEnabled->setCheckable(true);
        verticalLayout_21 = new QVBoxLayout(cbxProjectionEnabled);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        projectionSelector = new QgsProjectionSelector(cbxProjectionEnabled);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        verticalLayout_21->addWidget(projectionSelector);


        verticalLayout_7->addWidget(cbxProjectionEnabled);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mProjOpts_02);
        mProjOpts_03 = new QWidget();
        mProjOpts_03->setObjectName(QString::fromUtf8("mProjOpts_03"));
        verticalLayout_9 = new QVBoxLayout(mProjOpts_03);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(mProjOpts_03);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 141, 100));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 0, -1, 0);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 100));
        verticalLayout_22 = new QVBoxLayout(groupBox_3);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        twIdentifyLayers = new QTableWidget(groupBox_3);
        if (twIdentifyLayers->columnCount() < 3)
            twIdentifyLayers->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twIdentifyLayers->setObjectName(QString::fromUtf8("twIdentifyLayers"));
        twIdentifyLayers->setSortingEnabled(true);

        verticalLayout_22->addWidget(twIdentifyLayers);


        verticalLayout_10->addWidget(groupBox_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_9->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mProjOpts_03);
        mProjOpts_04 = new QWidget();
        mProjOpts_04->setObjectName(QString::fromUtf8("mProjOpts_04"));
        verticalLayout_11 = new QVBoxLayout(mProjOpts_04);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(mProjOpts_04);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 379, 570));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("projstyles")));
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(9, -1, -1, -1);
        pbtnStyleMarker = new QToolButton(groupBox);
        pbtnStyleMarker->setObjectName(QString::fromUtf8("pbtnStyleMarker"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbtnStyleMarker->setIcon(icon11);

        gridLayout_11->addWidget(pbtnStyleMarker, 0, 5, 1, 1);

        lblStyleLine = new QLabel(groupBox);
        lblStyleLine->setObjectName(QString::fromUtf8("lblStyleLine"));
        lblStyleLine->setMargin(5);

        gridLayout_11->addWidget(lblStyleLine, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy7);
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/styleicons/color.png")));

        gridLayout_11->addWidget(label_14, 3, 0, 1, 1);

        pixStyleFill = new QLabel(groupBox);
        pixStyleFill->setObjectName(QString::fromUtf8("pixStyleFill"));
        sizePolicy7.setHeightForWidth(pixStyleFill->sizePolicy().hasHeightForWidth());
        pixStyleFill->setSizePolicy(sizePolicy7);
        pixStyleFill->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/styleicons/style-polygon.png")));

        gridLayout_11->addWidget(pixStyleFill, 2, 0, 1, 1);

        pbtnStyleLine = new QToolButton(groupBox);
        pbtnStyleLine->setObjectName(QString::fromUtf8("pbtnStyleLine"));
        pbtnStyleLine->setIcon(icon11);

        gridLayout_11->addWidget(pbtnStyleLine, 1, 5, 1, 1);

        pixStyleLine = new QLabel(groupBox);
        pixStyleLine->setObjectName(QString::fromUtf8("pixStyleLine"));
        sizePolicy7.setHeightForWidth(pixStyleLine->sizePolicy().hasHeightForWidth());
        pixStyleLine->setSizePolicy(sizePolicy7);
        pixStyleLine->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/styleicons/style-line.png")));

        gridLayout_11->addWidget(pixStyleLine, 1, 0, 1, 1);

        cboStyleFill = new QComboBox(groupBox);
        cboStyleFill->setObjectName(QString::fromUtf8("cboStyleFill"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(cboStyleFill->sizePolicy().hasHeightForWidth());
        cboStyleFill->setSizePolicy(sizePolicy8);
        cboStyleFill->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleFill, 2, 4, 1, 1);

        lblStyleColorRamp = new QLabel(groupBox);
        lblStyleColorRamp->setObjectName(QString::fromUtf8("lblStyleColorRamp"));
        lblStyleColorRamp->setMargin(5);

        gridLayout_11->addWidget(lblStyleColorRamp, 3, 2, 1, 1);

        cboStyleMarker = new QComboBox(groupBox);
        cboStyleMarker->setObjectName(QString::fromUtf8("cboStyleMarker"));
        sizePolicy8.setHeightForWidth(cboStyleMarker->sizePolicy().hasHeightForWidth());
        cboStyleMarker->setSizePolicy(sizePolicy8);
        cboStyleMarker->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleMarker, 0, 4, 1, 1);

        pixStyleMarker = new QLabel(groupBox);
        pixStyleMarker->setObjectName(QString::fromUtf8("pixStyleMarker"));
        sizePolicy7.setHeightForWidth(pixStyleMarker->sizePolicy().hasHeightForWidth());
        pixStyleMarker->setSizePolicy(sizePolicy7);
        pixStyleMarker->setPixmap(QPixmap(QString::fromUtf8(":/images/themes/default/styleicons/style-point.png")));

        gridLayout_11->addWidget(pixStyleMarker, 0, 0, 1, 1);

        lblStyleMarker = new QLabel(groupBox);
        lblStyleMarker->setObjectName(QString::fromUtf8("lblStyleMarker"));
        lblStyleMarker->setMargin(5);

        gridLayout_11->addWidget(lblStyleMarker, 0, 2, 1, 1);

        pbtnStyleFill = new QToolButton(groupBox);
        pbtnStyleFill->setObjectName(QString::fromUtf8("pbtnStyleFill"));
        pbtnStyleFill->setIcon(icon11);

        gridLayout_11->addWidget(pbtnStyleFill, 2, 5, 1, 1);

        lblStyleFill = new QLabel(groupBox);
        lblStyleFill->setObjectName(QString::fromUtf8("lblStyleFill"));
        lblStyleFill->setMargin(5);

        gridLayout_11->addWidget(lblStyleFill, 2, 2, 1, 1);

        cboStyleLine = new QComboBox(groupBox);
        cboStyleLine->setObjectName(QString::fromUtf8("cboStyleLine"));
        sizePolicy8.setHeightForWidth(cboStyleLine->sizePolicy().hasHeightForWidth());
        cboStyleLine->setSizePolicy(sizePolicy8);
        cboStyleLine->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleLine, 1, 4, 1, 1);

        cboStyleColorRamp = new QComboBox(groupBox);
        cboStyleColorRamp->setObjectName(QString::fromUtf8("cboStyleColorRamp"));
        sizePolicy8.setHeightForWidth(cboStyleColorRamp->sizePolicy().hasHeightForWidth());
        cboStyleColorRamp->setSizePolicy(sizePolicy8);
        cboStyleColorRamp->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_11->addWidget(cboStyleColorRamp, 3, 4, 1, 1);

        pbtnStyleColorRamp = new QToolButton(groupBox);
        pbtnStyleColorRamp->setObjectName(QString::fromUtf8("pbtnStyleColorRamp"));
        pbtnStyleColorRamp->setIcon(icon11);

        gridLayout_11->addWidget(pbtnStyleColorRamp, 3, 5, 1, 1);


        verticalLayout_12->addWidget(groupBox);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("projstyles")));
        verticalLayout_18 = new QVBoxLayout(groupBox_2);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mTransparencyLabel = new QLabel(groupBox_2);
        mTransparencyLabel->setObjectName(QString::fromUtf8("mTransparencyLabel"));

        horizontalLayout_6->addWidget(mTransparencyLabel);

        mTransparencySlider = new QSlider(groupBox_2);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        sizePolicy5.setHeightForWidth(mTransparencySlider->sizePolicy().hasHeightForWidth());
        mTransparencySlider->setSizePolicy(sizePolicy5);
        mTransparencySlider->setMinimumSize(QSize(150, 0));
        mTransparencySlider->setMaximumSize(QSize(150, 16777215));
        mTransparencySlider->setMaximum(100);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(mTransparencySlider);

        mTransparencySpinBox = new QSpinBox(groupBox_2);
        mTransparencySpinBox->setObjectName(QString::fromUtf8("mTransparencySpinBox"));
        mTransparencySpinBox->setMaximum(100);

        horizontalLayout_6->addWidget(mTransparencySpinBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_18->addLayout(horizontalLayout_6);

        cbxStyleRandomColors = new QCheckBox(groupBox_2);
        cbxStyleRandomColors->setObjectName(QString::fromUtf8("cbxStyleRandomColors"));

        verticalLayout_18->addWidget(cbxStyleRandomColors);


        verticalLayout_12->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbtnStyleManager = new QPushButton(scrollAreaWidgetContents_4);
        pbtnStyleManager->setObjectName(QString::fromUtf8("pbtnStyleManager"));

        horizontalLayout_3->addWidget(pbtnStyleManager);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_12->addLayout(horizontalLayout_3);

        groupBox_7 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        mButtonCopyColors = new QPushButton(groupBox_7);
        mButtonCopyColors->setObjectName(QString::fromUtf8("mButtonCopyColors"));

        gridLayout_12->addWidget(mButtonCopyColors, 2, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_12, 6, 1, 1, 1);

        mButtonAddColor = new QPushButton(groupBox_7);
        mButtonAddColor->setObjectName(QString::fromUtf8("mButtonAddColor"));

        gridLayout_12->addWidget(mButtonAddColor, 0, 1, 1, 1);

        mButtonPasteColors = new QPushButton(groupBox_7);
        mButtonPasteColors->setObjectName(QString::fromUtf8("mButtonPasteColors"));

        gridLayout_12->addWidget(mButtonPasteColors, 3, 1, 1, 1);

        mButtonRemoveColor = new QPushButton(groupBox_7);
        mButtonRemoveColor->setObjectName(QString::fromUtf8("mButtonRemoveColor"));

        gridLayout_12->addWidget(mButtonRemoveColor, 1, 1, 1, 1);

        mTreeProjectColors = new QgsColorSchemeList(groupBox_7);
        mTreeProjectColors->setObjectName(QString::fromUtf8("mTreeProjectColors"));

        gridLayout_12->addWidget(mTreeProjectColors, 0, 0, 8, 1);

        mButtonImportColors = new QPushButton(groupBox_7);
        mButtonImportColors->setObjectName(QString::fromUtf8("mButtonImportColors"));

        gridLayout_12->addWidget(mButtonImportColors, 4, 1, 1, 1);

        mButtonExportColors = new QPushButton(groupBox_7);
        mButtonExportColors->setObjectName(QString::fromUtf8("mButtonExportColors"));

        gridLayout_12->addWidget(mButtonExportColors, 5, 1, 1, 1);


        verticalLayout_12->addWidget(groupBox_7);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_11->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mProjOpts_04);
        mProjOpts_05 = new QWidget();
        mProjOpts_05->setObjectName(QString::fromUtf8("mProjOpts_05"));
        verticalLayout_14 = new QVBoxLayout(mProjOpts_05);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(mProjOpts_05);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, -330, 671, 1624));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(-1, 0, -1, 0);
        grpOWSServiceCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpOWSServiceCapabilities->setObjectName(QString::fromUtf8("grpOWSServiceCapabilities"));
        grpOWSServiceCapabilities->setCheckable(true);
        grpOWSServiceCapabilities->setChecked(false);
        grpOWSServiceCapabilities->setProperty("collapsed", QVariant(false));
        grpOWSServiceCapabilities->setProperty("saveCollapsedState", QVariant(true));
        grpOWSServiceCapabilities->setProperty("syncGroup", QVariant(QString::fromUtf8("projowsserver")));
        gridLayout_6 = new QGridLayout(grpOWSServiceCapabilities);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mWMSFees = new QLineEdit(grpOWSServiceCapabilities);
        mWMSFees->setObjectName(QString::fromUtf8("mWMSFees"));

        gridLayout_6->addWidget(mWMSFees, 7, 1, 1, 1);

        mWMSAccessConstraints = new QLineEdit(grpOWSServiceCapabilities);
        mWMSAccessConstraints->setObjectName(QString::fromUtf8("mWMSAccessConstraints"));

        gridLayout_6->addWidget(mWMSAccessConstraints, 8, 1, 1, 1);

        label_10 = new QLabel(grpOWSServiceCapabilities);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        mWMSOnlineResourceLineEdit = new QLineEdit(grpOWSServiceCapabilities);
        mWMSOnlineResourceLineEdit->setObjectName(QString::fromUtf8("mWMSOnlineResourceLineEdit"));

        gridLayout_6->addWidget(mWMSOnlineResourceLineEdit, 2, 1, 1, 1);

        mWMSOnlineResourceLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSOnlineResourceLabel->setObjectName(QString::fromUtf8("mWMSOnlineResourceLabel"));

        gridLayout_6->addWidget(mWMSOnlineResourceLabel, 2, 0, 1, 1);

        label_9 = new QLabel(grpOWSServiceCapabilities);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 3, 0, 1, 1);

        mWMSContactMail = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactMail->setObjectName(QString::fromUtf8("mWMSContactMail"));

        gridLayout_6->addWidget(mWMSContactMail, 4, 1, 1, 1);

        mWMSContactPerson = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactPerson->setObjectName(QString::fromUtf8("mWMSContactPerson"));

        gridLayout_6->addWidget(mWMSContactPerson, 3, 1, 1, 1);

        label_13 = new QLabel(grpOWSServiceCapabilities);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_6->addWidget(label_13, 4, 0, 1, 1);

        mWMSContactOrganization = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactOrganization->setObjectName(QString::fromUtf8("mWMSContactOrganization"));

        gridLayout_6->addWidget(mWMSContactOrganization, 1, 1, 1, 1);

        label_12 = new QLabel(grpOWSServiceCapabilities);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 5, 0, 1, 1);

        mWMSTitle = new QLineEdit(grpOWSServiceCapabilities);
        mWMSTitle->setObjectName(QString::fromUtf8("mWMSTitle"));

        gridLayout_6->addWidget(mWMSTitle, 0, 1, 1, 1);

        label_15 = new QLabel(grpOWSServiceCapabilities);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_6->addWidget(label_15, 6, 0, 1, 1);

        mWMSContactPhone = new QLineEdit(grpOWSServiceCapabilities);
        mWMSContactPhone->setObjectName(QString::fromUtf8("mWMSContactPhone"));

        gridLayout_6->addWidget(mWMSContactPhone, 5, 1, 1, 1);

        mWMSAbstract = new QTextEdit(grpOWSServiceCapabilities);
        mWMSAbstract->setObjectName(QString::fromUtf8("mWMSAbstract"));

        gridLayout_6->addWidget(mWMSAbstract, 6, 1, 1, 1);

        mWMSKeywordListLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSKeywordListLabel->setObjectName(QString::fromUtf8("mWMSKeywordListLabel"));

        gridLayout_6->addWidget(mWMSKeywordListLabel, 9, 0, 1, 1);

        mWMSKeywordList = new QLineEdit(grpOWSServiceCapabilities);
        mWMSKeywordList->setObjectName(QString::fromUtf8("mWMSKeywordList"));

        gridLayout_6->addWidget(mWMSKeywordList, 9, 1, 1, 1);

        label_11 = new QLabel(grpOWSServiceCapabilities);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        mWMSAccessConstraintsLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSAccessConstraintsLabel->setObjectName(QString::fromUtf8("mWMSAccessConstraintsLabel"));

        gridLayout_6->addWidget(mWMSAccessConstraintsLabel, 8, 0, 1, 1);

        mWMSFeesLabel = new QLabel(grpOWSServiceCapabilities);
        mWMSFeesLabel->setObjectName(QString::fromUtf8("mWMSFeesLabel"));

        gridLayout_6->addWidget(mWMSFeesLabel, 7, 0, 1, 1);


        verticalLayout_13->addWidget(grpOWSServiceCapabilities);

        grpWMSCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWMSCapabilities->setObjectName(QString::fromUtf8("grpWMSCapabilities"));
        grpWMSCapabilities->setProperty("syncGroup", QVariant(QString::fromUtf8("projowsserver")));
        gridLayout_13 = new QGridLayout(grpWMSCapabilities);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        mWMSComposerGroupBox = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        mWMSComposerGroupBox->setObjectName(QString::fromUtf8("mWMSComposerGroupBox"));
        mWMSComposerGroupBox->setCheckable(true);
        mWMSComposerGroupBox->setChecked(false);
        mWMSComposerGroupBox->setProperty("collapsed", QVariant(false));
        mWMSComposerGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_10 = new QGridLayout(mWMSComposerGroupBox);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mComposerListWidget = new QListWidget(mWMSComposerGroupBox);
        mComposerListWidget->setObjectName(QString::fromUtf8("mComposerListWidget"));

        gridLayout_10->addWidget(mComposerListWidget, 0, 0, 1, 3);

        mAddWMSComposerButton = new QToolButton(mWMSComposerGroupBox);
        mAddWMSComposerButton->setObjectName(QString::fromUtf8("mAddWMSComposerButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddWMSComposerButton->setIcon(icon12);

        gridLayout_10->addWidget(mAddWMSComposerButton, 1, 0, 1, 1);

        mRemoveWMSComposerButton = new QToolButton(mWMSComposerGroupBox);
        mRemoveWMSComposerButton->setObjectName(QString::fromUtf8("mRemoveWMSComposerButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveWMSComposerButton->setIcon(icon13);

        gridLayout_10->addWidget(mRemoveWMSComposerButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_13->addWidget(mWMSComposerGroupBox, 2, 0, 1, 1);

        mLayerRestrictionsGroupBox = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        mLayerRestrictionsGroupBox->setObjectName(QString::fromUtf8("mLayerRestrictionsGroupBox"));
        mLayerRestrictionsGroupBox->setCheckable(true);
        mLayerRestrictionsGroupBox->setChecked(false);
        mLayerRestrictionsGroupBox->setProperty("collapsed", QVariant(false));
        mLayerRestrictionsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout = new QGridLayout(mLayerRestrictionsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLayerRestrictionsListWidget = new QListWidget(mLayerRestrictionsGroupBox);
        mLayerRestrictionsListWidget->setObjectName(QString::fromUtf8("mLayerRestrictionsListWidget"));

        gridLayout->addWidget(mLayerRestrictionsListWidget, 0, 0, 1, 3);

        mAddLayerRestrictionButton = new QToolButton(mLayerRestrictionsGroupBox);
        mAddLayerRestrictionButton->setObjectName(QString::fromUtf8("mAddLayerRestrictionButton"));
        mAddLayerRestrictionButton->setIcon(icon12);

        gridLayout->addWidget(mAddLayerRestrictionButton, 1, 0, 1, 1);

        mRemoveLayerRestrictionButton = new QToolButton(mLayerRestrictionsGroupBox);
        mRemoveLayerRestrictionButton->setObjectName(QString::fromUtf8("mRemoveLayerRestrictionButton"));
        mRemoveLayerRestrictionButton->setIcon(icon13);

        gridLayout->addWidget(mRemoveLayerRestrictionButton, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);


        gridLayout_13->addWidget(mLayerRestrictionsGroupBox, 2, 1, 1, 1);

        grpWMSExt = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        grpWMSExt->setObjectName(QString::fromUtf8("grpWMSExt"));
        grpWMSExt->setCheckable(true);
        grpWMSExt->setChecked(false);
        grpWMSExt->setProperty("collapsed", QVariant(false));
        grpWMSExt->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_4 = new QGridLayout(grpWMSExt);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_16 = new QLabel(grpWMSExt);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 0, 0, 1, 1);

        mWMSExtMinX = new QLineEdit(grpWMSExt);
        mWMSExtMinX->setObjectName(QString::fromUtf8("mWMSExtMinX"));

        gridLayout_4->addWidget(mWMSExtMinX, 0, 1, 1, 1);

        label_17 = new QLabel(grpWMSExt);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 1, 0, 1, 1);

        mWMSExtMinY = new QLineEdit(grpWMSExt);
        mWMSExtMinY->setObjectName(QString::fromUtf8("mWMSExtMinY"));

        gridLayout_4->addWidget(mWMSExtMinY, 1, 1, 1, 1);

        label_18 = new QLabel(grpWMSExt);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        mWMSExtMaxX = new QLineEdit(grpWMSExt);
        mWMSExtMaxX->setObjectName(QString::fromUtf8("mWMSExtMaxX"));

        gridLayout_4->addWidget(mWMSExtMaxX, 2, 1, 1, 1);

        label_19 = new QLabel(grpWMSExt);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 3, 0, 1, 1);

        mWMSExtMaxY = new QLineEdit(grpWMSExt);
        mWMSExtMaxY->setObjectName(QString::fromUtf8("mWMSExtMaxY"));

        gridLayout_4->addWidget(mWMSExtMaxY, 3, 1, 1, 1);

        pbnWMSExtCanvas = new QPushButton(grpWMSExt);
        pbnWMSExtCanvas->setObjectName(QString::fromUtf8("pbnWMSExtCanvas"));

        gridLayout_4->addWidget(pbnWMSExtCanvas, 4, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 5, 0, 1, 2);


        gridLayout_13->addWidget(grpWMSExt, 1, 0, 1, 1);

        grpWMSList = new QgsCollapsibleGroupBox(grpWMSCapabilities);
        grpWMSList->setObjectName(QString::fromUtf8("grpWMSList"));
        grpWMSList->setCheckable(true);
        grpWMSList->setChecked(false);
        grpWMSList->setProperty("collapsed", QVariant(false));
        grpWMSList->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_5 = new QGridLayout(grpWMSList);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pbnWMSAddSRS = new QToolButton(grpWMSList);
        pbnWMSAddSRS->setObjectName(QString::fromUtf8("pbnWMSAddSRS"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionSignPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnWMSAddSRS->setIcon(icon14);

        gridLayout_5->addWidget(pbnWMSAddSRS, 1, 0, 1, 1);

        mWMSList = new QListWidget(grpWMSList);
        mWMSList->setObjectName(QString::fromUtf8("mWMSList"));

        gridLayout_5->addWidget(mWMSList, 0, 0, 1, 4);

        pbnWMSSetUsedSRS = new QPushButton(grpWMSList);
        pbnWMSSetUsedSRS->setObjectName(QString::fromUtf8("pbnWMSSetUsedSRS"));

        gridLayout_5->addWidget(pbnWMSSetUsedSRS, 1, 2, 1, 1);

        pbnWMSRemoveSRS = new QToolButton(grpWMSList);
        pbnWMSRemoveSRS->setObjectName(QString::fromUtf8("pbnWMSRemoveSRS"));
        pbnWMSRemoveSRS->setIcon(icon13);

        gridLayout_5->addWidget(pbnWMSRemoveSRS, 1, 1, 1, 1);


        gridLayout_13->addWidget(grpWMSList, 1, 1, 1, 1);

        mWmsUseLayerIDs = new QCheckBox(grpWMSCapabilities);
        mWmsUseLayerIDs->setObjectName(QString::fromUtf8("mWmsUseLayerIDs"));

        gridLayout_13->addWidget(mWmsUseLayerIDs, 3, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mWMSImageQualityLabel = new QLabel(grpWMSCapabilities);
        mWMSImageQualityLabel->setObjectName(QString::fromUtf8("mWMSImageQualityLabel"));

        horizontalLayout_10->addWidget(mWMSImageQualityLabel);

        mWMSImageQualitySpinBox = new QSpinBox(grpWMSCapabilities);
        mWMSImageQualitySpinBox->setObjectName(QString::fromUtf8("mWMSImageQualitySpinBox"));
        mWMSImageQualitySpinBox->setMinimum(10);
        mWMSImageQualitySpinBox->setMaximum(100);
        mWMSImageQualitySpinBox->setSingleStep(5);
        mWMSImageQualitySpinBox->setValue(90);

        horizontalLayout_10->addWidget(mWMSImageQualitySpinBox);


        gridLayout_13->addLayout(horizontalLayout_10, 8, 0, 1, 2);

        mAddWktGeometryCheckBox = new QCheckBox(grpWMSCapabilities);
        mAddWktGeometryCheckBox->setObjectName(QString::fromUtf8("mAddWktGeometryCheckBox"));

        gridLayout_13->addWidget(mAddWktGeometryCheckBox, 4, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mMaxWidthLabel = new QLabel(grpWMSCapabilities);
        mMaxWidthLabel->setObjectName(QString::fromUtf8("mMaxWidthLabel"));

        gridLayout_3->addWidget(mMaxWidthLabel, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        mMaxHeightLineEdit = new QLineEdit(grpWMSCapabilities);
        mMaxHeightLineEdit->setObjectName(QString::fromUtf8("mMaxHeightLineEdit"));

        gridLayout_3->addWidget(mMaxHeightLineEdit, 1, 4, 1, 1);

        mMaxWidthLineEdit = new QLineEdit(grpWMSCapabilities);
        mMaxWidthLineEdit->setObjectName(QString::fromUtf8("mMaxWidthLineEdit"));

        gridLayout_3->addWidget(mMaxWidthLineEdit, 1, 2, 1, 1);

        mMaxHeightLabel = new QLabel(grpWMSCapabilities);
        mMaxHeightLabel->setObjectName(QString::fromUtf8("mMaxHeightLabel"));

        gridLayout_3->addWidget(mMaxHeightLabel, 1, 3, 1, 1);

        label_21 = new QLabel(grpWMSCapabilities);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 0, 0, 1, 5);


        gridLayout_13->addLayout(gridLayout_3, 7, 0, 1, 2);

        grpWMSPrecision = new QHBoxLayout();
        grpWMSPrecision->setObjectName(QString::fromUtf8("grpWMSPrecision"));
        label_5 = new QLabel(grpWMSCapabilities);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        grpWMSPrecision->addWidget(label_5);

        mWMSPrecisionSpinBox = new QSpinBox(grpWMSCapabilities);
        mWMSPrecisionSpinBox->setObjectName(QString::fromUtf8("mWMSPrecisionSpinBox"));
        mWMSPrecisionSpinBox->setMinimum(1);
        mWMSPrecisionSpinBox->setMaximum(17);
        mWMSPrecisionSpinBox->setValue(8);

        grpWMSPrecision->addWidget(mWMSPrecisionSpinBox);


        gridLayout_13->addLayout(grpWMSPrecision, 5, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mWMSUrlLabel = new QLabel(grpWMSCapabilities);
        mWMSUrlLabel->setObjectName(QString::fromUtf8("mWMSUrlLabel"));

        horizontalLayout_2->addWidget(mWMSUrlLabel);

        mWMSUrlLineEdit = new QLineEdit(grpWMSCapabilities);
        mWMSUrlLineEdit->setObjectName(QString::fromUtf8("mWMSUrlLineEdit"));

        horizontalLayout_2->addWidget(mWMSUrlLineEdit);


        gridLayout_13->addLayout(horizontalLayout_2, 6, 0, 1, 2);


        verticalLayout_13->addWidget(grpWMSCapabilities);

        grpWFSCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWFSCapabilities->setObjectName(QString::fromUtf8("grpWFSCapabilities"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(3);
        sizePolicy9.setHeightForWidth(grpWFSCapabilities->sizePolicy().hasHeightForWidth());
        grpWFSCapabilities->setSizePolicy(sizePolicy9);
        grpWFSCapabilities->setProperty("syncGroup", QVariant(QString::fromUtf8("projowsserver")));
        gridLayout_8 = new QGridLayout(grpWFSCapabilities);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        twWFSLayers = new QTableWidget(grpWFSCapabilities);
        if (twWFSLayers->columnCount() < 6)
            twWFSLayers->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        twWFSLayers->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        twWFSLayers->setObjectName(QString::fromUtf8("twWFSLayers"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(twWFSLayers->sizePolicy().hasHeightForWidth());
        twWFSLayers->setSizePolicy(sizePolicy10);

        gridLayout_8->addWidget(twWFSLayers, 0, 0, 1, 2);

        pbnWFSLayersUnselectAll = new QPushButton(grpWFSCapabilities);
        pbnWFSLayersUnselectAll->setObjectName(QString::fromUtf8("pbnWFSLayersUnselectAll"));

        gridLayout_8->addWidget(pbnWFSLayersUnselectAll, 1, 1, 1, 1);

        pbnWFSLayersSelectAll = new QPushButton(grpWFSCapabilities);
        pbnWFSLayersSelectAll->setObjectName(QString::fromUtf8("pbnWFSLayersSelectAll"));

        gridLayout_8->addWidget(pbnWFSLayersSelectAll, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mWFSUrlLabel = new QLabel(grpWFSCapabilities);
        mWFSUrlLabel->setObjectName(QString::fromUtf8("mWFSUrlLabel"));

        horizontalLayout_8->addWidget(mWFSUrlLabel);

        mWFSUrlLineEdit = new QLineEdit(grpWFSCapabilities);
        mWFSUrlLineEdit->setObjectName(QString::fromUtf8("mWFSUrlLineEdit"));

        horizontalLayout_8->addWidget(mWFSUrlLineEdit);


        gridLayout_8->addLayout(horizontalLayout_8, 3, 0, 1, 2);


        verticalLayout_13->addWidget(grpWFSCapabilities);

        grpWCSCapabilities = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        grpWCSCapabilities->setObjectName(QString::fromUtf8("grpWCSCapabilities"));
        sizePolicy9.setHeightForWidth(grpWCSCapabilities->sizePolicy().hasHeightForWidth());
        grpWCSCapabilities->setSizePolicy(sizePolicy9);
        grpWCSCapabilities->setProperty("syncGroup", QVariant(QString::fromUtf8("projowsserver")));
        gridLayout_9 = new QGridLayout(grpWCSCapabilities);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        twWCSLayers = new QTableWidget(grpWCSCapabilities);
        if (twWCSLayers->columnCount() < 2)
            twWCSLayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        twWCSLayers->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        twWCSLayers->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        twWCSLayers->setObjectName(QString::fromUtf8("twWCSLayers"));
        sizePolicy10.setHeightForWidth(twWCSLayers->sizePolicy().hasHeightForWidth());
        twWCSLayers->setSizePolicy(sizePolicy10);

        gridLayout_9->addWidget(twWCSLayers, 0, 0, 1, 2);

        pbnWCSLayersUnselectAll = new QPushButton(grpWCSCapabilities);
        pbnWCSLayersUnselectAll->setObjectName(QString::fromUtf8("pbnWCSLayersUnselectAll"));

        gridLayout_9->addWidget(pbnWCSLayersUnselectAll, 1, 1, 1, 1);

        pbnWCSLayersSelectAll = new QPushButton(grpWCSCapabilities);
        pbnWCSLayersSelectAll->setObjectName(QString::fromUtf8("pbnWCSLayersSelectAll"));

        gridLayout_9->addWidget(pbnWCSLayersSelectAll, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mWCSUrlLabel = new QLabel(grpWCSCapabilities);
        mWCSUrlLabel->setObjectName(QString::fromUtf8("mWCSUrlLabel"));

        horizontalLayout_9->addWidget(mWCSUrlLabel);

        mWCSUrlLineEdit = new QLineEdit(grpWCSCapabilities);
        mWCSUrlLineEdit->setObjectName(QString::fromUtf8("mWCSUrlLineEdit"));

        horizontalLayout_9->addWidget(mWCSUrlLineEdit);


        gridLayout_9->addLayout(horizontalLayout_9, 3, 0, 1, 2);


        verticalLayout_13->addWidget(grpWCSCapabilities);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_6);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_14->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mProjOpts_05);
        mProjOpts_06 = new QWidget();
        mProjOpts_06->setObjectName(QString::fromUtf8("mProjOpts_06"));
        verticalLayout_15 = new QVBoxLayout(mProjOpts_06);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QScrollArea(mProjOpts_06);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 170, 54));
        verticalLayout_17 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(-1, 0, -1, 0);
        grpPythonMacros = new QGroupBox(scrollAreaWidgetContents_6);
        grpPythonMacros->setObjectName(QString::fromUtf8("grpPythonMacros"));
        grpPythonMacros->setCheckable(true);
        grpPythonMacros->setChecked(false);
        verticalLayout_16 = new QVBoxLayout(grpPythonMacros);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        ptePythonMacros = new QgsCodeEditorPython(grpPythonMacros);
        ptePythonMacros->setObjectName(QString::fromUtf8("ptePythonMacros"));

        verticalLayout_16->addWidget(ptePythonMacros);


        verticalLayout_17->addWidget(grpPythonMacros);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mProjOpts_06);
        mTabRelations = new QWidget();
        mTabRelations->setObjectName(QString::fromUtf8("mTabRelations"));
        gridLayout_16 = new QGridLayout(mTabRelations);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget->addWidget(mTabRelations);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsProjectPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(mButtonBoxFrame);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(pbnSelectionColor);
        label->setBuddy(pbnCanvasColor);
        label_3->setBuddy(cbxAbsolutePath);
        label_2->setBuddy(projectFileName);
        label_4->setBuddy(titleEdit);
        projectFileName->setBuddy(titleEdit);
        labelDP->setBuddy(spinBoxDP);
        label_10->setBuddy(mWMSTitle);
        label_9->setBuddy(mWMSContactPerson);
        label_12->setBuddy(mWMSContactPhone);
        label_15->setBuddy(mWMSAbstract);
        label_11->setBuddy(mWMSContactOrganization);
        label_16->setBuddy(mWMSExtMinX);
        label_17->setBuddy(mWMSExtMinY);
        label_18->setBuddy(mWMSExtMaxX);
        label_19->setBuddy(mWMSExtMaxY);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea_2, mOptionsListWidget);
        QWidget::setTabOrder(mOptionsListWidget, titleEdit);
        QWidget::setTabOrder(titleEdit, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cbxAbsolutePath);
        QWidget::setTabOrder(cbxAbsolutePath, cmbEllipsoid);
        QWidget::setTabOrder(cmbEllipsoid, leSemiMajor);
        QWidget::setTabOrder(leSemiMajor, leSemiMinor);
        QWidget::setTabOrder(leSemiMinor, radMeters);
        QWidget::setTabOrder(radMeters, radFeet);
        QWidget::setTabOrder(radFeet, radNMiles);
        QWidget::setTabOrder(radNMiles, radDegrees);
        QWidget::setTabOrder(radDegrees, radD);
        QWidget::setTabOrder(radD, radDM);
        QWidget::setTabOrder(radDM, radDMS);
        QWidget::setTabOrder(radDMS, radAutomatic);
        QWidget::setTabOrder(radAutomatic, radManual);
        QWidget::setTabOrder(radManual, spinBoxDP);
        QWidget::setTabOrder(spinBoxDP, grpProjectScales);
        QWidget::setTabOrder(grpProjectScales, lstScales);
        QWidget::setTabOrder(lstScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, mWMSFees);
        QWidget::setTabOrder(mWMSFees, scrollArea);
        QWidget::setTabOrder(scrollArea, cbxProjectionEnabled);
        QWidget::setTabOrder(cbxProjectionEnabled, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, twIdentifyLayers);
        QWidget::setTabOrder(twIdentifyLayers, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, cboStyleMarker);
        QWidget::setTabOrder(cboStyleMarker, pbtnStyleMarker);
        QWidget::setTabOrder(pbtnStyleMarker, cboStyleLine);
        QWidget::setTabOrder(cboStyleLine, pbtnStyleLine);
        QWidget::setTabOrder(pbtnStyleLine, cboStyleFill);
        QWidget::setTabOrder(cboStyleFill, pbtnStyleFill);
        QWidget::setTabOrder(pbtnStyleFill, cboStyleColorRamp);
        QWidget::setTabOrder(cboStyleColorRamp, pbtnStyleColorRamp);
        QWidget::setTabOrder(pbtnStyleColorRamp, mTransparencySlider);
        QWidget::setTabOrder(mTransparencySlider, mTransparencySpinBox);
        QWidget::setTabOrder(mTransparencySpinBox, cbxStyleRandomColors);
        QWidget::setTabOrder(cbxStyleRandomColors, pbtnStyleManager);
        QWidget::setTabOrder(pbtnStyleManager, mTreeProjectColors);
        QWidget::setTabOrder(mTreeProjectColors, mButtonAddColor);
        QWidget::setTabOrder(mButtonAddColor, mButtonRemoveColor);
        QWidget::setTabOrder(mButtonRemoveColor, mButtonCopyColors);
        QWidget::setTabOrder(mButtonCopyColors, mButtonPasteColors);
        QWidget::setTabOrder(mButtonPasteColors, mButtonImportColors);
        QWidget::setTabOrder(mButtonImportColors, mButtonExportColors);
        QWidget::setTabOrder(mButtonExportColors, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, buttonBox);
        QWidget::setTabOrder(buttonBox, mWMSAccessConstraints);
        QWidget::setTabOrder(mWMSAccessConstraints, mWMSKeywordList);
        QWidget::setTabOrder(mWMSKeywordList, mWMSComposerGroupBox);
        QWidget::setTabOrder(mWMSComposerGroupBox, mComposerListWidget);
        QWidget::setTabOrder(mComposerListWidget, mAddWMSComposerButton);
        QWidget::setTabOrder(mAddWMSComposerButton, mRemoveWMSComposerButton);
        QWidget::setTabOrder(mRemoveWMSComposerButton, mLayerRestrictionsListWidget);
        QWidget::setTabOrder(mLayerRestrictionsListWidget, mAddLayerRestrictionButton);
        QWidget::setTabOrder(mAddLayerRestrictionButton, mRemoveLayerRestrictionButton);
        QWidget::setTabOrder(mRemoveLayerRestrictionButton, mWMSUrlLineEdit);
        QWidget::setTabOrder(mWMSUrlLineEdit, mMaxHeightLineEdit);
        QWidget::setTabOrder(mMaxHeightLineEdit, mMaxWidthLineEdit);
        QWidget::setTabOrder(mMaxWidthLineEdit, mWMSImageQualitySpinBox);
        QWidget::setTabOrder(mWMSImageQualitySpinBox, grpWMSExt);
        QWidget::setTabOrder(grpWMSExt, mWMSExtMinX);
        QWidget::setTabOrder(mWMSExtMinX, mWMSExtMinY);
        QWidget::setTabOrder(mWMSExtMinY, mWMSExtMaxX);
        QWidget::setTabOrder(mWMSExtMaxX, mWMSExtMaxY);
        QWidget::setTabOrder(mWMSExtMaxY, pbnWMSExtCanvas);
        QWidget::setTabOrder(pbnWMSExtCanvas, grpWMSList);
        QWidget::setTabOrder(grpWMSList, pbnWMSAddSRS);
        QWidget::setTabOrder(pbnWMSAddSRS, mWMSList);
        QWidget::setTabOrder(mWMSList, pbnWMSSetUsedSRS);
        QWidget::setTabOrder(pbnWMSSetUsedSRS, pbnWMSRemoveSRS);
        QWidget::setTabOrder(pbnWMSRemoveSRS, twWFSLayers);
        QWidget::setTabOrder(twWFSLayers, pbnWFSLayersUnselectAll);
        QWidget::setTabOrder(pbnWFSLayersUnselectAll, pbnWFSLayersSelectAll);
        QWidget::setTabOrder(pbnWFSLayersSelectAll, mWFSUrlLineEdit);
        QWidget::setTabOrder(mWFSUrlLineEdit, twWCSLayers);
        QWidget::setTabOrder(twWCSLayers, pbnWCSLayersUnselectAll);
        QWidget::setTabOrder(pbnWCSLayersUnselectAll, pbnWCSLayersSelectAll);
        QWidget::setTabOrder(pbnWCSLayersSelectAll, mWCSUrlLineEdit);
        QWidget::setTabOrder(mWCSUrlLineEdit, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, grpPythonMacros);
        QWidget::setTabOrder(grpPythonMacros, grpOWSServiceCapabilities);
        QWidget::setTabOrder(grpOWSServiceCapabilities, mWMSTitle);
        QWidget::setTabOrder(mWMSTitle, mWMSContactOrganization);
        QWidget::setTabOrder(mWMSContactOrganization, mWMSOnlineResourceLineEdit);
        QWidget::setTabOrder(mWMSOnlineResourceLineEdit, mWMSContactPerson);
        QWidget::setTabOrder(mWMSContactPerson, mWMSContactMail);
        QWidget::setTabOrder(mWMSContactMail, mWMSContactPhone);
        QWidget::setTabOrder(mWMSContactPhone, mWMSAbstract);

        retranslateUi(QgsProjectPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
        QgsProjectPropertiesBase->setWindowTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Properties", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "CRS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "Identify layers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Identifiable layers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsProjectPropertiesBase", "Default styles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Default styles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsProjectPropertiesBase", "OWS server", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "OWS server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsProjectPropertiesBase", "Macros", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Macros", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsProjectPropertiesBase", "Relations", 0, QApplication::UnicodeUTF8));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        titleBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "General settings", 0, QApplication::UnicodeUTF8));
        cbxAbsolutePath->clear();
        cbxAbsolutePath->insertItems(0, QStringList()
         << QApplication::translate("QgsProjectPropertiesBase", "absolute", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsProjectPropertiesBase", "relative", 0, QApplication::UnicodeUTF8)
        );
        textLabel1->setText(QApplication::translate("QgsProjectPropertiesBase", "Selection color", 0, QApplication::UnicodeUTF8));
        pbnSelectionColor->setText(QString());
        label->setText(QApplication::translate("QgsProjectPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
        pbnCanvasColor->setText(QString());
        label_3->setText(QApplication::translate("QgsProjectPropertiesBase", "Save paths", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        titleEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        titleEdit->setText(QApplication::translate("QgsProjectPropertiesBase", "Default project title", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsProjectPropertiesBase", "Project file", 0, QApplication::UnicodeUTF8));
        projectFileName->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", 0, QApplication::UnicodeUTF8));
        btnGrpMeasureEllipsoid->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Measure tool", 0, QApplication::UnicodeUTF8));
        textLabel1_8->setText(QApplication::translate("QgsProjectPropertiesBase", "Ellipsoid\n"
"(for distance calculations)", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("QgsProjectPropertiesBase", "Semi-major", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("QgsProjectPropertiesBase", "Semi-minor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnGrpMapUnits->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Used when CRS transformation is turned off", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnGrpMapUnits->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Canvas units", 0, QApplication::UnicodeUTF8));
        radDegrees->setText(QApplication::translate("QgsProjectPropertiesBase", "Degree", 0, QApplication::UnicodeUTF8));
        radNMiles->setText(QApplication::translate("QgsProjectPropertiesBase", "Nautical miles", 0, QApplication::UnicodeUTF8));
        radFeet->setText(QApplication::translate("QgsProjectPropertiesBase", "Feet", 0, QApplication::UnicodeUTF8));
        radMeters->setText(QApplication::translate("QgsProjectPropertiesBase", "Meters", 0, QApplication::UnicodeUTF8));
        btnGrpDegreeDisplay->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Degree display", 0, QApplication::UnicodeUTF8));
        radD->setText(QApplication::translate("QgsProjectPropertiesBase", "Decimal degrees", 0, QApplication::UnicodeUTF8));
        radDM->setText(QApplication::translate("QgsProjectPropertiesBase", "Degrees, Minutes", 0, QApplication::UnicodeUTF8));
        radDMS->setText(QApplication::translate("QgsProjectPropertiesBase", "Degrees, Minutes, Seconds", 0, QApplication::UnicodeUTF8));
        btnGrpPrecision->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Precision", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxDP->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxDP->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        labelDP->setText(QApplication::translate("QgsProjectPropertiesBase", "decimal places", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radManual->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Sets the number of decimal places to use for the mouse position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        radManual->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "Sets the number of decimal places to use for the mouse position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        radManual->setText(QApplication::translate("QgsProjectPropertiesBase", "Manual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radAutomatic->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Automatically sets the number of decimal places in the mouse position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        radAutomatic->setWhatsThis(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places that are used when displaying the mouse position is automatically set to be enough so that moving the mouse by one pixel gives a change in the position display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        radAutomatic->setText(QApplication::translate("QgsProjectPropertiesBase", "Automatic", 0, QApplication::UnicodeUTF8));
        grpProjectScales->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project scales", 0, QApplication::UnicodeUTF8));
        pbnAddScale->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnRemoveScale->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnImportScales->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnExportScales->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        cbxProjectionEnabled->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Enable 'on the fly' CRS transformation", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project layers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twIdentifyLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twIdentifyLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = twIdentifyLayers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "Identifiable", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Default symbols", 0, QApplication::UnicodeUTF8));
        pbtnStyleMarker->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        lblStyleLine->setText(QApplication::translate("QgsProjectPropertiesBase", "Line", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        pixStyleFill->setText(QString());
        pbtnStyleLine->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pixStyleLine->setText(QString());
        lblStyleColorRamp->setText(QApplication::translate("QgsProjectPropertiesBase", "Color Ramp", 0, QApplication::UnicodeUTF8));
        pixStyleMarker->setText(QString());
        lblStyleMarker->setText(QApplication::translate("QgsProjectPropertiesBase", "Marker", 0, QApplication::UnicodeUTF8));
        pbtnStyleFill->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        lblStyleFill->setText(QApplication::translate("QgsProjectPropertiesBase", "Fill", 0, QApplication::UnicodeUTF8));
        pbtnStyleColorRamp->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
        mTransparencyLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
        mTransparencySpinBox->setSuffix(QApplication::translate("QgsProjectPropertiesBase", " %", 0, QApplication::UnicodeUTF8));
        cbxStyleRandomColors->setText(QApplication::translate("QgsProjectPropertiesBase", "Assign random colors to symbols", 0, QApplication::UnicodeUTF8));
        pbtnStyleManager->setText(QApplication::translate("QgsProjectPropertiesBase", "Style Manager", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project colors", 0, QApplication::UnicodeUTF8));
        mButtonCopyColors->setText(QApplication::translate("QgsProjectPropertiesBase", "Copy colors", 0, QApplication::UnicodeUTF8));
        mButtonAddColor->setText(QApplication::translate("QgsProjectPropertiesBase", "Add color", 0, QApplication::UnicodeUTF8));
        mButtonPasteColors->setText(QApplication::translate("QgsProjectPropertiesBase", "Paste colors", 0, QApplication::UnicodeUTF8));
        mButtonRemoveColor->setText(QApplication::translate("QgsProjectPropertiesBase", "Remove color", 0, QApplication::UnicodeUTF8));
        mButtonImportColors->setText(QApplication::translate("QgsProjectPropertiesBase", "Import", 0, QApplication::UnicodeUTF8));
        mButtonExportColors->setText(QApplication::translate("QgsProjectPropertiesBase", "Export", 0, QApplication::UnicodeUTF8));
        grpOWSServiceCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Service capabilities", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsProjectPropertiesBase", "Title", 0, QApplication::UnicodeUTF8));
        mWMSOnlineResourceLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Online resource", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsProjectPropertiesBase", "Person", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsProjectPropertiesBase", "E-Mail", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsProjectPropertiesBase", "Phone", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("QgsProjectPropertiesBase", "Abstract", 0, QApplication::UnicodeUTF8));
        mWMSKeywordListLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Keyword list", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsProjectPropertiesBase", "Organization", 0, QApplication::UnicodeUTF8));
        mWMSAccessConstraintsLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Access constraints", 0, QApplication::UnicodeUTF8));
        mWMSFeesLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Fees", 0, QApplication::UnicodeUTF8));
        grpWMSCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WMS capabilities", 0, QApplication::UnicodeUTF8));
        mWMSComposerGroupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Exclude composers", 0, QApplication::UnicodeUTF8));
        mAddWMSComposerButton->setText(QString());
        mRemoveWMSComposerButton->setText(QString());
        mLayerRestrictionsGroupBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Exclude layers", 0, QApplication::UnicodeUTF8));
        mAddLayerRestrictionButton->setText(QString());
        mRemoveLayerRestrictionButton->setText(QString());
        grpWMSExt->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Advertised extent", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsProjectPropertiesBase", "Min. X", 0, QApplication::UnicodeUTF8));
        mWMSExtMinX->setText(QString());
        label_17->setText(QApplication::translate("QgsProjectPropertiesBase", "Min. Y", 0, QApplication::UnicodeUTF8));
        mWMSExtMinY->setText(QString());
        label_18->setText(QApplication::translate("QgsProjectPropertiesBase", "Max. X", 0, QApplication::UnicodeUTF8));
        mWMSExtMaxX->setText(QString());
        label_19->setText(QApplication::translate("QgsProjectPropertiesBase", "Max. Y", 0, QApplication::UnicodeUTF8));
        mWMSExtMaxY->setText(QString());
        pbnWMSExtCanvas->setText(QApplication::translate("QgsProjectPropertiesBase", "Use Current Canvas Extent", 0, QApplication::UnicodeUTF8));
        grpWMSList->setTitle(QApplication::translate("QgsProjectPropertiesBase", "CRS restrictions", 0, QApplication::UnicodeUTF8));
        pbnWMSSetUsedSRS->setText(QApplication::translate("QgsProjectPropertiesBase", "Used", 0, QApplication::UnicodeUTF8));
        mWmsUseLayerIDs->setText(QApplication::translate("QgsProjectPropertiesBase", "Use layer ids as names", 0, QApplication::UnicodeUTF8));
        mWMSImageQualityLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Quality for JPEG images ( 10 : smaller image - 100 : best quality )", 0, QApplication::UnicodeUTF8));
        mAddWktGeometryCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Add geometry to feature response", 0, QApplication::UnicodeUTF8));
        mMaxWidthLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Width", 0, QApplication::UnicodeUTF8));
        mMaxHeightLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Height", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("QgsProjectPropertiesBase", "Maximums for GetMap request", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsProjectPropertiesBase", "GetFeatureInfo geometry precision (decimal places)", 0, QApplication::UnicodeUTF8));
        mWMSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", 0, QApplication::UnicodeUTF8));
        grpWFSCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WFS capabilities", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = twWFSLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = twWFSLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsProjectPropertiesBase", "Published", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = twWFSLayers->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsProjectPropertiesBase", "Geometry precision (decimal places)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = twWFSLayers->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("QgsProjectPropertiesBase", "Update", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = twWFSLayers->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("QgsProjectPropertiesBase", "Insert", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = twWFSLayers->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("QgsProjectPropertiesBase", "Delete", 0, QApplication::UnicodeUTF8));
        pbnWFSLayersUnselectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Unselect all", 0, QApplication::UnicodeUTF8));
        pbnWFSLayersSelectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Select all", 0, QApplication::UnicodeUTF8));
        mWFSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", 0, QApplication::UnicodeUTF8));
        grpWCSCapabilities->setTitle(QApplication::translate("QgsProjectPropertiesBase", "WCS capabilities", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = twWCSLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = twWCSLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("QgsProjectPropertiesBase", "Published", 0, QApplication::UnicodeUTF8));
        pbnWCSLayersUnselectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Unselect all", 0, QApplication::UnicodeUTF8));
        pbnWCSLayersSelectAll->setText(QApplication::translate("QgsProjectPropertiesBase", "Select all", 0, QApplication::UnicodeUTF8));
        mWCSUrlLabel->setText(QApplication::translate("QgsProjectPropertiesBase", "Advertised URL", 0, QApplication::UnicodeUTF8));
        grpPythonMacros->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Python macros", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTPROPERTIESBASE_H
