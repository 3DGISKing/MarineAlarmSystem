/********************************************************************************
** Form generated from reading UI file 'qgsrendererrulepropsdialogbase.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERRULEPROPSDIALOGBASE_H
#define UI_QGSRENDERERRULEPROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include "qgsscalerangewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererRulePropsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *editLabel;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QLabel *label_4;
    QLineEdit *editDescription;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *groupSymbol;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRendererRulePropsDialog)
    {
        if (QgsRendererRulePropsDialog->objectName().isEmpty())
            QgsRendererRulePropsDialog->setObjectName(QString::fromUtf8("QgsRendererRulePropsDialog"));
        QgsRendererRulePropsDialog->resize(489, 261);
        verticalLayout = new QVBoxLayout(QgsRendererRulePropsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_1 = new QLabel(QgsRendererRulePropsDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        editLabel = new QLineEdit(QgsRendererRulePropsDialog);
        editLabel->setObjectName(QString::fromUtf8("editLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editLabel);

        label_5 = new QLabel(QgsRendererRulePropsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editFilter = new QLineEdit(QgsRendererRulePropsDialog);
        editFilter->setObjectName(QString::fromUtf8("editFilter"));

        horizontalLayout->addWidget(editFilter);

        btnExpressionBuilder = new QPushButton(QgsRendererRulePropsDialog);
        btnExpressionBuilder->setObjectName(QString::fromUtf8("btnExpressionBuilder"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnExpressionBuilder->sizePolicy().hasHeightForWidth());
        btnExpressionBuilder->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnExpressionBuilder);

        btnTestFilter = new QPushButton(QgsRendererRulePropsDialog);
        btnTestFilter->setObjectName(QString::fromUtf8("btnTestFilter"));

        horizontalLayout->addWidget(btnTestFilter);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_4 = new QLabel(QgsRendererRulePropsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        editDescription = new QLineEdit(QgsRendererRulePropsDialog);
        editDescription->setObjectName(QString::fromUtf8("editDescription"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editDescription);


        verticalLayout->addLayout(formLayout);

        groupScale = new QGroupBox(QgsRendererRulePropsDialog);
        groupScale->setObjectName(QString::fromUtf8("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mScaleRangeWidget = new QgsScaleRangeWidget(groupScale);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        horizontalLayout_2->addWidget(mScaleRangeWidget);


        verticalLayout->addWidget(groupScale);

        groupSymbol = new QGroupBox(QgsRendererRulePropsDialog);
        groupSymbol->setObjectName(QString::fromUtf8("groupSymbol"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSymbol->sizePolicy().hasHeightForWidth());
        groupSymbol->setSizePolicy(sizePolicy1);
        groupSymbol->setCheckable(true);

        verticalLayout->addWidget(groupSymbol);

        buttonBox = new QDialogButtonBox(QgsRendererRulePropsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(editLabel, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, editDescription);
        QWidget::setTabOrder(editDescription, groupScale);
        QWidget::setTabOrder(groupScale, buttonBox);

        retranslateUi(QgsRendererRulePropsDialog);

        QMetaObject::connectSlotsByName(QgsRendererRulePropsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsRendererRulePropsDialog)
    {
        QgsRendererRulePropsDialog->setWindowTitle(QApplication::translate("QgsRendererRulePropsDialog", "Rule properties", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("QgsRendererRulePropsDialog", "Label", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsRendererRulePropsDialog", "Filter", 0, QApplication::UnicodeUTF8));
        btnExpressionBuilder->setText(QApplication::translate("QgsRendererRulePropsDialog", "...", 0, QApplication::UnicodeUTF8));
        btnTestFilter->setText(QApplication::translate("QgsRendererRulePropsDialog", "Test", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsRendererRulePropsDialog", "Description", 0, QApplication::UnicodeUTF8));
        groupScale->setTitle(QApplication::translate("QgsRendererRulePropsDialog", "Scale range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupSymbol->setTitle(QApplication::translate("QgsRendererRulePropsDialog", "Symbol", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRendererRulePropsDialog: public Ui_QgsRendererRulePropsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERRULEPROPSDIALOGBASE_H
