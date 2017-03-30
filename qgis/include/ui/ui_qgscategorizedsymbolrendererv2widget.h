/********************************************************************************
** Form generated from reading UI file 'qgscategorizedsymbolrendererv2widget.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCATEGORIZEDSYMBOLRENDERERV2WIDGET_H
#define UI_QGSCATEGORIZEDSYMBOLRENDERERV2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgsfieldexpressionwidget.h>
#include "qgscolorrampcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCategorizedSymbolRendererV2Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QgsFieldExpressionWidget *mExpressionWidget;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QPushButton *btnChangeCategorizedSymbol;
    QLabel *label_10;
    QgsColorRampComboBox *cboCategorizedColorRamp;
    QCheckBox *cbxInvertedColorRamp;
    QTreeView *viewCategories;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddCategories;
    QPushButton *btnAddCategory;
    QPushButton *btnDeleteCategories;
    QPushButton *btnDeleteAllCategories;
    QSpacerItem *spacerItem;
    QPushButton *btnJoinCategories;
    QPushButton *btnAdvanced;

    void setupUi(QWidget *QgsCategorizedSymbolRendererV2Widget)
    {
        if (QgsCategorizedSymbolRendererV2Widget->objectName().isEmpty())
            QgsCategorizedSymbolRendererV2Widget->setObjectName(QString::fromUtf8("QgsCategorizedSymbolRendererV2Widget"));
        QgsCategorizedSymbolRendererV2Widget->resize(597, 296);
        verticalLayout = new QVBoxLayout(QgsCategorizedSymbolRendererV2Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(QgsCategorizedSymbolRendererV2Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsCategorizedSymbolRendererV2Widget);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        mExpressionWidget->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(mExpressionWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(QgsCategorizedSymbolRendererV2Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        btnChangeCategorizedSymbol = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnChangeCategorizedSymbol->setObjectName(QString::fromUtf8("btnChangeCategorizedSymbol"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnChangeCategorizedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeCategorizedSymbol->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnChangeCategorizedSymbol);

        label_10 = new QLabel(QgsCategorizedSymbolRendererV2Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        cboCategorizedColorRamp = new QgsColorRampComboBox(QgsCategorizedSymbolRendererV2Widget);
        cboCategorizedColorRamp->setObjectName(QString::fromUtf8("cboCategorizedColorRamp"));
        sizePolicy.setHeightForWidth(cboCategorizedColorRamp->sizePolicy().hasHeightForWidth());
        cboCategorizedColorRamp->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cboCategorizedColorRamp);

        cbxInvertedColorRamp = new QCheckBox(QgsCategorizedSymbolRendererV2Widget);
        cbxInvertedColorRamp->setObjectName(QString::fromUtf8("cbxInvertedColorRamp"));

        horizontalLayout->addWidget(cbxInvertedColorRamp);


        verticalLayout->addLayout(horizontalLayout);

        viewCategories = new QTreeView(QgsCategorizedSymbolRendererV2Widget);
        viewCategories->setObjectName(QString::fromUtf8("viewCategories"));
        viewCategories->setContextMenuPolicy(Qt::CustomContextMenu);
        viewCategories->setDragDropMode(QAbstractItemView::InternalMove);
        viewCategories->setDefaultDropAction(Qt::IgnoreAction);
        viewCategories->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewCategories->setIconSize(QSize(16, 16));
        viewCategories->setRootIsDecorated(false);
        viewCategories->setItemsExpandable(false);
        viewCategories->setSortingEnabled(true);
        viewCategories->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(viewCategories);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAddCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnAddCategories->setObjectName(QString::fromUtf8("btnAddCategories"));

        horizontalLayout_3->addWidget(btnAddCategories);

        btnAddCategory = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnAddCategory->setObjectName(QString::fromUtf8("btnAddCategory"));

        horizontalLayout_3->addWidget(btnAddCategory);

        btnDeleteCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnDeleteCategories->setObjectName(QString::fromUtf8("btnDeleteCategories"));

        horizontalLayout_3->addWidget(btnDeleteCategories);

        btnDeleteAllCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnDeleteAllCategories->setObjectName(QString::fromUtf8("btnDeleteAllCategories"));

        horizontalLayout_3->addWidget(btnDeleteAllCategories);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(spacerItem);

        btnJoinCategories = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnJoinCategories->setObjectName(QString::fromUtf8("btnJoinCategories"));
        btnJoinCategories->setEnabled(false);

        horizontalLayout_3->addWidget(btnJoinCategories);

        btnAdvanced = new QPushButton(QgsCategorizedSymbolRendererV2Widget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        horizontalLayout_3->addWidget(btnAdvanced);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(btnChangeCategorizedSymbol, cboCategorizedColorRamp);
        QWidget::setTabOrder(cboCategorizedColorRamp, cbxInvertedColorRamp);
        QWidget::setTabOrder(cbxInvertedColorRamp, viewCategories);
        QWidget::setTabOrder(viewCategories, btnAddCategories);
        QWidget::setTabOrder(btnAddCategories, btnDeleteCategories);
        QWidget::setTabOrder(btnDeleteCategories, btnDeleteAllCategories);
        QWidget::setTabOrder(btnDeleteAllCategories, btnJoinCategories);

        retranslateUi(QgsCategorizedSymbolRendererV2Widget);

        QMetaObject::connectSlotsByName(QgsCategorizedSymbolRendererV2Widget);
    } // setupUi

    void retranslateUi(QWidget *QgsCategorizedSymbolRendererV2Widget)
    {
        label_3->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Column", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Symbol", 0, QApplication::UnicodeUTF8));
        btnChangeCategorizedSymbol->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Change...", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Color ramp", 0, QApplication::UnicodeUTF8));
        cbxInvertedColorRamp->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Invert", 0, QApplication::UnicodeUTF8));
        btnAddCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Classify", 0, QApplication::UnicodeUTF8));
        btnAddCategory->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Add", 0, QApplication::UnicodeUTF8));
        btnDeleteCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Delete", 0, QApplication::UnicodeUTF8));
        btnDeleteAllCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Delete all", 0, QApplication::UnicodeUTF8));
        btnJoinCategories->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Join", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("QgsCategorizedSymbolRendererV2Widget", "Advanced", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsCategorizedSymbolRendererV2Widget);
    } // retranslateUi

};

namespace Ui {
    class QgsCategorizedSymbolRendererV2Widget: public Ui_QgsCategorizedSymbolRendererV2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCATEGORIZEDSYMBOLRENDERERV2WIDGET_H
