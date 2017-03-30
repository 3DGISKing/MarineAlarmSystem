/********************************************************************************
** Form generated from reading UI file 'widget_fontmarker.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_FONTMARKER_H
#define UI_WIDGET_FONTMARKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetFontMarker
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QFontComboBox *cboFont;
    QLabel *label_3;
    QgsColorButtonV2 *btnColor;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *spinSize;
    QgsUnitSelectionWidget *mSizeUnitWidget;
    QLabel *label_4;
    QDoubleSpinBox *spinAngle;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QLabel *mAnchorPointLabel;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *mHorizontalAnchorComboBox;
    QComboBox *mVerticalAnchorComboBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *WidgetFontMarker)
    {
        if (WidgetFontMarker->objectName().isEmpty())
            WidgetFontMarker->setObjectName(QString::fromUtf8("WidgetFontMarker"));
        WidgetFontMarker->resize(452, 354);
        gridLayout_2 = new QGridLayout(WidgetFontMarker);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WidgetFontMarker);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cboFont = new QFontComboBox(WidgetFontMarker);
        cboFont->setObjectName(QString::fromUtf8("cboFont"));

        gridLayout->addWidget(cboFont, 0, 1, 1, 1);

        label_3 = new QLabel(WidgetFontMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        btnColor = new QgsColorButtonV2(WidgetFontMarker);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setMinimumSize(QSize(120, 0));
        btnColor->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(btnColor, 1, 1, 1, 1);

        label_2 = new QLabel(WidgetFontMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinSize = new QDoubleSpinBox(WidgetFontMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinSize->sizePolicy().hasHeightForWidth());
        spinSize->setSizePolicy(sizePolicy);
        spinSize->setDecimals(6);
        spinSize->setMaximum(1e+08);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(12);

        horizontalLayout_2->addWidget(spinSize);

        mSizeUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mSizeUnitWidget->setObjectName(QString::fromUtf8("mSizeUnitWidget"));

        horizontalLayout_2->addWidget(mSizeUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        label_4 = new QLabel(WidgetFontMarker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(WidgetFontMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(1);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout->addWidget(spinAngle, 3, 1, 1, 1);

        label_5 = new QLabel(WidgetFontMarker);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinOffsetX = new QDoubleSpinBox(WidgetFontMarker);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-100000);
        spinOffsetX->setMaximum(100000);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetFontMarker);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-100000);
        spinOffsetY->setMaximum(100000);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetFontMarker);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetFontMarker);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout->addWidget(mAnchorPointLabel, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mHorizontalAnchorComboBox = new QComboBox(WidgetFontMarker);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        horizontalLayout_6->addWidget(mHorizontalAnchorComboBox);

        mVerticalAnchorComboBox = new QComboBox(WidgetFontMarker);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        horizontalLayout_6->addWidget(mVerticalAnchorComboBox);


        gridLayout->addLayout(horizontalLayout_6, 5, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        scrollArea = new QScrollArea(WidgetFontMarker);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 158));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 1, 0, 1, 1);


        retranslateUi(WidgetFontMarker);

        QMetaObject::connectSlotsByName(WidgetFontMarker);
    } // setupUi

    void retranslateUi(QWidget *WidgetFontMarker)
    {
        WidgetFontMarker->setWindowTitle(QApplication::translate("WidgetFontMarker", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetFontMarker", "Font family", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetFontMarker", "Color", 0, QApplication::UnicodeUTF8));
        btnColor->setText(QString());
        label_2->setText(QApplication::translate("WidgetFontMarker", "Size", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WidgetFontMarker", "Rotation", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("WidgetFontMarker", "\302\260", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetFontMarker", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mAnchorPointLabel->setText(QApplication::translate("WidgetFontMarker", "Anchor point", 0, QApplication::UnicodeUTF8));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetFontMarker", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetFontMarker", "HCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetFontMarker", "Right", 0, QApplication::UnicodeUTF8)
        );
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetFontMarker", "Top", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetFontMarker", "VCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetFontMarker", "Bottom", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class WidgetFontMarker: public Ui_WidgetFontMarker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FONTMARKER_H
