/********************************************************************************
** Form generated from reading UI file 'widget_svgfill.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGFILL_H
#define UI_WIDGET_SVGFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSVGFill
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *mSymbolGroupLabel;
    QLabel *mSymbolListLabel;
    QTreeView *mSvgTreeView;
    QListView *mSvgListView;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mSVGLineEdit;
    QToolButton *mBrowseToolButton;
    QGridLayout *gridLayout;
    QLabel *mTextureWidthLabel;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *mTextureWidthSpinBox;
    QgsUnitSelectionWidget *mTextureWidthUnitWidget;
    QLabel *mRotationLabel;
    QDoubleSpinBox *mRotationSpinBox;
    QLabel *mColorLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QgsColorButtonV2 *mChangeColorButton;
    QLabel *mBorderColorLabel;
    QgsColorButtonV2 *mChangeBorderColorButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mBorderWidthLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *mBorderWidthSpinBox;
    QgsUnitSelectionWidget *mSvgOutlineWidthUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;

    void setupUi(QWidget *WidgetSVGFill)
    {
        if (WidgetSVGFill->objectName().isEmpty())
            WidgetSVGFill->setObjectName(QString::fromUtf8("WidgetSVGFill"));
        WidgetSVGFill->resize(415, 401);
        gridLayout_3 = new QGridLayout(WidgetSVGFill);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mSymbolGroupLabel = new QLabel(WidgetSVGFill);
        mSymbolGroupLabel->setObjectName(QString::fromUtf8("mSymbolGroupLabel"));

        gridLayout_2->addWidget(mSymbolGroupLabel, 0, 0, 1, 1);

        mSymbolListLabel = new QLabel(WidgetSVGFill);
        mSymbolListLabel->setObjectName(QString::fromUtf8("mSymbolListLabel"));

        gridLayout_2->addWidget(mSymbolListLabel, 0, 1, 1, 1);

        mSvgTreeView = new QTreeView(WidgetSVGFill);
        mSvgTreeView->setObjectName(QString::fromUtf8("mSvgTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSvgTreeView->sizePolicy().hasHeightForWidth());
        mSvgTreeView->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(mSvgTreeView, 1, 0, 1, 1);

        mSvgListView = new QListView(WidgetSVGFill);
        mSvgListView->setObjectName(QString::fromUtf8("mSvgListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSvgListView->sizePolicy().hasHeightForWidth());
        mSvgListView->setSizePolicy(sizePolicy1);
        mSvgListView->setFlow(QListView::LeftToRight);
        mSvgListView->setLayoutMode(QListView::Batched);
        mSvgListView->setViewMode(QListView::IconMode);
        mSvgListView->setUniformItemSizes(true);

        gridLayout_2->addWidget(mSvgListView, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSVGLineEdit = new QLineEdit(WidgetSVGFill);
        mSVGLineEdit->setObjectName(QString::fromUtf8("mSVGLineEdit"));

        horizontalLayout->addWidget(mSVGLineEdit);

        mBrowseToolButton = new QToolButton(WidgetSVGFill);
        mBrowseToolButton->setObjectName(QString::fromUtf8("mBrowseToolButton"));

        horizontalLayout->addWidget(mBrowseToolButton);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(28);
        mTextureWidthLabel = new QLabel(WidgetSVGFill);
        mTextureWidthLabel->setObjectName(QString::fromUtf8("mTextureWidthLabel"));

        gridLayout->addWidget(mTextureWidthLabel, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTextureWidthSpinBox = new QDoubleSpinBox(WidgetSVGFill);
        mTextureWidthSpinBox->setObjectName(QString::fromUtf8("mTextureWidthSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mTextureWidthSpinBox->sizePolicy().hasHeightForWidth());
        mTextureWidthSpinBox->setSizePolicy(sizePolicy2);
        mTextureWidthSpinBox->setDecimals(6);
        mTextureWidthSpinBox->setMaximum(1e+08);
        mTextureWidthSpinBox->setSingleStep(0.2);

        horizontalLayout_2->addWidget(mTextureWidthSpinBox);

        mTextureWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSVGFill);
        mTextureWidthUnitWidget->setObjectName(QString::fromUtf8("mTextureWidthUnitWidget"));

        horizontalLayout_2->addWidget(mTextureWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        mRotationLabel = new QLabel(WidgetSVGFill);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout->addWidget(mRotationLabel, 1, 0, 1, 1);

        mRotationSpinBox = new QDoubleSpinBox(WidgetSVGFill);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMaximum(360);
        mRotationSpinBox->setSingleStep(0.5);

        gridLayout->addWidget(mRotationSpinBox, 1, 1, 1, 1);

        mColorLabel = new QLabel(WidgetSVGFill);
        mColorLabel->setObjectName(QString::fromUtf8("mColorLabel"));

        gridLayout->addWidget(mColorLabel, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(WidgetSVGFill);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label);

        mChangeColorButton = new QgsColorButtonV2(WidgetSVGFill);
        mChangeColorButton->setObjectName(QString::fromUtf8("mChangeColorButton"));
        mChangeColorButton->setMinimumSize(QSize(120, 0));
        mChangeColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mChangeColorButton);

        mBorderColorLabel = new QLabel(WidgetSVGFill);
        mBorderColorLabel->setObjectName(QString::fromUtf8("mBorderColorLabel"));
        sizePolicy3.setHeightForWidth(mBorderColorLabel->sizePolicy().hasHeightForWidth());
        mBorderColorLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(mBorderColorLabel);

        mChangeBorderColorButton = new QgsColorButtonV2(WidgetSVGFill);
        mChangeBorderColorButton->setObjectName(QString::fromUtf8("mChangeBorderColorButton"));
        mChangeBorderColorButton->setMinimumSize(QSize(120, 0));
        mChangeBorderColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mChangeBorderColorButton);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        mBorderWidthLabel = new QLabel(WidgetSVGFill);
        mBorderWidthLabel->setObjectName(QString::fromUtf8("mBorderWidthLabel"));

        gridLayout->addWidget(mBorderWidthLabel, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mBorderWidthSpinBox = new QDoubleSpinBox(WidgetSVGFill);
        mBorderWidthSpinBox->setObjectName(QString::fromUtf8("mBorderWidthSpinBox"));
        sizePolicy2.setHeightForWidth(mBorderWidthSpinBox->sizePolicy().hasHeightForWidth());
        mBorderWidthSpinBox->setSizePolicy(sizePolicy2);
        mBorderWidthSpinBox->setDecimals(6);
        mBorderWidthSpinBox->setSingleStep(0.2);

        horizontalLayout_4->addWidget(mBorderWidthSpinBox);

        mSvgOutlineWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSVGFill);
        mSvgOutlineWidthUnitWidget->setObjectName(QString::fromUtf8("mSvgOutlineWidthUnitWidget"));

        horizontalLayout_4->addWidget(mSvgOutlineWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetSVGFill);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(mDataDefinedPropertiesButton, 4, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(mTextureWidthSpinBox, mTextureWidthUnitWidget);
        QWidget::setTabOrder(mTextureWidthUnitWidget, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mChangeBorderColorButton);
        QWidget::setTabOrder(mChangeBorderColorButton, mBorderWidthSpinBox);
        QWidget::setTabOrder(mBorderWidthSpinBox, mSvgOutlineWidthUnitWidget);
        QWidget::setTabOrder(mSvgOutlineWidthUnitWidget, mDataDefinedPropertiesButton);
        QWidget::setTabOrder(mDataDefinedPropertiesButton, mSvgTreeView);
        QWidget::setTabOrder(mSvgTreeView, mSvgListView);
        QWidget::setTabOrder(mSvgListView, mSVGLineEdit);
        QWidget::setTabOrder(mSVGLineEdit, mBrowseToolButton);

        retranslateUi(WidgetSVGFill);

        QMetaObject::connectSlotsByName(WidgetSVGFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSVGFill)
    {
        WidgetSVGFill->setWindowTitle(QApplication::translate("WidgetSVGFill", "Form", 0, QApplication::UnicodeUTF8));
        mSymbolGroupLabel->setText(QApplication::translate("WidgetSVGFill", "SVG Groups", 0, QApplication::UnicodeUTF8));
        mSymbolListLabel->setText(QApplication::translate("WidgetSVGFill", "SVG Symbols", 0, QApplication::UnicodeUTF8));
        mBrowseToolButton->setText(QApplication::translate("WidgetSVGFill", "...", 0, QApplication::UnicodeUTF8));
        mTextureWidthLabel->setText(QApplication::translate("WidgetSVGFill", "Texture width", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("WidgetSVGFill", "Rotation", 0, QApplication::UnicodeUTF8));
        mColorLabel->setText(QApplication::translate("WidgetSVGFill", "Colors", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSVGFill", "Fill", 0, QApplication::UnicodeUTF8));
        mChangeColorButton->setText(QString());
        mBorderColorLabel->setText(QApplication::translate("WidgetSVGFill", "Border", 0, QApplication::UnicodeUTF8));
        mChangeBorderColorButton->setText(QString());
        mBorderWidthLabel->setText(QApplication::translate("WidgetSVGFill", "Border width", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetSVGFill", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetSVGFill: public Ui_WidgetSVGFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGFILL_H
