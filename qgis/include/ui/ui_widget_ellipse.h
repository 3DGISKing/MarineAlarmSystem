/********************************************************************************
** Form generated from reading UI file 'widget_ellipse.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ELLIPSE_H
#define UI_WIDGET_ELLIPSE_H

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

class Ui_WidgetEllipseBase
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *mRotationSpinBox;
    QLabel *mSymbolHeightLabel;
    QLabel *mRotationLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QgsColorButtonV2 *btnChangeColorFill;
    QLabel *label;
    QgsColorButtonV2 *btnChangeColorBorder;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *mHeightSpinBox;
    QgsUnitSelectionWidget *mSymbolHeightUnitWidget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *mWidthSpinBox;
    QgsUnitSelectionWidget *mSymbolWidthUnitWidget;
    QLabel *mSymbolWidthLabel;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *mHorizontalAnchorComboBox;
    QComboBox *mVerticalAnchorComboBox;
    QLabel *mOutlineStyleLabel;
    QgsPenStyleComboBox *mOutlineStyleComboBox;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *mOutlineWidthSpinBox;
    QgsUnitSelectionWidget *mOutlineWidthUnitWidget;
    QLabel *mOutlineWidthLabel;
    QLabel *mAnchorPointLabel;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *spinOffsetX;
    QDoubleSpinBox *spinOffsetY;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;
    QListWidget *mShapeListWidget;

    void setupUi(QWidget *WidgetEllipseBase)
    {
        if (WidgetEllipseBase->objectName().isEmpty())
            WidgetEllipseBase->setObjectName(QString::fromUtf8("WidgetEllipseBase"));
        WidgetEllipseBase->resize(416, 436);
        gridLayout_2 = new QGridLayout(WidgetEllipseBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(WidgetEllipseBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        mRotationSpinBox = new QDoubleSpinBox(WidgetEllipseBase);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setMinimum(-360);
        mRotationSpinBox->setMaximum(360);
        mRotationSpinBox->setSingleStep(0.5);

        gridLayout->addWidget(mRotationSpinBox, 4, 1, 1, 1);

        mSymbolHeightLabel = new QLabel(WidgetEllipseBase);
        mSymbolHeightLabel->setObjectName(QString::fromUtf8("mSymbolHeightLabel"));

        gridLayout->addWidget(mSymbolHeightLabel, 5, 0, 1, 1);

        mRotationLabel = new QLabel(WidgetEllipseBase);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));

        gridLayout->addWidget(mRotationLabel, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(WidgetEllipseBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_3);

        btnChangeColorFill = new QgsColorButtonV2(WidgetEllipseBase);
        btnChangeColorFill->setObjectName(QString::fromUtf8("btnChangeColorFill"));
        btnChangeColorFill->setMinimumSize(QSize(100, 0));
        btnChangeColorFill->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(btnChangeColorFill);

        label = new QLabel(WidgetEllipseBase);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label);

        btnChangeColorBorder = new QgsColorButtonV2(WidgetEllipseBase);
        btnChangeColorBorder->setObjectName(QString::fromUtf8("btnChangeColorBorder"));
        btnChangeColorBorder->setMinimumSize(QSize(100, 0));
        btnChangeColorBorder->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(btnChangeColorBorder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mHeightSpinBox = new QDoubleSpinBox(WidgetEllipseBase);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mHeightSpinBox->sizePolicy().hasHeightForWidth());
        mHeightSpinBox->setSizePolicy(sizePolicy1);
        mHeightSpinBox->setDecimals(6);
        mHeightSpinBox->setMaximum(1e+09);
        mHeightSpinBox->setSingleStep(0.2);

        horizontalLayout_3->addWidget(mHeightSpinBox);

        mSymbolHeightUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mSymbolHeightUnitWidget->setObjectName(QString::fromUtf8("mSymbolHeightUnitWidget"));

        horizontalLayout_3->addWidget(mSymbolHeightUnitWidget);


        gridLayout->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mWidthSpinBox = new QDoubleSpinBox(WidgetEllipseBase);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mWidthSpinBox->sizePolicy().hasHeightForWidth());
        mWidthSpinBox->setSizePolicy(sizePolicy1);
        mWidthSpinBox->setDecimals(6);
        mWidthSpinBox->setMaximum(1e+09);
        mWidthSpinBox->setSingleStep(0.2);

        horizontalLayout->addWidget(mWidthSpinBox);

        mSymbolWidthUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mSymbolWidthUnitWidget->setObjectName(QString::fromUtf8("mSymbolWidthUnitWidget"));

        horizontalLayout->addWidget(mSymbolWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        mSymbolWidthLabel = new QLabel(WidgetEllipseBase);
        mSymbolWidthLabel->setObjectName(QString::fromUtf8("mSymbolWidthLabel"));

        gridLayout->addWidget(mSymbolWidthLabel, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mHorizontalAnchorComboBox = new QComboBox(WidgetEllipseBase);
        mHorizontalAnchorComboBox->setObjectName(QString::fromUtf8("mHorizontalAnchorComboBox"));

        horizontalLayout_6->addWidget(mHorizontalAnchorComboBox);

        mVerticalAnchorComboBox = new QComboBox(WidgetEllipseBase);
        mVerticalAnchorComboBox->setObjectName(QString::fromUtf8("mVerticalAnchorComboBox"));

        horizontalLayout_6->addWidget(mVerticalAnchorComboBox);


        gridLayout->addLayout(horizontalLayout_6, 7, 1, 1, 1);

        mOutlineStyleLabel = new QLabel(WidgetEllipseBase);
        mOutlineStyleLabel->setObjectName(QString::fromUtf8("mOutlineStyleLabel"));

        gridLayout->addWidget(mOutlineStyleLabel, 2, 0, 1, 1);

        mOutlineStyleComboBox = new QgsPenStyleComboBox(WidgetEllipseBase);
        mOutlineStyleComboBox->setObjectName(QString::fromUtf8("mOutlineStyleComboBox"));

        gridLayout->addWidget(mOutlineStyleComboBox, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mOutlineWidthSpinBox = new QDoubleSpinBox(WidgetEllipseBase);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));
        sizePolicy1.setHeightForWidth(mOutlineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutlineWidthSpinBox->setSizePolicy(sizePolicy1);
        mOutlineWidthSpinBox->setDecimals(6);
        mOutlineWidthSpinBox->setMaximum(1e+09);
        mOutlineWidthSpinBox->setSingleStep(0.2);

        horizontalLayout_2->addWidget(mOutlineWidthSpinBox);

        mOutlineWidthUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mOutlineWidthUnitWidget->setObjectName(QString::fromUtf8("mOutlineWidthUnitWidget"));

        horizontalLayout_2->addWidget(mOutlineWidthUnitWidget);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        mOutlineWidthLabel = new QLabel(WidgetEllipseBase);
        mOutlineWidthLabel->setObjectName(QString::fromUtf8("mOutlineWidthLabel"));

        gridLayout->addWidget(mOutlineWidthLabel, 3, 0, 1, 1);

        mAnchorPointLabel = new QLabel(WidgetEllipseBase);
        mAnchorPointLabel->setObjectName(QString::fromUtf8("mAnchorPointLabel"));

        gridLayout->addWidget(mAnchorPointLabel, 7, 0, 1, 1);

        label_5 = new QLabel(WidgetEllipseBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        spinOffsetX = new QDoubleSpinBox(WidgetEllipseBase);
        spinOffsetX->setObjectName(QString::fromUtf8("spinOffsetX"));
        sizePolicy1.setHeightForWidth(spinOffsetX->sizePolicy().hasHeightForWidth());
        spinOffsetX->setSizePolicy(sizePolicy1);
        spinOffsetX->setDecimals(6);
        spinOffsetX->setMinimum(-100);
        spinOffsetX->setSingleStep(0.2);

        horizontalLayout_5->addWidget(spinOffsetX);

        spinOffsetY = new QDoubleSpinBox(WidgetEllipseBase);
        spinOffsetY->setObjectName(QString::fromUtf8("spinOffsetY"));
        sizePolicy1.setHeightForWidth(spinOffsetY->sizePolicy().hasHeightForWidth());
        spinOffsetY->setSizePolicy(sizePolicy1);
        spinOffsetY->setDecimals(6);
        spinOffsetY->setMinimum(-100);
        spinOffsetY->setSingleStep(0.2);

        horizontalLayout_5->addWidget(spinOffsetY);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetEllipseBase);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout_5->addWidget(mOffsetUnitWidget);


        gridLayout->addLayout(horizontalLayout_5, 6, 1, 1, 1);

        mDataDefinedPropertiesButton = new QPushButton(WidgetEllipseBase);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mDataDefinedPropertiesButton, 8, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        mShapeListWidget = new QListWidget(WidgetEllipseBase);
        mShapeListWidget->setObjectName(QString::fromUtf8("mShapeListWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(mShapeListWidget->sizePolicy().hasHeightForWidth());
        mShapeListWidget->setSizePolicy(sizePolicy3);
        mShapeListWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        mShapeListWidget->setIconSize(QSize(20, 20));
        mShapeListWidget->setMovement(QListView::Static);
        mShapeListWidget->setFlow(QListView::LeftToRight);
        mShapeListWidget->setResizeMode(QListView::Adjust);
        mShapeListWidget->setSpacing(4);
        mShapeListWidget->setGridSize(QSize(30, 24));
        mShapeListWidget->setViewMode(QListView::IconMode);
        mShapeListWidget->setWordWrap(true);
        mShapeListWidget->setSelectionRectVisible(true);

        gridLayout_2->addWidget(mShapeListWidget, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSymbolHeightLabel->setBuddy(mHeightSpinBox);
        mRotationLabel->setBuddy(mRotationSpinBox);
        label_3->setBuddy(btnChangeColorFill);
        label->setBuddy(btnChangeColorBorder);
        mSymbolWidthLabel->setBuddy(mWidthSpinBox);
        mOutlineStyleLabel->setBuddy(mOutlineStyleComboBox);
        mOutlineWidthLabel->setBuddy(mOutlineWidthSpinBox);
        mAnchorPointLabel->setBuddy(mHorizontalAnchorComboBox);
        label_5->setBuddy(spinOffsetX);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnChangeColorFill, btnChangeColorBorder);
        QWidget::setTabOrder(btnChangeColorBorder, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mSymbolWidthUnitWidget);
        QWidget::setTabOrder(mSymbolWidthUnitWidget, mOutlineStyleComboBox);
        QWidget::setTabOrder(mOutlineStyleComboBox, mOutlineWidthSpinBox);
        QWidget::setTabOrder(mOutlineWidthSpinBox, mOutlineWidthUnitWidget);
        QWidget::setTabOrder(mOutlineWidthUnitWidget, mRotationSpinBox);
        QWidget::setTabOrder(mRotationSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mSymbolHeightUnitWidget);
        QWidget::setTabOrder(mSymbolHeightUnitWidget, spinOffsetX);
        QWidget::setTabOrder(spinOffsetX, spinOffsetY);
        QWidget::setTabOrder(spinOffsetY, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mHorizontalAnchorComboBox);
        QWidget::setTabOrder(mHorizontalAnchorComboBox, mVerticalAnchorComboBox);
        QWidget::setTabOrder(mVerticalAnchorComboBox, mDataDefinedPropertiesButton);
        QWidget::setTabOrder(mDataDefinedPropertiesButton, mShapeListWidget);

        retranslateUi(WidgetEllipseBase);

        QMetaObject::connectSlotsByName(WidgetEllipseBase);
    } // setupUi

    void retranslateUi(QWidget *WidgetEllipseBase)
    {
        WidgetEllipseBase->setWindowTitle(QApplication::translate("WidgetEllipseBase", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WidgetEllipseBase", "Colors", 0, QApplication::UnicodeUTF8));
        mSymbolHeightLabel->setText(QApplication::translate("WidgetEllipseBase", "Symbol height", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("WidgetEllipseBase", "Rotation", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetEllipseBase", "Fill", 0, QApplication::UnicodeUTF8));
        btnChangeColorFill->setText(QString());
        label->setText(QApplication::translate("WidgetEllipseBase", "Border", 0, QApplication::UnicodeUTF8));
        btnChangeColorBorder->setText(QString());
        mSymbolWidthLabel->setText(QApplication::translate("WidgetEllipseBase", "Symbol width", 0, QApplication::UnicodeUTF8));
        mHorizontalAnchorComboBox->clear();
        mHorizontalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetEllipseBase", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetEllipseBase", "HCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetEllipseBase", "Right", 0, QApplication::UnicodeUTF8)
        );
        mVerticalAnchorComboBox->clear();
        mVerticalAnchorComboBox->insertItems(0, QStringList()
         << QApplication::translate("WidgetEllipseBase", "Top", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetEllipseBase", "VCenter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetEllipseBase", "Bottom", 0, QApplication::UnicodeUTF8)
        );
        mOutlineStyleLabel->setText(QApplication::translate("WidgetEllipseBase", "Outline style", 0, QApplication::UnicodeUTF8));
        mOutlineWidthLabel->setText(QApplication::translate("WidgetEllipseBase", "Outline width", 0, QApplication::UnicodeUTF8));
        mAnchorPointLabel->setText(QApplication::translate("WidgetEllipseBase", "Anchor point", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetEllipseBase", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetEllipseBase", "Data defined properties...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetEllipseBase: public Ui_WidgetEllipseBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ELLIPSE_H
