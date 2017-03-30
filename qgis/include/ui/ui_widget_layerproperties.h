/********************************************************************************
** Form generated from reading UI file 'widget_layerproperties.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_LAYERPROPERTIES_H
#define UI_WIDGET_LAYERPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerPropertiesWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboLayerType;
    QStackedWidget *stackedWidget;
    QWidget *pageDummy;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;

    void setupUi(QWidget *LayerPropertiesWidget)
    {
        if (LayerPropertiesWidget->objectName().isEmpty())
            LayerPropertiesWidget->setObjectName(QString::fromUtf8("LayerPropertiesWidget"));
        LayerPropertiesWidget->resize(318, 439);
        gridLayout = new QGridLayout(LayerPropertiesWidget);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(LayerPropertiesWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cboLayerType = new QComboBox(LayerPropertiesWidget);
        cboLayerType->setObjectName(QString::fromUtf8("cboLayerType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboLayerType->sizePolicy().hasHeightForWidth());
        cboLayerType->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cboLayerType);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(LayerPropertiesWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDummy = new QWidget();
        pageDummy->setObjectName(QString::fromUtf8("pageDummy"));
        verticalLayout = new QVBoxLayout(pageDummy);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(pageDummy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(pageDummy);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(LayerPropertiesWidget);

        QMetaObject::connectSlotsByName(LayerPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *LayerPropertiesWidget)
    {
        LayerPropertiesWidget->setWindowTitle(QApplication::translate("LayerPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LayerPropertiesWidget", "Symbol layer type", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LayerPropertiesWidget", "This layer doesn't have any editable properties", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LayerPropertiesWidget: public Ui_LayerPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LAYERPROPERTIES_H
