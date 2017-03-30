/********************************************************************************
** Form generated from reading UI file 'qgsvaluerelationconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUERELATIONCONFIGDLGBASE_H
#define UI_QGSVALUERELATIONCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsValueRelationConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *label_8;
    QLabel *label_5;
    QgsMapLayerComboBox *mLayerName;
    QLabel *label_6;
    QgsFieldComboBox *mKeyColumn;
    QLabel *label_7;
    QgsFieldComboBox *mValueColumn;
    QCheckBox *mAllowNull;
    QCheckBox *mOrderByValue;
    QCheckBox *mAllowMulti;
    QLabel *label_19;
    QToolButton *mEditExpression;
    QTextEdit *mFilterExpression;

    void setupUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        if (QgsValueRelationConfigDlgBase->objectName().isEmpty())
            QgsValueRelationConfigDlgBase->setObjectName(QString::fromUtf8("QgsValueRelationConfigDlgBase"));
        QgsValueRelationConfigDlgBase->resize(427, 474);
        formLayout = new QFormLayout(QgsValueRelationConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_8 = new QLabel(QgsValueRelationConfigDlgBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_8);

        label_5 = new QLabel(QgsValueRelationConfigDlgBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        mLayerName = new QgsMapLayerComboBox(QgsValueRelationConfigDlgBase);
        mLayerName->setObjectName(QString::fromUtf8("mLayerName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mLayerName);

        label_6 = new QLabel(QgsValueRelationConfigDlgBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        mKeyColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mKeyColumn->setObjectName(QString::fromUtf8("mKeyColumn"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mKeyColumn);

        label_7 = new QLabel(QgsValueRelationConfigDlgBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        mValueColumn = new QgsFieldComboBox(QgsValueRelationConfigDlgBase);
        mValueColumn->setObjectName(QString::fromUtf8("mValueColumn"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mValueColumn);

        mAllowNull = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowNull->setObjectName(QString::fromUtf8("mAllowNull"));
        mAllowNull->setLayoutDirection(Qt::RightToLeft);

        formLayout->setWidget(4, QFormLayout::SpanningRole, mAllowNull);

        mOrderByValue = new QCheckBox(QgsValueRelationConfigDlgBase);
        mOrderByValue->setObjectName(QString::fromUtf8("mOrderByValue"));
        mOrderByValue->setLayoutDirection(Qt::RightToLeft);

        formLayout->setWidget(5, QFormLayout::SpanningRole, mOrderByValue);

        mAllowMulti = new QCheckBox(QgsValueRelationConfigDlgBase);
        mAllowMulti->setObjectName(QString::fromUtf8("mAllowMulti"));
        mAllowMulti->setLayoutDirection(Qt::RightToLeft);

        formLayout->setWidget(6, QFormLayout::SpanningRole, mAllowMulti);

        label_19 = new QLabel(QgsValueRelationConfigDlgBase);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_19);

        mEditExpression = new QToolButton(QgsValueRelationConfigDlgBase);
        mEditExpression->setObjectName(QString::fromUtf8("mEditExpression"));
        mEditExpression->setLayoutDirection(Qt::RightToLeft);

        formLayout->setWidget(7, QFormLayout::FieldRole, mEditExpression);

        mFilterExpression = new QTextEdit(QgsValueRelationConfigDlgBase);
        mFilterExpression->setObjectName(QString::fromUtf8("mFilterExpression"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, mFilterExpression);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(mLayerName);
        label_6->setBuddy(mKeyColumn);
        label_7->setBuddy(mValueColumn);
        label_19->setBuddy(mValueColumn);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsValueRelationConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsValueRelationConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsValueRelationConfigDlgBase)
    {
        QgsValueRelationConfigDlgBase->setWindowTitle(QApplication::translate("QgsValueRelationConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Select layer, key column and value column", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Layer", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Key column", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Value column", 0, QApplication::UnicodeUTF8));
        mAllowNull->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Allow null value", 0, QApplication::UnicodeUTF8));
        mOrderByValue->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Order by value", 0, QApplication::UnicodeUTF8));
        mAllowMulti->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Allow multiple selections", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "Filter expression", 0, QApplication::UnicodeUTF8));
        mEditExpression->setText(QApplication::translate("QgsValueRelationConfigDlgBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsValueRelationConfigDlgBase: public Ui_QgsValueRelationConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUERELATIONCONFIGDLGBASE_H
