/********************************************************************************
** Form generated from reading UI file 'widget_simplemarker.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEMARKER_H
#define UI_WIDGET_SIMPLEMARKER_H

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
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgspenstylecombobox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleMarker
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QgsColorButtonV2 *btnChangeColorFill;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColorBorder;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QLabel *mOutlineStyleLabel;
    QgsPenStyleComboBox *mOutlineStyleComboBox;
    QLabel *mOutlineWidthLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *mOutlineWidthSpinBox;
    QgsUnitSelectionWidget *mOutlineWidthUnitWidget;
    QLabel *label_4;
    QDoubleSpinBox *spinAngle;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *mAnchorPointLabel;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *mHorizontalAnchorComboBox;
    QComboBox *mVerticalAnchorComboBox;
    QPushButton *mDataDefinedPropertiesButton;
    QListWidget *lstNames;

    void setupUi(QWidget *WidgetSimpleMarker)
    {
        if (WidgetSimpleMarker->objectName().isEmpty())
            WidgetSimpleMarker->setObjectName(QString::fromUtf8("WidgetSimpleMarker"));
        WidgetSimpleMarker->resize(408, 424);
        gridLayout = new QGridLayout(WidgetSimpleMarker);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(WidgetSimpleMarker);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(WidgetSimpleMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        btnChangeColorFill = new QgsColorButtonV2(WidgetSimpleMarker);
        btnChangeColorFill->setObjectName(QString::fromUtf8("btnChangeColorFill"));
        btnChangeColorFill->setMinimumSize(QSize(120, 0));
        btnChangeColorFill->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColorFill);

        label = new QLabel(WidgetSimpleMarker);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        btnChangeColorBorder = new QgsColorButtonV2(WidgetSimpleMarker);
        btnChangeColorBorder->setObjectName(QString::fromUtf8("btnChangeColorBorder"));
        btnChangeColorBorder->setMinimumSize(QSize(120, 0));
        btnChangeColorBorder->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColorBorder);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_3 = new QLabel(WidgetSimpleMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinSize = new QDoubleSpinBox(WidgetSimpleMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy1);
        spinSize->setDecimals(6);
        spinSize->setMaximum(100000);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);

        horizontalLayout_3->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));

        horizontalLayout_3->addWidget(mSizeUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        mOutlineStyleLabel = new QLabel(WidgetSimpleMarker);
        mOutlineStyleLabel->setObjectName(QString::fromUtf8("mOutlineStyleLabel"));

        gridLayout->addWidget(mOutlineStyleLabel, 2, 0, 1, 1);

        mOutlineStyleComboBox = new QgsPenStyleComboBox(WidgetSimpleMarker);
        mOutlineStyleComboBox->setObjectName(QString::fromUtf8("mOutlineStyleComboBox"));

        gridLayout->addWidget(mOutlineStyleComboBox, 2, 1, 1, 1);

        mOutlineWidthLabel = new QLabel(WidgetSimpleMarker);
        mOutlineWidthLabel->setObjectName(QString::fromUtf8("mOutlineWidthLabel"));

        gridLayout->addWidget(mOutlineWidthLabel, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mOutlineWidthSpinBox = new QDoubleSpinBox(WidgetSimpleMarker);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mOutlineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutlineWidthSpinBox->setSizePolicy(sizePolicy1);
        mOutlineWidthSpinBox->setSingleStep(0.2);
        mOutlineWidthSpinBox->setDecimals(6);

        horizontalLayout_4->addWidget(mOutlineWidthSpinBox);

        mOutlineWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mOutlineWidthUnitWidget->setObjectName(QString::fromUtf8("mOutlineWidthUnitWidget"));

        horizontalLayout_4->addWidget(mOutlineWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_4 = new QLabel(WidgetSimpleMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(WidgetSimpleMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout->addWidget(spinAngle, 4, 1, 1, 1);

        label_5 = new QLabel(WidgetSimpleMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-100);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetSimpleMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-100);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleMarker);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetSimpleMarker);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout->addWidget(mAnchorPointLabel, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mHorizontalAnchorComboBox = new QComboBox(WidgetSimpleMarker);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        horizontalLayout_5->addWidget(mHorizontalAnchorComboBox);

        mVerticalAnchorComboBox = new QComboBox(WidgetSimpleMarker);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        horizontalLayout_5->addWidget(mVerticalAnchorComboBox);


        gridLayout->addLayout(horizontalLayout_5, 6, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetSimpleMarker);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mDataDefinedPropertiesButton, 7, 0, 1, 2);

        lstNames = new QListWidget(WidgetSimpleMarker);
        lstNames->setObjectName(QString::fromUtf8("lstNames"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lstNames->sizePolicy().hasHeightForWidth());
        lstNames->setSizePolicy(sizePolicy3);
        lstNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstNames->setIconSize(QSize(20, 20));
        lstNames->setMovement(QListView::Static);
        lstNames->setFlow(QListView::LeftToRight);
        lstNames->setResizeMode(QListView::Adjust);
        lstNames->setSpacing(4);
        lstNames->setGridSize(QSize(30, 25));
        lstNames->setViewMode(QListView::IconMode);
        lstNames->setWordWrap(true);

        gridLayout->addWidget(lstNames, 8, 0, 1, 2);

        QWidget::setTabOrder(btnChangeColorFill, btnChangeColorBorder);
        QWidget::setTabOrder(btnChangeColorBorder, spinSize);
        QWidget::setTabOrder(spinSize, mSizeUnitWidget);
        QWidget::setTabOrder(mSizeUnitWidget, mOutlineStyleComboBox);
        QWidget::setTabOrder(mOutlineStyleComboBox, mOutlineWidthSpinBox);
        QWidget::setTabOrder(mOutlineWidthSpinBox, mOutlineWidthUnitWidget);
        QWidget::setTabOrder(mOutlineWidthUnitWidget, spinAngle);
        QWidget::setTabOrder(spinAngle, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mDataDefinedPropertiesButton);
        QWidget::setTabOrder(mDataDefinedPropertiesButton, lstNames);

        retranslateUi(WidgetSimpleMarker);

        QMetaObject::connectSlotsByName(WidgetSimpleMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleMarker)
    {
        WidgetSimpleMarker->setWindowTitle(QApplication::translate("WidgetSimpleMarker", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetSimpleMarker", "Colors", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSimpleMarker", "Fill", 0, QApplication::UnicodeUTF8));
        btnChangeColorFill->setText(QString());
        label->setText(QApplication::translate("WidgetSimpleMarker", "Border", 0, QApplication::UnicodeUTF8));
        btnChangeColorBorder->setText(QString());
        label_3->setText(QApplication::translate("WidgetSimpleMarker", "Size", 0, QApplication::UnicodeUTF8));
        mOutlineStyleLabel->setText(QApplication::translate("WidgetSimpleMarker", "Outline style", 0, QApplication::UnicodeUTF8));
        mOutlineWidthLabel->setText(QApplication::translate("WidgetSimpleMarker", "Outline width", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSimpleMarker", "Angle", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("WidgetSimpleMarker", " \302\260", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetSimpleMarker", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mAnchorPointLabel->setText(QApplication::translate("WidgetSimpleMarker", "Anchor point", 0, QApplication::UnicodeUTF8));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSimpleMarker", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSimpleMarker", "HCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSimpleMarker", "Right", 0, QApplication::UnicodeUTF8)
        );
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetSimpleMarker", "Top", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSimpleMarker", "VCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetSimpleMarker", "Bottom", 0, QApplication::UnicodeUTF8)
        );
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetSimpleMarker", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleMarker: public Ui_WidgetSimpleMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEMARKER_H
