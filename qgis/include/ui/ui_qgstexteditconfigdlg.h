/********************************************************************************
** Form generated from reading UI file 'qgstexteditconfigdlg.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSTEXTEDITCONFIGDLG_H
#define UI_QGSTEXTEDITCONFIGDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsTextEditConfigDlg
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mIsMultiline;
    QFormLayout *formLayout;
    QCheckBox *mUseHtml;

    void setupUi(QWidget *QgsTextEditConfigDlg)
    {
        if (QgsTextEditConfigDlg->objectName().isEmpty())
            QgsTextEditConfigDlg->setObjectName(QString::fromUtf8("QgsTextEditConfigDlg"));
        QgsTextEditConfigDlg->resize(400, 300);
        gridLayout = new QGridLayout(QgsTextEditConfigDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mIsMultiline = new QGroupBox(QgsTextEditConfigDlg);
        mIsMultiline->setObjectName(QString::fromUtf8("mIsMultiline"));
        mIsMultiline->setCheckable(true);
        formLayout = new QFormLayout(mIsMultiline);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        mUseHtml = new QCheckBox(mIsMultiline);
        mUseHtml->setObjectName(QString::fromUtf8("mUseHtml"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mUseHtml);


        gridLayout->addWidget(mIsMultiline, 0, 0, 1, 1);


        retranslateUi(QgsTextEditConfigDlg);

        QMetaObject::connectSlotsByName(QgsTextEditConfigDlg);
    } // setupUi

    void retranslateUi(QWidget *QgsTextEditConfigDlg)
    {
        QgsTextEditConfigDlg->setWindowTitle(QApplication::translate("QgsTextEditConfigDlg", "Form", 0, QApplication::UnicodeUTF8));
        mIsMultiline->setTitle(QApplication::translate("QgsTextEditConfigDlg", "Multiline", 0, QApplication::UnicodeUTF8));
        mUseHtml->setText(QApplication::translate("QgsTextEditConfigDlg", "HTML", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsTextEditConfigDlg: public Ui_QgsTextEditConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSTEXTEDITCONFIGDLG_H
