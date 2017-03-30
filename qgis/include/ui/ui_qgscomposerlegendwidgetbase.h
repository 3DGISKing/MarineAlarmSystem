/********************************************************************************
** Form generated from reading UI file 'qgscomposerlegendwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLEGENDWIDGETBASE_H
#define UI_QGSCOMPOSERLEGENDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbuttonv2.h"
#include "qgslayertreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerLegendWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mMainPropertiesColGroupBox;
    QFormLayout *formLayout;
    QLabel *mTitleLabel;
    QLineEdit *mTitleLineEdit;
    QLabel *mMapLabel;
    QComboBox *mMapComboBox;
    QLabel *label;
    QLineEdit *mWrapCharLineEdit;
    QLabel *label_15;
    QComboBox *mTitleAlignCombo;
    QgsCollapsibleGroupBoxBasic *mLegendItemColGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mCheckBoxAutoUpdate;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *mUpdateAllPushButton;
    QgsLayerTreeView *mItemTreeView;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mMoveDownToolButton;
    QToolButton *mMoveUpToolButton;
    QToolButton *mAddGroupToolButton;
    QToolButton *mAddToolButton;
    QToolButton *mRemoveToolButton;
    QToolButton *mEditPushButton;
    QToolButton *mCountToolButton;
    QToolButton *mFilterByMapToolButton;
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBoxBasic *mFontsColGroupBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *mTitleFontButton;
    QPushButton *mLayerFontButton;
    QPushButton *mGroupFontButton;
    QPushButton *mItemFontButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QgsColorButtonV2 *mFontColorButton;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBoxBasic *mColumnsColGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QSpinBox *mColumnCountSpinBox;
    QCheckBox *mEqualColumnWidthCheckBox;
    QCheckBox *mSplitLayerCheckBox;
    QgsCollapsibleGroupBoxBasic *mSymbolsColGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *mSymbolWidthSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *mSymbolHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *mSymbolsColGroupBox_2;
    QFormLayout *formLayout_5;
    QLabel *label_13;
    QDoubleSpinBox *mWmsLegendWidthSpinBox;
    QLabel *label_14;
    QDoubleSpinBox *mWmsLegendHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *mSpacingColGroupBox;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QDoubleSpinBox *mGroupSpaceSpinBox;
    QLabel *label_6;
    QDoubleSpinBox *mLayerSpaceSpinBox;
    QLabel *label_7;
    QDoubleSpinBox *mSymbolSpaceSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *mIconLabelSpaceSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *mBoxSpaceSpinBox;
    QLabel *label_12;
    QDoubleSpinBox *mColumnSpaceSpinBox;
    QLabel *label_10;
    QDoubleSpinBox *mTitleSpaceBottomSpinBox;

    void setupUi(QWidget *QgsComposerLegendWidgetBase)
    {
        if (QgsComposerLegendWidgetBase->objectName().isEmpty())
            QgsComposerLegendWidgetBase->setObjectName(QString::fromUtf8("QgsComposerLegendWidgetBase"));
        QgsComposerLegendWidgetBase->resize(393, 995);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerLegendWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerLegendWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsComposerLegendWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_11 = new QLabel(QgsComposerLegendWidgetBase);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_11);

        scrollArea = new QScrollArea(QgsComposerLegendWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -319, 375, 1291));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mMainPropertiesColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mMainPropertiesColGroupBox->setObjectName(QString::fromUtf8("mMainPropertiesColGroupBox"));
        mMainPropertiesColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mMainPropertiesColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mMainPropertiesColGroupBox->setProperty("collapsed", QVariant(false));
        formLayout = new QFormLayout(mMainPropertiesColGroupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mTitleLabel = new QLabel(mMainPropertiesColGroupBox);
        mTitleLabel->setObjectName(QString::fromUtf8("mTitleLabel"));
        mTitleLabel->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, mTitleLabel);

        mTitleLineEdit = new QLineEdit(mMainPropertiesColGroupBox);
        mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mTitleLineEdit);

        mMapLabel = new QLabel(mMainPropertiesColGroupBox);
        mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));
        mMapLabel->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, mMapLabel);

        mMapComboBox = new QComboBox(mMainPropertiesColGroupBox);
        mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mMapComboBox);

        label = new QLabel(mMainPropertiesColGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        mWrapCharLineEdit = new QLineEdit(mMainPropertiesColGroupBox);
        mWrapCharLineEdit->setObjectName(QString::fromUtf8("mWrapCharLineEdit"));
        mWrapCharLineEdit->setFrame(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, mWrapCharLineEdit);

        label_15 = new QLabel(mMainPropertiesColGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_15);

        mTitleAlignCombo = new QComboBox(mMainPropertiesColGroupBox);
        mTitleAlignCombo->setObjectName(QString::fromUtf8("mTitleAlignCombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mTitleAlignCombo);


        mainLayout->addWidget(mMainPropertiesColGroupBox);

        mLegendItemColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mLegendItemColGroupBox->setObjectName(QString::fromUtf8("mLegendItemColGroupBox"));
        mLegendItemColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mLegendItemColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mLegendItemColGroupBox->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(mLegendItemColGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCheckBoxAutoUpdate = new QCheckBox(mLegendItemColGroupBox);
        mCheckBoxAutoUpdate->setObjectName(QString::fromUtf8("mCheckBoxAutoUpdate"));
        mCheckBoxAutoUpdate->setChecked(true);

        horizontalLayout->addWidget(mCheckBoxAutoUpdate);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mUpdateAllPushButton = new QToolButton(mLegendItemColGroupBox);
        mUpdateAllPushButton->setObjectName(QString::fromUtf8("mUpdateAllPushButton"));

        horizontalLayout->addWidget(mUpdateAllPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        mItemTreeView = new QgsLayerTreeView(mLegendItemColGroupBox);
        mItemTreeView->setObjectName(QString::fromUtf8("mItemTreeView"));
        mItemTreeView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        mItemTreeView->setWordWrap(false);
        mItemTreeView->setHeaderHidden(false);
        mItemTreeView->header()->setVisible(true);

        verticalLayout_2->addWidget(mItemTreeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mMoveDownToolButton = new QToolButton(mLegendItemColGroupBox);
        mMoveDownToolButton->setObjectName(QString::fromUtf8("mMoveDownToolButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMoveDownToolButton->sizePolicy().hasHeightForWidth());
        mMoveDownToolButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownToolButton->setIcon(icon);
        mMoveDownToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mMoveDownToolButton);

        mMoveUpToolButton = new QToolButton(mLegendItemColGroupBox);
        mMoveUpToolButton->setObjectName(QString::fromUtf8("mMoveUpToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpToolButton->setIcon(icon1);
        mMoveUpToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mMoveUpToolButton);

        mAddGroupToolButton = new QToolButton(mLegendItemColGroupBox);
        mAddGroupToolButton->setObjectName(QString::fromUtf8("mAddGroupToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionAddGroup.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddGroupToolButton->setIcon(icon2);

        horizontalLayout_2->addWidget(mAddGroupToolButton);

        mAddToolButton = new QToolButton(mLegendItemColGroupBox);
        mAddToolButton->setObjectName(QString::fromUtf8("mAddToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionSignPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddToolButton->setIcon(icon3);
        mAddToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mAddToolButton);

        mRemoveToolButton = new QToolButton(mLegendItemColGroupBox);
        mRemoveToolButton->setObjectName(QString::fromUtf8("mRemoveToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionSignMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveToolButton->setIcon(icon4);
        mRemoveToolButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mRemoveToolButton);

        mEditPushButton = new QToolButton(mLegendItemColGroupBox);
        mEditPushButton->setObjectName(QString::fromUtf8("mEditPushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        mEditPushButton->setIcon(icon5);
        mEditPushButton->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(mEditPushButton);

        mCountToolButton = new QToolButton(mLegendItemColGroupBox);
        mCountToolButton->setObjectName(QString::fromUtf8("mCountToolButton"));
        mCountToolButton->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionSum.png"), QSize(), QIcon::Normal, QIcon::Off);
        mCountToolButton->setIcon(icon6);
        mCountToolButton->setIconSize(QSize(20, 20));
        mCountToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(mCountToolButton);

        mFilterByMapToolButton = new QToolButton(mLegendItemColGroupBox);
        mFilterByMapToolButton->setObjectName(QString::fromUtf8("mFilterByMapToolButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        mFilterByMapToolButton->setIcon(icon7);
        mFilterByMapToolButton->setIconSize(QSize(20, 20));
        mFilterByMapToolButton->setCheckable(true);

        horizontalLayout_2->addWidget(mFilterByMapToolButton);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        mainLayout->addWidget(mLegendItemColGroupBox);

        mFontsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mFontsColGroupBox->setObjectName(QString::fromUtf8("mFontsColGroupBox"));
        mFontsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mFontsColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mFontsColGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(mFontsColGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mTitleFontButton = new QPushButton(mFontsColGroupBox);
        mTitleFontButton->setObjectName(QString::fromUtf8("mTitleFontButton"));
        sizePolicy2.setHeightForWidth(mTitleFontButton->sizePolicy().hasHeightForWidth());
        mTitleFontButton->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(mTitleFontButton);

        mLayerFontButton = new QPushButton(mFontsColGroupBox);
        mLayerFontButton->setObjectName(QString::fromUtf8("mLayerFontButton"));

        verticalLayout_3->addWidget(mLayerFontButton);

        mGroupFontButton = new QPushButton(mFontsColGroupBox);
        mGroupFontButton->setObjectName(QString::fromUtf8("mGroupFontButton"));

        verticalLayout_3->addWidget(mGroupFontButton);

        mItemFontButton = new QPushButton(mFontsColGroupBox);
        mItemFontButton->setObjectName(QString::fromUtf8("mItemFontButton"));

        verticalLayout_3->addWidget(mItemFontButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_16 = new QLabel(mFontsColGroupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_3->addWidget(label_16);

        mFontColorButton = new QgsColorButtonV2(mFontsColGroupBox);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mFontColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);


        mainLayout->addWidget(mFontsColGroupBox);

        mColumnsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mColumnsColGroupBox->setObjectName(QString::fromUtf8("mColumnsColGroupBox"));
        mColumnsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mColumnsColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mColumnsColGroupBox->setProperty("collapsed", QVariant(true));
        formLayout_2 = new QFormLayout(mColumnsColGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(mColumnsColGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        mColumnCountSpinBox = new QSpinBox(mColumnsColGroupBox);
        mColumnCountSpinBox->setObjectName(QString::fromUtf8("mColumnCountSpinBox"));
        mColumnCountSpinBox->setMinimum(1);
        mColumnCountSpinBox->setMaximum(1000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mColumnCountSpinBox);

        mEqualColumnWidthCheckBox = new QCheckBox(mColumnsColGroupBox);
        mEqualColumnWidthCheckBox->setObjectName(QString::fromUtf8("mEqualColumnWidthCheckBox"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, mEqualColumnWidthCheckBox);

        mSplitLayerCheckBox = new QCheckBox(mColumnsColGroupBox);
        mSplitLayerCheckBox->setObjectName(QString::fromUtf8("mSplitLayerCheckBox"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, mSplitLayerCheckBox);


        mainLayout->addWidget(mColumnsColGroupBox);

        mSymbolsColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSymbolsColGroupBox->setObjectName(QString::fromUtf8("mSymbolsColGroupBox"));
        mSymbolsColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSymbolsColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSymbolsColGroupBox->setProperty("collapsed", QVariant(true));
        formLayout_3 = new QFormLayout(mSymbolsColGroupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(mSymbolsColGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        mSymbolWidthSpinBox = new QDoubleSpinBox(mSymbolsColGroupBox);
        mSymbolWidthSpinBox->setObjectName(QString::fromUtf8("mSymbolWidthSpinBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mSymbolWidthSpinBox);

        label_4 = new QLabel(mSymbolsColGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        mSymbolHeightSpinBox = new QDoubleSpinBox(mSymbolsColGroupBox);
        mSymbolHeightSpinBox->setObjectName(QString::fromUtf8("mSymbolHeightSpinBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mSymbolHeightSpinBox);


        mainLayout->addWidget(mSymbolsColGroupBox);

        mSymbolsColGroupBox_2 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSymbolsColGroupBox_2->setObjectName(QString::fromUtf8("mSymbolsColGroupBox_2"));
        mSymbolsColGroupBox_2->setFocusPolicy(Qt::StrongFocus);
        mSymbolsColGroupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSymbolsColGroupBox_2->setProperty("collapsed", QVariant(true));
        formLayout_5 = new QFormLayout(mSymbolsColGroupBox_2);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(mSymbolsColGroupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setWordWrap(true);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_13);

        mWmsLegendWidthSpinBox = new QDoubleSpinBox(mSymbolsColGroupBox_2);
        mWmsLegendWidthSpinBox->setObjectName(QString::fromUtf8("mWmsLegendWidthSpinBox"));
        mWmsLegendWidthSpinBox->setMaximum(9999);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mWmsLegendWidthSpinBox);

        label_14 = new QLabel(mSymbolsColGroupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_14);

        mWmsLegendHeightSpinBox = new QDoubleSpinBox(mSymbolsColGroupBox_2);
        mWmsLegendHeightSpinBox->setObjectName(QString::fromUtf8("mWmsLegendHeightSpinBox"));
        mWmsLegendHeightSpinBox->setMaximum(9999);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, mWmsLegendHeightSpinBox);


        mainLayout->addWidget(mSymbolsColGroupBox_2);

        mSpacingColGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSpacingColGroupBox->setObjectName(QString::fromUtf8("mSpacingColGroupBox"));
        mSpacingColGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSpacingColGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSpacingColGroupBox->setProperty("collapsed", QVariant(true));
        formLayout_4 = new QFormLayout(mSpacingColGroupBox);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(mSpacingColGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_5);

        mGroupSpaceSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mGroupSpaceSpinBox->setObjectName(QString::fromUtf8("mGroupSpaceSpinBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, mGroupSpaceSpinBox);

        label_6 = new QLabel(mSpacingColGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_6);

        mLayerSpaceSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mLayerSpaceSpinBox->setObjectName(QString::fromUtf8("mLayerSpaceSpinBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, mLayerSpaceSpinBox);

        label_7 = new QLabel(mSpacingColGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_7);

        mSymbolSpaceSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mSymbolSpaceSpinBox->setObjectName(QString::fromUtf8("mSymbolSpaceSpinBox"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, mSymbolSpaceSpinBox);

        label_8 = new QLabel(mSpacingColGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_8);

        mIconLabelSpaceSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mIconLabelSpaceSpinBox->setObjectName(QString::fromUtf8("mIconLabelSpaceSpinBox"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, mIconLabelSpaceSpinBox);

        label_9 = new QLabel(mSpacingColGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_9);

        mBoxSpaceSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mBoxSpaceSpinBox->setObjectName(QString::fromUtf8("mBoxSpaceSpinBox"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, mBoxSpaceSpinBox);

        label_12 = new QLabel(mSpacingColGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_12);

        mColumnSpaceSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mColumnSpaceSpinBox->setObjectName(QString::fromUtf8("mColumnSpaceSpinBox"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, mColumnSpaceSpinBox);

        label_10 = new QLabel(mSpacingColGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        mTitleSpaceBottomSpinBox = new QDoubleSpinBox(mSpacingColGroupBox);
        mTitleSpaceBottomSpinBox->setObjectName(QString::fromUtf8("mTitleSpaceBottomSpinBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, mTitleSpaceBottomSpinBox);


        mainLayout->addWidget(mSpacingColGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mTitleLabel->setBuddy(mTitleLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, mMainPropertiesColGroupBox);
        QWidget::setTabOrder(mMainPropertiesColGroupBox, mTitleLineEdit);
        QWidget::setTabOrder(mTitleLineEdit, mTitleAlignCombo);
        QWidget::setTabOrder(mTitleAlignCombo, mMapComboBox);
        QWidget::setTabOrder(mMapComboBox, mWrapCharLineEdit);
        QWidget::setTabOrder(mWrapCharLineEdit, mLegendItemColGroupBox);
        QWidget::setTabOrder(mLegendItemColGroupBox, mCheckBoxAutoUpdate);
        QWidget::setTabOrder(mCheckBoxAutoUpdate, mUpdateAllPushButton);
        QWidget::setTabOrder(mUpdateAllPushButton, mItemTreeView);
        QWidget::setTabOrder(mItemTreeView, mMoveDownToolButton);
        QWidget::setTabOrder(mMoveDownToolButton, mMoveUpToolButton);
        QWidget::setTabOrder(mMoveUpToolButton, mAddGroupToolButton);
        QWidget::setTabOrder(mAddGroupToolButton, mAddToolButton);
        QWidget::setTabOrder(mAddToolButton, mRemoveToolButton);
        QWidget::setTabOrder(mRemoveToolButton, mEditPushButton);
        QWidget::setTabOrder(mEditPushButton, mCountToolButton);
        QWidget::setTabOrder(mCountToolButton, mFilterByMapToolButton);
        QWidget::setTabOrder(mFilterByMapToolButton, mFontsColGroupBox);
        QWidget::setTabOrder(mFontsColGroupBox, mTitleFontButton);
        QWidget::setTabOrder(mTitleFontButton, mLayerFontButton);
        QWidget::setTabOrder(mLayerFontButton, mGroupFontButton);
        QWidget::setTabOrder(mGroupFontButton, mItemFontButton);
        QWidget::setTabOrder(mItemFontButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mColumnsColGroupBox);
        QWidget::setTabOrder(mColumnsColGroupBox, mColumnCountSpinBox);
        QWidget::setTabOrder(mColumnCountSpinBox, mEqualColumnWidthCheckBox);
        QWidget::setTabOrder(mEqualColumnWidthCheckBox, mSplitLayerCheckBox);
        QWidget::setTabOrder(mSplitLayerCheckBox, mSymbolsColGroupBox);
        QWidget::setTabOrder(mSymbolsColGroupBox, mSymbolWidthSpinBox);
        QWidget::setTabOrder(mSymbolWidthSpinBox, mSymbolHeightSpinBox);
        QWidget::setTabOrder(mSymbolHeightSpinBox, mSymbolsColGroupBox_2);
        QWidget::setTabOrder(mSymbolsColGroupBox_2, mWmsLegendWidthSpinBox);
        QWidget::setTabOrder(mWmsLegendWidthSpinBox, mWmsLegendHeightSpinBox);
        QWidget::setTabOrder(mWmsLegendHeightSpinBox, mSpacingColGroupBox);
        QWidget::setTabOrder(mSpacingColGroupBox, mTitleSpaceBottomSpinBox);
        QWidget::setTabOrder(mTitleSpaceBottomSpinBox, mGroupSpaceSpinBox);
        QWidget::setTabOrder(mGroupSpaceSpinBox, mLayerSpaceSpinBox);
        QWidget::setTabOrder(mLayerSpaceSpinBox, mSymbolSpaceSpinBox);
        QWidget::setTabOrder(mSymbolSpaceSpinBox, mIconLabelSpaceSpinBox);
        QWidget::setTabOrder(mIconLabelSpaceSpinBox, mBoxSpaceSpinBox);
        QWidget::setTabOrder(mBoxSpaceSpinBox, mColumnSpaceSpinBox);

        retranslateUi(QgsComposerLegendWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerLegendWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLegendWidgetBase)
    {
        QgsComposerLegendWidgetBase->setWindowTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Legend Options", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Legend", 0, QApplication::UnicodeUTF8));
        mMainPropertiesColGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        mTitleLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "&Title", 0, QApplication::UnicodeUTF8));
        mMapLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Wrap text on", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Title alignment:", 0, QApplication::UnicodeUTF8));
        mTitleAlignCombo->clear();
        mTitleAlignCombo->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerLegendWidgetBase", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerLegendWidgetBase", "Center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerLegendWidgetBase", "Right", 0, QApplication::UnicodeUTF8)
        );
        mLegendItemColGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Legend items", 0, QApplication::UnicodeUTF8));
        mCheckBoxAutoUpdate->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Auto update", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mUpdateAllPushButton->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Update whole legend. Layers are added/removed according to main application legend. User defined labels will be deleted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mUpdateAllPushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Update all", 0, QApplication::UnicodeUTF8));
        mMoveDownToolButton->setText(QString());
        mMoveUpToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddGroupToolButton->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Add group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddGroupToolButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mAddToolButton->setText(QString());
        mRemoveToolButton->setText(QString());
        mEditPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mCountToolButton->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Show feature count for each class of vector layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCountToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mFilterByMapToolButton->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Filter Legend By Map Content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontsColGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Fonts", 0, QApplication::UnicodeUTF8));
        mTitleFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Title font...", 0, QApplication::UnicodeUTF8));
        mLayerFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Subgroup font...", 0, QApplication::UnicodeUTF8));
        mGroupFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Group font...", 0, QApplication::UnicodeUTF8));
        mItemFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Item font...", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Font color", 0, QApplication::UnicodeUTF8));
        mFontColorButton->setText(QString());
        mColumnsColGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Columns", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Count", 0, QApplication::UnicodeUTF8));
        mColumnCountSpinBox->setPrefix(QString());
        mEqualColumnWidthCheckBox->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Equal column widths", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSplitLayerCheckBox->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Allow to split layer items into multiple columns.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSplitLayerCheckBox->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Split layers", 0, QApplication::UnicodeUTF8));
        mSymbolsColGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol width", 0, QApplication::UnicodeUTF8));
        mSymbolWidthSpinBox->setPrefix(QString());
        mSymbolWidthSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol height", 0, QApplication::UnicodeUTF8));
        mSymbolHeightSpinBox->setPrefix(QString());
        mSymbolHeightSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mSymbolsColGroupBox_2->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "WMS LegendGraphic", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Legend width", 0, QApplication::UnicodeUTF8));
        mWmsLegendWidthSpinBox->setPrefix(QString());
        mWmsLegendWidthSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Legend height", 0, QApplication::UnicodeUTF8));
        mWmsLegendHeightSpinBox->setPrefix(QString());
        mWmsLegendHeightSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mSpacingColGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Spacing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Space above text using group style.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Group Space", 0, QApplication::UnicodeUTF8));
        mGroupSpaceSpinBox->setPrefix(QString());
        mGroupSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Space above text using subgroup style.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Subgroup space", 0, QApplication::UnicodeUTF8));
        mLayerSpaceSpinBox->setPrefix(QString());
        mLayerSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Space above symbol and symbol label.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol space", 0, QApplication::UnicodeUTF8));
        mSymbolSpaceSpinBox->setPrefix(QString());
        mSymbolSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Space between symbol icon and symbol label (symbol label left margin).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Icon label space", 0, QApplication::UnicodeUTF8));
        mIconLabelSpaceSpinBox->setPrefix(QString());
        mIconLabelSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Box space", 0, QApplication::UnicodeUTF8));
        mBoxSpaceSpinBox->setPrefix(QString());
        mBoxSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Column space", 0, QApplication::UnicodeUTF8));
        mColumnSpaceSpinBox->setPrefix(QString());
        mColumnSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Space below title.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Title space", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTitleSpaceBottomSpinBox->setToolTip(QApplication::translate("QgsComposerLegendWidgetBase", "Space below title.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mTitleSpaceBottomSpinBox->setSuffix(QApplication::translate("QgsComposerLegendWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLegendWidgetBase: public Ui_QgsComposerLegendWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERLEGENDWIDGETBASE_H
