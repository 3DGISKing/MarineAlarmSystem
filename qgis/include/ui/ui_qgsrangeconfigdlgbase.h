/********************************************************************************
** Form generated from reading UI file 'qgsrangeconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRANGECONFIGDLGBASE_H
#define UI_QGSRANGECONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRangeConfigDlgBase
{
public:
    QGridLayout *gridLayout;
    QLabel *rangeLabel;
    QgsCollapsibleGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *suffixLabel;
    QLineEdit *suffixLineEdit;
    QComboBox *rangeWidget;
    QSpacerItem *verticalSpacer;
    QLabel *valuesLabel;
    QStackedWidget *rangeStackedWidget;
    QWidget *intPage;
    QFormLayout *formLayout;
    QLabel *minimumLabel;
    QSpinBox *minimumSpinBox;
    QLabel *maximumLabel;
    QSpinBox *maximumSpinBox;
    QLabel *stepLabel;
    QSpinBox *stepSpinBox;
    QWidget *doublePage;
    QFormLayout *formLayout_2;
    QLabel *stepLabel_2;
    QLabel *maximumLabel_2;
    QLabel *minimumLabel_2;
    QDoubleSpinBox *minimumDoubleSpinBox;
    QDoubleSpinBox *maximumDoubleSpinBox;
    QDoubleSpinBox *stepDoubleSpinBox;
    QCheckBox *allowNullCheckBox;

    void setupUi(QWidget *QgsRangeConfigDlgBase)
    {
        if (QgsRangeConfigDlgBase->objectName().isEmpty())
            QgsRangeConfigDlgBase->setObjectName(QString::fromUtf8("QgsRangeConfigDlgBase"));
        QgsRangeConfigDlgBase->resize(549, 333);
        gridLayout = new QGridLayout(QgsRangeConfigDlgBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rangeLabel = new QLabel(QgsRangeConfigDlgBase);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));
        rangeLabel->setWordWrap(true);

        gridLayout->addWidget(rangeLabel, 0, 0, 1, 2);

        groupBox = new QgsCollapsibleGroupBox(QgsRangeConfigDlgBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        suffixLabel = new QLabel(groupBox);
        suffixLabel->setObjectName(QString::fromUtf8("suffixLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, suffixLabel);

        suffixLineEdit = new QLineEdit(groupBox);
        suffixLineEdit->setObjectName(QString::fromUtf8("suffixLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, suffixLineEdit);


        gridLayout->addWidget(groupBox, 4, 0, 1, 1);

        rangeWidget = new QComboBox(QgsRangeConfigDlgBase);
        rangeWidget->setObjectName(QString::fromUtf8("rangeWidget"));

        gridLayout->addWidget(rangeWidget, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        valuesLabel = new QLabel(QgsRangeConfigDlgBase);
        valuesLabel->setObjectName(QString::fromUtf8("valuesLabel"));
        valuesLabel->setWordWrap(true);

        gridLayout->addWidget(valuesLabel, 5, 0, 1, 1);

        rangeStackedWidget = new QStackedWidget(QgsRangeConfigDlgBase);
        rangeStackedWidget->setObjectName(QString::fromUtf8("rangeStackedWidget"));
        intPage = new QWidget();
        intPage->setObjectName(QString::fromUtf8("intPage"));
        formLayout = new QFormLayout(intPage);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 3);
        minimumLabel = new QLabel(intPage);
        minimumLabel->setObjectName(QString::fromUtf8("minimumLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumLabel);

        minimumSpinBox = new QSpinBox(intPage);
        minimumSpinBox->setObjectName(QString::fromUtf8("minimumSpinBox"));
        minimumSpinBox->setMinimum(-999999999);
        minimumSpinBox->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, minimumSpinBox);

        maximumLabel = new QLabel(intPage);
        maximumLabel->setObjectName(QString::fromUtf8("maximumLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maximumLabel);

        maximumSpinBox = new QSpinBox(intPage);
        maximumSpinBox->setObjectName(QString::fromUtf8("maximumSpinBox"));
        maximumSpinBox->setMinimum(-999999999);
        maximumSpinBox->setMaximum(999999999);
        maximumSpinBox->setValue(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, maximumSpinBox);

        stepLabel = new QLabel(intPage);
        stepLabel->setObjectName(QString::fromUtf8("stepLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, stepLabel);

        stepSpinBox = new QSpinBox(intPage);
        stepSpinBox->setObjectName(QString::fromUtf8("stepSpinBox"));
        stepSpinBox->setMaximum(999999999);
        stepSpinBox->setValue(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, stepSpinBox);

        rangeStackedWidget->addWidget(intPage);
        doublePage = new QWidget();
        doublePage->setObjectName(QString::fromUtf8("doublePage"));
        formLayout_2 = new QFormLayout(doublePage);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, -1, 3);
        stepLabel_2 = new QLabel(doublePage);
        stepLabel_2->setObjectName(QString::fromUtf8("stepLabel_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, stepLabel_2);

        maximumLabel_2 = new QLabel(doublePage);
        maximumLabel_2->setObjectName(QString::fromUtf8("maximumLabel_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, maximumLabel_2);

        minimumLabel_2 = new QLabel(doublePage);
        minimumLabel_2->setObjectName(QString::fromUtf8("minimumLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, minimumLabel_2);

        minimumDoubleSpinBox = new QDoubleSpinBox(doublePage);
        minimumDoubleSpinBox->setObjectName(QString::fromUtf8("minimumDoubleSpinBox"));
        minimumDoubleSpinBox->setMinimum(-1e+09);
        minimumDoubleSpinBox->setMaximum(1e+09);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, minimumDoubleSpinBox);

        maximumDoubleSpinBox = new QDoubleSpinBox(doublePage);
        maximumDoubleSpinBox->setObjectName(QString::fromUtf8("maximumDoubleSpinBox"));
        maximumDoubleSpinBox->setMinimum(-1e+09);
        maximumDoubleSpinBox->setMaximum(1e+09);
        maximumDoubleSpinBox->setValue(5);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, maximumDoubleSpinBox);

        stepDoubleSpinBox = new QDoubleSpinBox(doublePage);
        stepDoubleSpinBox->setObjectName(QString::fromUtf8("stepDoubleSpinBox"));
        stepDoubleSpinBox->setMaximum(1e+09);
        stepDoubleSpinBox->setValue(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, stepDoubleSpinBox);

        rangeStackedWidget->addWidget(doublePage);

        gridLayout->addWidget(rangeStackedWidget, 2, 0, 1, 1);

        allowNullCheckBox = new QCheckBox(QgsRangeConfigDlgBase);
        allowNullCheckBox->setObjectName(QString::fromUtf8("allowNullCheckBox"));

        gridLayout->addWidget(allowNullCheckBox, 3, 0, 1, 1);


        retranslateUi(QgsRangeConfigDlgBase);

        rangeStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsRangeConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRangeConfigDlgBase)
    {
        QgsRangeConfigDlgBase->setWindowTitle(QApplication::translate("QgsRangeConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        rangeLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Allows setting of numeric values from a specified range. The edit widget can be either a slider or a spin box.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsRangeConfigDlgBase", "Advanced options", 0, QApplication::UnicodeUTF8));
        suffixLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Suffix", 0, QApplication::UnicodeUTF8));
        suffixLineEdit->setPlaceholderText(QApplication::translate("QgsRangeConfigDlgBase", "Inactive", 0, QApplication::UnicodeUTF8));
        valuesLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Local minimum/maximum = 0/0", 0, QApplication::UnicodeUTF8));
        minimumLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Minimum", 0, QApplication::UnicodeUTF8));
        maximumLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Maximum", 0, QApplication::UnicodeUTF8));
        stepLabel->setText(QApplication::translate("QgsRangeConfigDlgBase", "Step", 0, QApplication::UnicodeUTF8));
        stepLabel_2->setText(QApplication::translate("QgsRangeConfigDlgBase", "Step", 0, QApplication::UnicodeUTF8));
        maximumLabel_2->setText(QApplication::translate("QgsRangeConfigDlgBase", "Maximum", 0, QApplication::UnicodeUTF8));
        minimumLabel_2->setText(QApplication::translate("QgsRangeConfigDlgBase", "Minimum", 0, QApplication::UnicodeUTF8));
        allowNullCheckBox->setText(QApplication::translate("QgsRangeConfigDlgBase", "Allow NULL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRangeConfigDlgBase: public Ui_QgsRangeConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRANGECONFIGDLGBASE_H
