/********************************************************************************
** Form generated from reading UI file 'qgscompositionwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSITIONWIDGETBASE_H
#define UI_QGSCOMPOSITIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsdatadefinedbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCompositionWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QHBoxLayout *horizontalLayout;
    QComboBox *mPaperSizeComboBox;
    QgsDataDefinedButton *mPaperSizeDDBtn;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *mPaperWidthDoubleSpinBox;
    QgsDataDefinedButton *mPaperWidthDDBtn;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *mPaperHeightDoubleSpinBox;
    QgsDataDefinedButton *mPaperHeightDDBtn;
    QLabel *label_3;
    QComboBox *mPaperUnitsComboBox;
    QLabel *mNumPagesLabel;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *mNumPagesSpinBox;
    QgsDataDefinedButton *mNumPagesDDBtn;
    QLabel *textLabel7;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *mPaperOrientationComboBox;
    QgsDataDefinedButton *mPaperOrientationDDBtn;
    QLabel *label_10;
    QPushButton *mPageStyleButton;
    QLabel *label_9;
    QSpinBox *mResolutionSpinBox;
    QCheckBox *mPrintAsRasterCheckBox;
    QCheckBox *mGenerateWorldFileCheckBox;
    QComboBox *mWorldFileMapComboBox;
    QgsCollapsibleGroupBoxBasic *mSnapToGridGroupCheckBox;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QDoubleSpinBox *mGridResolutionSpinBox;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QDoubleSpinBox *mOffsetXSpinBox;
    QDoubleSpinBox *mOffsetYSpinBox;
    QLabel *label_7;
    QSpinBox *mSnapToleranceSpinBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCompositionWidgetBase)
    {
        if (QgsCompositionWidgetBase->objectName().isEmpty())
            QgsCompositionWidgetBase->setObjectName(QString::fromUtf8("QgsCompositionWidgetBase"));
        QgsCompositionWidgetBase->resize(300, 506);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsCompositionWidgetBase->sizePolicy().hasHeightForWidth());
        QgsCompositionWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsCompositionWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(QgsCompositionWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFocusPolicy(Qt::WheelFocus);
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 284, 599));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(true);

        gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mPaperSizeComboBox = new QComboBox(groupBox);
        mPaperSizeComboBox->setObjectName(QString::fromUtf8("mPaperSizeComboBox"));
        mPaperSizeComboBox->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPaperSizeComboBox->sizePolicy().hasHeightForWidth());
        mPaperSizeComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mPaperSizeComboBox);

        mPaperSizeDDBtn = new QgsDataDefinedButton(groupBox);
        mPaperSizeDDBtn->setObjectName(QString::fromUtf8("mPaperSizeDDBtn"));

        horizontalLayout->addWidget(mPaperSizeDDBtn);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPaperWidthDoubleSpinBox = new QDoubleSpinBox(groupBox);
        mPaperWidthDoubleSpinBox->setObjectName(QString::fromUtf8("mPaperWidthDoubleSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mPaperWidthDoubleSpinBox->sizePolicy().hasHeightForWidth());
        mPaperWidthDoubleSpinBox->setSizePolicy(sizePolicy3);
        mPaperWidthDoubleSpinBox->setMaximum(99999);

        horizontalLayout_2->addWidget(mPaperWidthDoubleSpinBox);

        mPaperWidthDDBtn = new QgsDataDefinedButton(groupBox);
        mPaperWidthDDBtn->setObjectName(QString::fromUtf8("mPaperWidthDDBtn"));

        horizontalLayout_2->addWidget(mPaperWidthDDBtn);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mPaperHeightDoubleSpinBox = new QDoubleSpinBox(groupBox);
        mPaperHeightDoubleSpinBox->setObjectName(QString::fromUtf8("mPaperHeightDoubleSpinBox"));
        sizePolicy3.setHeightForWidth(mPaperHeightDoubleSpinBox->sizePolicy().hasHeightForWidth());
        mPaperHeightDoubleSpinBox->setSizePolicy(sizePolicy3);
        mPaperHeightDoubleSpinBox->setMaximum(99999);

        horizontalLayout_3->addWidget(mPaperHeightDoubleSpinBox);

        mPaperHeightDDBtn = new QgsDataDefinedButton(groupBox);
        mPaperHeightDDBtn->setObjectName(QString::fromUtf8("mPaperHeightDDBtn"));

        horizontalLayout_3->addWidget(mPaperHeightDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        mPaperUnitsComboBox = new QComboBox(groupBox);
        mPaperUnitsComboBox->setObjectName(QString::fromUtf8("mPaperUnitsComboBox"));
        mPaperUnitsComboBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPaperUnitsComboBox->sizePolicy().hasHeightForWidth());
        mPaperUnitsComboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mPaperUnitsComboBox, 3, 1, 1, 1);

        mNumPagesLabel = new QLabel(groupBox);
        mNumPagesLabel->setObjectName(QString::fromUtf8("mNumPagesLabel"));
        mNumPagesLabel->setWordWrap(true);

        gridLayout->addWidget(mNumPagesLabel, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mNumPagesSpinBox = new QSpinBox(groupBox);
        mNumPagesSpinBox->setObjectName(QString::fromUtf8("mNumPagesSpinBox"));
        mNumPagesSpinBox->setMinimum(1);

        horizontalLayout_4->addWidget(mNumPagesSpinBox);

        mNumPagesDDBtn = new QgsDataDefinedButton(groupBox);
        mNumPagesDDBtn->setObjectName(QString::fromUtf8("mNumPagesDDBtn"));

        horizontalLayout_4->addWidget(mNumPagesDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 4, 1, 1, 1);

        textLabel7 = new QLabel(groupBox);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        textLabel7->setWordWrap(true);

        gridLayout->addWidget(textLabel7, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mPaperOrientationComboBox = new QComboBox(groupBox);
        mPaperOrientationComboBox->setObjectName(QString::fromUtf8("mPaperOrientationComboBox"));
        mPaperOrientationComboBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPaperOrientationComboBox->sizePolicy().hasHeightForWidth());
        mPaperOrientationComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(mPaperOrientationComboBox);

        mPaperOrientationDDBtn = new QgsDataDefinedButton(groupBox);
        mPaperOrientationDDBtn->setObjectName(QString::fromUtf8("mPaperOrientationDDBtn"));

        horizontalLayout_5->addWidget(mPaperOrientationDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 5, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 0, 1, 1);

        mPageStyleButton = new QPushButton(groupBox);
        mPageStyleButton->setObjectName(QString::fromUtf8("mPageStyleButton"));

        gridLayout->addWidget(mPageStyleButton, 6, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        mResolutionSpinBox = new QSpinBox(groupBox);
        mResolutionSpinBox->setObjectName(QString::fromUtf8("mResolutionSpinBox"));
        mResolutionSpinBox->setMaximum(3000);

        gridLayout->addWidget(mResolutionSpinBox, 7, 1, 1, 1);

        mPrintAsRasterCheckBox = new QCheckBox(groupBox);
        mPrintAsRasterCheckBox->setObjectName(QString::fromUtf8("mPrintAsRasterCheckBox"));
        mPrintAsRasterCheckBox->setCheckable(true);
        mPrintAsRasterCheckBox->setChecked(false);

        gridLayout->addWidget(mPrintAsRasterCheckBox, 8, 0, 1, 1);

        mGenerateWorldFileCheckBox = new QCheckBox(groupBox);
        mGenerateWorldFileCheckBox->setObjectName(QString::fromUtf8("mGenerateWorldFileCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mGenerateWorldFileCheckBox->sizePolicy().hasHeightForWidth());
        mGenerateWorldFileCheckBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mGenerateWorldFileCheckBox, 9, 0, 1, 1);

        mWorldFileMapComboBox = new QComboBox(groupBox);
        mWorldFileMapComboBox->setObjectName(QString::fromUtf8("mWorldFileMapComboBox"));
        mWorldFileMapComboBox->setEnabled(false);
        mWorldFileMapComboBox->setEditable(false);

        gridLayout->addWidget(mWorldFileMapComboBox, 9, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(groupBox);

        mSnapToGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSnapToGridGroupCheckBox->setObjectName(QString::fromUtf8("mSnapToGridGroupCheckBox"));
        mSnapToGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mSnapToGridGroupCheckBox->setCheckable(false);
        mSnapToGridGroupCheckBox->setChecked(false);
        mSnapToGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSnapToGridGroupCheckBox->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(mSnapToGridGroupCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(mSnapToGridGroupCheckBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        mGridResolutionSpinBox = new QDoubleSpinBox(mSnapToGridGroupCheckBox);
        mGridResolutionSpinBox->setObjectName(QString::fromUtf8("mGridResolutionSpinBox"));
        mGridResolutionSpinBox->setMinimum(0.5);
        mGridResolutionSpinBox->setMaximum(9999);

        gridLayout_2->addWidget(mGridResolutionSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(mSnapToGridGroupCheckBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mOffsetXSpinBox = new QDoubleSpinBox(mSnapToGridGroupCheckBox);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setMaximum(9999);

        verticalLayout_3->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QDoubleSpinBox(mSnapToGridGroupCheckBox);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));

        verticalLayout_3->addWidget(mOffsetYSpinBox);


        gridLayout_2->addLayout(verticalLayout_3, 1, 1, 1, 1);

        label_7 = new QLabel(mSnapToGridGroupCheckBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        mSnapToleranceSpinBox = new QSpinBox(mSnapToGridGroupCheckBox);
        mSnapToleranceSpinBox->setObjectName(QString::fromUtf8("mSnapToleranceSpinBox"));
        mSnapToleranceSpinBox->setMaximum(200);

        gridLayout_2->addWidget(mSnapToleranceSpinBox, 2, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(mSnapToGridGroupCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        textLabel3->setBuddy(mPaperSizeComboBox);
        textLabel7->setBuddy(mPaperOrientationComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mPaperSizeComboBox);
        QWidget::setTabOrder(mPaperSizeComboBox, mPaperSizeDDBtn);
        QWidget::setTabOrder(mPaperSizeDDBtn, mPaperWidthDoubleSpinBox);
        QWidget::setTabOrder(mPaperWidthDoubleSpinBox, mPaperWidthDDBtn);
        QWidget::setTabOrder(mPaperWidthDDBtn, mPaperHeightDoubleSpinBox);
        QWidget::setTabOrder(mPaperHeightDoubleSpinBox, mPaperHeightDDBtn);
        QWidget::setTabOrder(mPaperHeightDDBtn, mPaperUnitsComboBox);
        QWidget::setTabOrder(mPaperUnitsComboBox, mNumPagesSpinBox);
        QWidget::setTabOrder(mNumPagesSpinBox, mNumPagesDDBtn);
        QWidget::setTabOrder(mNumPagesDDBtn, mPaperOrientationComboBox);
        QWidget::setTabOrder(mPaperOrientationComboBox, mPaperOrientationDDBtn);
        QWidget::setTabOrder(mPaperOrientationDDBtn, mPageStyleButton);
        QWidget::setTabOrder(mPageStyleButton, mResolutionSpinBox);
        QWidget::setTabOrder(mResolutionSpinBox, mPrintAsRasterCheckBox);
        QWidget::setTabOrder(mPrintAsRasterCheckBox, mGenerateWorldFileCheckBox);
        QWidget::setTabOrder(mGenerateWorldFileCheckBox, mWorldFileMapComboBox);
        QWidget::setTabOrder(mWorldFileMapComboBox, mSnapToGridGroupCheckBox);
        QWidget::setTabOrder(mSnapToGridGroupCheckBox, mGridResolutionSpinBox);
        QWidget::setTabOrder(mGridResolutionSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mSnapToleranceSpinBox);

        retranslateUi(QgsCompositionWidgetBase);

        QMetaObject::connectSlotsByName(QgsCompositionWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompositionWidgetBase)
    {
        QgsCompositionWidgetBase->setWindowTitle(QApplication::translate("QgsCompositionWidgetBase", "Composition", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsCompositionWidgetBase", "Paper and quality", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsCompositionWidgetBase", "Presets", 0, QApplication::UnicodeUTF8));
        mPaperSizeDDBtn->setText(QApplication::translate("QgsCompositionWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsCompositionWidgetBase", "Width", 0, QApplication::UnicodeUTF8));
        mPaperWidthDoubleSpinBox->setPrefix(QString());
        mPaperWidthDoubleSpinBox->setSuffix(QString());
        mPaperWidthDDBtn->setText(QApplication::translate("QgsCompositionWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsCompositionWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
        mPaperHeightDoubleSpinBox->setPrefix(QString());
        mPaperHeightDoubleSpinBox->setSuffix(QString());
        mPaperHeightDDBtn->setText(QApplication::translate("QgsCompositionWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsCompositionWidgetBase", "Units", 0, QApplication::UnicodeUTF8));
        mNumPagesLabel->setText(QApplication::translate("QgsCompositionWidgetBase", "Number of pages", 0, QApplication::UnicodeUTF8));
        mNumPagesDDBtn->setText(QApplication::translate("QgsCompositionWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        textLabel7->setText(QApplication::translate("QgsCompositionWidgetBase", "Orientation", 0, QApplication::UnicodeUTF8));
        mPaperOrientationDDBtn->setText(QApplication::translate("QgsCompositionWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsCompositionWidgetBase", "Page background", 0, QApplication::UnicodeUTF8));
        mPageStyleButton->setText(QApplication::translate("QgsCompositionWidgetBase", "Change...", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsCompositionWidgetBase", "Export resolution", 0, QApplication::UnicodeUTF8));
        mResolutionSpinBox->setSuffix(QApplication::translate("QgsCompositionWidgetBase", " dpi", 0, QApplication::UnicodeUTF8));
        mResolutionSpinBox->setPrefix(QString());
        mPrintAsRasterCheckBox->setText(QApplication::translate("QgsCompositionWidgetBase", "Print as raster", 0, QApplication::UnicodeUTF8));
        mGenerateWorldFileCheckBox->setText(QApplication::translate("QgsCompositionWidgetBase", "World file on", 0, QApplication::UnicodeUTF8));
        mSnapToGridGroupCheckBox->setTitle(QApplication::translate("QgsCompositionWidgetBase", "Guides and Grid", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsCompositionWidgetBase", "Grid spacing", 0, QApplication::UnicodeUTF8));
        mGridResolutionSpinBox->setPrefix(QString());
        mGridResolutionSpinBox->setSuffix(QApplication::translate("QgsCompositionWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsCompositionWidgetBase", "Grid offset", 0, QApplication::UnicodeUTF8));
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "x: ", 0, QApplication::UnicodeUTF8));
        mOffsetXSpinBox->setSuffix(QApplication::translate("QgsCompositionWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsCompositionWidgetBase", "y: ", 0, QApplication::UnicodeUTF8));
        mOffsetYSpinBox->setSuffix(QApplication::translate("QgsCompositionWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsCompositionWidgetBase", "Snap tolerance", 0, QApplication::UnicodeUTF8));
        mSnapToleranceSpinBox->setSuffix(QApplication::translate("QgsCompositionWidgetBase", " px", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCompositionWidgetBase: public Ui_QgsCompositionWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSITIONWIDGETBASE_H
