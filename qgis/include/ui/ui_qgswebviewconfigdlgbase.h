/********************************************************************************
** Form generated from reading UI file 'qgswebviewconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWEBVIEWCONFIGDLGBASE_H
#define UI_QGSWEBVIEWCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsWebViewWidgetConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *pictureOrUrlLabel;
    QLabel *label_12;
    QSpinBox *sbWidgetWidth;
    QLabel *label_13;
    QSpinBox *sbWidgetHeight;

    void setupUi(QWidget *QgsWebViewWidgetConfigDlgBase)
    {
        if (QgsWebViewWidgetConfigDlgBase->objectName().isEmpty())
            QgsWebViewWidgetConfigDlgBase->setObjectName(QString::fromUtf8("QgsWebViewWidgetConfigDlgBase"));
        QgsWebViewWidgetConfigDlgBase->resize(400, 300);
        formLayout = new QFormLayout(QgsWebViewWidgetConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pictureOrUrlLabel = new QLabel(QgsWebViewWidgetConfigDlgBase);
        pictureOrUrlLabel->setObjectName(QString::fromUtf8("pictureOrUrlLabel"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, pictureOrUrlLabel);

        label_12 = new QLabel(QgsWebViewWidgetConfigDlgBase);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_12);

        sbWidgetWidth = new QSpinBox(QgsWebViewWidgetConfigDlgBase);
        sbWidgetWidth->setObjectName(QString::fromUtf8("sbWidgetWidth"));
        sbWidgetWidth->setMaximum(10000);

        formLayout->setWidget(1, QFormLayout::FieldRole, sbWidgetWidth);

        label_13 = new QLabel(QgsWebViewWidgetConfigDlgBase);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        sbWidgetHeight = new QSpinBox(QgsWebViewWidgetConfigDlgBase);
        sbWidgetHeight->setObjectName(QString::fromUtf8("sbWidgetHeight"));
        sbWidgetHeight->setMaximum(10000);

        formLayout->setWidget(2, QFormLayout::FieldRole, sbWidgetHeight);


        retranslateUi(QgsWebViewWidgetConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsWebViewWidgetConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsWebViewWidgetConfigDlgBase)
    {
        QgsWebViewWidgetConfigDlgBase->setWindowTitle(QApplication::translate("QgsWebViewWidgetConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        pictureOrUrlLabel->setText(QApplication::translate("QgsWebViewWidgetConfigDlgBase", "Field contains a filename or URL for a webpage", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsWebViewWidgetConfigDlgBase", "Width", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsWebViewWidgetConfigDlgBase", "Height", 0, QApplication::UnicodeUTF8));
        sbWidgetHeight->setSuffix(QString());
        sbWidgetHeight->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsWebViewWidgetConfigDlgBase: public Ui_QgsWebViewWidgetConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWEBVIEWCONFIGDLGBASE_H
