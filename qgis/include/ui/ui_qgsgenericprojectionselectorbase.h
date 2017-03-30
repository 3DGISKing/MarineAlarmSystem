/********************************************************************************
** Form generated from reading UI file 'qgsgenericprojectionselectorbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGENERICPROJECTIONSELECTORBASE_H
#define UI_QGSGENERICPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include "qgsprojectionselector.h"

QT_BEGIN_NAMESPACE

class Ui_QgsGenericProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QgsProjectionSelector *projectionSelector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        if (QgsGenericProjectionSelectorBase->objectName().isEmpty())
            QgsGenericProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsGenericProjectionSelectorBase"));
        QgsGenericProjectionSelectorBase->resize(605, 563);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsGenericProjectionSelectorBase->setWindowIcon(icon);
        QgsGenericProjectionSelectorBase->setModal(true);
        gridLayout = new QGridLayout(QgsGenericProjectionSelectorBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(QgsGenericProjectionSelectorBase);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 160));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setAcceptDrops(false);
        textEdit->setLineWidth(2);
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        projectionSelector = new QgsProjectionSelector(QgsGenericProjectionSelectorBase);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        gridLayout->addWidget(projectionSelector, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsGenericProjectionSelectorBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(QgsGenericProjectionSelectorBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsGenericProjectionSelectorBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsGenericProjectionSelectorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsGenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGenericProjectionSelectorBase)
    {
        QgsGenericProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsGenericProjectionSelectorBase", "Coordinate Reference System Selector", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsGenericProjectionSelectorBase: public Ui_QgsGenericProjectionSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGENERICPROJECTIONSELECTORBASE_H
