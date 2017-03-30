/********************************************************************************
** Form generated from reading UI file 'qgsfieldcalculatorbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDCALCULATORBASE_H
#define UI_QGSFIELDCALCULATORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldCalculatorBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mOnlyUpdateSelectedCheckBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *mInfoIcon;
    QLabel *mEditModeAutoTurnOnLabel;
    QLabel *mOnlyVirtualFieldsInfoLabel;
    QGroupBox *mUpdateExistingGroupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *mExistingFieldComboBox;
    QgsExpressionBuilderWidget *builder;
    QDialogButtonBox *mButtonBox;
    QGroupBox *mNewFieldGroupBox;
    QGridLayout *gridLayout1;
    QSpinBox *mOutputFieldPrecisionSpinBox;
    QLabel *mFieldNameLabel;
    QLabel *mOutputFieldWidthLabel;
    QComboBox *mOutputFieldTypeComboBox;
    QSpinBox *mOutputFieldWidthSpinBox;
    QLineEdit *mOutputFieldNameLineEdit;
    QLabel *mOutputFieldTypeLabel;
    QLabel *mOutputFieldPrecisionLabel;
    QCheckBox *mCreateVirtualFieldCheckbox;

    void setupUi(QDialog *QgsFieldCalculatorBase)
    {
        if (QgsFieldCalculatorBase->objectName().isEmpty())
            QgsFieldCalculatorBase->setObjectName(QString::fromUtf8("QgsFieldCalculatorBase"));
        QgsFieldCalculatorBase->resize(681, 624);
        gridLayout = new QGridLayout(QgsFieldCalculatorBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mOnlyUpdateSelectedCheckBox = new QCheckBox(QgsFieldCalculatorBase);
        mOnlyUpdateSelectedCheckBox->setObjectName(QString::fromUtf8("mOnlyUpdateSelectedCheckBox"));

        gridLayout->addWidget(mOnlyUpdateSelectedCheckBox, 0, 0, 1, 1);

        widget = new QWidget(QgsFieldCalculatorBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mInfoIcon = new QLabel(widget);
        mInfoIcon->setObjectName(QString::fromUtf8("mInfoIcon"));
        mInfoIcon->setMinimumSize(QSize(64, 64));
        mInfoIcon->setMaximumSize(QSize(64, 64));

        gridLayout_2->addWidget(mInfoIcon, 0, 0, 1, 1);

        mEditModeAutoTurnOnLabel = new QLabel(widget);
        mEditModeAutoTurnOnLabel->setObjectName(QString::fromUtf8("mEditModeAutoTurnOnLabel"));
        mEditModeAutoTurnOnLabel->setWordWrap(true);

        gridLayout_2->addWidget(mEditModeAutoTurnOnLabel, 0, 1, 1, 1);

        mOnlyVirtualFieldsInfoLabel = new QLabel(widget);
        mOnlyVirtualFieldsInfoLabel->setObjectName(QString::fromUtf8("mOnlyVirtualFieldsInfoLabel"));
        mOnlyVirtualFieldsInfoLabel->setWordWrap(true);

        gridLayout_2->addWidget(mOnlyVirtualFieldsInfoLabel, 1, 1, 1, 1);


        gridLayout->addWidget(widget, 3, 0, 1, 2);

        mUpdateExistingGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mUpdateExistingGroupBox->setObjectName(QString::fromUtf8("mUpdateExistingGroupBox"));
        mUpdateExistingGroupBox->setFlat(true);
        mUpdateExistingGroupBox->setCheckable(true);
        mUpdateExistingGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(mUpdateExistingGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 9, 3, 0);
        mExistingFieldComboBox = new QComboBox(mUpdateExistingGroupBox);
        mExistingFieldComboBox->setObjectName(QString::fromUtf8("mExistingFieldComboBox"));

        verticalLayout->addWidget(mExistingFieldComboBox);


        gridLayout->addWidget(mUpdateExistingGroupBox, 1, 1, 1, 1);

        builder = new QgsExpressionBuilderWidget(QgsFieldCalculatorBase);
        builder->setObjectName(QString::fromUtf8("builder"));
        builder->setAutoFillBackground(false);

        gridLayout->addWidget(builder, 2, 0, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsFieldCalculatorBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonBox->sizePolicy().hasHeightForWidth());
        mButtonBox->setSizePolicy(sizePolicy);
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 7, 0, 1, 2);

        mNewFieldGroupBox = new QGroupBox(QgsFieldCalculatorBase);
        mNewFieldGroupBox->setObjectName(QString::fromUtf8("mNewFieldGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNewFieldGroupBox->sizePolicy().hasHeightForWidth());
        mNewFieldGroupBox->setSizePolicy(sizePolicy1);
        mNewFieldGroupBox->setFlat(true);
        mNewFieldGroupBox->setCheckable(true);
        mNewFieldGroupBox->setChecked(true);
        gridLayout1 = new QGridLayout(mNewFieldGroupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout1->setVerticalSpacing(3);
        gridLayout1->setContentsMargins(3, 9, 3, 0);
        mOutputFieldPrecisionSpinBox = new QSpinBox(mNewFieldGroupBox);
        mOutputFieldPrecisionSpinBox->setObjectName(QString::fromUtf8("mOutputFieldPrecisionSpinBox"));
        mOutputFieldPrecisionSpinBox->setValue(2);

        gridLayout1->addWidget(mOutputFieldPrecisionSpinBox, 5, 3, 1, 1);

        mFieldNameLabel = new QLabel(mNewFieldGroupBox);
        mFieldNameLabel->setObjectName(QString::fromUtf8("mFieldNameLabel"));

        gridLayout1->addWidget(mFieldNameLabel, 3, 0, 1, 1);

        mOutputFieldWidthLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldWidthLabel->setObjectName(QString::fromUtf8("mOutputFieldWidthLabel"));

        gridLayout1->addWidget(mOutputFieldWidthLabel, 5, 0, 1, 1);

        mOutputFieldTypeComboBox = new QComboBox(mNewFieldGroupBox);
        mOutputFieldTypeComboBox->setObjectName(QString::fromUtf8("mOutputFieldTypeComboBox"));

        gridLayout1->addWidget(mOutputFieldTypeComboBox, 4, 1, 1, 3);

        mOutputFieldWidthSpinBox = new QSpinBox(mNewFieldGroupBox);
        mOutputFieldWidthSpinBox->setObjectName(QString::fromUtf8("mOutputFieldWidthSpinBox"));
        mOutputFieldWidthSpinBox->setMinimum(0);
        mOutputFieldWidthSpinBox->setValue(15);

        gridLayout1->addWidget(mOutputFieldWidthSpinBox, 5, 1, 1, 1);

        mOutputFieldNameLineEdit = new QLineEdit(mNewFieldGroupBox);
        mOutputFieldNameLineEdit->setObjectName(QString::fromUtf8("mOutputFieldNameLineEdit"));

        gridLayout1->addWidget(mOutputFieldNameLineEdit, 3, 1, 1, 3);

        mOutputFieldTypeLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldTypeLabel->setObjectName(QString::fromUtf8("mOutputFieldTypeLabel"));

        gridLayout1->addWidget(mOutputFieldTypeLabel, 4, 0, 1, 1);

        mOutputFieldPrecisionLabel = new QLabel(mNewFieldGroupBox);
        mOutputFieldPrecisionLabel->setObjectName(QString::fromUtf8("mOutputFieldPrecisionLabel"));

        gridLayout1->addWidget(mOutputFieldPrecisionLabel, 5, 2, 1, 1);

        mCreateVirtualFieldCheckbox = new QCheckBox(mNewFieldGroupBox);
        mCreateVirtualFieldCheckbox->setObjectName(QString::fromUtf8("mCreateVirtualFieldCheckbox"));

        gridLayout1->addWidget(mCreateVirtualFieldCheckbox, 2, 0, 1, 4);


        gridLayout->addWidget(mNewFieldGroupBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mFieldNameLabel->setBuddy(mOutputFieldNameLineEdit);
        mOutputFieldWidthLabel->setBuddy(mOutputFieldWidthSpinBox);
        mOutputFieldTypeLabel->setBuddy(mOutputFieldTypeComboBox);
        mOutputFieldPrecisionLabel->setBuddy(mOutputFieldPrecisionSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOutputFieldNameLineEdit, mOutputFieldTypeComboBox);
        QWidget::setTabOrder(mOutputFieldTypeComboBox, mOutputFieldWidthSpinBox);
        QWidget::setTabOrder(mOutputFieldWidthSpinBox, mOutputFieldPrecisionSpinBox);
        QWidget::setTabOrder(mOutputFieldPrecisionSpinBox, mButtonBox);

        retranslateUi(QgsFieldCalculatorBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFieldCalculatorBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFieldCalculatorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFieldCalculatorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFieldCalculatorBase)
    {
        QgsFieldCalculatorBase->setWindowTitle(QApplication::translate("QgsFieldCalculatorBase", "Field calculator", 0, QApplication::UnicodeUTF8));
        mOnlyUpdateSelectedCheckBox->setText(QApplication::translate("QgsFieldCalculatorBase", "Only update selected features", 0, QApplication::UnicodeUTF8));
        mInfoIcon->setText(QString());
        mEditModeAutoTurnOnLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "You are editing information on this layer but the layer is currently not in edit mode. If you click Ok, edit mode will automatically be turned on.", 0, QApplication::UnicodeUTF8));
        mOnlyVirtualFieldsInfoLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "This layer does not support adding new provider fields. You can only add virtual fields.", 0, QApplication::UnicodeUTF8));
        mUpdateExistingGroupBox->setTitle(QApplication::translate("QgsFieldCalculatorBase", "Update existing field", 0, QApplication::UnicodeUTF8));
        mNewFieldGroupBox->setTitle(QApplication::translate("QgsFieldCalculatorBase", "Create a new field", 0, QApplication::UnicodeUTF8));
        mFieldNameLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field name", 0, QApplication::UnicodeUTF8));
        mOutputFieldWidthLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mOutputFieldWidthSpinBox->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "Width of complete output. For example 123,456 means 6 as field width.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOutputFieldTypeLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Output field type", 0, QApplication::UnicodeUTF8));
        mOutputFieldPrecisionLabel->setText(QApplication::translate("QgsFieldCalculatorBase", "Precision", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCreateVirtualFieldCheckbox->setToolTip(QApplication::translate("QgsFieldCalculatorBase", "<p>A virtual field will be recalculated every time it is used. Its definition will be saved in the project file. It will not be saved in the dataprovider and therefore its values not be available in other software.</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCreateVirtualFieldCheckbox->setText(QApplication::translate("QgsFieldCalculatorBase", "Create virtual field", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsFieldCalculatorBase: public Ui_QgsFieldCalculatorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDCALCULATORBASE_H
