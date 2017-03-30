/********************************************************************************
** Form generated from reading UI file 'qgsannotationwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:30 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSANNOTATIONWIDGETBASE_H
#define UI_QGSANNOTATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAnnotationWidgetBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mMapPositionFixedCheckBox;
    QLabel *mMapMarkerLabel;
    QPushButton *mMapMarkerButton;
    QLabel *mFrameWidthLabel;
    QDoubleSpinBox *mFrameWidthSpinBox;
    QLabel *mBackgroundColorLabel;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButtonV2 *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mFrameColorLabel;
    QHBoxLayout *horizontalLayout;
    QgsColorButtonV2 *mFrameColorButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QgsAnnotationWidgetBase)
    {
        if (QgsAnnotationWidgetBase->objectName().isEmpty())
            QgsAnnotationWidgetBase->setObjectName(QString::fromUtf8("QgsAnnotationWidgetBase"));
        QgsAnnotationWidgetBase->resize(319, 172);
        gridLayout = new QGridLayout(QgsAnnotationWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mMapPositionFixedCheckBox = new QCheckBox(QgsAnnotationWidgetBase);
        mMapPositionFixedCheckBox->setObjectName(QString::fromUtf8("mMapPositionFixedCheckBox"));

        gridLayout->addWidget(mMapPositionFixedCheckBox, 0, 0, 1, 2);

        mMapMarkerLabel = new QLabel(QgsAnnotationWidgetBase);
        mMapMarkerLabel->setObjectName(QString::fromUtf8("mMapMarkerLabel"));

        gridLayout->addWidget(mMapMarkerLabel, 1, 0, 1, 1);

        mMapMarkerButton = new QPushButton(QgsAnnotationWidgetBase);
        mMapMarkerButton->setObjectName(QString::fromUtf8("mMapMarkerButton"));

        gridLayout->addWidget(mMapMarkerButton, 1, 1, 1, 1);

        mFrameWidthLabel = new QLabel(QgsAnnotationWidgetBase);
        mFrameWidthLabel->setObjectName(QString::fromUtf8("mFrameWidthLabel"));

        gridLayout->addWidget(mFrameWidthLabel, 2, 0, 1, 1);

        mFrameWidthSpinBox = new QDoubleSpinBox(QgsAnnotationWidgetBase);
        mFrameWidthSpinBox->setObjectName(QString::fromUtf8("mFrameWidthSpinBox"));

        gridLayout->addWidget(mFrameWidthSpinBox, 2, 1, 1, 1);

        mBackgroundColorLabel = new QLabel(QgsAnnotationWidgetBase);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        gridLayout->addWidget(mBackgroundColorLabel, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBackgroundColorButton = new QgsColorButtonV2(QgsAnnotationWidgetBase);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mBackgroundColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        mFrameColorLabel = new QLabel(QgsAnnotationWidgetBase);
        mFrameColorLabel->setObjectName(QString::fromUtf8("mFrameColorLabel"));

        gridLayout->addWidget(mFrameColorLabel, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFrameColorButton = new QgsColorButtonV2(QgsAnnotationWidgetBase);
        mFrameColorButton->setObjectName(QString::fromUtf8("mFrameColorButton"));
        mFrameColorButton->setMinimumSize(QSize(120, 0));
        mFrameColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(mFrameColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        mMapMarkerLabel->setBuddy(mMapMarkerButton);
        mFrameWidthLabel->setBuddy(mFrameWidthSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsAnnotationWidgetBase);

        QMetaObject::connectSlotsByName(QgsAnnotationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAnnotationWidgetBase)
    {
        QgsAnnotationWidgetBase->setWindowTitle(QApplication::translate("QgsAnnotationWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mMapPositionFixedCheckBox->setText(QApplication::translate("QgsAnnotationWidgetBase", "Fixed map position", 0, QApplication::UnicodeUTF8));
        mMapMarkerLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Map marker", 0, QApplication::UnicodeUTF8));
        mMapMarkerButton->setText(QString());
        mFrameWidthLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Frame width", 0, QApplication::UnicodeUTF8));
        mBackgroundColorLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Background color", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        mFrameColorLabel->setText(QApplication::translate("QgsAnnotationWidgetBase", "Frame color", 0, QApplication::UnicodeUTF8));
        mFrameColorButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsAnnotationWidgetBase: public Ui_QgsAnnotationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSANNOTATIONWIDGETBASE_H
