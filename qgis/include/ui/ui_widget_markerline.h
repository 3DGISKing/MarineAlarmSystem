/********************************************************************************
** Form generated from reading UI file 'widget_markerline.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MARKERLINE_H
#define UI_WIDGET_MARKERLINE_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetMarkerLine
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radInterval;
    QDoubleSpinBox *spinInterval;
    QgsUnitSelectionWidget *mIntervalUnitWidget;
    QRadioButton *radVertex;
    QRadioButton *radVertexLast;
    QRadioButton *radVertexFirst;
    QRadioButton *radCentralPoint;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *mSpinOffsetAlongLine;
    QgsUnitSelectionWidget *mOffsetAlongLineUnitWidget;
    QCheckBox *chkRotateMarker;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spinOffset;
    QgsUnitSelectionWidget *mOffsetUnitWidget;
    QPushButton *mDataDefinedPropertiesButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetMarkerLine)
    {
        if (WidgetMarkerLine->objectName().isEmpty())
            WidgetMarkerLine->setObjectName(QString::fromUtf8("WidgetMarkerLine"));
        WidgetMarkerLine->resize(368, 332);
        formLayout = new QFormLayout(WidgetMarkerLine);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(1, -1, 1, 1);
        groupBox = new QGroupBox(WidgetMarkerLine);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radInterval = new QRadioButton(groupBox);
        radInterval->setObjectName(QString::fromUtf8("radInterval"));
        radInterval->setChecked(true);

        horizontalLayout_4->addWidget(radInterval);

        spinInterval = new QDoubleSpinBox(groupBox);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinInterval->sizePolicy().hasHeightForWidth());
        spinInterval->setSizePolicy(sizePolicy);
        spinInterval->setDecimals(6);
        spinInterval->setMaximum(1e+07);
        spinInterval->setSingleStep(0.2);
        spinInterval->setValue(1);

        horizontalLayout_4->addWidget(spinInterval);

        mIntervalUnitWidget = new QgsUnitSelectionWidget(groupBox);
        mIntervalUnitWidget->setObjectName(QString::fromUtf8("mIntervalUnitWidget"));

        horizontalLayout_4->addWidget(mIntervalUnitWidget);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        radVertex = new QRadioButton(groupBox);
        radVertex->setObjectName(QString::fromUtf8("radVertex"));

        gridLayout->addWidget(radVertex, 1, 0, 1, 1);

        radVertexLast = new QRadioButton(groupBox);
        radVertexLast->setObjectName(QString::fromUtf8("radVertexLast"));

        gridLayout->addWidget(radVertexLast, 2, 0, 1, 1);

        radVertexFirst = new QRadioButton(groupBox);
        radVertexFirst->setObjectName(QString::fromUtf8("radVertexFirst"));

        gridLayout->addWidget(radVertexFirst, 3, 0, 1, 1);

        radCentralPoint = new QRadioButton(groupBox);
        radCentralPoint->setObjectName(QString::fromUtf8("radCentralPoint"));

        gridLayout->addWidget(radCentralPoint, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mSpinOffsetAlongLine = new QDoubleSpinBox(groupBox);
        mSpinOffsetAlongLine->setObjectName(QString::fromUtf8("mSpinOffsetAlongLine"));
        sizePolicy.setHeightForWidth(mSpinOffsetAlongLine->sizePolicy().hasHeightForWidth());
        mSpinOffsetAlongLine->setSizePolicy(sizePolicy);
        mSpinOffsetAlongLine->setDecimals(6);
        mSpinOffsetAlongLine->setMaximum(1e+07);
        mSpinOffsetAlongLine->setSingleStep(0.2);
        mSpinOffsetAlongLine->setValue(1);

        horizontalLayout->addWidget(mSpinOffsetAlongLine);

        mOffsetAlongLineUnitWidget = new QgsUnitSelectionWidget(groupBox);
        mOffsetAlongLineUnitWidget->setObjectName(QString::fromUtf8("mOffsetAlongLineUnitWidget"));

        horizontalLayout->addWidget(mOffsetAlongLineUnitWidget);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        formLayout->setWidget(0, QFormLayout::SpanningRole, groupBox);

        chkRotateMarker = new QCheckBox(WidgetMarkerLine);
        chkRotateMarker->setObjectName(QString::fromUtf8("chkRotateMarker"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, chkRotateMarker);

        label_3 = new QLabel(WidgetMarkerLine);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinOffset = new QDoubleSpinBox(WidgetMarkerLine);
        spinOffset->setObjectName(QString::fromUtf8("spinOffset"));
        sizePolicy.setHeightForWidth(spinOffset->sizePolicy().hasHeightForWidth());
        spinOffset->setSizePolicy(sizePolicy);
        spinOffset->setDecimals(6);
        spinOffset->setMinimum(-100000);
        spinOffset->setMaximum(100000);
        spinOffset->setSingleStep(0.2);

        horizontalLayout_3->addWidget(spinOffset);

        mOffsetUnitWidget = new QgsUnitSelectionWidget(WidgetMarkerLine);
        mOffsetUnitWidget->setObjectName(QString::fromUtf8("mOffsetUnitWidget"));

        horizontalLayout_3->addWidget(mOffsetUnitWidget);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        mDataDefinedPropertiesButton = new QPushButton(WidgetMarkerLine);
        mDataDefinedPropertiesButton->setObjectName(QString::fromUtf8("mDataDefinedPropertiesButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDataDefinedPropertiesButton->sizePolicy().hasHeightForWidth());
        mDataDefinedPropertiesButton->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::SpanningRole, mDataDefinedPropertiesButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer);

        QWidget::setTabOrder(radInterval, spinInterval);
        QWidget::setTabOrder(spinInterval, mIntervalUnitWidget);
        QWidget::setTabOrder(mIntervalUnitWidget, radVertex);
        QWidget::setTabOrder(radVertex, radVertexLast);
        QWidget::setTabOrder(radVertexLast, radVertexFirst);
        QWidget::setTabOrder(radVertexFirst, radCentralPoint);
        QWidget::setTabOrder(radCentralPoint, mSpinOffsetAlongLine);
        QWidget::setTabOrder(mSpinOffsetAlongLine, mOffsetAlongLineUnitWidget);
        QWidget::setTabOrder(mOffsetAlongLineUnitWidget, chkRotateMarker);
        QWidget::setTabOrder(chkRotateMarker, spinOffset);
        QWidget::setTabOrder(spinOffset, mOffsetUnitWidget);
        QWidget::setTabOrder(mOffsetUnitWidget, mDataDefinedPropertiesButton);

        retranslateUi(WidgetMarkerLine);

        QMetaObject::connectSlotsByName(WidgetMarkerLine);
    } // setupUi

    void retranslateUi(QWidget *WidgetMarkerLine)
    {
        WidgetMarkerLine->setWindowTitle(QApplication::translate("WidgetMarkerLine", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("WidgetMarkerLine", "Marker placement", 0, QApplication::UnicodeUTF8));
        radInterval->setText(QApplication::translate("WidgetMarkerLine", "with interval", 0, QApplication::UnicodeUTF8));
        radVertex->setText(QApplication::translate("WidgetMarkerLine", "on every vertex", 0, QApplication::UnicodeUTF8));
        radVertexLast->setText(QApplication::translate("WidgetMarkerLine", "on last vertex only", 0, QApplication::UnicodeUTF8));
        radVertexFirst->setText(QApplication::translate("WidgetMarkerLine", "on first vertex only", 0, QApplication::UnicodeUTF8));
        radCentralPoint->setText(QApplication::translate("WidgetMarkerLine", "on central point", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WidgetMarkerLine", "Offset along line", 0, QApplication::UnicodeUTF8));
        chkRotateMarker->setText(QApplication::translate("WidgetMarkerLine", "Rotate marker", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetMarkerLine", "Line offset", 0, QApplication::UnicodeUTF8));
        mDataDefinedPropertiesButton->setText(QApplication::translate("WidgetMarkerLine", "Data defined properties", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetMarkerLine: public Ui_WidgetMarkerLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_MARKERLINE_H
