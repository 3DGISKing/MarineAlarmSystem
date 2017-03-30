/********************************************************************************
** Form generated from reading UI file 'widget_shapeburstfill.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SHAPEBURSTFILL_H
#define UI_WIDGET_SHAPEBURSTFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgscolorrampcombobox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetShapeburstFill
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *mGradientTypeGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioTwoColor;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButtonV2 *btnChangeColor;
    QgsColorButtonV2 *btnChangeColor2;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioColorRamp;
    QHBoxLayout *horizontalLayout_8;
    QgsColorRampComboBox *cboGradientColorRamp;
    QPushButton *mButtonEditRamp;
    QGroupBox *mShadeDistanceGroupBox;
    QFormLayout *formLayout_3;
    QRadioButton *mRadioUseWholeShape;
    QCheckBox *mIgnoreRingsCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mRadioUseMaxDistance;
    QDoubleSpinBox *mSpinMaxDistance;
    QgsUnitSelectionWidget *mDistanceUnitWidget;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSlider *mBlurSlider;
    QSpinBox *mSpinBlurRadius;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetShapeburstFill)
    {
        if (WidgetShapeburstFill->objectName().isEmpty())
            WidgetShapeburstFill->setObjectName(QString::fromUtf8("WidgetShapeburstFill"));
        WidgetShapeburstFill->resize(497, 365);
        gridLayout_2 = new QGridLayout(WidgetShapeburstFill);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mGradientTypeGroupBox = new QGroupBox(WidgetShapeburstFill);
        mGradientTypeGroupBox->setObjectName(QString::fromUtf8("mGradientTypeGroupBox"));
        gridLayout = new QGridLayout(mGradientTypeGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioTwoColor = new QRadioButton(mGradientTypeGroupBox);
        radioTwoColor->setObjectName(QString::fromUtf8("radioTwoColor"));

        gridLayout->addWidget(radioTwoColor, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnChangeColor = new QgsColorButtonV2(mGradientTypeGroupBox);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColor);

        btnChangeColor2 = new QgsColorButtonV2(mGradientTypeGroupBox);
        btnChangeColor2->setObjectName(QString::fromUtf8("btnChangeColor2"));
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColor2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        radioColorRamp = new QRadioButton(mGradientTypeGroupBox);
        radioColorRamp->setObjectName(QString::fromUtf8("radioColorRamp"));

        gridLayout->addWidget(radioColorRamp, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        cboGradientColorRamp = new QgsColorRampComboBox(mGradientTypeGroupBox);
        cboGradientColorRamp->setObjectName(QString::fromUtf8("cboGradientColorRamp"));

        horizontalLayout_8->addWidget(cboGradientColorRamp);

        mButtonEditRamp = new QPushButton(mGradientTypeGroupBox);
        mButtonEditRamp->setObjectName(QString::fromUtf8("mButtonEditRamp"));
        mButtonEditRamp->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(mButtonEditRamp);


        gridLayout->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        gridLayout_2->addWidget(mGradientTypeGroupBox, 0, 0, 1, 2);

        mShadeDistanceGroupBox = new QGroupBox(WidgetShapeburstFill);
        mShadeDistanceGroupBox->setObjectName(QString::fromUtf8("mShadeDistanceGroupBox"));
        formLayout_3 = new QFormLayout(mShadeDistanceGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        mRadioUseWholeShape = new QRadioButton(mShadeDistanceGroupBox);
        mRadioUseWholeShape->setObjectName(QString::fromUtf8("mRadioUseWholeShape"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, mRadioUseWholeShape);

        mIgnoreRingsCheckBox = new QCheckBox(mShadeDistanceGroupBox);
        mIgnoreRingsCheckBox->setObjectName(QString::fromUtf8("mIgnoreRingsCheckBox"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, mIgnoreRingsCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mRadioUseMaxDistance = new QRadioButton(mShadeDistanceGroupBox);
        mRadioUseMaxDistance->setObjectName(QString::fromUtf8("mRadioUseMaxDistance"));

        horizontalLayout_3->addWidget(mRadioUseMaxDistance);

        mSpinMaxDistance = new QDoubleSpinBox(mShadeDistanceGroupBox);
        mSpinMaxDistance->setObjectName(QString::fromUtf8("mSpinMaxDistance"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSpinMaxDistance->sizePolicy().hasHeightForWidth());
        mSpinMaxDistance->setSizePolicy(sizePolicy);
        mSpinMaxDistance->setMaximum(1e+09);
        mSpinMaxDistance->setValue(5);

        horizontalLayout_3->addWidget(mSpinMaxDistance);

        mDistanceUnitWidget = new QgsUnitSelectionWidget(mShadeDistanceGroupBox);
        mDistanceUnitWidget->setObjectName(QString::fromUtf8("mDistanceUnitWidget"));

        horizontalLayout_3->addWidget(mDistanceUnitWidget);


        formLayout_3->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_3);


        gridLayout_2->addWidget(mShadeDistanceGroupBox, 1, 0, 1, 2);

        label = new QLabel(WidgetShapeburstFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mBlurSlider = new QSlider(WidgetShapeburstFill);
        mBlurSlider->setObjectName(QString::fromUtf8("mBlurSlider"));
        mBlurSlider->setMaximum(18);
        mBlurSlider->setPageStep(3);
        mBlurSlider->setOrientation(Qt::Horizontal);
        mBlurSlider->setTickPosition(QSlider::TicksBelow);
        mBlurSlider->setTickInterval(1);

        horizontalLayout_4->addWidget(mBlurSlider);

        mSpinBlurRadius = new QSpinBox(WidgetShapeburstFill);
        mSpinBlurRadius->setObjectName(QString::fromUtf8("mSpinBlurRadius"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSpinBlurRadius->sizePolicy().hasHeightForWidth());
        mSpinBlurRadius->setSizePolicy(sizePolicy1);
        mSpinBlurRadius->setMaximum(18);

        horizontalLayout_4->addWidget(mSpinBlurRadius);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        label_6 = new QLabel(WidgetShapeburstFill);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetShapeburstFill);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-999);
        spinOffsetX->setMaximum(999);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetShapeburstFill);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-999);
        spinOffsetY->setMaximum(999);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetShapeburstFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetShapeburstFill);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(mDataDefinedPropertiesButton, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        QWidget::setTabOrder(radioTwoColor, btnChangeColor);
        QWidget::setTabOrder(btnChangeColor, btnChangeColor2);
        QWidget::setTabOrder(btnChangeColor2, radioColorRamp);
        QWidget::setTabOrder(radioColorRamp, cboGradientColorRamp);
        QWidget::setTabOrder(cboGradientColorRamp, mRadioUseWholeShape);
        QWidget::setTabOrder(mRadioUseWholeShape, mRadioUseMaxDistance);
        QWidget::setTabOrder(mRadioUseMaxDistance, mSpinMaxDistance);
        QWidget::setTabOrder(mSpinMaxDistance, mDistanceUnitWidget);
        QWidget::setTabOrder(mDistanceUnitWidget, mIgnoreRingsCheckBox);
        QWidget::setTabOrder(mIgnoreRingsCheckBox, mBlurSlider);
        QWidget::setTabOrder(mBlurSlider, mSpinBlurRadius);
        QWidget::setTabOrder(mSpinBlurRadius, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mDataDefinedPropertiesButton);

        retranslateUi(WidgetShapeburstFill);
        QObject::connect(mRadioUseMaxDistance, SIGNAL(toggled(bool)), mSpinMaxDistance, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor2, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), cboGradientColorRamp, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(WidgetShapeburstFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetShapeburstFill)
    {
        WidgetShapeburstFill->setWindowTitle(QApplication::translate("WidgetShapeburstFill", "Form", 0, QApplication::UnicodeUTF8));
        mGradientTypeGroupBox->setTitle(QApplication::translate("WidgetShapeburstFill", "Gradient colors", 0, QApplication::UnicodeUTF8));
        radioTwoColor->setText(QApplication::translate("WidgetShapeburstFill", "Two color", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QString());
        btnChangeColor2->setText(QString());
        radioColorRamp->setText(QApplication::translate("WidgetShapeburstFill", "Color ramp", 0, QApplication::UnicodeUTF8));
        mButtonEditRamp->setText(QApplication::translate("WidgetShapeburstFill", "Edit", 0, QApplication::UnicodeUTF8));
        mShadeDistanceGroupBox->setTitle(QApplication::translate("WidgetShapeburstFill", "Shading style", 0, QApplication::UnicodeUTF8));
        mRadioUseWholeShape->setText(QApplication::translate("WidgetShapeburstFill", "Shade whole shape", 0, QApplication::UnicodeUTF8));
        mIgnoreRingsCheckBox->setText(QApplication::translate("WidgetShapeburstFill", "Ignore rings in polygons while shading", 0, QApplication::UnicodeUTF8));
        mRadioUseMaxDistance->setText(QApplication::translate("WidgetShapeburstFill", "Shade to a set distance:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetShapeburstFill", "Blur strength", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetShapeburstFill", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetShapeburstFill", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetShapeburstFill: public Ui_WidgetShapeburstFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SHAPEBURSTFILL_H
