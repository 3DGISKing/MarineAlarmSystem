/********************************************************************************
** Form generated from reading UI file 'qgsrelationreferenceconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONREFERENCECONFIGDLGBASE_H
#define UI_QGSRELATIONREFERENCECONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include <qgsfieldexpressionwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QgsRelReferenceConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QgsFieldExpressionWidget *mExpressionWidget;
    QLabel *label_2;
    QComboBox *mComboRelation;
    QCheckBox *mCbxAllowNull;
    QCheckBox *mCbxShowForm;
    QCheckBox *mCbxMapIdentification;
    QCheckBox *mCbxReadOnly;

    void setupUi(QWidget *QgsRelReferenceConfigDlgBase)
    {
        if (QgsRelReferenceConfigDlgBase->objectName().isEmpty())
            QgsRelReferenceConfigDlgBase->setObjectName(QString::fromUtf8("QgsRelReferenceConfigDlgBase"));
        QgsRelReferenceConfigDlgBase->resize(470, 240);
        formLayout = new QFormLayout(QgsRelReferenceConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(QgsRelReferenceConfigDlgBase);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mExpressionWidget = new QgsFieldExpressionWidget(QgsRelReferenceConfigDlgBase);
        mExpressionWidget->setObjectName(QString::fromUtf8("mExpressionWidget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mExpressionWidget);

        label_2 = new QLabel(QgsRelReferenceConfigDlgBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mComboRelation = new QComboBox(QgsRelReferenceConfigDlgBase);
        mComboRelation->setObjectName(QString::fromUtf8("mComboRelation"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mComboRelation);

        mCbxAllowNull = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxAllowNull->setObjectName(QString::fromUtf8("mCbxAllowNull"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, mCbxAllowNull);

        mCbxShowForm = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxShowForm->setObjectName(QString::fromUtf8("mCbxShowForm"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, mCbxShowForm);

        mCbxMapIdentification = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxMapIdentification->setObjectName(QString::fromUtf8("mCbxMapIdentification"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, mCbxMapIdentification);

        mCbxReadOnly = new QCheckBox(QgsRelReferenceConfigDlgBase);
        mCbxReadOnly->setObjectName(QString::fromUtf8("mCbxReadOnly"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, mCbxReadOnly);


        retranslateUi(QgsRelReferenceConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsRelReferenceConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelReferenceConfigDlgBase)
    {
        QgsRelReferenceConfigDlgBase->setWindowTitle(QApplication::translate("QgsRelReferenceConfigDlgBase", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Display expression", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Relation", 0, QApplication::UnicodeUTF8));
        mCbxAllowNull->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Allow NULL value", 0, QApplication::UnicodeUTF8));
        mCbxShowForm->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Show embedded form", 0, QApplication::UnicodeUTF8));
        mCbxMapIdentification->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "On map identification (for geometric layers only)", 0, QApplication::UnicodeUTF8));
        mCbxReadOnly->setText(QApplication::translate("QgsRelReferenceConfigDlgBase", "Use a read-only line edit instead of a combobox", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRelReferenceConfigDlgBase: public Ui_QgsRelReferenceConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONREFERENCECONFIGDLGBASE_H
