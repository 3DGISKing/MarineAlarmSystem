/********************************************************************************
** Form generated from reading UI file 'qgsdelattrdialogbase.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDELATTRDIALOGBASE_H
#define UI_QGSDELATTRDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDelAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QListWidget *listBox2;
    QLabel *mEditModeInfo;
    QLabel *mCanDeleteAttributesInfo;

    void setupUi(QDialog *QgsDelAttrDialogBase)
    {
        if (QgsDelAttrDialogBase->objectName().isEmpty())
            QgsDelAttrDialogBase->setObjectName(QString::fromUtf8("QgsDelAttrDialogBase"));
        QgsDelAttrDialogBase->resize(463, 301);
        gridLayout = new QGridLayout(QgsDelAttrDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 3);
        buttonBox = new QDialogButtonBox(QgsDelAttrDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        listBox2 = new QListWidget(QgsDelAttrDialogBase);
        listBox2->setObjectName(QString::fromUtf8("listBox2"));
        listBox2->setFrameShape(QFrame::NoFrame);
        listBox2->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(listBox2, 0, 0, 1, 1);

        mEditModeInfo = new QLabel(QgsDelAttrDialogBase);
        mEditModeInfo->setObjectName(QString::fromUtf8("mEditModeInfo"));

        gridLayout->addWidget(mEditModeInfo, 1, 0, 1, 1);

        mCanDeleteAttributesInfo = new QLabel(QgsDelAttrDialogBase);
        mCanDeleteAttributesInfo->setObjectName(QString::fromUtf8("mCanDeleteAttributesInfo"));

        gridLayout->addWidget(mCanDeleteAttributesInfo, 2, 0, 1, 1);


        retranslateUi(QgsDelAttrDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDelAttrDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDelAttrDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDelAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelAttrDialogBase)
    {
        QgsDelAttrDialogBase->setWindowTitle(QApplication::translate("QgsDelAttrDialogBase", "Delete Attributes", 0, QApplication::UnicodeUTF8));
        mEditModeInfo->setText(QApplication::translate("QgsDelAttrDialogBase", "Provider fields can only be deleted when the layer is in edit mode.", 0, QApplication::UnicodeUTF8));
        mCanDeleteAttributesInfo->setText(QApplication::translate("QgsDelAttrDialogBase", "Provider does not support deleting attributes.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDelAttrDialogBase: public Ui_QgsDelAttrDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDELATTRDIALOGBASE_H
