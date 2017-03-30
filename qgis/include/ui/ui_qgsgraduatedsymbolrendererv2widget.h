/********************************************************************************
** Form generated from reading UI file 'qgsgraduatedsymbolrendererv2widget.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGRADUATEDSYMBOLRENDERERV2WIDGET_H
#define UI_QGSGRADUATEDSYMBOLRENDERERV2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgsfieldexpressionwidget.h>
#include "qgscolorrampcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGraduatedSymbolRendererV2Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinPrecision;
    QCheckBox *cbxTrimTrailingZeroes;
    QLineEdit *txtFormat;
    QLabel *label_8;
    QLabel *label_7;
    QComboBox *cboGraduatedMode;
    QLabel *label_6;
    QPushButton *btnChangeGraduatedSymbol;
    QSpinBox *spinGraduatedClasses;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QgsColorRampComboBox *cboGraduatedColorRamp;
    QCheckBox *cbxInvertedColorRamp;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QgsFieldExpressionWidget *mExpressionWidget;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_16;
    QTreeView *viewGraduated;
    QHBoxLayout *_2;
    QPushButton *btnGraduatedClassify;
    QPushButton *btnGraduatedAdd;
    QPushButton *btnGraduatedDelete;
    QPushButton *btnDeleteAllClasses;
    QCheckBox *cbxLinkBoundaries;
    QSpacerItem *spacerItem;
    QPushButton *btnAdvanced;

    void setupUi(QWidget *QgsGraduatedSymbolRendererV2Widget)
    {
        if (QgsGraduatedSymbolRendererV2Widget->objectName().isEmpty())
            QgsGraduatedSymbolRendererV2Widget->setObjectName(QString::fromUtf8("QgsGraduatedSymbolRendererV2Widget"));
        QgsGraduatedSymbolRendererV2Widget->resize(647, 339);
        verticalLayout = new QVBoxLayout(QgsGraduatedSymbolRendererV2Widget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, 6, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        spinPrecision = new QSpinBox(QgsGraduatedSymbolRendererV2Widget);
        spinPrecision->setObjectName(QString::fromUtf8("spinPrecision"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinPrecision->sizePolicy().hasHeightForWidth());
        spinPrecision->setSizePolicy(sizePolicy);
        spinPrecision->setMinimum(0);
        spinPrecision->setMaximum(10);
        spinPrecision->setValue(4);

        horizontalLayout_7->addWidget(spinPrecision);

        cbxTrimTrailingZeroes = new QCheckBox(QgsGraduatedSymbolRendererV2Widget);
        cbxTrimTrailingZeroes->setObjectName(QString::fromUtf8("cbxTrimTrailingZeroes"));

        horizontalLayout_7->addWidget(cbxTrimTrailingZeroes);


        gridLayout->addLayout(horizontalLayout_7, 6, 3, 1, 1);

        txtFormat = new QLineEdit(QgsGraduatedSymbolRendererV2Widget);
        txtFormat->setObjectName(QString::fromUtf8("txtFormat"));
        txtFormat->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(txtFormat, 6, 1, 1, 1);

        label_8 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 5, 2, 1, 1);

        label_7 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        cboGraduatedMode = new QComboBox(QgsGraduatedSymbolRendererV2Widget);
        cboGraduatedMode->setObjectName(QString::fromUtf8("cboGraduatedMode"));

        gridLayout->addWidget(cboGraduatedMode, 5, 3, 1, 1);

        label_6 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        btnChangeGraduatedSymbol = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnChangeGraduatedSymbol->setObjectName(QString::fromUtf8("btnChangeGraduatedSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnChangeGraduatedSymbol->sizePolicy().hasHeightForWidth());
        btnChangeGraduatedSymbol->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btnChangeGraduatedSymbol, 4, 1, 1, 1);

        spinGraduatedClasses = new QSpinBox(QgsGraduatedSymbolRendererV2Widget);
        spinGraduatedClasses->setObjectName(QString::fromUtf8("spinGraduatedClasses"));
        sizePolicy.setHeightForWidth(spinGraduatedClasses->sizePolicy().hasHeightForWidth());
        spinGraduatedClasses->setSizePolicy(sizePolicy);
        spinGraduatedClasses->setMinimum(1);
        spinGraduatedClasses->setMaximum(999);
        spinGraduatedClasses->setValue(5);

        gridLayout->addWidget(spinGraduatedClasses, 4, 3, 1, 1);

        label_5 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cboGraduatedColorRamp = new QgsColorRampComboBox(QgsGraduatedSymbolRendererV2Widget);
        cboGraduatedColorRamp->setObjectName(QString::fromUtf8("cboGraduatedColorRamp"));

        horizontalLayout_2->addWidget(cboGraduatedColorRamp);

        cbxInvertedColorRamp = new QCheckBox(QgsGraduatedSymbolRendererV2Widget);
        cbxInvertedColorRamp->setObjectName(QString::fromUtf8("cbxInvertedColorRamp"));

        horizontalLayout_2->addWidget(cbxInvertedColorRamp);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        label_4 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        mExpressionWidget = new QgsFieldExpressionWidget(QgsGraduatedSymbolRendererV2Widget);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));
        mExpressionWidget->setMinimumSize(QSize(0, 0));
        mExpressionWidget->setMaximumSize(QSize(500, 16777215));

        horizontalLayout->addWidget(mExpressionWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 2);

        label = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label, 6, 0, 1, 1);

        label_16 = new QLabel(QgsGraduatedSymbolRendererV2Widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 6, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        viewGraduated = new QTreeView(QgsGraduatedSymbolRendererV2Widget);
        viewGraduated->setObjectName(QString::fromUtf8("viewGraduated"));
        viewGraduated->setContextMenuPolicy(Qt::CustomContextMenu);
        viewGraduated->setProperty("showDropIndicator", QVariant(true));
        viewGraduated->setDragDropMode(QAbstractItemView::InternalMove);
        viewGraduated->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewGraduated->setRootIsDecorated(false);
        viewGraduated->setItemsExpandable(false);
        viewGraduated->setSortingEnabled(true);

        verticalLayout->addWidget(viewGraduated);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        btnGraduatedClassify = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnGraduatedClassify->setObjectName(QString::fromUtf8("btnGraduatedClassify"));

        _2->addWidget(btnGraduatedClassify);

        btnGraduatedAdd = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnGraduatedAdd->setObjectName(QString::fromUtf8("btnGraduatedAdd"));

        _2->addWidget(btnGraduatedAdd);

        btnGraduatedDelete = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnGraduatedDelete->setObjectName(QString::fromUtf8("btnGraduatedDelete"));

        _2->addWidget(btnGraduatedDelete);

        btnDeleteAllClasses = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnDeleteAllClasses->setObjectName(QString::fromUtf8("btnDeleteAllClasses"));

        _2->addWidget(btnDeleteAllClasses);

        cbxLinkBoundaries = new QCheckBox(QgsGraduatedSymbolRendererV2Widget);
        cbxLinkBoundaries->setObjectName(QString::fromUtf8("cbxLinkBoundaries"));
        cbxLinkBoundaries->setChecked(true);

        _2->addWidget(cbxLinkBoundaries);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(spacerItem);

        btnAdvanced = new QPushButton(QgsGraduatedSymbolRendererV2Widget);
        btnAdvanced->setObjectName(QString::fromUtf8("btnAdvanced"));

        _2->addWidget(btnAdvanced);


        verticalLayout->addLayout(_2);

#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(cboGraduatedMode);
        label_7->setBuddy(cboGraduatedColorRamp);
        label_6->setBuddy(btnChangeGraduatedSymbol);
        label_5->setBuddy(spinGraduatedClasses);
        label->setBuddy(txtFormat);
        label_16->setBuddy(spinPrecision);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnChangeGraduatedSymbol, spinGraduatedClasses);
        QWidget::setTabOrder(spinGraduatedClasses, cboGraduatedColorRamp);
        QWidget::setTabOrder(cboGraduatedColorRamp, cbxInvertedColorRamp);
        QWidget::setTabOrder(cbxInvertedColorRamp, cboGraduatedMode);
        QWidget::setTabOrder(cboGraduatedMode, txtFormat);
        QWidget::setTabOrder(txtFormat, spinPrecision);
        QWidget::setTabOrder(spinPrecision, cbxTrimTrailingZeroes);
        QWidget::setTabOrder(cbxTrimTrailingZeroes, viewGraduated);
        QWidget::setTabOrder(viewGraduated, btnGraduatedClassify);
        QWidget::setTabOrder(btnGraduatedClassify, btnGraduatedAdd);
        QWidget::setTabOrder(btnGraduatedAdd, btnGraduatedDelete);
        QWidget::setTabOrder(btnGraduatedDelete, btnDeleteAllClasses);
        QWidget::setTabOrder(btnDeleteAllClasses, cbxLinkBoundaries);
        QWidget::setTabOrder(cbxLinkBoundaries, btnAdvanced);

        retranslateUi(QgsGraduatedSymbolRendererV2Widget);

        QMetaObject::connectSlotsByName(QgsGraduatedSymbolRendererV2Widget);
    } // setupUi

    void retranslateUi(QWidget *QgsGraduatedSymbolRendererV2Widget)
    {
#ifndef QT_NO_TOOLTIP
        spinPrecision->setToolTip(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Precision of upper and lower values in label text.\n"
"Positive is number of decimal places\n"
"Negative rounds to powers of 10", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbxTrimTrailingZeroes->setToolTip(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Check to remove trailing zeroes after the decimal point from the upper and lower values in the legend.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbxTrimTrailingZeroes->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Trim", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtFormat->setToolTip(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Template for the legend text associated with each classification.  \n"
"Use \"%1\" for the lower bound of the classification, and \"%2\" for the upper bound.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Mode", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Color ramp", 0, QApplication::UnicodeUTF8));
        cboGraduatedMode->clear();
        cboGraduatedMode->insertItems(0, QStringList()
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Equal Interval", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Quantile (Equal Count)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Natural Breaks (Jenks)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Standard Deviation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Pretty Breaks", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Symbol", 0, QApplication::UnicodeUTF8));
        btnChangeGraduatedSymbol->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Change...", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Classes", 0, QApplication::UnicodeUTF8));
        cbxInvertedColorRamp->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Invert", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Column", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Legend Format", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Precision", 0, QApplication::UnicodeUTF8));
        btnGraduatedClassify->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Classify", 0, QApplication::UnicodeUTF8));
        btnGraduatedAdd->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Add class", 0, QApplication::UnicodeUTF8));
        btnGraduatedDelete->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Delete", 0, QApplication::UnicodeUTF8));
        btnDeleteAllClasses->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Delete all", 0, QApplication::UnicodeUTF8));
        cbxLinkBoundaries->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Link class boundaries", 0, QApplication::UnicodeUTF8));
        btnAdvanced->setText(QApplication::translate("QgsGraduatedSymbolRendererV2Widget", "Advanced", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsGraduatedSymbolRendererV2Widget);
    } // retranslateUi

};

namespace Ui {
    class QgsGraduatedSymbolRendererV2Widget: public Ui_QgsGraduatedSymbolRendererV2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGRADUATEDSYMBOLRENDERERV2WIDGET_H
