/********************************************************************************
** Form generated from reading UI file 'qgsdummyconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDUMMYCONFIGDLGBASE_H
#define UI_QGSDUMMYCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDummyConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *mDummyTextLabel;

    void setupUi(QWidget *QgsDummyConfigDlgBase)
    {
        if (QgsDummyConfigDlgBase->objectName().isEmpty())
            QgsDummyConfigDlgBase->setObjectName(QString::fromUtf8("QgsDummyConfigDlgBase"));
        QgsDummyConfigDlgBase->resize(400, 300);
        formLayout = new QFormLayout(QgsDummyConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mDummyTextLabel = new QLabel(QgsDummyConfigDlgBase);
        mDummyTextLabel->setObjectName(QString::fromUtf8("mDummyTextLabel"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, mDummyTextLabel);


        retranslateUi(QgsDummyConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsDummyConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDummyConfigDlgBase)
    {
        QgsDummyConfigDlgBase->setWindowTitle(QApplication::translate("QgsDummyConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        mDummyTextLabel->setText(QApplication::translate("QgsDummyConfigDlgBase", "Dummy Text", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDummyConfigDlgBase: public Ui_QgsDummyConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDUMMYCONFIGDLGBASE_H
