/********************************************************************************
** Form generated from reading UI file 'widget_vectorfield.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_VECTORFIELD_H
#define UI_WIDGET_VECTORFIELD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetVectorFieldBase
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *mXAttributeLabel;
    QComboBox *mXAttributeComboBox;
    QLabel *mYAttributeLabel;
    QComboBox *mYAttributeComboBox;
    QLabel *mDistanceUnitLabel;
    QLabel *mScaleLabel;
    QDoubleSpinBox *mScaleSpinBox;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *mFieldTypeGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mHeightRadioButton;
    QRadioButton *mPolarRadioButton;
    QRadioButton *mCartesianRadioButton;
    QGroupBox *mAngleUnitsGroupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *mDegreesRadioButton;
    QRadioButton *mRadiansRadioButton;
    QGroupBox *mAngleOrientationGroupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *mClockwiseFromNorthRadioButton;
    QRadioButton *mCounterclockwiseFromEastRadioButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetVectorFieldBase)
    {
        if (WidgetVectorFieldBase->objectName().isEmpty())
            WidgetVectorFieldBase->setObjectName(QString::fromUtf8("WidgetVectorFieldBase"));
        WidgetVectorFieldBase->resize(338, 378);
        verticalLayout = new QVBoxLayout(WidgetVectorFieldBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setHorizontalSpacing(28);
        mXAttributeLabel = new QLabel(WidgetVectorFieldBase);
        mXAttributeLabel->setObjectName(QString::fromUtf8("mXAttributeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mXAttributeLabel->sizePolicy().hasHeightForWidth());
        mXAttributeLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, mXAttributeLabel);

        mXAttributeComboBox = new QComboBox(WidgetVectorFieldBase);
        mXAttributeComboBox->setObjectName(QString::fromUtf8("mXAttributeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mXAttributeComboBox->sizePolicy().hasHeightForWidth());
        mXAttributeComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, mXAttributeComboBox);

        mYAttributeLabel = new QLabel(WidgetVectorFieldBase);
        mYAttributeLabel->setObjectName(QString::fromUtf8("mYAttributeLabel"));
        sizePolicy.setHeightForWidth(mYAttributeLabel->sizePolicy().hasHeightForWidth());
        mYAttributeLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, mYAttributeLabel);

        mYAttributeComboBox = new QComboBox(WidgetVectorFieldBase);
        mYAttributeComboBox->setObjectName(QString::fromUtf8("mYAttributeComboBox"));
        sizePolicy1.setHeightForWidth(mYAttributeComboBox->sizePolicy().hasHeightForWidth());
        mYAttributeComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, mYAttributeComboBox);

        mDistanceUnitLabel = new QLabel(WidgetVectorFieldBase);
        mDistanceUnitLabel->setObjectName(QString::fromUtf8("mDistanceUnitLabel"));
        sizePolicy.setHeightForWidth(mDistanceUnitLabel->sizePolicy().hasHeightForWidth());
        mDistanceUnitLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, mDistanceUnitLabel);

        mScaleLabel = new QLabel(WidgetVectorFieldBase);
        mScaleLabel->setObjectName(QString::fromUtf8("mScaleLabel"));
        sizePolicy.setHeightForWidth(mScaleLabel->sizePolicy().hasHeightForWidth());
        mScaleLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, mScaleLabel);

        mScaleSpinBox = new QDoubleSpinBox(WidgetVectorFieldBase);
        mScaleSpinBox->setObjectName(QString::fromUtf8("mScaleSpinBox"));
        sizePolicy1.setHeightForWidth(mScaleSpinBox->sizePolicy().hasHeightForWidth());
        mScaleSpinBox->setSizePolicy(sizePolicy1);
        mScaleSpinBox->setSingleStep(0.2);

        formLayout->setWidget(3, QFormLayout::FieldRole, mScaleSpinBox);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(WidgetVectorFieldBase);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mDistanceUnitWidget);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFieldTypeGroupBox = new QGroupBox(WidgetVectorFieldBase);
        mFieldTypeGroupBox->setObjectName(QString::fromUtf8("mFieldTypeGroupBox"));
        gridLayout = new QGridLayout(mFieldTypeGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mHeightRadioButton = new QRadioButton(mFieldTypeGroupBox);
        mHeightRadioButton->setObjectName(QString::fromUtf8("mHeightRadioButton"));

        gridLayout->addWidget(mHeightRadioButton, 2, 0, 1, 1);

        mPolarRadioButton = new QRadioButton(mFieldTypeGroupBox);
        mPolarRadioButton->setObjectName(QString::fromUtf8("mPolarRadioButton"));

        gridLayout->addWidget(mPolarRadioButton, 1, 0, 1, 1);

        mCartesianRadioButton = new QRadioButton(mFieldTypeGroupBox);
        mCartesianRadioButton->setObjectName(QString::fromUtf8("mCartesianRadioButton"));

        gridLayout->addWidget(mCartesianRadioButton, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(mFieldTypeGroupBox);

        mAngleUnitsGroupBox = new QGroupBox(WidgetVectorFieldBase);
        mAngleUnitsGroupBox->setObjectName(QString::fromUtf8("mAngleUnitsGroupBox"));
        gridLayout_3 = new QGridLayout(mAngleUnitsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mDegreesRadioButton = new QRadioButton(mAngleUnitsGroupBox);
        mDegreesRadioButton->setObjectName(QString::fromUtf8("mDegreesRadioButton"));

        gridLayout_3->addWidget(mDegreesRadioButton, 0, 0, 1, 1);

        mRadiansRadioButton = new QRadioButton(mAngleUnitsGroupBox);
        mRadiansRadioButton->setObjectName(QString::fromUtf8("mRadiansRadioButton"));

        gridLayout_3->addWidget(mRadiansRadioButton, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(mAngleUnitsGroupBox);


        verticalLayout->addLayout(horizontalLayout_2);

        mAngleOrientationGroupBox = new QGroupBox(WidgetVectorFieldBase);
        mAngleOrientationGroupBox->setObjectName(QString::fromUtf8("mAngleOrientationGroupBox"));
        verticalLayout_2 = new QVBoxLayout(mAngleOrientationGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mClockwiseFromNorthRadioButton = new QRadioButton(mAngleOrientationGroupBox);
        mClockwiseFromNorthRadioButton->setObjectName(QString::fromUtf8("mClockwiseFromNorthRadioButton"));

        verticalLayout_2->addWidget(mClockwiseFromNorthRadioButton);

        mCounterclockwiseFromEastRadioButton = new QRadioButton(mAngleOrientationGroupBox);
        mCounterclockwiseFromEastRadioButton->setObjectName(QString::fromUtf8("mCounterclockwiseFromEastRadioButton"));

        verticalLayout_2->addWidget(mCounterclockwiseFromEastRadioButton);


        verticalLayout->addWidget(mAngleOrientationGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(WidgetVectorFieldBase);

        QMetaObject::connectSlotsByName(WidgetVectorFieldBase);
    } // setupUi

    void retranslateUi(QWidget *WidgetVectorFieldBase)
    {
        WidgetVectorFieldBase->setWindowTitle(QApplication::translate("WidgetVectorFieldBase", "Form", 0, QApplication::UnicodeUTF8));
        mXAttributeLabel->setText(QApplication::translate("WidgetVectorFieldBase", "X attribute", 0, QApplication::UnicodeUTF8));
        mYAttributeLabel->setText(QApplication::translate("WidgetVectorFieldBase", "Y attribute", 0, QApplication::UnicodeUTF8));
        mDistanceUnitLabel->setText(QApplication::translate("WidgetVectorFieldBase", "Distance unit", 0, QApplication::UnicodeUTF8));
        mScaleLabel->setText(QApplication::translate("WidgetVectorFieldBase", "Scale", 0, QApplication::UnicodeUTF8));
        mFieldTypeGroupBox->setTitle(QApplication::translate("WidgetVectorFieldBase", "Vector field type", 0, QApplication::UnicodeUTF8));
        mHeightRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Height only", 0, QApplication::UnicodeUTF8));
        mPolarRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Polar", 0, QApplication::UnicodeUTF8));
        mCartesianRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Cartesian", 0, QApplication::UnicodeUTF8));
        mAngleUnitsGroupBox->setTitle(QApplication::translate("WidgetVectorFieldBase", "Angle units", 0, QApplication::UnicodeUTF8));
        mDegreesRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Degrees", 0, QApplication::UnicodeUTF8));
        mRadiansRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Radians", 0, QApplication::UnicodeUTF8));
        mAngleOrientationGroupBox->setTitle(QApplication::translate("WidgetVectorFieldBase", "Angle orientation", 0, QApplication::UnicodeUTF8));
        mClockwiseFromNorthRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Clockwise from north", 0, QApplication::UnicodeUTF8));
        mCounterclockwiseFromEastRadioButton->setText(QApplication::translate("WidgetVectorFieldBase", "Counterclockwise from east", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetVectorFieldBase: public Ui_WidgetVectorFieldBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_VECTORFIELD_H
