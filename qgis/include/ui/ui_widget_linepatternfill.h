/********************************************************************************
** Form generated from reading UI file 'widget_linepatternfill.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_LINEPATTERNFILL_H
#define UI_WIDGET_LINEPATTERNFILL_H

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

class Ui_WidgetLinePatternFill
{
public:
    QFormLayout *formLayout;
    QLabel *mAngleLabel;
    QDoubleSpinBox *mAngleSpinBox;
    QLabel *mDistanceLabel;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *mDistanceSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QLabel *mOffsetLabel;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *mOffsetSpinBox;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;

    void setupUi(QWidget *WidgetLinePatternFill)
    {
        if (WidgetLinePatternFill->objectName().isEmpty())
            WidgetLinePatternFill->setObjectName(QString::fromUtf8("WidgetLinePatternFill"));
        WidgetLinePatternFill->resize(368, 293);
        formLayout = new QFormLayout(WidgetLinePatternFill);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setHorizontalSpacing(28);
        formLayout->setContentsMargins(1, 1, 1, 1);
        mAngleLabel = new QLabel(WidgetLinePatternFill);
        mAngleLabel->setObjectName(QString::fromUtf8("mAngleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mAngleLabel);

        mAngleSpinBox = new QDoubleSpinBox(WidgetLinePatternFill);
        mAngleSpinBox->setObjectName(QString::fromUtf8("mAngleSpinBox"));
        mAngleSpinBox->setMaximum(360);
        mAngleSpinBox->setSingleStep(0.5);

        formLayout->setWidget(0, QFormLayout::FieldRole, mAngleSpinBox);

        mDistanceLabel = new QLabel(WidgetLinePatternFill);
        mDistanceLabel->setObjectName(QString::fromUtf8("mDistanceLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, mDistanceLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDistanceSpinBox = new QDoubleSpinBox(WidgetLinePatternFill);
        mDistanceSpinBox->setObjectName(QString::fromUtf8("mDistanceSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mDistanceSpinBox->setSizePolicy(sizePolicy);
        mDistanceSpinBox->setDecimals(6);
        mDistanceSpinBox->setMaximum(1e+09);
        mDistanceSpinBox->setSingleStep(0.2);

        horizontalLayout->addWidget(mDistanceSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetLinePatternFill);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));

        horizontalLayout->addWidget(mDistanceUnitWidget);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        mOffsetLabel = new QLabel(WidgetLinePatternFill);
        mOffsetLabel->setObjectName(QString::fromUtf8("mOffsetLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, mOffsetLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mOffsetSpinBox = new QDoubleSpinBox(WidgetLinePatternFill);
        mOffsetSpinBox->setObjectName(QString::fromUtf8("mOffsetSpinBox"));
        sizePolicy.setHeightForWidth(mOffsetSpinBox->sizePolicy().hasHeightForWidth());
        mOffsetSpinBox->setSizePolicy(sizePolicy);
        mOffsetSpinBox->setDecimals(6);
        mOffsetSpinBox->setMinimum(-99);
        mOffsetSpinBox->setMaximum(1e+09);
        mOffsetSpinBox->setSingleStep(0.2);

        horizontalLayout_4->addWidget(mOffsetSpinBox);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetLinePatternFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout_4->addWidget(mOffsetUnitWidget);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        mDataDefinedPropertiesButton = new QPushButton(WidgetLinePatternFill);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::SpanningRole, mDataDefinedPropertiesButton);


        retranslateUi(WidgetLinePatternFill);

        QMetaObject::connectSlotsByName(WidgetLinePatternFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetLinePatternFill)
    {
        WidgetLinePatternFill->setWindowTitle(QApplication::translate("WidgetLinePatternFill", "Form", 0, QApplication::UnicodeUTF8));
        mAngleLabel->setText(QApplication::translate("WidgetLinePatternFill", "Angle", 0, QApplication::UnicodeUTF8));
        mDistanceLabel->setText(QApplication::translate("WidgetLinePatternFill", "Distance", 0, QApplication::UnicodeUTF8));
        mOffsetLabel->setText(QApplication::translate("WidgetLinePatternFill", "Offset", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetLinePatternFill", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetLinePatternFill: public Ui_WidgetLinePatternFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LINEPATTERNFILL_H
