/********************************************************************************
** Form generated from reading UI file 'widget_simplefill.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIMPLEFILL_H
#define UI_WIDGET_SIMPLEFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgsbrushstylecombobox.h"
#include "qgscolorbuttonv2.h"
#include "qgspenstylecombobox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetSimpleFill
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QgsColorButtonV2 *btnChangeColor;
    QLabel *label_3;
    QgsColorButtonV2 *btnChangeBorderColor;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QgsBrushStyleComboBox *cboFillStyle;
    QLabel *label_4;
    QgsPenStyleComboBox *cboBorderStyle;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *cboJoinStyle;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spinBorderWidth;
    QgsUnitSelectionWidget *mBorderWidthUnitWidget;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetSimpleFill)
    {
        if (WidgetSimpleFill->objectName().isEmpty())
            WidgetSimpleFill->setObjectName(QString::fromUtf8("WidgetSimpleFill"));
        WidgetSimpleFill->resize(457, 342);
        gridLayout = new QGridLayout(WidgetSimpleFill);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetSimpleFill);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(WidgetSimpleFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_7);

        btnChangeColor = new QgsColorButtonV2(WidgetSimpleFill);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColor);

        label_3 = new QLabel(WidgetSimpleFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        btnChangeBorderColor = new QgsColorButtonV2(WidgetSimpleFill);
        btnChangeBorderColor->setObjectName(QString::fromUtf8("btnChangeBorderColor"));
        btnChangeBorderColor->setMinimumSize(QSize(120, 0));
        btnChangeBorderColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeBorderColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_2 = new QLabel(WidgetSimpleFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cboFillStyle = new QgsBrushStyleComboBox(WidgetSimpleFill);
        cboFillStyle->setObjectName(QString::fromUtf8("cboFillStyle"));

        gridLayout->addWidget(cboFillStyle, 1, 1, 1, 1);

        label_4 = new QLabel(WidgetSimpleFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        cboBorderStyle = new QgsPenStyleComboBox(WidgetSimpleFill);
        cboBorderStyle->setObjectName(QString::fromUtf8("cboBorderStyle"));

        gridLayout->addWidget(cboBorderStyle, 2, 1, 1, 1);

        label_8 = new QLabel(WidgetSimpleFill);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        cboJoinStyle = new QgsPenJoinStyleComboBox(WidgetSimpleFill);
        cboJoinStyle->setObjectName(QString::fromUtf8("cboJoinStyle"));

        gridLayout->addWidget(cboJoinStyle, 3, 1, 1, 1);

        label_5 = new QLabel(WidgetSimpleFill);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBorderWidth = new QDoubleSpinBox(WidgetSimpleFill);
        spinBorderWidth->setObjectName(QString::fromUtf8("spinBorderWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBorderWidth->sizePolicy().hasHeightForWidth());
        spinBorderWidth->setSizePolicy(sizePolicy1);
        spinBorderWidth->setDecimals(6);
        spinBorderWidth->setMaximum(100000);
        spinBorderWidth->setSingleStep(0.2);

        horizontalLayout_3->addWidget(spinBorderWidth);

        mBorderWidthUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleFill);
        mBorderWidthUnitWidget->setObjectName(QString::fromUtf8("mBorderWidthUnitWidget"));

        horizontalLayout_3->addWidget(mBorderWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 4, 1, 1, 1);

        label_6 = new QLabel(WidgetSimpleFill);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetSimpleFill);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-999);
        spinOffsetX->setMaximum(999);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetSimpleFill);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-999);
        spinOffsetY->setMaximum(999);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetSimpleFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetSimpleFill);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mDataDefinedPropertiesButton, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);


        retranslateUi(WidgetSimpleFill);

        QMetaObject::connectSlotsByName(WidgetSimpleFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetSimpleFill)
    {
        WidgetSimpleFill->setWindowTitle(QApplication::translate("WidgetSimpleFill", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetSimpleFill", "Colors", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("WidgetSimpleFill", "Fill", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QString());
        label_3->setText(QApplication::translate("WidgetSimpleFill", "Border", 0, QApplication::UnicodeUTF8));
        btnChangeBorderColor->setText(QString());
        label_2->setText(QApplication::translate("WidgetSimpleFill", "Fill style", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetSimpleFill", "Border style", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("WidgetSimpleFill", "Join style", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetSimpleFill", "Border width", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetSimpleFill", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetSimpleFill", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetSimpleFill: public Ui_WidgetSimpleFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIMPLEFILL_H
