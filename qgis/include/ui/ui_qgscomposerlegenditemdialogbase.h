/********************************************************************************
** Form generated from reading UI file 'qgscomposerlegenditemdialogbase.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLEGENDITEMDIALOGBASE_H
#define UI_QGSCOMPOSERLEGENDITEMDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerLegendItemDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mItemTextLabel;
    QLineEdit *mItemTextLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsComposerLegendItemDialogBase)
    {
        if (QgsComposerLegendItemDialogBase->objectName().isEmpty())
            QgsComposerLegendItemDialogBase->setObjectName(QString::fromUtf8("QgsComposerLegendItemDialogBase"));
        QgsComposerLegendItemDialogBase->resize(360, 91);
        gridLayout = new QGridLayout(QgsComposerLegendItemDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mItemTextLabel = new QLabel(QgsComposerLegendItemDialogBase);
        mItemTextLabel->setObjectName(QString::fromUtf8("mItemTextLabel"));

        gridLayout->addWidget(mItemTextLabel, 0, 0, 1, 1);

        mItemTextLineEdit = new QLineEdit(QgsComposerLegendItemDialogBase);
        mItemTextLineEdit->setObjectName(QString::fromUtf8("mItemTextLineEdit"));

        gridLayout->addWidget(mItemTextLineEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsComposerLegendItemDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        mItemTextLabel->setBuddy(mItemTextLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mItemTextLineEdit, buttonBox);

        retranslateUi(QgsComposerLegendItemDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsComposerLegendItemDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsComposerLegendItemDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsComposerLegendItemDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsComposerLegendItemDialogBase)
    {
        QgsComposerLegendItemDialogBase->setWindowTitle(QApplication::translate("QgsComposerLegendItemDialogBase", "Legend item properties", 0, QApplication::UnicodeUTF8));
        mItemTextLabel->setText(QApplication::translate("QgsComposerLegendItemDialogBase", "Item text", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLegendItemDialogBase: public Ui_QgsComposerLegendItemDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERLEGENDITEMDIALOGBASE_H
