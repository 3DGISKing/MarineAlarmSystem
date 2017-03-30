/********************************************************************************
** Form generated from reading UI file 'widget_gradientfill.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GRADIENTFILL_H
#define UI_WIDGET_GRADIENTFILL_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgscolorrampcombobox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGradientFill
{
public:
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
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cboGradientType;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cboCoordinateMode;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cboGradientSpread;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *spinRefPoint1X;
    QLabel *label_7;
    QDoubleSpinBox *spinRefPoint1Y;
    QCheckBox *checkRefPoint1Centroid;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QDoubleSpinBox *spinRefPoint2X;
    QLabel *label_10;
    QDoubleSpinBox *spinRefPoint2Y;
    QCheckBox *checkRefPoint2Centroid;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_11;
    QDoubleSpinBox *mSpinAngle;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetGradientFill)
    {
        if (WidgetGradientFill->objectName().isEmpty())
            WidgetGradientFill->setObjectName(QString::fromUtf8("WidgetGradientFill"));
        WidgetGradientFill->resize(494, 358);
        gridLayout = new QGridLayout(WidgetGradientFill);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(28);
        radioTwoColor = new QRadioButton(WidgetGradientFill);
        radioTwoColor->setObjectName(QString::fromUtf8("radioTwoColor"));

        gridLayout->addWidget(radioTwoColor, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnChangeColor = new QgsColorButtonV2(WidgetGradientFill);
        btnChangeColor->setObjectName(QString::fromUtf8("btnChangeColor"));
        btnChangeColor->setMinimumSize(QSize(120, 0));
        btnChangeColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColor);

        btnChangeColor2 = new QgsColorButtonV2(WidgetGradientFill);
        btnChangeColor2->setObjectName(QString::fromUtf8("btnChangeColor2"));
        btnChangeColor2->setMinimumSize(QSize(120, 0));
        btnChangeColor2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(btnChangeColor2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        radioColorRamp = new QRadioButton(WidgetGradientFill);
        radioColorRamp->setObjectName(QString::fromUtf8("radioColorRamp"));

        gridLayout->addWidget(radioColorRamp, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        cboGradientColorRamp = new QgsColorRampComboBox(WidgetGradientFill);
        cboGradientColorRamp->setObjectName(QString::fromUtf8("cboGradientColorRamp"));

        horizontalLayout_8->addWidget(cboGradientColorRamp);

        mButtonEditRamp = new QPushButton(WidgetGradientFill);
        mButtonEditRamp->setObjectName(QString::fromUtf8("mButtonEditRamp"));
        mButtonEditRamp->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(mButtonEditRamp);


        gridLayout->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        label_2 = new QLabel(WidgetGradientFill);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        cboGradientType = new QComboBox(WidgetGradientFill);
        cboGradientType->setObjectName(QString::fromUtf8("cboGradientType"));

        horizontalLayout_4->addWidget(cboGradientType);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        label_3 = new QLabel(WidgetGradientFill);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cboCoordinateMode = new QComboBox(WidgetGradientFill);
        cboCoordinateMode->setObjectName(QString::fromUtf8("cboCoordinateMode"));

        horizontalLayout_3->addWidget(cboCoordinateMode);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        label_4 = new QLabel(WidgetGradientFill);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cboGradientSpread = new QComboBox(WidgetGradientFill);
        cboGradientSpread->setObjectName(QString::fromUtf8("cboGradientSpread"));

        horizontalLayout_5->addWidget(cboGradientSpread);


        gridLayout->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        label = new QLabel(WidgetGradientFill);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(WidgetGradientFill);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        spinRefPoint1X = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint1X->setObjectName(QString::fromUtf8("spinRefPoint1X"));
        spinRefPoint1X->setMaximum(1);
        spinRefPoint1X->setSingleStep(0.2);
        spinRefPoint1X->setValue(0.5);

        horizontalLayout_6->addWidget(spinRefPoint1X);

        label_7 = new QLabel(WidgetGradientFill);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        spinRefPoint1Y = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint1Y->setObjectName(QString::fromUtf8("spinRefPoint1Y"));
        spinRefPoint1Y->setMaximum(1);
        spinRefPoint1Y->setSingleStep(0.2);

        horizontalLayout_6->addWidget(spinRefPoint1Y);

        checkRefPoint1Centroid = new QCheckBox(WidgetGradientFill);
        checkRefPoint1Centroid->setObjectName(QString::fromUtf8("checkRefPoint1Centroid"));

        horizontalLayout_6->addWidget(checkRefPoint1Centroid);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 5, 1, 1, 1);

        label_8 = new QLabel(WidgetGradientFill);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(WidgetGradientFill);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        spinRefPoint2X = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint2X->setObjectName(QString::fromUtf8("spinRefPoint2X"));
        spinRefPoint2X->setMaximum(1);
        spinRefPoint2X->setSingleStep(0.2);
        spinRefPoint2X->setValue(0.5);

        horizontalLayout_7->addWidget(spinRefPoint2X);

        label_10 = new QLabel(WidgetGradientFill);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        spinRefPoint2Y = new QDoubleSpinBox(WidgetGradientFill);
        spinRefPoint2Y->setObjectName(QString::fromUtf8("spinRefPoint2Y"));
        spinRefPoint2Y->setMaximum(1);
        spinRefPoint2Y->setSingleStep(0.2);
        spinRefPoint2Y->setValue(1);

        horizontalLayout_7->addWidget(spinRefPoint2Y);

        checkRefPoint2Centroid = new QCheckBox(WidgetGradientFill);
        checkRefPoint2Centroid->setObjectName(QString::fromUtf8("checkRefPoint2Centroid"));

        horizontalLayout_7->addWidget(checkRefPoint2Centroid);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_7, 6, 1, 1, 1);

        label_11 = new QLabel(WidgetGradientFill);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        mSpinAngle = new QDoubleSpinBox(WidgetGradientFill);
        mSpinAngle->setObjectName(QString::fromUtf8("mSpinAngle"));
        mSpinAngle->setMaximum(360);
        mSpinAngle->setSingleStep(0.5);

        gridLayout->addWidget(mSpinAngle, 7, 1, 1, 1);

        label_6 = new QLabel(WidgetGradientFill);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetGradientFill);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-999);
        spinOffsetX->setMaximum(999);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetGradientFill);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-999);
        spinOffsetY->setMaximum(999);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetGradientFill);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 8, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetGradientFill);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mDataDefinedPropertiesButton, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);


        retranslateUi(WidgetGradientFill);
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor, SLOT(setEnabled(bool)));
        QObject::connect(radioTwoColor, SIGNAL(toggled(bool)), btnChangeColor2, SLOT(setEnabled(bool)));
        QObject::connect(radioColorRamp, SIGNAL(toggled(bool)), cboGradientColorRamp, SLOT(setEnabled(bool)));
        QObject::connect(checkRefPoint1Centroid, SIGNAL(toggled(bool)), spinRefPoint1X, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint1Centroid, SIGNAL(toggled(bool)), spinRefPoint1Y, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint2Centroid, SIGNAL(toggled(bool)), spinRefPoint2X, SLOT(setDisabled(bool)));
        QObject::connect(checkRefPoint2Centroid, SIGNAL(toggled(bool)), spinRefPoint2Y, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(WidgetGradientFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetGradientFill)
    {
        WidgetGradientFill->setWindowTitle(QApplication::translate("WidgetGradientFill", "Form", 0, QApplication::UnicodeUTF8));
        radioTwoColor->setText(QApplication::translate("WidgetGradientFill", "Two color", 0, QApplication::UnicodeUTF8));
        btnChangeColor->setText(QString());
        btnChangeColor2->setText(QString());
        radioColorRamp->setText(QApplication::translate("WidgetGradientFill", "Color ramp", 0, QApplication::UnicodeUTF8));
        mButtonEditRamp->setText(QApplication::translate("WidgetGradientFill", "Edit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetGradientFill", "Gradient type", 0, QApplication::UnicodeUTF8));
        cboGradientType->clear();
        cboGradientType->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Linear", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetGradientFill", "Radial", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetGradientFill", "Conical", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("WidgetGradientFill", "Coord mode", 0, QApplication::UnicodeUTF8));
        cboCoordinateMode->clear();
        cboCoordinateMode->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Object", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetGradientFill", "Viewport", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("WidgetGradientFill", "Spread", 0, QApplication::UnicodeUTF8));
        cboGradientSpread->clear();
        cboGradientSpread->insertItems(0, QStringList()
         << QApplication::translate("WidgetGradientFill", "Pad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetGradientFill", "Repeat", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetGradientFill", "Reflect", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("WidgetGradientFill", "Reference Point 1", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetGradientFill", "x", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("WidgetGradientFill", "y", 0, QApplication::UnicodeUTF8));
        checkRefPoint1Centroid->setText(QApplication::translate("WidgetGradientFill", "Feature centroid", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("WidgetGradientFill", "Reference Point 2", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("WidgetGradientFill", "x", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("WidgetGradientFill", "y", 0, QApplication::UnicodeUTF8));
        checkRefPoint2Centroid->setText(QApplication::translate("WidgetGradientFill", "Feature centroid", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("WidgetGradientFill", "Angle", 0, QApplication::UnicodeUTF8));
        mSpinAngle->setSuffix(QApplication::translate("WidgetGradientFill", " \302\260", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetGradientFill", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetGradientFill", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetGradientFill: public Ui_WidgetGradientFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_GRADIENTFILL_H
