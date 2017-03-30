/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayersaveasdialogbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERSAVEASDIALOGBASE_H
#define UI_QGSRASTERLAYERSAVEASDIALOGBASE_H

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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsrasterformatsaveoptionswidget.h"
#include "qgsrasterpyramidsoptionswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerSaveAsDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mModeLabel;
    QRadioButton *mRawModeRadioButton;
    QRadioButton *mRenderedModeRadioButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *mFormatLabel;
    QComboBox *mFormatComboBox;
    QCheckBox *mTileModeCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mSaveAsLabel;
    QLineEdit *mSaveAsLineEdit;
    QPushButton *mBrowseButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *mCrsComboBox;
    QPushButton *mChangeCrsPushButton;
    QScrollArea *mScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QgsExtentGroupBox *mExtentGroupBox;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBox *mResolutionGroupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QRadioButton *mResolutionRadioButton;
    QLineEdit *mXResolutionLineEdit;
    QRadioButton *mSizeRadioButton;
    QLineEdit *mColumnsLineEdit;
    QLabel *mRowsLabel;
    QLineEdit *mYResolutionLineEdit;
    QLineEdit *mRowsLineEdit;
    QPushButton *mOriginalResolutionPushButton;
    QPushButton *mOriginalSizePushButton;
    QLabel *label;
    QgsCollapsibleGroupBox *mTilesGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mMaximumSizeXLabel;
    QLineEdit *mMaximumSizeXLineEdit;
    QLabel *mMaximumSizeYLabel;
    QLineEdit *mMaximumSizeYLineEdit;
    QgsCollapsibleGroupBox *mCreateOptionsGroupBox;
    QGridLayout *gridLayout_5;
    QgsRasterFormatSaveOptionsWidget *mCreateOptionsWidget;
    QgsCollapsibleGroupBox *mPyramidsGroupBox;
    QGridLayout *gridLayout_3;
    QgsRasterPyramidsOptionsWidget *mPyramidsOptionsWidget;
    QFrame *line;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mPyramidResolutionsLabel;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *mPyramidResolutionsLineEdit;
    QCheckBox *mPyramidsUseExistingCheckBox;
    QgsCollapsibleGroupBox *mNoDataGroupBox;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *mNoDataTableWidget;
    QGridLayout *gridLayout;
    QToolButton *mAddNoDataManuallyToolButton;
    QToolButton *mLoadTransparentNoDataToolButton;
    QToolButton *mRemoveSelectedNoDataToolButton;
    QToolButton *mRemoveAllNoDataToolButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterLayerSaveAsDialogBase)
    {
        if (QgsRasterLayerSaveAsDialogBase->objectName().isEmpty())
            QgsRasterLayerSaveAsDialogBase->setObjectName(QString::fromUtf8("QgsRasterLayerSaveAsDialogBase"));
        QgsRasterLayerSaveAsDialogBase->resize(575, 580);
        verticalLayout = new QVBoxLayout(QgsRasterLayerSaveAsDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mModeLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mModeLabel->setObjectName(QString::fromUtf8("mModeLabel"));

        horizontalLayout_6->addWidget(mModeLabel);

        mRawModeRadioButton = new QRadioButton(QgsRasterLayerSaveAsDialogBase);
        mRawModeRadioButton->setObjectName(QString::fromUtf8("mRawModeRadioButton"));
        mRawModeRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(mRawModeRadioButton);

        mRenderedModeRadioButton = new QRadioButton(QgsRasterLayerSaveAsDialogBase);
        mRenderedModeRadioButton->setObjectName(QString::fromUtf8("mRenderedModeRadioButton"));
        mRenderedModeRadioButton->setChecked(false);

        horizontalLayout_6->addWidget(mRenderedModeRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFormatLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mFormatLabel->setObjectName(QString::fromUtf8("mFormatLabel"));

        horizontalLayout->addWidget(mFormatLabel);

        mFormatComboBox = new QComboBox(QgsRasterLayerSaveAsDialogBase);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFormatComboBox->sizePolicy().hasHeightForWidth());
        mFormatComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFormatComboBox);

        mTileModeCheckBox = new QCheckBox(QgsRasterLayerSaveAsDialogBase);
        mTileModeCheckBox->setObjectName(QString::fromUtf8("mTileModeCheckBox"));

        horizontalLayout->addWidget(mTileModeCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSaveAsLabel = new QLabel(QgsRasterLayerSaveAsDialogBase);
        mSaveAsLabel->setObjectName(QString::fromUtf8("mSaveAsLabel"));

        horizontalLayout_3->addWidget(mSaveAsLabel);

        mSaveAsLineEdit = new QLineEdit(QgsRasterLayerSaveAsDialogBase);
        mSaveAsLineEdit->setObjectName(QString::fromUtf8("mSaveAsLineEdit"));
        mSaveAsLineEdit->setEnabled(true);

        horizontalLayout_3->addWidget(mSaveAsLineEdit);

        mBrowseButton = new QPushButton(QgsRasterLayerSaveAsDialogBase);
        mBrowseButton->setObjectName(QString::fromUtf8("mBrowseButton"));
        mBrowseButton->setEnabled(true);

        horizontalLayout_3->addWidget(mBrowseButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(QgsRasterLayerSaveAsDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_2);

        mCrsComboBox = new QComboBox(QgsRasterLayerSaveAsDialogBase);
        mCrsComboBox->setObjectName(QString::fromUtf8("mCrsComboBox"));
        sizePolicy.setHeightForWidth(mCrsComboBox->sizePolicy().hasHeightForWidth());
        mCrsComboBox->setSizePolicy(sizePolicy);
        mCrsComboBox->setMinimumSize(QSize(250, 0));

        horizontalLayout_4->addWidget(mCrsComboBox);

        mChangeCrsPushButton = new QPushButton(QgsRasterLayerSaveAsDialogBase);
        mChangeCrsPushButton->setObjectName(QString::fromUtf8("mChangeCrsPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mChangeCrsPushButton->sizePolicy().hasHeightForWidth());
        mChangeCrsPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(mChangeCrsPushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        mScrollArea = new QScrollArea(QgsRasterLayerSaveAsDialogBase);
        mScrollArea->setObjectName(QString::fromUtf8("mScrollArea"));
        mScrollArea->setFrameShape(QFrame::NoFrame);
        mScrollArea->setFrameShadow(QFrame::Sunken);
        mScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 550, 618));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(18);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 6, 0);
        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mExtentGroupBox->sizePolicy().hasHeightForWidth());
        mExtentGroupBox->setSizePolicy(sizePolicy3);
        mExtentGroupBox->setAutoFillBackground(false);
        mExtentGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mExtentGroupBox->setCheckable(false);
        mExtentGroupBox->setProperty("collapsed", QVariant(false));
        mExtentGroupBox->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_2 = new QVBoxLayout(mExtentGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout_5->addWidget(mExtentGroupBox);

        mResolutionGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mResolutionGroupBox->setObjectName(QString::fromUtf8("mResolutionGroupBox"));
        sizePolicy3.setHeightForWidth(mResolutionGroupBox->sizePolicy().hasHeightForWidth());
        mResolutionGroupBox->setSizePolicy(sizePolicy3);
        mResolutionGroupBox->setFlat(false);
        mResolutionGroupBox->setCheckable(false);
        mResolutionGroupBox->setProperty("collapsed", QVariant(false));
        mResolutionGroupBox->setProperty("saveCollapsedState", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mResolutionGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mResolutionRadioButton = new QRadioButton(mResolutionGroupBox);
        mResolutionRadioButton->setObjectName(QString::fromUtf8("mResolutionRadioButton"));
        mResolutionRadioButton->setChecked(true);

        gridLayout_2->addWidget(mResolutionRadioButton, 0, 0, 1, 1);

        mXResolutionLineEdit = new QLineEdit(mResolutionGroupBox);
        mXResolutionLineEdit->setObjectName(QString::fromUtf8("mXResolutionLineEdit"));

        gridLayout_2->addWidget(mXResolutionLineEdit, 0, 1, 1, 1);

        mSizeRadioButton = new QRadioButton(mResolutionGroupBox);
        mSizeRadioButton->setObjectName(QString::fromUtf8("mSizeRadioButton"));

        gridLayout_2->addWidget(mSizeRadioButton, 1, 0, 1, 1);

        mColumnsLineEdit = new QLineEdit(mResolutionGroupBox);
        mColumnsLineEdit->setObjectName(QString::fromUtf8("mColumnsLineEdit"));

        gridLayout_2->addWidget(mColumnsLineEdit, 1, 1, 1, 1);

        mRowsLabel = new QLabel(mResolutionGroupBox);
        mRowsLabel->setObjectName(QString::fromUtf8("mRowsLabel"));

        gridLayout_2->addWidget(mRowsLabel, 1, 2, 1, 1);

        mYResolutionLineEdit = new QLineEdit(mResolutionGroupBox);
        mYResolutionLineEdit->setObjectName(QString::fromUtf8("mYResolutionLineEdit"));

        gridLayout_2->addWidget(mYResolutionLineEdit, 0, 3, 1, 1);

        mRowsLineEdit = new QLineEdit(mResolutionGroupBox);
        mRowsLineEdit->setObjectName(QString::fromUtf8("mRowsLineEdit"));

        gridLayout_2->addWidget(mRowsLineEdit, 1, 3, 1, 1);

        mOriginalResolutionPushButton = new QPushButton(mResolutionGroupBox);
        mOriginalResolutionPushButton->setObjectName(QString::fromUtf8("mOriginalResolutionPushButton"));

        gridLayout_2->addWidget(mOriginalResolutionPushButton, 0, 4, 1, 1);

        mOriginalSizePushButton = new QPushButton(mResolutionGroupBox);
        mOriginalSizePushButton->setObjectName(QString::fromUtf8("mOriginalSizePushButton"));

        gridLayout_2->addWidget(mOriginalSizePushButton, 1, 4, 1, 1);

        label = new QLabel(mResolutionGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_5->addWidget(mResolutionGroupBox);

        mTilesGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mTilesGroupBox->setObjectName(QString::fromUtf8("mTilesGroupBox"));
        sizePolicy3.setHeightForWidth(mTilesGroupBox->sizePolicy().hasHeightForWidth());
        mTilesGroupBox->setSizePolicy(sizePolicy3);
        mTilesGroupBox->setCheckable(false);
        mTilesGroupBox->setChecked(false);
        mTilesGroupBox->setProperty("collapsed", QVariant(false));
        mTilesGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout_5 = new QHBoxLayout(mTilesGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mMaximumSizeXLabel = new QLabel(mTilesGroupBox);
        mMaximumSizeXLabel->setObjectName(QString::fromUtf8("mMaximumSizeXLabel"));

        horizontalLayout_5->addWidget(mMaximumSizeXLabel);

        mMaximumSizeXLineEdit = new QLineEdit(mTilesGroupBox);
        mMaximumSizeXLineEdit->setObjectName(QString::fromUtf8("mMaximumSizeXLineEdit"));

        horizontalLayout_5->addWidget(mMaximumSizeXLineEdit);

        mMaximumSizeYLabel = new QLabel(mTilesGroupBox);
        mMaximumSizeYLabel->setObjectName(QString::fromUtf8("mMaximumSizeYLabel"));

        horizontalLayout_5->addWidget(mMaximumSizeYLabel);

        mMaximumSizeYLineEdit = new QLineEdit(mTilesGroupBox);
        mMaximumSizeYLineEdit->setObjectName(QString::fromUtf8("mMaximumSizeYLineEdit"));

        horizontalLayout_5->addWidget(mMaximumSizeYLineEdit);


        verticalLayout_5->addWidget(mTilesGroupBox);

        mCreateOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mCreateOptionsGroupBox->setObjectName(QString::fromUtf8("mCreateOptionsGroupBox"));
        sizePolicy3.setHeightForWidth(mCreateOptionsGroupBox->sizePolicy().hasHeightForWidth());
        mCreateOptionsGroupBox->setSizePolicy(sizePolicy3);
        mCreateOptionsGroupBox->setCheckable(true);
        mCreateOptionsGroupBox->setChecked(false);
        mCreateOptionsGroupBox->setProperty("collapsed", QVariant(false));
        mCreateOptionsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_5 = new QGridLayout(mCreateOptionsGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mCreateOptionsWidget = new QgsRasterFormatSaveOptionsWidget(mCreateOptionsGroupBox);
        mCreateOptionsWidget->setObjectName(QString::fromUtf8("mCreateOptionsWidget"));

        gridLayout_5->addWidget(mCreateOptionsWidget, 0, 0, 1, 1);


        verticalLayout_5->addWidget(mCreateOptionsGroupBox);

        mPyramidsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mPyramidsGroupBox->setObjectName(QString::fromUtf8("mPyramidsGroupBox"));
        sizePolicy3.setHeightForWidth(mPyramidsGroupBox->sizePolicy().hasHeightForWidth());
        mPyramidsGroupBox->setSizePolicy(sizePolicy3);
        mPyramidsGroupBox->setCheckable(true);
        mPyramidsGroupBox->setChecked(false);
        mPyramidsGroupBox->setProperty("collapsed", QVariant(false));
        mPyramidsGroupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout_3 = new QGridLayout(mPyramidsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mPyramidsOptionsWidget = new QgsRasterPyramidsOptionsWidget(mPyramidsGroupBox);
        mPyramidsOptionsWidget->setObjectName(QString::fromUtf8("mPyramidsOptionsWidget"));

        gridLayout_3->addWidget(mPyramidsOptionsWidget, 3, 0, 1, 1);

        line = new QFrame(mPyramidsGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mPyramidResolutionsLabel = new QLabel(mPyramidsGroupBox);
        mPyramidResolutionsLabel->setObjectName(QString::fromUtf8("mPyramidResolutionsLabel"));

        horizontalLayout_9->addWidget(mPyramidResolutionsLabel);

        horizontalSpacer_5 = new QSpacerItem(10, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        mPyramidResolutionsLineEdit = new QLineEdit(mPyramidsGroupBox);
        mPyramidResolutionsLineEdit->setObjectName(QString::fromUtf8("mPyramidResolutionsLineEdit"));
        mPyramidResolutionsLineEdit->setAutoFillBackground(false);
        mPyramidResolutionsLineEdit->setFrame(false);
        mPyramidResolutionsLineEdit->setReadOnly(true);

        horizontalLayout_9->addWidget(mPyramidResolutionsLineEdit);


        gridLayout_3->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        mPyramidsUseExistingCheckBox = new QCheckBox(mPyramidsGroupBox);
        mPyramidsUseExistingCheckBox->setObjectName(QString::fromUtf8("mPyramidsUseExistingCheckBox"));

        gridLayout_3->addWidget(mPyramidsUseExistingCheckBox, 0, 0, 1, 1);


        verticalLayout_5->addWidget(mPyramidsGroupBox);

        mNoDataGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mNoDataGroupBox->setObjectName(QString::fromUtf8("mNoDataGroupBox"));
        sizePolicy3.setHeightForWidth(mNoDataGroupBox->sizePolicy().hasHeightForWidth());
        mNoDataGroupBox->setSizePolicy(sizePolicy3);
        mNoDataGroupBox->setCheckable(true);
        mNoDataGroupBox->setChecked(false);
        mNoDataGroupBox->setProperty("collapsed", QVariant(false));
        mNoDataGroupBox->setProperty("saveCollapsedState", QVariant(true));
        horizontalLayout_7 = new QHBoxLayout(mNoDataGroupBox);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mNoDataTableWidget = new QTableWidget(mNoDataGroupBox);
        mNoDataTableWidget->setObjectName(QString::fromUtf8("mNoDataTableWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mNoDataTableWidget->sizePolicy().hasHeightForWidth());
        mNoDataTableWidget->setSizePolicy(sizePolicy4);
        mNoDataTableWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout_7->addWidget(mNoDataTableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAddNoDataManuallyToolButton = new QToolButton(mNoDataGroupBox);
        mAddNoDataManuallyToolButton->setObjectName(QString::fromUtf8("mAddNoDataManuallyToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/themes/default/mActionNewAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddNoDataManuallyToolButton->setIcon(icon);

        gridLayout->addWidget(mAddNoDataManuallyToolButton, 1, 0, 1, 1);

        mLoadTransparentNoDataToolButton = new QToolButton(mNoDataGroupBox);
        mLoadTransparentNoDataToolButton->setObjectName(QString::fromUtf8("mLoadTransparentNoDataToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/themes/default/mActionCopySelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadTransparentNoDataToolButton->setIcon(icon1);

        gridLayout->addWidget(mLoadTransparentNoDataToolButton, 2, 0, 1, 1);

        mRemoveSelectedNoDataToolButton = new QToolButton(mNoDataGroupBox);
        mRemoveSelectedNoDataToolButton->setObjectName(QString::fromUtf8("mRemoveSelectedNoDataToolButton"));
        mRemoveSelectedNoDataToolButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../images/themes/default/mActionDeleteAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveSelectedNoDataToolButton->setIcon(icon2);

        gridLayout->addWidget(mRemoveSelectedNoDataToolButton, 1, 1, 1, 1);

        mRemoveAllNoDataToolButton = new QToolButton(mNoDataGroupBox);
        mRemoveAllNoDataToolButton->setObjectName(QString::fromUtf8("mRemoveAllNoDataToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../images/themes/default/mActionRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAllNoDataToolButton->setIcon(icon3);

        gridLayout->addWidget(mRemoveAllNoDataToolButton, 2, 1, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);


        verticalLayout_5->addWidget(mNoDataGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        mScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(mScrollArea);

        mButtonBox = new QDialogButtonBox(QgsRasterLayerSaveAsDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);

#ifndef QT_NO_SHORTCUT
        mFormatLabel->setBuddy(mFormatComboBox);
        mSaveAsLabel->setBuddy(mSaveAsLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsRasterLayerSaveAsDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterLayerSaveAsDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterLayerSaveAsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerSaveAsDialogBase)
    {
        QgsRasterLayerSaveAsDialogBase->setWindowTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Save raster layer as...", 0, QApplication::UnicodeUTF8));
        mModeLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Output mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRawModeRadioButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Write out raw raster layer data. Optionally user defined no data values may be applied.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRawModeRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Raw data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRenderedModeRadioButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Write out 3 bands RGB image rendered using current layer style.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRenderedModeRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Rendered image", 0, QApplication::UnicodeUTF8));
        mFormatLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Format", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTileModeCheckBox->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create GDAL Virtual Format composed of multiple \n"
"datasets with maximum width and height specified below.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mTileModeCheckBox->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create VRT", 0, QApplication::UnicodeUTF8));
        mSaveAsLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Save as", 0, QApplication::UnicodeUTF8));
        mSaveAsLineEdit->setText(QString());
        mBrowseButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Browse...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "CRS", 0, QApplication::UnicodeUTF8));
        mChangeCrsPushButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Change...", 0, QApplication::UnicodeUTF8));
        mExtentGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Extent", 0, QApplication::UnicodeUTF8));
        mResolutionGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Resolution", 0, QApplication::UnicodeUTF8));
        mResolutionRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Horizontal", 0, QApplication::UnicodeUTF8));
        mSizeRadioButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Columns", 0, QApplication::UnicodeUTF8));
        mRowsLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Rows", 0, QApplication::UnicodeUTF8));
        mOriginalResolutionPushButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer resolution", 0, QApplication::UnicodeUTF8));
        mOriginalSizePushButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Layer size", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Vertical", 0, QApplication::UnicodeUTF8));
        mTilesGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "VRT Tiles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mMaximumSizeXLabel->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of columns in one tile.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mMaximumSizeXLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Max columns", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mMaximumSizeXLineEdit->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of columns in one tile.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mMaximumSizeYLabel->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of rows in one tile.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mMaximumSizeYLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Max rows", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mMaximumSizeYLineEdit->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Maximum number of rows in one tile.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCreateOptionsGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Create Options", 0, QApplication::UnicodeUTF8));
        mPyramidsGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Pyramids", 0, QApplication::UnicodeUTF8));
        mPyramidResolutionsLabel->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Resolutions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPyramidResolutionsLineEdit->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Pyramid resolutions corresponding to levels given", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mPyramidResolutionsLineEdit->setText(QString());
        mPyramidsUseExistingCheckBox->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Use existing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mNoDataGroupBox->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Additional no data values. The specified values will be set to no data in output raster.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mNoDataGroupBox->setTitle(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "No data values", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddNoDataManuallyToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Add values manually", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddNoDataManuallyToolButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLoadTransparentNoDataToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Load user defined fully transparent (100%) values ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLoadTransparentNoDataToolButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRemoveSelectedNoDataToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Remove selected row", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveSelectedNoDataToolButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRemoveAllNoDataToolButton->setToolTip(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "Clear all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveAllNoDataToolButton->setText(QApplication::translate("QgsRasterLayerSaveAsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerSaveAsDialogBase: public Ui_QgsRasterLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERSAVEASDIALOGBASE_H
