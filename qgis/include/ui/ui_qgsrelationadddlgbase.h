/********************************************************************************
** Form generated from reading UI file 'qgsrelationadddlgbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONADDDLGBASE_H
#define UI_QGSRELATIONADDDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationAddDlgBase
{
public:
    QGridLayout *gridLayout;
    QComboBox *mCbxReferencingField;
    QComboBox *mCbxReferencingLayer;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *mCbxReferencedLayer;
    QComboBox *mCbxReferencedField;
    QLabel *label;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QLineEdit *mTxtRelationId;
    QLineEdit *mTxtRelationName;

    void setupUi(QDialog *QgsRelationAddDlgBase)
    {
        if (QgsRelationAddDlgBase->objectName().isEmpty())
            QgsRelationAddDlgBase->setObjectName(QString::fromUtf8("QgsRelationAddDlgBase"));
        QgsRelationAddDlgBase->resize(581, 267);
        gridLayout = new QGridLayout(QgsRelationAddDlgBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCbxReferencingField = new QComboBox(QgsRelationAddDlgBase);
        mCbxReferencingField->setObjectName(QString::fromUtf8("mCbxReferencingField"));

        gridLayout->addWidget(mCbxReferencingField, 4, 1, 1, 2);

        mCbxReferencingLayer = new QComboBox(QgsRelationAddDlgBase);
        mCbxReferencingLayer->setObjectName(QString::fromUtf8("mCbxReferencingLayer"));

        gridLayout->addWidget(mCbxReferencingLayer, 3, 1, 1, 2);

        label_2 = new QLabel(QgsRelationAddDlgBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_3 = new QLabel(QgsRelationAddDlgBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_4 = new QLabel(QgsRelationAddDlgBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        mCbxReferencedLayer = new QComboBox(QgsRelationAddDlgBase);
        mCbxReferencedLayer->setObjectName(QString::fromUtf8("mCbxReferencedLayer"));

        gridLayout->addWidget(mCbxReferencedLayer, 5, 1, 1, 2);

        mCbxReferencedField = new QComboBox(QgsRelationAddDlgBase);
        mCbxReferencedField->setObjectName(QString::fromUtf8("mCbxReferencedField"));

        gridLayout->addWidget(mCbxReferencedField, 6, 1, 1, 2);

        label = new QLabel(QgsRelationAddDlgBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_7 = new QLabel(QgsRelationAddDlgBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsRelationAddDlgBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 14, 0, 1, 3);

        label_5 = new QLabel(QgsRelationAddDlgBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        mTxtRelationId = new QLineEdit(QgsRelationAddDlgBase);
        mTxtRelationId->setObjectName(QString::fromUtf8("mTxtRelationId"));

        gridLayout->addWidget(mTxtRelationId, 8, 1, 1, 1);

        mTxtRelationName = new QLineEdit(QgsRelationAddDlgBase);
        mTxtRelationName->setObjectName(QString::fromUtf8("mTxtRelationName"));

        gridLayout->addWidget(mTxtRelationName, 1, 1, 1, 1);

        QWidget::setTabOrder(mTxtRelationName, mCbxReferencingLayer);
        QWidget::setTabOrder(mCbxReferencingLayer, mCbxReferencingField);
        QWidget::setTabOrder(mCbxReferencingField, mCbxReferencedLayer);
        QWidget::setTabOrder(mCbxReferencedLayer, mCbxReferencedField);
        QWidget::setTabOrder(mCbxReferencedField, mTxtRelationId);
        QWidget::setTabOrder(mTxtRelationId, buttonBox);

        retranslateUi(QgsRelationAddDlgBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsRelationAddDlgBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsRelationAddDlgBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRelationAddDlgBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRelationAddDlgBase)
    {
        QgsRelationAddDlgBase->setWindowTitle(QApplication::translate("QgsRelationAddDlgBase", "Add relation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRelationAddDlgBase", "Referencing Field", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsRelationAddDlgBase", "Referenced Layer (Parent)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsRelationAddDlgBase", "Referenced Field", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRelationAddDlgBase", "Referencing Layer (Child)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsRelationAddDlgBase", "Name", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsRelationAddDlgBase", "Id", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRelationAddDlgBase: public Ui_QgsRelationAddDlgBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONADDDLGBASE_H
