/********************************************************************************
** Form generated from reading UI file 'qgsphotoconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPHOTOCONFIGDLGBASE_H
#define UI_QGSPHOTOCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsPhotoConfigDlgBase
{
public:
    QFormLayout *formLayout;
    QLabel *explanationLabel;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QSpinBox *sbWidgetWidth;
    QLabel *label_13;
    QSpinBox *sbWidgetHeight;
    QLabel *label;

    void setupUi(QWidget *QgsPhotoConfigDlgBase)
    {
        if (QgsPhotoConfigDlgBase->objectName().isEmpty())
            QgsPhotoConfigDlgBase->setObjectName(QString::fromUtf8("QgsPhotoConfigDlgBase"));
        QgsPhotoConfigDlgBase->resize(623, 300);
        formLayout = new QFormLayout(QgsPhotoConfigDlgBase);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        explanationLabel = new QLabel(QgsPhotoConfigDlgBase);
        explanationLabel->setObjectName(QString::fromUtf8("explanationLabel"));
        explanationLabel->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, explanationLabel);

        groupBox = new QGroupBox(QgsPhotoConfigDlgBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_12);

        sbWidgetWidth = new QSpinBox(groupBox);
        sbWidgetWidth->setObjectName(QString::fromUtf8("sbWidgetWidth"));
        sbWidgetWidth->setMaximum(10000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sbWidgetWidth);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_13);

        sbWidgetHeight = new QSpinBox(groupBox);
        sbWidgetHeight->setObjectName(QString::fromUtf8("sbWidgetHeight"));
        sbWidgetHeight->setMaximum(10000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, sbWidgetHeight);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label);


        formLayout->setWidget(1, QFormLayout::SpanningRole, groupBox);


        retranslateUi(QgsPhotoConfigDlgBase);

        QMetaObject::connectSlotsByName(QgsPhotoConfigDlgBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPhotoConfigDlgBase)
    {
        QgsPhotoConfigDlgBase->setWindowTitle(QApplication::translate("QgsPhotoConfigDlgBase", "Form", 0, QApplication::UnicodeUTF8));
        explanationLabel->setText(QApplication::translate("QgsPhotoConfigDlgBase", "The field contains a filename for a picture. The widget will show a preview of this picture.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsPhotoConfigDlgBase", "Picture size", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsPhotoConfigDlgBase", "Width", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsPhotoConfigDlgBase", "Height", 0, QApplication::UnicodeUTF8));
        sbWidgetHeight->setSuffix(QString());
        sbWidgetHeight->setPrefix(QString());
        label->setText(QApplication::translate("QgsPhotoConfigDlgBase", "Specify the size of the preview. If you leave it set to 0, an optimal size will be estimated.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsPhotoConfigDlgBase: public Ui_QgsPhotoConfigDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPHOTOCONFIGDLGBASE_H
