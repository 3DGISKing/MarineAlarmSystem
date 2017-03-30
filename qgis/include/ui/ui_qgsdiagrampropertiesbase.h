/********************************************************************************
** Form generated from reading UI file 'qgsdiagrampropertiesbase.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDIAGRAMPROPERTIESBASE_H
#define UI_QGSDIAGRAMPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDiagramPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *mDisplayDiagramsGroupBox;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *mDiagramPropertiesScrollArea;
    QWidget *mScrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;
    QHBoxLayout *diagramTypeAndPriorityLayout;
    QLabel *mTypeLabel;
    QComboBox *mDiagramTypeComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *mPriorityLabel;
    QLabel *mPriorityLowLabel;
    QSlider *mPrioritySlider;
    QLabel *mPriorityHighLabel;
    QHBoxLayout *appearanceLayout;
    QTabWidget *mDiagramPropertiesTabWidget;
    QWidget *mDiagramPropertiesTabWidgetPage1;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QgsColorButtonV2 *mDiagramPenColorButton;
    QLabel *mBackgroundColorLabel;
    QLabel *mPenColorLabel;
    QLabel *mPenWidthLabel;
    QPushButton *mDiagramFontButton;
    QLabel *mBarWidthLabel;
    QLabel *mTransparencyLabel;
    QSlider *mTransparencySlider;
    QDoubleSpinBox *mBarWidthSpinBox;
    QDoubleSpinBox *mPenWidthSpinBox;
    QgsColorButtonV2 *mBackgroundColorButton;
    QLabel *mAngleOffsetLabel;
    QComboBox *mAngleOffsetComboBox;
    QGroupBox *mVisibilityGroupBox;
    QGridLayout *gridLayout_18;
    QFrame *mScaleDependentVisibilityOptionsFrame;
    QGridLayout *gridLayout_3;
    QLabel *mMinimumDiagramScaleLabel;
    QLabel *mMaximumDiagramScaleLabel;
    QLineEdit *mMinimumDiagramScaleLineEdit;
    QLineEdit *mMaximumDiagramScaleLineEdit;
    QSpacerItem *horizontalSpacer_6;
    QWidget *mDiagramPropertiesTabWidgetPage2;
    QGridLayout *gridLayout_7;
    QCheckBox *mFixedSizeCheckBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *mDiagramUnitsLabel;
    QComboBox *mDiagramUnitComboBox;
    QDoubleSpinBox *mDiagramSizeSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *mLinearScaleFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *mLinearlyScalingLabel;
    QHBoxLayout *mLinearlyScalingLayout;
    QWidget *mAttributeBasedScalingOptions;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSizeAttributeLabel;
    QComboBox *mSizeAttributeComboBox;
    QPushButton *mSizeAttributeExpression;
    QPushButton *mFindMaximumValueButton;
    QLineEdit *mValueLineEdit;
    QLabel *mSizeLabel;
    QSpinBox *mSizeSpinBox;
    QLabel *mScaleDependencyLabel;
    QComboBox *mScaleDependencyComboBox;
    QGroupBox *mIncreaseSmallDiagramsGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mIncreaseMinimumSizeLabel;
    QDoubleSpinBox *mIncreaseMinimumSizeSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QWidget *mDiagramPropertiesTabWidgetPage3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *mPlacementLabel;
    QComboBox *mPlacementComboBox;
    QLabel *mLineOptionsLabel;
    QComboBox *mLineOptionsComboBox;
    QLabel *mDiagramDistanceLabel;
    QDoubleSpinBox *mDiagramDistanceSpinBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *mDataDefinedPositionGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *mXPosColLabel;
    QComboBox *mDataDefinedXComboBox;
    QLabel *mYPosColLabel;
    QComboBox *mDataDefinedYComboBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mEngineSettingsButton;
    QWidget *mDiagramPropertiesTabOptions;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabelPlacementLabel;
    QComboBox *mLabelPlacementComboBox;
    QFrame *mOrientationFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QRadioButton *mOrientationUpButton;
    QRadioButton *mOrientationDownButton;
    QRadioButton *mOrientationRightButton;
    QRadioButton *mOrientationLeftButton;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *mAttributesGroupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *availAttributesLayout;
    QLabel *label;
    QTreeWidget *mAttributesTreeWidget;
    QVBoxLayout *attributeButtonLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *mAddAttributeExpression;
    QPushButton *mAddCategoryPushButton;
    QPushButton *mRemoveCategoryPushButton;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *assignedAttributesLayout;
    QLabel *Assigened;
    QTreeWidget *mDiagramAttributesTreeWidget;
    QButtonGroup *mOrientationButtonGroup;

    void setupUi(QWidget *QgsDiagramPropertiesBase)
    {
        if (QgsDiagramPropertiesBase->objectName().isEmpty())
            QgsDiagramPropertiesBase->setObjectName(QString::fromUtf8("QgsDiagramPropertiesBase"));
        QgsDiagramPropertiesBase->resize(782, 663);
        verticalLayout = new QVBoxLayout(QgsDiagramPropertiesBase);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mDisplayDiagramsGroupBox = new QGroupBox(QgsDiagramPropertiesBase);
        mDisplayDiagramsGroupBox->setObjectName(QString::fromUtf8("mDisplayDiagramsGroupBox"));
        mDisplayDiagramsGroupBox->setCheckable(true);
        verticalLayout_8 = new QVBoxLayout(mDisplayDiagramsGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        mDiagramPropertiesScrollArea = new QScrollArea(mDisplayDiagramsGroupBox);
        mDiagramPropertiesScrollArea->setObjectName(QString::fromUtf8("mDiagramPropertiesScrollArea"));
        mDiagramPropertiesScrollArea->setFrameShape(QFrame::NoFrame);
        mDiagramPropertiesScrollArea->setFrameShadow(QFrame::Plain);
        mDiagramPropertiesScrollArea->setWidgetResizable(true);
        mScrollAreaWidgetContents = new QWidget();
        mScrollAreaWidgetContents->setObjectName(QString::fromUtf8("mScrollAreaWidgetContents"));
        mScrollAreaWidgetContents->setGeometry(QRect(0, 0, 756, 627));
        scrollAreaLayout = new QVBoxLayout(mScrollAreaWidgetContents);
        scrollAreaLayout->setObjectName(QString::fromUtf8("scrollAreaLayout"));
        diagramTypeAndPriorityLayout = new QHBoxLayout();
        diagramTypeAndPriorityLayout->setObjectName(QString::fromUtf8("diagramTypeAndPriorityLayout"));
        mTypeLabel = new QLabel(mScrollAreaWidgetContents);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));

        diagramTypeAndPriorityLayout->addWidget(mTypeLabel);

        mDiagramTypeComboBox = new QComboBox(mScrollAreaWidgetContents);
        mDiagramTypeComboBox->setObjectName(QString::fromUtf8("mDiagramTypeComboBox"));

        diagramTypeAndPriorityLayout->addWidget(mDiagramTypeComboBox);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        diagramTypeAndPriorityLayout->addItem(horizontalSpacer);

        mPriorityLabel = new QLabel(mScrollAreaWidgetContents);
        mPriorityLabel->setObjectName(QString::fromUtf8("mPriorityLabel"));

        diagramTypeAndPriorityLayout->addWidget(mPriorityLabel);

        mPriorityLowLabel = new QLabel(mScrollAreaWidgetContents);
        mPriorityLowLabel->setObjectName(QString::fromUtf8("mPriorityLowLabel"));

        diagramTypeAndPriorityLayout->addWidget(mPriorityLowLabel);

        mPrioritySlider = new QSlider(mScrollAreaWidgetContents);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setInvertedAppearance(false);
        mPrioritySlider->setInvertedControls(false);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        diagramTypeAndPriorityLayout->addWidget(mPrioritySlider);

        mPriorityHighLabel = new QLabel(mScrollAreaWidgetContents);
        mPriorityHighLabel->setObjectName(QString::fromUtf8("mPriorityHighLabel"));

        diagramTypeAndPriorityLayout->addWidget(mPriorityHighLabel);


        scrollAreaLayout->addLayout(diagramTypeAndPriorityLayout);

        appearanceLayout = new QHBoxLayout();
        appearanceLayout->setObjectName(QString::fromUtf8("appearanceLayout"));

        scrollAreaLayout->addLayout(appearanceLayout);

        mDiagramPropertiesTabWidget = new QTabWidget(mScrollAreaWidgetContents);
        mDiagramPropertiesTabWidget->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidget"));
        mDiagramPropertiesTabWidgetPage1 = new QWidget();
        mDiagramPropertiesTabWidgetPage1->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidgetPage1"));
        gridLayout_8 = new QGridLayout(mDiagramPropertiesTabWidgetPage1);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDiagramPenColorButton = new QgsColorButtonV2(mDiagramPropertiesTabWidgetPage1);
        mDiagramPenColorButton->setObjectName(QString::fromUtf8("mDiagramPenColorButton"));
        mDiagramPenColorButton->setMinimumSize(QSize(120, 0));
        mDiagramPenColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mDiagramPenColorButton, 4, 2, 1, 1);

        mBackgroundColorLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        gridLayout->addWidget(mBackgroundColorLabel, 3, 1, 1, 1);

        mPenColorLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mPenColorLabel->setObjectName(QString::fromUtf8("mPenColorLabel"));

        gridLayout->addWidget(mPenColorLabel, 4, 1, 1, 1);

        mPenWidthLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mPenWidthLabel->setObjectName(QString::fromUtf8("mPenWidthLabel"));

        gridLayout->addWidget(mPenWidthLabel, 5, 1, 1, 1);

        mDiagramFontButton = new QPushButton(mDiagramPropertiesTabWidgetPage1);
        mDiagramFontButton->setObjectName(QString::fromUtf8("mDiagramFontButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDiagramFontButton->sizePolicy().hasHeightForWidth());
        mDiagramFontButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mDiagramFontButton, 7, 1, 1, 1);

        mBarWidthLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mBarWidthLabel->setObjectName(QString::fromUtf8("mBarWidthLabel"));

        gridLayout->addWidget(mBarWidthLabel, 1, 1, 1, 1);

        mTransparencyLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mTransparencyLabel->setObjectName(QString::fromUtf8("mTransparencyLabel"));
        mTransparencyLabel->setMinimumSize(QSize(130, 0));

        gridLayout->addWidget(mTransparencyLabel, 2, 1, 1, 1);

        mTransparencySlider = new QSlider(mDiagramPropertiesTabWidgetPage1);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        mTransparencySlider->setMinimumSize(QSize(300, 0));
        mTransparencySlider->setMaximum(255);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(mTransparencySlider, 2, 2, 1, 2);

        mBarWidthSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage1);
        mBarWidthSpinBox->setObjectName(QString::fromUtf8("mBarWidthSpinBox"));
        mBarWidthSpinBox->setMinimum(0.01);
        mBarWidthSpinBox->setValue(5);

        gridLayout->addWidget(mBarWidthSpinBox, 1, 2, 1, 1);

        mPenWidthSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage1);
        mPenWidthSpinBox->setObjectName(QString::fromUtf8("mPenWidthSpinBox"));
        mPenWidthSpinBox->setDecimals(5);
        mPenWidthSpinBox->setMaximum(100000);

        gridLayout->addWidget(mPenWidthSpinBox, 5, 2, 1, 1);

        mBackgroundColorButton = new QgsColorButtonV2(mDiagramPropertiesTabWidgetPage1);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mBackgroundColorButton, 3, 2, 1, 1);

        mAngleOffsetLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mAngleOffsetLabel->setObjectName(QString::fromUtf8("mAngleOffsetLabel"));

        gridLayout->addWidget(mAngleOffsetLabel, 6, 1, 1, 1);

        mAngleOffsetComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage1);
        mAngleOffsetComboBox->setObjectName(QString::fromUtf8("mAngleOffsetComboBox"));

        gridLayout->addWidget(mAngleOffsetComboBox, 6, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 2, 1);

        mVisibilityGroupBox = new QGroupBox(mDiagramPropertiesTabWidgetPage1);
        mVisibilityGroupBox->setObjectName(QString::fromUtf8("mVisibilityGroupBox"));
        mVisibilityGroupBox->setCheckable(true);
        gridLayout_18 = new QGridLayout(mVisibilityGroupBox);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        mScaleDependentVisibilityOptionsFrame = new QFrame(mVisibilityGroupBox);
        mScaleDependentVisibilityOptionsFrame->setObjectName(QString::fromUtf8("mScaleDependentVisibilityOptionsFrame"));
        mScaleDependentVisibilityOptionsFrame->setFrameShape(QFrame::NoFrame);
        mScaleDependentVisibilityOptionsFrame->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(mScaleDependentVisibilityOptionsFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mMinimumDiagramScaleLabel = new QLabel(mScaleDependentVisibilityOptionsFrame);
        mMinimumDiagramScaleLabel->setObjectName(QString::fromUtf8("mMinimumDiagramScaleLabel"));

        gridLayout_3->addWidget(mMinimumDiagramScaleLabel, 0, 0, 1, 1);

        mMaximumDiagramScaleLabel = new QLabel(mScaleDependentVisibilityOptionsFrame);
        mMaximumDiagramScaleLabel->setObjectName(QString::fromUtf8("mMaximumDiagramScaleLabel"));

        gridLayout_3->addWidget(mMaximumDiagramScaleLabel, 1, 0, 1, 1);

        mMinimumDiagramScaleLineEdit = new QLineEdit(mScaleDependentVisibilityOptionsFrame);
        mMinimumDiagramScaleLineEdit->setObjectName(QString::fromUtf8("mMinimumDiagramScaleLineEdit"));

        gridLayout_3->addWidget(mMinimumDiagramScaleLineEdit, 0, 1, 1, 1);

        mMaximumDiagramScaleLineEdit = new QLineEdit(mScaleDependentVisibilityOptionsFrame);
        mMaximumDiagramScaleLineEdit->setObjectName(QString::fromUtf8("mMaximumDiagramScaleLineEdit"));

        gridLayout_3->addWidget(mMaximumDiagramScaleLineEdit, 1, 1, 1, 1);


        gridLayout_18->addWidget(mScaleDependentVisibilityOptionsFrame, 1, 1, 1, 1);


        gridLayout_8->addWidget(mVisibilityGroupBox, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabWidgetPage1, QString());
        mDiagramPropertiesTabWidgetPage2 = new QWidget();
        mDiagramPropertiesTabWidgetPage2->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidgetPage2"));
        gridLayout_7 = new QGridLayout(mDiagramPropertiesTabWidgetPage2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mFixedSizeCheckBox = new QCheckBox(mDiagramPropertiesTabWidgetPage2);
        mFixedSizeCheckBox->setObjectName(QString::fromUtf8("mFixedSizeCheckBox"));

        gridLayout_7->addWidget(mFixedSizeCheckBox, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 12, 0, 1, 1);

        mDiagramUnitsLabel = new QLabel(mDiagramPropertiesTabWidgetPage2);
        mDiagramUnitsLabel->setObjectName(QString::fromUtf8("mDiagramUnitsLabel"));

        gridLayout_7->addWidget(mDiagramUnitsLabel, 4, 0, 1, 1);

        mDiagramUnitComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage2);
        mDiagramUnitComboBox->setObjectName(QString::fromUtf8("mDiagramUnitComboBox"));

        gridLayout_7->addWidget(mDiagramUnitComboBox, 4, 1, 1, 1);

        mDiagramSizeSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage2);
        mDiagramSizeSpinBox->setObjectName(QString::fromUtf8("mDiagramSizeSpinBox"));
        mDiagramSizeSpinBox->setEnabled(false);
        mDiagramSizeSpinBox->setDecimals(5);
        mDiagramSizeSpinBox->setMaximum(1e+07);

        gridLayout_7->addWidget(mDiagramSizeSpinBox, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        mLinearScaleFrame = new QFrame(mDiagramPropertiesTabWidgetPage2);
        mLinearScaleFrame->setObjectName(QString::fromUtf8("mLinearScaleFrame"));
        mLinearScaleFrame->setFrameShape(QFrame::NoFrame);
        mLinearScaleFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(mLinearScaleFrame);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mLinearlyScalingLabel = new QLabel(mLinearScaleFrame);
        mLinearlyScalingLabel->setObjectName(QString::fromUtf8("mLinearlyScalingLabel"));
        mLinearlyScalingLabel->setWordWrap(true);

        verticalLayout_3->addWidget(mLinearlyScalingLabel);

        mLinearlyScalingLayout = new QHBoxLayout();
        mLinearlyScalingLayout->setObjectName(QString::fromUtf8("mLinearlyScalingLayout"));
        mAttributeBasedScalingOptions = new QWidget(mLinearScaleFrame);
        mAttributeBasedScalingOptions->setObjectName(QString::fromUtf8("mAttributeBasedScalingOptions"));
        horizontalLayout_2 = new QHBoxLayout(mAttributeBasedScalingOptions);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSizeAttributeLabel = new QLabel(mAttributeBasedScalingOptions);
        mSizeAttributeLabel->setObjectName(QString::fromUtf8("mSizeAttributeLabel"));

        horizontalLayout_2->addWidget(mSizeAttributeLabel);

        mSizeAttributeComboBox = new QComboBox(mAttributeBasedScalingOptions);
        mSizeAttributeComboBox->setObjectName(QString::fromUtf8("mSizeAttributeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSizeAttributeComboBox->sizePolicy().hasHeightForWidth());
        mSizeAttributeComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mSizeAttributeComboBox);

        mSizeAttributeExpression = new QPushButton(mAttributeBasedScalingOptions);
        mSizeAttributeExpression->setObjectName(QString::fromUtf8("mSizeAttributeExpression"));
        mSizeAttributeExpression->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpressionEditorOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSizeAttributeExpression->setIcon(icon);
        mSizeAttributeExpression->setIconSize(QSize(24, 16));

        horizontalLayout_2->addWidget(mSizeAttributeExpression);

        mFindMaximumValueButton = new QPushButton(mAttributeBasedScalingOptions);
        mFindMaximumValueButton->setObjectName(QString::fromUtf8("mFindMaximumValueButton"));

        horizontalLayout_2->addWidget(mFindMaximumValueButton);

        mValueLineEdit = new QLineEdit(mAttributeBasedScalingOptions);
        mValueLineEdit->setObjectName(QString::fromUtf8("mValueLineEdit"));

        horizontalLayout_2->addWidget(mValueLineEdit);


        mLinearlyScalingLayout->addWidget(mAttributeBasedScalingOptions);

        mSizeLabel = new QLabel(mLinearScaleFrame);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        mLinearlyScalingLayout->addWidget(mSizeLabel);

        mSizeSpinBox = new QSpinBox(mLinearScaleFrame);
        mSizeSpinBox->setObjectName(QString::fromUtf8("mSizeSpinBox"));
        mSizeSpinBox->setMaximum(10000000);
        mSizeSpinBox->setValue(50);

        mLinearlyScalingLayout->addWidget(mSizeSpinBox);

        mScaleDependencyLabel = new QLabel(mLinearScaleFrame);
        mScaleDependencyLabel->setObjectName(QString::fromUtf8("mScaleDependencyLabel"));

        mLinearlyScalingLayout->addWidget(mScaleDependencyLabel);

        mScaleDependencyComboBox = new QComboBox(mLinearScaleFrame);
        mScaleDependencyComboBox->setObjectName(QString::fromUtf8("mScaleDependencyComboBox"));

        mLinearlyScalingLayout->addWidget(mScaleDependencyComboBox);


        verticalLayout_3->addLayout(mLinearlyScalingLayout);

        mIncreaseSmallDiagramsGroupBox = new QGroupBox(mLinearScaleFrame);
        mIncreaseSmallDiagramsGroupBox->setObjectName(QString::fromUtf8("mIncreaseSmallDiagramsGroupBox"));
        mIncreaseSmallDiagramsGroupBox->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(mIncreaseSmallDiagramsGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mIncreaseMinimumSizeLabel = new QLabel(mIncreaseSmallDiagramsGroupBox);
        mIncreaseMinimumSizeLabel->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeLabel"));

        horizontalLayout_3->addWidget(mIncreaseMinimumSizeLabel);

        mIncreaseMinimumSizeSpinBox = new QDoubleSpinBox(mIncreaseSmallDiagramsGroupBox);
        mIncreaseMinimumSizeSpinBox->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeSpinBox"));

        horizontalLayout_3->addWidget(mIncreaseMinimumSizeSpinBox);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(mIncreaseSmallDiagramsGroupBox);


        gridLayout_7->addWidget(mLinearScaleFrame, 6, 0, 1, 3);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabWidgetPage2, QString());
        mDiagramPropertiesTabWidgetPage3 = new QWidget();
        mDiagramPropertiesTabWidgetPage3->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidgetPage3"));
        gridLayout_2 = new QGridLayout(mDiagramPropertiesTabWidgetPage3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mPlacementLabel = new QLabel(mDiagramPropertiesTabWidgetPage3);
        mPlacementLabel->setObjectName(QString::fromUtf8("mPlacementLabel"));

        gridLayout_4->addWidget(mPlacementLabel, 0, 0, 1, 1);

        mPlacementComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage3);
        mPlacementComboBox->setObjectName(QString::fromUtf8("mPlacementComboBox"));

        gridLayout_4->addWidget(mPlacementComboBox, 0, 1, 1, 1);

        mLineOptionsLabel = new QLabel(mDiagramPropertiesTabWidgetPage3);
        mLineOptionsLabel->setObjectName(QString::fromUtf8("mLineOptionsLabel"));

        gridLayout_4->addWidget(mLineOptionsLabel, 1, 0, 1, 1);

        mLineOptionsComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage3);
        mLineOptionsComboBox->setObjectName(QString::fromUtf8("mLineOptionsComboBox"));

        gridLayout_4->addWidget(mLineOptionsComboBox, 1, 1, 1, 1);

        mDiagramDistanceLabel = new QLabel(mDiagramPropertiesTabWidgetPage3);
        mDiagramDistanceLabel->setObjectName(QString::fromUtf8("mDiagramDistanceLabel"));

        gridLayout_4->addWidget(mDiagramDistanceLabel, 2, 0, 1, 1);

        mDiagramDistanceSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage3);
        mDiagramDistanceSpinBox->setObjectName(QString::fromUtf8("mDiagramDistanceSpinBox"));

        gridLayout_4->addWidget(mDiagramDistanceSpinBox, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        mDataDefinedPositionGroupBox = new QGroupBox(mDiagramPropertiesTabWidgetPage3);
        mDataDefinedPositionGroupBox->setObjectName(QString::fromUtf8("mDataDefinedPositionGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDataDefinedPositionGroupBox->sizePolicy().hasHeightForWidth());
        mDataDefinedPositionGroupBox->setSizePolicy(sizePolicy2);
        mDataDefinedPositionGroupBox->setCheckable(true);
        mDataDefinedPositionGroupBox->setChecked(false);
        gridLayout_5 = new QGridLayout(mDataDefinedPositionGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mXPosColLabel = new QLabel(mDataDefinedPositionGroupBox);
        mXPosColLabel->setObjectName(QString::fromUtf8("mXPosColLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mXPosColLabel->sizePolicy().hasHeightForWidth());
        mXPosColLabel->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mXPosColLabel, 0, 0, 2, 3);

        mDataDefinedXComboBox = new QComboBox(mDataDefinedPositionGroupBox);
        mDataDefinedXComboBox->setObjectName(QString::fromUtf8("mDataDefinedXComboBox"));
        sizePolicy1.setHeightForWidth(mDataDefinedXComboBox->sizePolicy().hasHeightForWidth());
        mDataDefinedXComboBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mDataDefinedXComboBox, 1, 2, 1, 1);

        mYPosColLabel = new QLabel(mDataDefinedPositionGroupBox);
        mYPosColLabel->setObjectName(QString::fromUtf8("mYPosColLabel"));
        sizePolicy3.setHeightForWidth(mYPosColLabel->sizePolicy().hasHeightForWidth());
        mYPosColLabel->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mYPosColLabel, 2, 0, 1, 1);

        mDataDefinedYComboBox = new QComboBox(mDataDefinedPositionGroupBox);
        mDataDefinedYComboBox->setObjectName(QString::fromUtf8("mDataDefinedYComboBox"));
        sizePolicy1.setHeightForWidth(mDataDefinedYComboBox->sizePolicy().hasHeightForWidth());
        mDataDefinedYComboBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(mDataDefinedYComboBox, 2, 2, 1, 1);


        gridLayout_2->addWidget(mDataDefinedPositionGroupBox, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        mEngineSettingsButton = new QPushButton(mDiagramPropertiesTabWidgetPage3);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));

        gridLayout_2->addWidget(mEngineSettingsButton, 3, 0, 1, 1);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabWidgetPage3, QString());
        mDiagramPropertiesTabOptions = new QWidget();
        mDiagramPropertiesTabOptions->setObjectName(QString::fromUtf8("mDiagramPropertiesTabOptions"));
        verticalLayout_2 = new QVBoxLayout(mDiagramPropertiesTabOptions);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mLabelPlacementLabel = new QLabel(mDiagramPropertiesTabOptions);
        mLabelPlacementLabel->setObjectName(QString::fromUtf8("mLabelPlacementLabel"));
        mLabelPlacementLabel->setVisible(false);
#ifndef QT_NO_TOOLTIP
        mLabelPlacementLabel->setToolTip(0u);
#endif // QT_NO_TOOLTIP

        verticalLayout_2->addWidget(mLabelPlacementLabel);

        mLabelPlacementComboBox = new QComboBox(mDiagramPropertiesTabOptions);
        mLabelPlacementComboBox->setObjectName(QString::fromUtf8("mLabelPlacementComboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mLabelPlacementComboBox->sizePolicy().hasHeightForWidth());
        mLabelPlacementComboBox->setSizePolicy(sizePolicy4);
        mLabelPlacementComboBox->setMaximumSize(QSize(200, 16777215));
        mLabelPlacementComboBox->setVisible(false);

        verticalLayout_2->addWidget(mLabelPlacementComboBox);

        mOrientationFrame = new QFrame(mDiagramPropertiesTabOptions);
        mOrientationFrame->setObjectName(QString::fromUtf8("mOrientationFrame"));
        mOrientationFrame->setFrameShape(QFrame::NoFrame);
        mOrientationFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(mOrientationFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(mOrientationFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        mOrientationUpButton = new QRadioButton(mOrientationFrame);
        mOrientationButtonGroup = new QButtonGroup(QgsDiagramPropertiesBase);
        mOrientationButtonGroup->setObjectName(QString::fromUtf8("mOrientationButtonGroup"));
        mOrientationButtonGroup->addButton(mOrientationUpButton);
        mOrientationUpButton->setObjectName(QString::fromUtf8("mOrientationUpButton"));
        mOrientationUpButton->setChecked(true);

        verticalLayout_4->addWidget(mOrientationUpButton);

        mOrientationDownButton = new QRadioButton(mOrientationFrame);
        mOrientationButtonGroup->addButton(mOrientationDownButton);
        mOrientationDownButton->setObjectName(QString::fromUtf8("mOrientationDownButton"));

        verticalLayout_4->addWidget(mOrientationDownButton);

        mOrientationRightButton = new QRadioButton(mOrientationFrame);
        mOrientationButtonGroup->addButton(mOrientationRightButton);
        mOrientationRightButton->setObjectName(QString::fromUtf8("mOrientationRightButton"));

        verticalLayout_4->addWidget(mOrientationRightButton);

        mOrientationLeftButton = new QRadioButton(mOrientationFrame);
        mOrientationButtonGroup->addButton(mOrientationLeftButton);
        mOrientationLeftButton->setObjectName(QString::fromUtf8("mOrientationLeftButton"));

        verticalLayout_4->addWidget(mOrientationLeftButton);


        verticalLayout_2->addWidget(mOrientationFrame);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabOptions, QString());

        scrollAreaLayout->addWidget(mDiagramPropertiesTabWidget);

        mAttributesGroupBox = new QGroupBox(mScrollAreaWidgetContents);
        mAttributesGroupBox->setObjectName(QString::fromUtf8("mAttributesGroupBox"));
        horizontalLayout = new QHBoxLayout(mAttributesGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        availAttributesLayout = new QVBoxLayout();
        availAttributesLayout->setObjectName(QString::fromUtf8("availAttributesLayout"));
        label = new QLabel(mAttributesGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        availAttributesLayout->addWidget(label);

        mAttributesTreeWidget = new QTreeWidget(mAttributesGroupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Attribute"));
        mAttributesTreeWidget->setHeaderItem(__qtreewidgetitem);
        mAttributesTreeWidget->setObjectName(QString::fromUtf8("mAttributesTreeWidget"));
        mAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mAttributesTreeWidget->setIndentation(0);
        mAttributesTreeWidget->setRootIsDecorated(false);
        mAttributesTreeWidget->setItemsExpandable(false);
        mAttributesTreeWidget->setExpandsOnDoubleClick(false);
        mAttributesTreeWidget->setColumnCount(1);

        availAttributesLayout->addWidget(mAttributesTreeWidget);


        horizontalLayout->addLayout(availAttributesLayout);

        attributeButtonLayout = new QVBoxLayout();
        attributeButtonLayout->setObjectName(QString::fromUtf8("attributeButtonLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer);

        mAddAttributeExpression = new QPushButton(mAttributesGroupBox);
        mAddAttributeExpression->setObjectName(QString::fromUtf8("mAddAttributeExpression"));
        mAddAttributeExpression->setEnabled(true);
        mAddAttributeExpression->setIcon(icon);
        mAddAttributeExpression->setIconSize(QSize(24, 16));

        attributeButtonLayout->addWidget(mAddAttributeExpression);

        mAddCategoryPushButton = new QPushButton(mAttributesGroupBox);
        mAddCategoryPushButton->setObjectName(QString::fromUtf8("mAddCategoryPushButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mAddCategoryPushButton->sizePolicy().hasHeightForWidth());
        mAddCategoryPushButton->setSizePolicy(sizePolicy5);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCategoryPushButton->setIcon(icon1);

        attributeButtonLayout->addWidget(mAddCategoryPushButton);

        mRemoveCategoryPushButton = new QPushButton(mAttributesGroupBox);
        mRemoveCategoryPushButton->setObjectName(QString::fromUtf8("mRemoveCategoryPushButton"));
        sizePolicy5.setHeightForWidth(mRemoveCategoryPushButton->sizePolicy().hasHeightForWidth());
        mRemoveCategoryPushButton->setSizePolicy(sizePolicy5);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveCategoryPushButton->setIcon(icon2);

        attributeButtonLayout->addWidget(mRemoveCategoryPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(attributeButtonLayout);

        assignedAttributesLayout = new QVBoxLayout();
        assignedAttributesLayout->setObjectName(QString::fromUtf8("assignedAttributesLayout"));
        Assigened = new QLabel(mAttributesGroupBox);
        Assigened->setObjectName(QString::fromUtf8("Assigened"));

        assignedAttributesLayout->addWidget(Assigened);

        mDiagramAttributesTreeWidget = new QTreeWidget(mAttributesGroupBox);
        mDiagramAttributesTreeWidget->setObjectName(QString::fromUtf8("mDiagramAttributesTreeWidget"));
        mDiagramAttributesTreeWidget->setDragEnabled(true);
        mDiagramAttributesTreeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        mDiagramAttributesTreeWidget->setDefaultDropAction(Qt::TargetMoveAction);
        mDiagramAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mDiagramAttributesTreeWidget->setIndentation(0);
        mDiagramAttributesTreeWidget->setRootIsDecorated(false);
        mDiagramAttributesTreeWidget->setItemsExpandable(false);
        mDiagramAttributesTreeWidget->setColumnCount(2);

        assignedAttributesLayout->addWidget(mDiagramAttributesTreeWidget);


        horizontalLayout->addLayout(assignedAttributesLayout);


        scrollAreaLayout->addWidget(mAttributesGroupBox);

        mDiagramPropertiesScrollArea->setWidget(mScrollAreaWidgetContents);

        verticalLayout_8->addWidget(mDiagramPropertiesScrollArea);


        verticalLayout->addWidget(mDisplayDiagramsGroupBox);


        retranslateUi(QgsDiagramPropertiesBase);
        QObject::connect(mFixedSizeCheckBox, SIGNAL(toggled(bool)), mDiagramSizeSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(mFixedSizeCheckBox, SIGNAL(toggled(bool)), mLinearScaleFrame, SLOT(setDisabled(bool)));

        mDiagramPropertiesTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsDiagramPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDiagramPropertiesBase)
    {
        mDisplayDiagramsGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Display diagrams", 0, QApplication::UnicodeUTF8));
        mTypeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Diagram type", 0, QApplication::UnicodeUTF8));
        mPriorityLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Priority:", 0, QApplication::UnicodeUTF8));
        mPriorityLowLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Low", 0, QApplication::UnicodeUTF8));
        mPriorityHighLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "High", 0, QApplication::UnicodeUTF8));
        mDiagramPenColorButton->setText(QString());
        mBackgroundColorLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
        mPenColorLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line color", 0, QApplication::UnicodeUTF8));
        mPenWidthLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line width", 0, QApplication::UnicodeUTF8));
        mDiagramFontButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Font...", 0, QApplication::UnicodeUTF8));
        mBarWidthLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar width", 0, QApplication::UnicodeUTF8));
        mTransparencyLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Transparency 0%", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        mAngleOffsetLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Start Angle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mVisibilityGroupBox->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Only show diagrams with a size inside the specified range.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mVisibilityGroupBox->setWhatsThis(QApplication::translate("QgsDiagramPropertiesBase", "Hide diagrams with a size outside the specified range.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mVisibilityGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
        mMinimumDiagramScaleLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Minimum", 0, QApplication::UnicodeUTF8));
        mMaximumDiagramScaleLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Maximum", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabWidgetPage1), QApplication::translate("QgsDiagramPropertiesBase", "Appearance", 0, QApplication::UnicodeUTF8));
        mFixedSizeCheckBox->setText(QApplication::translate("QgsDiagramPropertiesBase", "Fixed size", 0, QApplication::UnicodeUTF8));
        mDiagramUnitsLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size units", 0, QApplication::UnicodeUTF8));
        mLinearlyScalingLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scale linearly between 0 and the following attribute value / diagram size:", 0, QApplication::UnicodeUTF8));
        mSizeAttributeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attribute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSizeAttributeExpression->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Edit expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFindMaximumValueButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Find maximum value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mValueLineEdit->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "The attribute value you enter here will correspond to the size entered in the field \"Size\" and the chosen \"Size unit\".\n"
"Leave empty to automatically apply the maximum value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSizeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        mScaleDependencyLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mIncreaseSmallDiagramsGroupBox->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Will scale diagrams with a size smaller than the minimum size to the minimum size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mIncreaseSmallDiagramsGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Increase size of small diagrams", 0, QApplication::UnicodeUTF8));
        mIncreaseMinimumSizeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Minimum size", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabWidgetPage2), QApplication::translate("QgsDiagramPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        mPlacementLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Placement", 0, QApplication::UnicodeUTF8));
        mLineOptionsLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line Options", 0, QApplication::UnicodeUTF8));
        mDiagramDistanceLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Distance", 0, QApplication::UnicodeUTF8));
        mDataDefinedPositionGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Data defined position", 0, QApplication::UnicodeUTF8));
        mXPosColLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "x", 0, QApplication::UnicodeUTF8));
        mYPosColLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "y", 0, QApplication::UnicodeUTF8));
        mEngineSettingsButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Automated placement settings", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabWidgetPage3), QApplication::translate("QgsDiagramPropertiesBase", "Position", 0, QApplication::UnicodeUTF8));
        mLabelPlacementLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Label placement", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar Orientation", 0, QApplication::UnicodeUTF8));
        mOrientationUpButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Up", 0, QApplication::UnicodeUTF8));
        mOrientationDownButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Down", 0, QApplication::UnicodeUTF8));
        mOrientationRightButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Right", 0, QApplication::UnicodeUTF8));
        mOrientationLeftButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Left", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabOptions), QApplication::translate("QgsDiagramPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
        mAttributesGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Attributes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsDiagramPropertiesBase", "Available attributes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttributeExpression->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Add expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddCategoryPushButton->setText(QString());
        mRemoveCategoryPushButton->setText(QString());
        Assigened->setText(QApplication::translate("QgsDiagramPropertiesBase", "Assigned attributes", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mDiagramAttributesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDiagramPropertiesBase", "Color", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDiagramPropertiesBase", "Attribute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDiagramAttributesTreeWidget->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Drag and drop to reorder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsDiagramPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDiagramPropertiesBase: public Ui_QgsDiagramPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDIAGRAMPROPERTIESBASE_H
