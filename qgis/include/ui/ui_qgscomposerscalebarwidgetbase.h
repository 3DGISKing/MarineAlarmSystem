/********************************************************************************
** Form generated from reading UI file 'qgscomposerscalebarwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERSCALEBARWIDGETBASE_H
#define UI_QGSCOMPOSERSCALEBARWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbuttonv2.h"
#include "qgspenstylecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerScaleBarWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *mMapLabel;
    QComboBox *mMapComboBox;
    QLabel *mStyleLabel;
    QComboBox *mStyleComboBox;
    QgsCollapsibleGroupBoxBasic *mGroupBoxUnits;
    QGridLayout *gridLayout_2;
    QLabel *mUnitLabelLabel;
    QLineEdit *mUnitLabelLineEdit;
    QLabel *mMapUnitsPerBarUnitLabel;
    QDoubleSpinBox *mMapUnitsPerBarUnitSpinBox;
    QComboBox *mUnitsComboBox;
    QgsCollapsibleGroupBoxBasic *mGroupBoxSegments;
    QGridLayout *gridLayout_3;
    QLabel *mSegmentLabel;
    QHBoxLayout *horizontalLayout;
    QSpinBox *mSegmentsLeftSpinBox;
    QSpinBox *mNumberOfSegmentsSpinBox;
    QLabel *mSegmentSizeLabel;
    QDoubleSpinBox *mSegmentSizeSpinBox;
    QLabel *label;
    QSpinBox *mHeightSpinBox;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *mBoxSizeSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *mLabelBarSpaceSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *mLineWidthSpinBox;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *mLineJoinStyleCombo;
    QLabel *label_6;
    QgsPenCapStyleComboBox *mLineCapStyleCombo;
    QLabel *mAlignmentLabel;
    QComboBox *mAlignmentComboBox;
    QgsCollapsibleGroupBoxBasic *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButtonV2 *mFontColorButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QgsColorButtonV2 *mFillColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QgsColorButtonV2 *mFillColor2Button;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButtonV2 *mStrokeColorButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mFontButton;

    void setupUi(QWidget *QgsComposerScaleBarWidgetBase)
    {
        if (QgsComposerScaleBarWidgetBase->objectName().isEmpty())
            QgsComposerScaleBarWidgetBase->setObjectName(QString::fromUtf8("QgsComposerScaleBarWidgetBase"));
        QgsComposerScaleBarWidgetBase->resize(358, 429);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerScaleBarWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerScaleBarWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsComposerScaleBarWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(QgsComposerScaleBarWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_5);

        scrollArea = new QScrollArea(QgsComposerScaleBarWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -427, 369, 817));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMapLabel = new QLabel(groupBox);
        mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMapLabel->sizePolicy().hasHeightForWidth());
        mMapLabel->setSizePolicy(sizePolicy2);
        mMapLabel->setWordWrap(true);

        gridLayout->addWidget(mMapLabel, 0, 0, 1, 1);

        mMapComboBox = new QComboBox(groupBox);
        mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));
        mMapComboBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mMapComboBox->sizePolicy().hasHeightForWidth());
        mMapComboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mMapComboBox, 0, 1, 1, 1);

        mStyleLabel = new QLabel(groupBox);
        mStyleLabel->setObjectName(QString::fromUtf8("mStyleLabel"));

        gridLayout->addWidget(mStyleLabel, 1, 0, 1, 1);

        mStyleComboBox = new QComboBox(groupBox);
        mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

        gridLayout->addWidget(mStyleComboBox, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox);

        mGroupBoxUnits = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxUnits->setObjectName(QString::fromUtf8("mGroupBoxUnits"));
        mGroupBoxUnits->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxUnits->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mGroupBoxUnits->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mGroupBoxUnits);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mUnitLabelLabel = new QLabel(mGroupBoxUnits);
        mUnitLabelLabel->setObjectName(QString::fromUtf8("mUnitLabelLabel"));
        mUnitLabelLabel->setWordWrap(true);

        gridLayout_2->addWidget(mUnitLabelLabel, 1, 0, 1, 1);

        mUnitLabelLineEdit = new QLineEdit(mGroupBoxUnits);
        mUnitLabelLineEdit->setObjectName(QString::fromUtf8("mUnitLabelLineEdit"));

        gridLayout_2->addWidget(mUnitLabelLineEdit, 1, 1, 1, 1);

        mMapUnitsPerBarUnitLabel = new QLabel(mGroupBoxUnits);
        mMapUnitsPerBarUnitLabel->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitLabel"));
        mMapUnitsPerBarUnitLabel->setWordWrap(false);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitLabel, 2, 0, 1, 1);

        mMapUnitsPerBarUnitSpinBox = new QDoubleSpinBox(mGroupBoxUnits);
        mMapUnitsPerBarUnitSpinBox->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitSpinBox"));
        mMapUnitsPerBarUnitSpinBox->setDecimals(6);
        mMapUnitsPerBarUnitSpinBox->setMaximum(1e+13);

        gridLayout_2->addWidget(mMapUnitsPerBarUnitSpinBox, 2, 1, 1, 1);

        mUnitsComboBox = new QComboBox(mGroupBoxUnits);
        mUnitsComboBox->setObjectName(QString::fromUtf8("mUnitsComboBox"));

        gridLayout_2->addWidget(mUnitsComboBox, 0, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);

        mainLayout->addWidget(mGroupBoxUnits);

        mGroupBoxSegments = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGroupBoxSegments->setObjectName(QString::fromUtf8("mGroupBoxSegments"));
        mGroupBoxSegments->setFocusPolicy(Qt::StrongFocus);
        mGroupBoxSegments->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mGroupBoxSegments->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(mGroupBoxSegments);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSegmentLabel = new QLabel(mGroupBoxSegments);
        mSegmentLabel->setObjectName(QString::fromUtf8("mSegmentLabel"));

        gridLayout_3->addWidget(mSegmentLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSegmentsLeftSpinBox = new QSpinBox(mGroupBoxSegments);
        mSegmentsLeftSpinBox->setObjectName(QString::fromUtf8("mSegmentsLeftSpinBox"));

        horizontalLayout->addWidget(mSegmentsLeftSpinBox);

        mNumberOfSegmentsSpinBox = new QSpinBox(mGroupBoxSegments);
        mNumberOfSegmentsSpinBox->setObjectName(QString::fromUtf8("mNumberOfSegmentsSpinBox"));

        horizontalLayout->addWidget(mNumberOfSegmentsSpinBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);

        mSegmentSizeLabel = new QLabel(mGroupBoxSegments);
        mSegmentSizeLabel->setObjectName(QString::fromUtf8("mSegmentSizeLabel"));
        mSegmentSizeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mSegmentSizeLabel, 1, 0, 1, 1);

        mSegmentSizeSpinBox = new QDoubleSpinBox(mGroupBoxSegments);
        mSegmentSizeSpinBox->setObjectName(QString::fromUtf8("mSegmentSizeSpinBox"));
        mSegmentSizeSpinBox->setDecimals(6);
        mSegmentSizeSpinBox->setMaximum(1e+13);

        gridLayout_3->addWidget(mSegmentSizeSpinBox, 1, 1, 1, 1);

        label = new QLabel(mGroupBoxSegments);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        mHeightSpinBox = new QSpinBox(mGroupBoxSegments);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));

        gridLayout_3->addWidget(mHeightSpinBox, 2, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        mainLayout->addWidget(mGroupBoxSegments);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(true));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        mBoxSizeSpinBox = new QDoubleSpinBox(groupBox_5);
        mBoxSizeSpinBox->setObjectName(QString::fromUtf8("mBoxSizeSpinBox"));

        gridLayout_4->addWidget(mBoxSizeSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        mLabelBarSpaceSpinBox = new QDoubleSpinBox(groupBox_5);
        mLabelBarSpaceSpinBox->setObjectName(QString::fromUtf8("mLabelBarSpaceSpinBox"));

        gridLayout_4->addWidget(mLabelBarSpaceSpinBox, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        mLineWidthSpinBox = new QDoubleSpinBox(groupBox_5);
        mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
        sizePolicy2.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mLineWidthSpinBox->setSizePolicy(sizePolicy2);
        mLineWidthSpinBox->setMinimum(0.01);
        mLineWidthSpinBox->setSingleStep(0.1);
        mLineWidthSpinBox->setValue(0.2);

        gridLayout_4->addWidget(mLineWidthSpinBox, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 3, 0, 1, 1);

        mLineJoinStyleCombo = new QgsPenJoinStyleComboBox(groupBox_5);
        mLineJoinStyleCombo->setObjectName(QString::fromUtf8("mLineJoinStyleCombo"));

        gridLayout_4->addWidget(mLineJoinStyleCombo, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 4, 0, 1, 1);

        mLineCapStyleCombo = new QgsPenCapStyleComboBox(groupBox_5);
        mLineCapStyleCombo->setObjectName(QString::fromUtf8("mLineCapStyleCombo"));

        gridLayout_4->addWidget(mLineCapStyleCombo, 4, 1, 1, 1);

        mAlignmentLabel = new QLabel(groupBox_5);
        mAlignmentLabel->setObjectName(QString::fromUtf8("mAlignmentLabel"));

        gridLayout_4->addWidget(mAlignmentLabel, 5, 0, 1, 1);

        mAlignmentComboBox = new QComboBox(groupBox_5);
        mAlignmentComboBox->setObjectName(QString::fromUtf8("mAlignmentComboBox"));

        gridLayout_4->addWidget(mAlignmentComboBox, 5, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox_5);

        groupBox_4 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFocusPolicy(Qt::StrongFocus);
        groupBox_4->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_4->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFontColorButton = new QgsColorButtonV2(groupBox_4);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mFontColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_5->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mFillColorButton = new QgsColorButtonV2(groupBox_4);
        mFillColorButton->setObjectName(QString::fromUtf8("mFillColorButton"));
        mFillColorButton->setMinimumSize(QSize(120, 0));
        mFillColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mFillColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mFillColor2Button = new QgsColorButtonV2(groupBox_4);
        mFillColor2Button->setObjectName(QString::fromUtf8("mFillColor2Button"));
        mFillColor2Button->setMinimumSize(QSize(120, 0));
        mFillColor2Button->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(mFillColor2Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mStrokeColorButton = new QgsColorButtonV2(groupBox_4);
        mStrokeColorButton->setObjectName(QString::fromUtf8("mStrokeColorButton"));
        mStrokeColorButton->setMinimumSize(QSize(120, 0));
        mStrokeColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mStrokeColorButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_5->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        mFontButton = new QPushButton(groupBox_4);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(mFontButton, 0, 0, 1, 2);

        gridLayout_5->setColumnStretch(1, 1);

        mainLayout->addWidget(groupBox_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mMapLabel->setBuddy(mMapComboBox);
        mStyleLabel->setBuddy(mStyleComboBox);
        mUnitLabelLabel->setBuddy(mUnitLabelLineEdit);
        mMapUnitsPerBarUnitLabel->setBuddy(mMapUnitsPerBarUnitSpinBox);
        mSegmentSizeLabel->setBuddy(mSegmentSizeSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mMapComboBox);
        QWidget::setTabOrder(mMapComboBox, mStyleComboBox);
        QWidget::setTabOrder(mStyleComboBox, mGroupBoxUnits);
        QWidget::setTabOrder(mGroupBoxUnits, mUnitsComboBox);
        QWidget::setTabOrder(mUnitsComboBox, mUnitLabelLineEdit);
        QWidget::setTabOrder(mUnitLabelLineEdit, mMapUnitsPerBarUnitSpinBox);
        QWidget::setTabOrder(mMapUnitsPerBarUnitSpinBox, mGroupBoxSegments);
        QWidget::setTabOrder(mGroupBoxSegments, mSegmentsLeftSpinBox);
        QWidget::setTabOrder(mSegmentsLeftSpinBox, mNumberOfSegmentsSpinBox);
        QWidget::setTabOrder(mNumberOfSegmentsSpinBox, mSegmentSizeSpinBox);
        QWidget::setTabOrder(mSegmentSizeSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mBoxSizeSpinBox);
        QWidget::setTabOrder(mBoxSizeSpinBox, mLabelBarSpaceSpinBox);
        QWidget::setTabOrder(mLabelBarSpaceSpinBox, mLineWidthSpinBox);
        QWidget::setTabOrder(mLineWidthSpinBox, mLineJoinStyleCombo);
        QWidget::setTabOrder(mLineJoinStyleCombo, mLineCapStyleCombo);
        QWidget::setTabOrder(mLineCapStyleCombo, mAlignmentComboBox);
        QWidget::setTabOrder(mAlignmentComboBox, groupBox_4);
        QWidget::setTabOrder(groupBox_4, mFontButton);
        QWidget::setTabOrder(mFontButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mFillColorButton);
        QWidget::setTabOrder(mFillColorButton, mFillColor2Button);
        QWidget::setTabOrder(mFillColor2Button, mStrokeColorButton);

        retranslateUi(QgsComposerScaleBarWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerScaleBarWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerScaleBarWidgetBase)
    {
        QgsComposerScaleBarWidgetBase->setWindowTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Barscale Options", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Scalebar", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        mMapLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        mStyleLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Style", 0, QApplication::UnicodeUTF8));
        mGroupBoxUnits->setTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Units", 0, QApplication::UnicodeUTF8));
        mUnitLabelLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
        mMapUnitsPerBarUnitLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Map units per bar unit", 0, QApplication::UnicodeUTF8));
        mGroupBoxSegments->setTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Segments", 0, QApplication::UnicodeUTF8));
        mSegmentLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Segments", 0, QApplication::UnicodeUTF8));
        mSegmentsLeftSpinBox->setSuffix(QString());
        mSegmentsLeftSpinBox->setPrefix(QApplication::translate("QgsComposerScaleBarWidgetBase", "left ", 0, QApplication::UnicodeUTF8));
        mNumberOfSegmentsSpinBox->setSuffix(QString());
        mNumberOfSegmentsSpinBox->setPrefix(QApplication::translate("QgsComposerScaleBarWidgetBase", "right ", 0, QApplication::UnicodeUTF8));
        mSegmentSizeLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Size", 0, QApplication::UnicodeUTF8));
        mSegmentSizeSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " units", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setPrefix(QString());
        groupBox_5->setTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Display", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Box margin", 0, QApplication::UnicodeUTF8));
        mBoxSizeSpinBox->setPrefix(QString());
        mBoxSizeSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Labels margin", 0, QApplication::UnicodeUTF8));
        mLabelBarSpaceSpinBox->setPrefix(QString());
        mLabelBarSpaceSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Line width", 0, QApplication::UnicodeUTF8));
        mLineWidthSpinBox->setPrefix(QString());
        mLineWidthSpinBox->setSuffix(QApplication::translate("QgsComposerScaleBarWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Join style", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Cap style", 0, QApplication::UnicodeUTF8));
        mAlignmentLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Alignment", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Fonts and colors", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Font color", 0, QApplication::UnicodeUTF8));
        mFontColorButton->setText(QString());
        label_9->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Fill color", 0, QApplication::UnicodeUTF8));
        mFillColorButton->setText(QString());
        label_10->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Secondary fill color", 0, QApplication::UnicodeUTF8));
        mFillColor2Button->setText(QString());
        label_11->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Stroke color", 0, QApplication::UnicodeUTF8));
        mStrokeColorButton->setText(QString());
        mFontButton->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerScaleBarWidgetBase: public Ui_QgsComposerScaleBarWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERSCALEBARWIDGETBASE_H
