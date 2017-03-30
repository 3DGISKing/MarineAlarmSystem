/********************************************************************************
** Form generated from reading UI file 'widget_svgmarker.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGMARKER_H
#define UI_WIDGET_SVGMARKER_H

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
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgMarker
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QLabel *label_3;
    QDoubleSpinBox *spinAngle;
    QLabel *mColorLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QgsColorButtonV2 *mChangeColorButton;
    QLabel *mBorderColorLabel;
    QgsColorButtonV2 *mChangeBorderColorButton;
    QSpacerItem *horizontalSpacer;
    QLabel *mBorderWidthLabel;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *mBorderWidthSpinBox;
    QgsUnitSelectionWidget *mBorderWidthUnitWidget;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *mAnchorPointLabel;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *mHorizontalAnchorComboBox;
    QComboBox *mVerticalAnchorComboBox;
    QLabel *label_5;
    QLabel *label;
    QTreeView *viewGroups;
    QListView *viewImages;
    QPushButton *mDataDefinedPropertiesButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mFileLineEdit;
    QToolButton *mFileToolButton;

    void setupUi(QWidget *WidgetSvgMarker)
    {
        if (WidgetSvgMarker->objectName().isEmpty())
            WidgetSvgMarker->setObjectName(QString::fromUtf8("WidgetSvgMarker"));
        WidgetSvgMarker->resize(453, 471);
        gridLayout_2 = new QGridLayout(WidgetSvgMarker);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(WidgetSvgMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        spinSize = new QDoubleSpinBox(WidgetSvgMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy1);
        spinSize->setDecimals(6);
        spinSize->setMaximum(100000);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);

        horizontalLayout_4->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));

        horizontalLayout_4->addWidget(mSizeUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        label_3 = new QLabel(WidgetSvgMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(WidgetSvgMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout->addWidget(spinAngle, 1, 1, 1, 1);

        mColorLabel = new QLabel(WidgetSvgMarker);
        mColorLabel->setObjectName(QString::fromUtf8("mColorLabel"));

        gridLayout->addWidget(mColorLabel, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(WidgetSvgMarker);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(label_6);

        mChangeColorButton = new QgsColorButtonV2(WidgetSvgMarker);
        mChangeColorButton->setObjectName(QString::fromUtf8("mChangeColorButton"));
        mChangeColorButton->setMinimumSize(QSize(120, 0));
        mChangeColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mChangeColorButton);

        mBorderColorLabel = new QLabel(WidgetSvgMarker);
        mBorderColorLabel->setObjectName(QString::fromUtf8("mBorderColorLabel"));
        sizePolicy2.setHeightForWidth(mBorderColorLabel->sizePolicy().hasHeightForWidth());
        mBorderColorLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(mBorderColorLabel);

        mChangeBorderColorButton = new QgsColorButtonV2(WidgetSvgMarker);
        mChangeBorderColorButton->setObjectName(QString::fromUtf8("mChangeBorderColorButton"));
        mChangeBorderColorButton->setMinimumSize(QSize(120, 0));
        mChangeBorderColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mChangeBorderColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        mBorderWidthLabel = new QLabel(WidgetSvgMarker);
        mBorderWidthLabel->setObjectName(QString::fromUtf8("mBorderWidthLabel"));

        gridLayout->addWidget(mBorderWidthLabel, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBorderWidthSpinBox = new QDoubleSpinBox(WidgetSvgMarker);
        mBorderWidthSpinBox->setObjectName(QString::fromUtf8("mBorderWidthSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mBorderWidthSpinBox->sizePolicy().hasHeightForWidth());
        mBorderWidthSpinBox->setSizePolicy(sizePolicy3);
        mBorderWidthSpinBox->setDecimals(6);
        mBorderWidthSpinBox->setSingleStep(0.2);

        horizontalLayout_5->addWidget(mBorderWidthSpinBox);

        mBorderWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mBorderWidthUnitWidget->setObjectName(QString::fromUtf8("mBorderWidthUnitWidget"));

        horizontalLayout_5->addWidget(mBorderWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        label_4 = new QLabel(WidgetSvgMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetSvgMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy3.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy3);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-100000);
        spinOffsetX->setMaximum(100000);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetSvgMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy3.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy3);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-100000);
        spinOffsetY->setMaximum(100000);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSvgMarker);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetSvgMarker);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout->addWidget(mAnchorPointLabel, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mHorizontalAnchorComboBox = new QComboBox(WidgetSvgMarker);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        horizontalLayout_6->addWidget(mHorizontalAnchorComboBox);

        mVerticalAnchorComboBox = new QComboBox(WidgetSvgMarker);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        horizontalLayout_6->addWidget(mVerticalAnchorComboBox);


        gridLayout->addLayout(horizontalLayout_6, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        label_5 = new QLabel(WidgetSvgMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label = new QLabel(WidgetSvgMarker);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        viewGroups = new QTreeView(WidgetSvgMarker);
        viewGroups->setObjectName(QString::fromUtf8("viewGroups"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(3);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(viewGroups->sizePolicy().hasHeightForWidth());
        viewGroups->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(viewGroups, 3, 0, 1, 1);

        viewImages = new QListView(WidgetSvgMarker);
        viewImages->setObjectName(QString::fromUtf8("viewImages"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(5);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(viewImages->sizePolicy().hasHeightForWidth());
        viewImages->setSizePolicy(sizePolicy5);
        viewImages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewImages->setIconSize(QSize(32, 32));
        viewImages->setMovement(QListView::Static);
        viewImages->setResizeMode(QListView::Adjust);
        viewImages->setLayoutMode(QListView::Batched);
        viewImages->setSpacing(2);
        viewImages->setGridSize(QSize(36, 36));
        viewImages->setViewMode(QListView::IconMode);
        viewImages->setUniformItemSizes(true);
        viewImages->setWordWrap(true);

        gridLayout_2->addWidget(viewImages, 3, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetSvgMarker);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy6);

        gridLayout_2->addWidget(mDataDefinedPropertiesButton, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFileLineEdit = new QLineEdit(WidgetSvgMarker);
        mFileLineEdit->setObjectName(QString::fromUtf8("mFileLineEdit"));

        horizontalLayout_2->addWidget(mFileLineEdit);

        mFileToolButton = new QToolButton(WidgetSvgMarker);
        mFileToolButton->setObjectName(QString::fromUtf8("mFileToolButton"));

        horizontalLayout_2->addWidget(mFileToolButton);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, spinAngle);
        QWidget::setTabOrder(spinAngle, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mChangeBorderColorButton);
        QWidget::setTabOrder(mChangeBorderColorButton, mBorderWidthSpinBox);
        QWidget::setTabOrder(mBorderWidthSpinBox, mBorderWidthUnitWidget);
        QWidget::setTabOrder(mBorderWidthUnitWidget, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mDataDefinedPropertiesButton);
        QWidget::setTabOrder(mDataDefinedPropertiesButton, viewGroups);
        QWidget::setTabOrder(viewGroups, viewImages);
        QWidget::setTabOrder(viewImages, mFileLineEdit);
        QWidget::setTabOrder(mFileLineEdit, mFileToolButton);

        retranslateUi(WidgetSvgMarker);

        QMetaObject::connectSlotsByName(WidgetSvgMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgMarker)
    {
        WidgetSvgMarker->setWindowTitle(QApplication::translate("WidgetSvgMarker", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSvgMarker", "Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetSvgMarker", "Angle", 0, QApplication::UnicodeUTF8));
        mColorLabel->setText(QApplication::translate("WidgetSvgMarker", "Colors", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetSvgMarker", "Fill", 0, QApplication::UnicodeUTF8));
        mChangeColorButton->setText(QString());
        mBorderColorLabel->setText(QApplication::translate("WidgetSvgMarker", "Border", 0, QApplication::UnicodeUTF8));
        mChangeBorderColorButton->setText(QString());
        mBorderWidthLabel->setText(QApplication::translate("WidgetSvgMarker", "Border width", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSvgMarker", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mAnchorPointLabel->setText(QApplication::translate("WidgetSvgMarker", "Anchor point", 0, QApplication::UnicodeUTF8));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSvgMarker", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSvgMarker", "HCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSvgMarker", "Right", 0, QApplication::UnicodeUTF8)
        );
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSvgMarker", "Top", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSvgMarker", "VCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSvgMarker", "Bottom", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("WidgetSvgMarker", "SVG Groups", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSvgMarker", "SVG Image", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetSvgMarker", "Data defined properties...", 0, QApplication::UnicodeUTF8));
        mFileToolButton->setText(QApplication::translate("WidgetSvgMarker", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgMarker: public Ui_WidgetSvgMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGMARKER_H
