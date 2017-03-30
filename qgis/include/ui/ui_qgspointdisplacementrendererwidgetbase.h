/********************************************************************************
** Form generated from reading UI file 'qgspointdisplacementrendererwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H
#define UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsPointDisplacementRendererWidgetBase
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mCenterSymbolLabel;
    QPushButton *mCenterSymbolPushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;
    QPushButton *mRendererSettingsButton;
    QGroupBox *mLabellingGroupBox;
    QGridLayout *gridLayout;
    QLabel *mLabelAttributeLabel;
    QComboBox *mLabelFieldComboBox;
    QLabel *label;
    QPushButton *mLabelFontButton;
    QLabel *mLabelColorLabel;
    QgsColorButtonV2 *mLabelColorButton;
    QCheckBox *mScaleDependentLabelsCheckBox;
    QLabel *mMaxScaleLabel;
    QLineEdit *mMaxScaleDenominatorEdit;
    QGroupBox *mDisplacementCirclesGroupBox;
    QGridLayout *gridLayout_2;
    QgsColorButtonV2 *mCircleColorButton;
    QLabel *mCircleRadiusLabel;
    QLabel *mCircleWidthLabel;
    QDoubleSpinBox *mCircleWidthSpinBox;
    QDoubleSpinBox *mDistanceSpinBox;
    QLabel *mCircleColorLabel;
    QLabel *mDistanceToleranceLabel;
    QDoubleSpinBox *mCircleModificationSpinBox;

    void setupUi(QWidget *QgsPointDisplacementRendererWidgetBase)
    {
        if (QgsPointDisplacementRendererWidgetBase->objectName().isEmpty())
            QgsPointDisplacementRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPointDisplacementRendererWidgetBase"));
        QgsPointDisplacementRendererWidgetBase->resize(381, 530);
        gridLayout_3 = new QGridLayout(QgsPointDisplacementRendererWidgetBase);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mCenterSymbolLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mCenterSymbolLabel->setObjectName(QString::fromUtf8("mCenterSymbolLabel"));

        horizontalLayout_9->addWidget(mCenterSymbolLabel);

        mCenterSymbolPushButton = new QPushButton(QgsPointDisplacementRendererWidgetBase);
        mCenterSymbolPushButton->setObjectName(QString::fromUtf8("mCenterSymbolPushButton"));

        horizontalLayout_9->addWidget(mCenterSymbolPushButton);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mRendererLabel = new QLabel(QgsPointDisplacementRendererWidgetBase);
        mRendererLabel->setObjectName(QString::fromUtf8("mRendererLabel"));

        horizontalLayout_4->addWidget(mRendererLabel);

        mRendererComboBox = new QComboBox(QgsPointDisplacementRendererWidgetBase);
        mRendererComboBox->setObjectName(QString::fromUtf8("mRendererComboBox"));

        horizontalLayout_4->addWidget(mRendererComboBox);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        mRendererSettingsButton = new QPushButton(QgsPointDisplacementRendererWidgetBase);
        mRendererSettingsButton->setObjectName(QString::fromUtf8("mRendererSettingsButton"));

        gridLayout_3->addWidget(mRendererSettingsButton, 2, 0, 1, 1);

        mLabellingGroupBox = new QGroupBox(QgsPointDisplacementRendererWidgetBase);
        mLabellingGroupBox->setObjectName(QString::fromUtf8("mLabellingGroupBox"));
        gridLayout = new QGridLayout(mLabellingGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLabelAttributeLabel = new QLabel(mLabellingGroupBox);
        mLabelAttributeLabel->setObjectName(QString::fromUtf8("mLabelAttributeLabel"));

        gridLayout->addWidget(mLabelAttributeLabel, 0, 0, 1, 1);

        mLabelFieldComboBox = new QComboBox(mLabellingGroupBox);
        mLabelFieldComboBox->setObjectName(QString::fromUtf8("mLabelFieldComboBox"));

        gridLayout->addWidget(mLabelFieldComboBox, 0, 1, 1, 1);

        label = new QLabel(mLabellingGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mLabelFontButton = new QPushButton(mLabellingGroupBox);
        mLabelFontButton->setObjectName(QString::fromUtf8("mLabelFontButton"));

        gridLayout->addWidget(mLabelFontButton, 1, 1, 1, 1);

        mLabelColorLabel = new QLabel(mLabellingGroupBox);
        mLabelColorLabel->setObjectName(QString::fromUtf8("mLabelColorLabel"));

        gridLayout->addWidget(mLabelColorLabel, 2, 0, 1, 1);

        mLabelColorButton = new QgsColorButtonV2(mLabellingGroupBox);
        mLabelColorButton->setObjectName(QString::fromUtf8("mLabelColorButton"));
        mLabelColorButton->setMinimumSize(QSize(120, 0));
        mLabelColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mLabelColorButton, 2, 1, 1, 1);

        mScaleDependentLabelsCheckBox = new QCheckBox(mLabellingGroupBox);
        mScaleDependentLabelsCheckBox->setObjectName(QString::fromUtf8("mScaleDependentLabelsCheckBox"));

        gridLayout->addWidget(mScaleDependentLabelsCheckBox, 3, 0, 1, 2);

        mMaxScaleLabel = new QLabel(mLabellingGroupBox);
        mMaxScaleLabel->setObjectName(QString::fromUtf8("mMaxScaleLabel"));

        gridLayout->addWidget(mMaxScaleLabel, 4, 0, 1, 1);

        mMaxScaleDenominatorEdit = new QLineEdit(mLabellingGroupBox);
        mMaxScaleDenominatorEdit->setObjectName(QString::fromUtf8("mMaxScaleDenominatorEdit"));

        gridLayout->addWidget(mMaxScaleDenominatorEdit, 4, 1, 1, 1);


        gridLayout_3->addWidget(mLabellingGroupBox, 4, 0, 1, 1);

        mDisplacementCirclesGroupBox = new QGroupBox(QgsPointDisplacementRendererWidgetBase);
        mDisplacementCirclesGroupBox->setObjectName(QString::fromUtf8("mDisplacementCirclesGroupBox"));
        gridLayout_2 = new QGridLayout(mDisplacementCirclesGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mCircleColorButton = new QgsColorButtonV2(mDisplacementCirclesGroupBox);
        mCircleColorButton->setObjectName(QString::fromUtf8("mCircleColorButton"));
        mCircleColorButton->setMinimumSize(QSize(120, 0));
        mCircleColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mCircleColorButton, 2, 1, 1, 1);

        mCircleRadiusLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleRadiusLabel->setObjectName(QString::fromUtf8("mCircleRadiusLabel"));

        gridLayout_2->addWidget(mCircleRadiusLabel, 3, 0, 1, 1);

        mCircleWidthLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleWidthLabel->setObjectName(QString::fromUtf8("mCircleWidthLabel"));

        gridLayout_2->addWidget(mCircleWidthLabel, 0, 0, 1, 1);

        mCircleWidthSpinBox = new QDoubleSpinBox(mDisplacementCirclesGroupBox);
        mCircleWidthSpinBox->setObjectName(QString::fromUtf8("mCircleWidthSpinBox"));

        gridLayout_2->addWidget(mCircleWidthSpinBox, 0, 1, 1, 1);

        mDistanceSpinBox = new QDoubleSpinBox(mDisplacementCirclesGroupBox);
        mDistanceSpinBox->setObjectName(QString::fromUtf8("mDistanceSpinBox"));
        mDistanceSpinBox->setDecimals(7);
        mDistanceSpinBox->setMaximum(1e+09);

        gridLayout_2->addWidget(mDistanceSpinBox, 6, 1, 1, 1);

        mCircleColorLabel = new QLabel(mDisplacementCirclesGroupBox);
        mCircleColorLabel->setObjectName(QString::fromUtf8("mCircleColorLabel"));

        gridLayout_2->addWidget(mCircleColorLabel, 2, 0, 1, 1);

        mDistanceToleranceLabel = new QLabel(mDisplacementCirclesGroupBox);
        mDistanceToleranceLabel->setObjectName(QString::fromUtf8("mDistanceToleranceLabel"));

        gridLayout_2->addWidget(mDistanceToleranceLabel, 6, 0, 1, 1);

        mCircleModificationSpinBox = new QDoubleSpinBox(mDisplacementCirclesGroupBox);
        mCircleModificationSpinBox->setObjectName(QString::fromUtf8("mCircleModificationSpinBox"));
        mCircleModificationSpinBox->setMinimum(-99);

        gridLayout_2->addWidget(mCircleModificationSpinBox, 3, 1, 1, 1);


        gridLayout_3->addWidget(mDisplacementCirclesGroupBox, 3, 0, 1, 1);


        retranslateUi(QgsPointDisplacementRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPointDisplacementRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointDisplacementRendererWidgetBase)
    {
        QgsPointDisplacementRendererWidgetBase->setWindowTitle(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mCenterSymbolLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Center symbol:", 0, QApplication::UnicodeUTF8));
        mCenterSymbolPushButton->setText(QString());
        mRendererLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Renderer:", 0, QApplication::UnicodeUTF8));
        mRendererSettingsButton->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Renderer settings...", 0, QApplication::UnicodeUTF8));
        mLabellingGroupBox->setTitle(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Labels", 0, QApplication::UnicodeUTF8));
        mLabelAttributeLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label attribute:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label font:", 0, QApplication::UnicodeUTF8));
        mLabelFontButton->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
        mLabelColorLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Label color:", 0, QApplication::UnicodeUTF8));
        mLabelColorButton->setText(QString());
        mScaleDependentLabelsCheckBox->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Use scale dependent labelling", 0, QApplication::UnicodeUTF8));
        mMaxScaleLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Max scale denominator:", 0, QApplication::UnicodeUTF8));
        mDisplacementCirclesGroupBox->setTitle(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Displacement circles", 0, QApplication::UnicodeUTF8));
        mCircleColorButton->setText(QString());
        mCircleRadiusLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Circle radius modification:", 0, QApplication::UnicodeUTF8));
        mCircleWidthLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Circle pen width:", 0, QApplication::UnicodeUTF8));
        mCircleColorLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Circle color:", 0, QApplication::UnicodeUTF8));
        mDistanceToleranceLabel->setText(QApplication::translate("QgsPointDisplacementRendererWidgetBase", "Point distance tolerance:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsPointDisplacementRendererWidgetBase: public Ui_QgsPointDisplacementRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPOINTDISPLACEMENTRENDERERWIDGETBASE_H
