/********************************************************************************
** Form generated from reading UI file 'widget_pointpatternfill.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_POINTPATTERNFILL_H
#define UI_WIDGET_POINTPATTERNFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetPointPatternFill
{
public:
    QFormLayout *formLayout;
    QLabel *mHorizontalDistanceLabel;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *mHorizontalDistanceSpinBox;
    QgsUnitSelectionWidget *mHorizontalDistanceUnitWidget;
    QLabel *mVerticalDistanceLabel;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *mVerticalDistanceSpinBox;
    QgsUnitSelectionWidget *mVerticalDistanceUnitWidget;
    QLabel *mHorizontalDisplacementLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *mHorizontalDisplacementSpinBox;
    QgsUnitSelectionWidget *mHorizontalDisplacementUnitWidget;
    QLabel *mVerticalDisplacementLabel;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *mVerticalDisplacementSpinBox;
    QgsUnitSelectionWidget *mVerticalDisplacementUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;

    void setupUi(QWidget *WidgetPointPatternFill)
    {
        if (WidgetPointPatternFill->objectName().isEmpty())
            WidgetPointPatternFill->setObjectName(QString::fromUtf8("WidgetPointPatternFill"));
        WidgetPointPatternFill->resize(457, 271);
        formLayout = new QFormLayout(WidgetPointPatternFill);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setHorizontalSpacing(28);
        formLayout->setContentsMargins(1, 1, 1, 1);
        mHorizontalDistanceLabel = new QLabel(WidgetPointPatternFill);
        mHorizontalDistanceLabel->setObjectName(QString::fromUtf8("mHorizontalDistanceLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mHorizontalDistanceLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mHorizontalDistanceSpinBox = new QDoubleSpinBox(WidgetPointPatternFill);
        mHorizontalDistanceSpinBox->setObjectName(QString::fromUtf8("mHorizontalDistanceSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mHorizontalDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mHorizontalDistanceSpinBox->setSizePolicy(sizePolicy);
        mHorizontalDistanceSpinBox->setDecimals(6);
        mHorizontalDistanceSpinBox->setMaximum(1e+08);
        mHorizontalDistanceSpinBox->setSingleStep(0.2);

        horizontalLayout->addWidget(mHorizontalDistanceSpinBox);

        mHorizontalDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mHorizontalDistanceUnitWidget->setObjectName(QString::fromUtf8("mHorizontalDistanceUnitWidget"));

        horizontalLayout->addWidget(mHorizontalDistanceUnitWidget);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        mVerticalDistanceLabel = new QLabel(WidgetPointPatternFill);
        mVerticalDistanceLabel->setObjectName(QString::fromUtf8("mVerticalDistanceLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mVerticalDistanceLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mVerticalDistanceSpinBox = new QDoubleSpinBox(WidgetPointPatternFill);
        mVerticalDistanceSpinBox->setObjectName(QString::fromUtf8("mVerticalDistanceSpinBox"));
        sizePolicy.setHeightForWidth(mVerticalDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mVerticalDistanceSpinBox->setSizePolicy(sizePolicy);
        mVerticalDistanceSpinBox->setDecimals(6);
        mVerticalDistanceSpinBox->setMaximum(1e+09);
        mVerticalDistanceSpinBox->setSingleStep(0.2);

        horizontalLayout_2->addWidget(mVerticalDistanceSpinBox);

        mVerticalDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mVerticalDistanceUnitWidget->setObjectName(QString::fromUtf8("mVerticalDistanceUnitWidget"));

        horizontalLayout_2->addWidget(mVerticalDistanceUnitWidget);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        mHorizontalDisplacementLabel = new QLabel(WidgetPointPatternFill);
        mHorizontalDisplacementLabel->setObjectName(QString::fromUtf8("mHorizontalDisplacementLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mHorizontalDisplacementLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mHorizontalDisplacementSpinBox = new QDoubleSpinBox(WidgetPointPatternFill);
        mHorizontalDisplacementSpinBox->setObjectName(QString::fromUtf8("mHorizontalDisplacementSpinBox"));
        sizePolicy.setHeightForWidth(mHorizontalDisplacementSpinBox->sizePolicy().hasHeightForWidth());
        mHorizontalDisplacementSpinBox->setSizePolicy(sizePolicy);
        mHorizontalDisplacementSpinBox->setDecimals(6);
        mHorizontalDisplacementSpinBox->setMaximum(1e+07);
        mHorizontalDisplacementSpinBox->setSingleStep(0.2);

        horizontalLayout_4->addWidget(mHorizontalDisplacementSpinBox);

        mHorizontalDisplacementUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mHorizontalDisplacementUnitWidget->setObjectName(QString::fromUtf8("mHorizontalDisplacementUnitWidget"));

        horizontalLayout_4->addWidget(mHorizontalDisplacementUnitWidget);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        mVerticalDisplacementLabel = new QLabel(WidgetPointPatternFill);
        mVerticalDisplacementLabel->setObjectName(QString::fromUtf8("mVerticalDisplacementLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mVerticalDisplacementLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mVerticalDisplacementSpinBox = new QDoubleSpinBox(WidgetPointPatternFill);
        mVerticalDisplacementSpinBox->setObjectName(QString::fromUtf8("mVerticalDisplacementSpinBox"));
        sizePolicy.setHeightForWidth(mVerticalDisplacementSpinBox->sizePolicy().hasHeightForWidth());
        mVerticalDisplacementSpinBox->setSizePolicy(sizePolicy);
        mVerticalDisplacementSpinBox->setDecimals(6);
        mVerticalDisplacementSpinBox->setMaximum(1e+09);
        mVerticalDisplacementSpinBox->setSingleStep(0.2);

        horizontalLayout_5->addWidget(mVerticalDisplacementSpinBox);

        mVerticalDisplacementUnitWidget = new QgsUnitSelectionWidget(WidgetPointPatternFill);
        mVerticalDisplacementUnitWidget->setObjectName(QString::fromUtf8("mVerticalDisplacementUnitWidget"));

        horizontalLayout_5->addWidget(mVerticalDisplacementUnitWidget);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_5);

        mDataDefinedPropertiesButton = new QPushButton(WidgetPointPatternFill);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::SpanningRole, mDataDefinedPropertiesButton);


        retranslateUi(WidgetPointPatternFill);

        QMetaObject::connectSlotsByName(WidgetPointPatternFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetPointPatternFill)
    {
        WidgetPointPatternFill->setWindowTitle(QApplication::translate("WidgetPointPatternFill", "Form", 0, QApplication::UnicodeUTF8));
        mHorizontalDistanceLabel->setText(QApplication::translate("WidgetPointPatternFill", "Horizontal distance", 0, QApplication::UnicodeUTF8));
        mVerticalDistanceLabel->setText(QApplication::translate("WidgetPointPatternFill", "Vertical distance", 0, QApplication::UnicodeUTF8));
        mHorizontalDisplacementLabel->setText(QApplication::translate("WidgetPointPatternFill", "Horizontal displacement", 0, QApplication::UnicodeUTF8));
        mVerticalDisplacementLabel->setText(QApplication::translate("WidgetPointPatternFill", "Vertical displacement", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetPointPatternFill", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetPointPatternFill: public Ui_WidgetPointPatternFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_POINTPATTERNFILL_H
