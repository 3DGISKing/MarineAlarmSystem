/********************************************************************************
** Form generated from reading UI file 'qgsuniquevaluesconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUNIQUEVALUESCONFIGDLGBASE_H
#define UI_QGSUNIQUEVALUESCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUniqueValuesConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QCheckBox *editableUniqueValues;

    void setupUi(QWidget *QgsUniqueValuesConfigDlgBase)
    {
        if (QgsUniqueValuesConfigDlgBase->objectName().isEmpty())
            QgsUniqueValuesConfigDlgBase->setObjectName(QString::fromUtf8("QgsUniqueValuesConfigDlgBase"));
        QgsUniqueValuesConfigDlgBase->resize(400, 300);
        formLayout = new QFormLayout(QgsUniqueValuesConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(QgsUniqueValuesConfigDlgBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        editableUniqueValues = new QCheckBox(QgsUniqueValuesConfigDlgBase);
        editableUniqueValues->setObjectName(QString::fromUtf8("editableUniqueValues"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, editableUniqueValues);


        retranslateUi(QgsUniqueValuesConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsUniqueValuesConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsUniqueValuesConfigDlgBase)
    {
        QgsUniqueValuesConfigDlgBase->setWindowTitle(QApplication::translate("QgsUniqueValuesConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsUniqueValuesConfigDlgBase", "The user can select one of the values already used in the attribute. If editable, a line edit is shown with autocompletion support, otherwise a combo box is used.", 0, QApplication::UnicodeUTF8));
        editableUniqueValues->setText(QApplication::translate("QgsUniqueValuesConfigDlgBase", "Editable", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsUniqueValuesConfigDlgBase: public Ui_QgsUniqueValuesConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUNIQUEVALUESCONFIGDLGBASE_H
