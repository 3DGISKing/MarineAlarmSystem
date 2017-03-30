/********************************************************************************
** Form generated from reading UI file 'widget_simpleline.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLELINE_H
#define UI_WIDGET_SIMPLELINE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgspenstylecombobox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleLine
{
public:
    QGridLayout *gridLayout;
    QLabel *mDashPatternUnitLabel;
    QLabel *label_6;
    QCheckBox *mCustomCheckBox;
    QLabel *label_2;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColor;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *spinWidth;
    QgsUnitSelectionWidget *mPenWidthUnitWidget;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QgsPenStyleComboBox *cboPenStyle;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QgsPenCapStyleComboBox *cboCapStyle;
    QPushButton *mChangePatternButton;
    QgsUnitSelectionWidget *mDashPatternUnitWidget;
    QCheckBox *mDrawInsideCheckBox;
    QPushButton *mDataDefinedPropertiesButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetSimpleLine)
    {
        if (WidgetSimpleLine->objectName().isEmpty())
            WidgetSimpleLine->setObjectName(QString::fromUtf8("WidgetSimpleLine"));
        WidgetSimpleLine->resize(397, 348);
        gridLayout = new QGridLayout(WidgetSimpleLine);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDashPatternUnitLabel = new QLabel(WidgetSimpleLine);
        mDashPatternUnitLabel->setObjectName(QString::fromUtf8("mDashPatternUnitLabel"));

        gridLayout->addWidget(mDashPatternUnitLabel, 7, 0, 1, 1);

        label_6 = new QLabel(WidgetSimpleLine);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        mCustomCheckBox = new QCheckBox(WidgetSimpleLine);
        mCustomCheckBox->setObjectName(QString::fromUtf8("mCustomCheckBox"));

        gridLayout->addWidget(mCustomCheckBox, 6, 0, 1, 1);

        label_2 = new QLabel(WidgetSimpleLine);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(WidgetSimpleLine);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChangeColor = new QgsColorButtonV2(WidgetSimpleLine);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeColor->sizePolicy().hasHeightForWidth());
        btnChangeColor->setSizePolicy(sizePolicy);
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(btnChangeColor, 0, 1, 1, 1);

        label_4 = new QLabel(WidgetSimpleLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(WidgetSimpleLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(WidgetSimpleLine);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinWidth = new QDoubleSpinBox(WidgetSimpleLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinWidth->sizePolicy().hasHeightForWidth());
        spinWidth->setSizePolicy(sizePolicy1);
        spinWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinWidth->setDecimals(6);
        spinWidth->setMaximum(100000);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);

        horizontalLayout_2->addWidget(spinWidth);

        mPenWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mPenWidthUnitWidget->setObjectName(QString::fromUtf8("mPenWidthUnitWidget"));

        horizontalLayout_2->addWidget(mPenWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinOffset = new QDoubleSpinBox(WidgetSimpleLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy2);
        spinOffset->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-100000);
        spinOffset->setMaximum(100000);
        spinOffset->setSingleStep(0.2);

        horizontalLayout_3->addWidget(spinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 2);

        cboPenStyle = new QgsPenStyleComboBox(WidgetSimpleLine);
        cboPenStyle->setObjectName(QString::fromUtf8("cboPenStyle"));

        gridLayout->addWidget(cboPenStyle, 3, 1, 1, 2);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleLine);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout->addWidget(cboJoinStyle, 4, 1, 1, 2);

        cboCapStyle = new QgsPenCapStyleComboBox(WidgetSimpleLine);
        cboCapStyle->setObjectName(QString::fromUtf8("cboCapStyle"));

        gridLayout->addWidget(cboCapStyle, 5, 1, 1, 2);

        mChangePatternButton = new QPushButton(WidgetSimpleLine);
        mChangePatternButton->setObjectName(QString::fromUtf8("mChangePatternButton"));

        gridLayout->addWidget(mChangePatternButton, 6, 1, 1, 2);

        mDashPatternUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleLine);
        mDashPatternUnitWidget->setObjectName(QString::fromUtf8("mDashPatternUnitWidget"));

        gridLayout->addWidget(mDashPatternUnitWidget, 7, 1, 1, 2);

        mDrawInsideCheckBox = new QCheckBox(WidgetSimpleLine);
        mDrawInsideCheckBox->setObjectName(QString::fromUtf8("mDrawInsideCheckBox"));

        gridLayout->addWidget(mDrawInsideCheckBox, 8, 0, 1, 3);

        mDataDefinedPropertiesButton = new QPushButton(WidgetSimpleLine);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(mDataDefinedPropertiesButton, 9, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 3);

        QWidget::setTabOrder(btnChangeColor, spinWidth);
        QWidget::setTabOrder(spinWidth, mPenWidthUnitWidget);
        QWidget::setTabOrder(mPenWidthUnitWidget, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, cboPenStyle);
        QWidget::setTabOrder(cboPenStyle, cboJoinStyle);
        QWidget::setTabOrder(cboJoinStyle, cboCapStyle);
        QWidget::setTabOrder(cboCapStyle, mCustomCheckBox);
        QWidget::setTabOrder(mCustomCheckBox, mChangePatternButton);
        QWidget::setTabOrder(mChangePatternButton, mDashPatternUnitWidget);
        QWidget::setTabOrder(mDashPatternUnitWidget, mDrawInsideCheckBox);
        QWidget::setTabOrder(mDrawInsideCheckBox, mDataDefinedPropertiesButton);

        retranslateUi(WidgetSimpleLine);

        QMetaObject::connectSlotsByName(WidgetSimpleLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleLine)
    {
        WidgetSimpleLine->setWindowTitle(QApplication::translate("WidgetSimpleLine", "Form", 0, QApplication::UnicodeUTF8));
        mDashPatternUnitLabel->setText(QApplication::translate("WidgetSimpleLine", "Dash pattern unit", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetSimpleLine", "Cap style", 0, QApplication::UnicodeUTF8));
        mCustomCheckBox->setText(QApplication::translate("WidgetSimpleLine", "Use custom dash pattern", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetSimpleLine", "Pen width", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSimpleLine", "Color", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QString());
        label_4->setText(QApplication::translate("WidgetSimpleLine", "Offset", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetSimpleLine", "Pen style", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetSimpleLine", "Join style", 0, QApplication::UnicodeUTF8));
        mChangePatternButton->setText(QApplication::translate("WidgetSimpleLine", "Change", 0, QApplication::UnicodeUTF8));
        mDrawInsideCheckBox->setText(QApplication::translate("WidgetSimpleLine", "Draw line only inside polygon", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetSimpleLine", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleLine: public Ui_WidgetSimpleLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLELINE_H
