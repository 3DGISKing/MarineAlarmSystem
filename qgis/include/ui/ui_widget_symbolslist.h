/********************************************************************************
** Form generated from reading UI file 'widget_symbolslist.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SYMBOLSLIST_H
#define UI_WIDGET_SYMBOLSLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "qgscolorbuttonv2.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SymbolsListWidget
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QLabel *mSymbolUnitLabel;
    QLabel *mTransparencyLabel;
    QSlider *mTransparencySlider;
    QLabel *label_5;
    QgsColorButtonV2 *btnColor;
    QgsUnitSelectionWidget *mSymbolUnitWidget;
    QStackedWidget *stackedWidget;
    QWidget *pageMarker;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinSize;
    QLabel *label_3;
    QDoubleSpinBox *spinAngle;
    QWidget *pageLine;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *spinWidth;
    QWidget *pageFill;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *groupsCombo;
    QPushButton *openStyleManagerButton;
    QListView *viewSymbols;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblSymbolName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdvanced;
    QFrame *line;

    void setupUi(QWidget *SymbolsListWidget)
    {
        if (SymbolsListWidget->objectName().isEmpty())
            SymbolsListWidget->setObjectName(QString::fromUtf8("SymbolsListWidget"));
        SymbolsListWidget->resize(398, 429);
        gridLayout_4 = new QGridLayout(SymbolsListWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mSymbolUnitLabel = new QLabel(SymbolsListWidget);
        mSymbolUnitLabel->setObjectName(QString::fromUtf8("mSymbolUnitLabel"));

        gridLayout_3->addWidget(mSymbolUnitLabel, 0, 0, 1, 1);

        mTransparencyLabel = new QLabel(SymbolsListWidget);
        mTransparencyLabel->setObjectName(QString::fromUtf8("mTransparencyLabel"));

        gridLayout_3->addWidget(mTransparencyLabel, 1, 0, 1, 1);

        mTransparencySlider = new QSlider(SymbolsListWidget);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTransparencySlider->sizePolicy().hasHeightForWidth());
        mTransparencySlider->setSizePolicy(sizePolicy);
        mTransparencySlider->setMaximum(255);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(mTransparencySlider, 1, 1, 1, 1);

        label_5 = new QLabel(SymbolsListWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        btnColor = new QgsColorButtonV2(SymbolsListWidget);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setMinimumSize(QSize(120, 0));
        btnColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(btnColor, 2, 1, 1, 1);

        mSymbolUnitWidget = new QgsUnitSelectionWidget(SymbolsListWidget);
        mSymbolUnitWidget->setObjectName(QString::fromUtf8("mSymbolUnitWidget"));

        gridLayout_3->addWidget(mSymbolUnitWidget, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        stackedWidget = new QStackedWidget(SymbolsListWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        pageMarker = new QWidget();
        pageMarker->setObjectName(QString::fromUtf8("pageMarker"));
        gridLayout = new QGridLayout(pageMarker);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(pageMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinSize = new QDoubleSpinBox(pageMarker);
        spinSize->setObjectName(QString::fromUtf8("spinSize"));
        spinSize->setDecimals(5);
        spinSize->setMaximum(99999);
        spinSize->setSingleStep(0.2);
        spinSize->setValue(1);

        gridLayout->addWidget(spinSize, 0, 1, 1, 1);

        label_3 = new QLabel(pageMarker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinAngle = new QDoubleSpinBox(pageMarker);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(0.5);

        gridLayout->addWidget(spinAngle, 1, 1, 1, 1);

        stackedWidget->addWidget(pageMarker);
        pageLine = new QWidget();
        pageLine->setObjectName(QString::fromUtf8("pageLine"));
        gridLayout_2 = new QGridLayout(pageLine);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(pageLine);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinWidth = new QDoubleSpinBox(pageLine);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setDecimals(5);
        spinWidth->setMaximum(99999);
        spinWidth->setSingleStep(0.2);
        spinWidth->setValue(1);

        gridLayout_2->addWidget(spinWidth, 0, 1, 1, 1);

        stackedWidget->addWidget(pageLine);
        pageFill = new QWidget();
        pageFill->setObjectName(QString::fromUtf8("pageFill"));
        horizontalLayout_2 = new QHBoxLayout(pageFill);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(pageFill);

        horizontalLayout->addWidget(stackedWidget);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(SymbolsListWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        groupsCombo = new QComboBox(SymbolsListWidget);
        groupsCombo->setObjectName(QString::fromUtf8("groupsCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupsCombo->sizePolicy().hasHeightForWidth());
        groupsCombo->setSizePolicy(sizePolicy2);
        groupsCombo->setMinimumSize(QSize(50, 0));
        groupsCombo->setEditable(true);

        horizontalLayout_3->addWidget(groupsCombo);

        openStyleManagerButton = new QPushButton(SymbolsListWidget);
        openStyleManagerButton->setObjectName(QString::fromUtf8("openStyleManagerButton"));

        horizontalLayout_3->addWidget(openStyleManagerButton);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        viewSymbols = new QListView(SymbolsListWidget);
        viewSymbols->setObjectName(QString::fromUtf8("viewSymbols"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(viewSymbols->sizePolicy().hasHeightForWidth());
        viewSymbols->setSizePolicy(sizePolicy3);
        viewSymbols->setIconSize(QSize(48, 48));
        viewSymbols->setTextElideMode(Qt::ElideNone);
        viewSymbols->setFlow(QListView::LeftToRight);
        viewSymbols->setResizeMode(QListView::Adjust);
        viewSymbols->setSpacing(5);
        viewSymbols->setViewMode(QListView::IconMode);
        viewSymbols->setUniformItemSizes(true);
        viewSymbols->setWordWrap(true);

        gridLayout_4->addWidget(viewSymbols, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 2, -1, -1);
        lblSymbolName = new QLabel(SymbolsListWidget);
        lblSymbolName->setObjectName(QString::fromUtf8("lblSymbolName"));

        horizontalLayout_4->addWidget(lblSymbolName);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnAdvanced = new QPushButton(SymbolsListWidget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        horizontalLayout_4->addWidget(btnAdvanced);


        gridLayout_4->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        line = new QFrame(SymbolsListWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mTransparencyLabel->setBuddy(mTransparencySlider);
        label_5->setBuddy(btnColor);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(viewSymbols, mSymbolUnitWidget);
        QWidget::setTabOrder(mSymbolUnitWidget, mTransparencySlider);
        QWidget::setTabOrder(mTransparencySlider, btnColor);
        QWidget::setTabOrder(btnColor, spinSize);
        QWidget::setTabOrder(spinSize, spinAngle);
        QWidget::setTabOrder(spinAngle, groupsCombo);
        QWidget::setTabOrder(groupsCombo, openStyleManagerButton);
        QWidget::setTabOrder(openStyleManagerButton, btnAdvanced);
        QWidget::setTabOrder(btnAdvanced, spinWidth);

        retranslateUi(SymbolsListWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SymbolsListWidget);
    } // setupUi

    void retranslateUi(QWidget *SymbolsListWidget)
    {
        SymbolsListWidget->setWindowTitle(QApplication::translate("SymbolsListWidget", "Form", 0, QApplication::UnicodeUTF8));
        mSymbolUnitLabel->setText(QApplication::translate("SymbolsListWidget", "Unit", 0, QApplication::UnicodeUTF8));
        mTransparencyLabel->setText(QApplication::translate("SymbolsListWidget", "Opacity", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SymbolsListWidget", "Color", 0, QApplication::UnicodeUTF8));
        btnColor->setText(QString());
        label_2->setText(QApplication::translate("SymbolsListWidget", "Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SymbolsListWidget", "Rotation", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("SymbolsListWidget", "\302\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SymbolsListWidget", "Width", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SymbolsListWidget", "Symbols in group", 0, QApplication::UnicodeUTF8));
        openStyleManagerButton->setText(QApplication::translate("SymbolsListWidget", "Open Library", 0, QApplication::UnicodeUTF8));
        lblSymbolName->setText(QApplication::translate("SymbolsListWidget", "Symbol Name", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("SymbolsListWidget", "Advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SymbolsListWidget: public Ui_SymbolsListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SYMBOLSLIST_H
