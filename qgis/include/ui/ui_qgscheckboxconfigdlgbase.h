/********************************************************************************
** Form generated from reading UI file 'qgscheckboxconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCHECKBOXCONFIGDLGBASE_H
#define UI_QGSCHECKBOXCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCheckBoxConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leCheckedState;
    QLabel *label_3;
    QLineEdit *leUncheckedState;

    void setupUi(QWidget *QgsCheckBoxConfigDlgBase)
    {
        if (QgsCheckBoxConfigDlgBase->objectName().isEmpty())
            QgsCheckBoxConfigDlgBase->setObjectName(QString::fromUtf8("QgsCheckBoxConfigDlgBase"));
        QgsCheckBoxConfigDlgBase->resize(400, 300);
        formLayout = new QFormLayout(QgsCheckBoxConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(QgsCheckBoxConfigDlgBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leCheckedState = new QLineEdit(QgsCheckBoxConfigDlgBase);
        leCheckedState->setObjectName(QString::fromUtf8("leCheckedState"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leCheckedState);

        label_3 = new QLabel(QgsCheckBoxConfigDlgBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        leUncheckedState = new QLineEdit(QgsCheckBoxConfigDlgBase);
        leUncheckedState->setObjectName(QString::fromUtf8("leUncheckedState"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leUncheckedState);


        retranslateUi(QgsCheckBoxConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsCheckBoxConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCheckBoxConfigDlgBase)
    {
        QgsCheckBoxConfigDlgBase->setWindowTitle(QApplication::translate("QgsCheckBoxConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsCheckBoxConfigDlgBase", "Representation for checked state", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsCheckBoxConfigDlgBase", "Representation for unchecked state", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCheckBoxConfigDlgBase: public Ui_QgsCheckBoxConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCHECKBOXCONFIGDLGBASE_H
