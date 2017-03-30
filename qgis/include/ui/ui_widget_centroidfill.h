/********************************************************************************
** Form generated from reading UI file 'widget_centroidfill.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CENTROIDFILL_H
#define UI_WIDGET_CENTROIDFILL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetCentroidFill
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mDrawInsideCheckBox;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *WidgetCentroidFill)
    {
        if (WidgetCentroidFill->objectName().isEmpty())
            WidgetCentroidFill->setObjectName(QString::fromUtf8("WidgetCentroidFill"));
        WidgetCentroidFill->resize(368, 242);
        verticalLayout = new QVBoxLayout(WidgetCentroidFill);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDrawInsideCheckBox = new QCheckBox(WidgetCentroidFill);
        mDrawInsideCheckBox->setObjectName(QString::fromUtf8("mDrawInsideCheckBox"));

        horizontalLayout->addWidget(mDrawInsideCheckBox);

        spacerItem = new QSpacerItem(112, 48, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        verticalLayout->addLayout(horizontalLayout);

        spacerItem1 = new QSpacerItem(350, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);


        retranslateUi(WidgetCentroidFill);

        QMetaObject::connectSlotsByName(WidgetCentroidFill);
    } // setupUi

    void retranslateUi(QWidget *WidgetCentroidFill)
    {
        WidgetCentroidFill->setWindowTitle(QApplication::translate("WidgetCentroidFill", "Form", 0, QApplication::UnicodeUTF8));
        mDrawInsideCheckBox->setText(QApplication::translate("WidgetCentroidFill", "Force point inside polygon", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetCentroidFill: public Ui_WidgetCentroidFill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CENTROIDFILL_H
