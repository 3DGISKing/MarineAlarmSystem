/********************************************************************************
** Form generated from reading UI file 'qgssvgexportoptions.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSVGEXPORTOPTIONS_H
#define UI_QGSSVGEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsSvgExportOptionsDialog
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkMapLayersAsGroup;
    QCheckBox *chkTextAsOutline;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSvgExportOptionsDialog)
    {
        if (QgsSvgExportOptionsDialog->objectName().isEmpty())
            QgsSvgExportOptionsDialog->setObjectName(QString::fromUtf8("QgsSvgExportOptionsDialog"));
        QgsSvgExportOptionsDialog->resize(463, 103);
        formLayout = new QFormLayout(QgsSvgExportOptionsDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkMapLayersAsGroup = new QCheckBox(QgsSvgExportOptionsDialog);
        chkMapLayersAsGroup->setObjectName(QString::fromUtf8("chkMapLayersAsGroup"));
        chkMapLayersAsGroup->setChecked(false);

        verticalLayout->addWidget(chkMapLayersAsGroup);

        chkTextAsOutline = new QCheckBox(QgsSvgExportOptionsDialog);
        chkTextAsOutline->setObjectName(QString::fromUtf8("chkTextAsOutline"));
        chkTextAsOutline->setEnabled(false);
        chkTextAsOutline->setChecked(true);

        verticalLayout->addWidget(chkTextAsOutline);

        buttonBox = new QDialogButtonBox(QgsSvgExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);


        retranslateUi(QgsSvgExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSvgExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSvgExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSvgExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsSvgExportOptionsDialog)
    {
        QgsSvgExportOptionsDialog->setWindowTitle(QApplication::translate("QgsSvgExportOptionsDialog", "SVG export options", 0, QApplication::UnicodeUTF8));
        chkMapLayersAsGroup->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Export map layers as svg groups (may affect label placement)", 0, QApplication::UnicodeUTF8));
        chkTextAsOutline->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Render text as outline", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSvgExportOptionsDialog: public Ui_QgsSvgExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSVGEXPORTOPTIONS_H
