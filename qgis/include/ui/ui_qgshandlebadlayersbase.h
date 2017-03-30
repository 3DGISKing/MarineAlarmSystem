/********************************************************************************
** Form generated from reading UI file 'qgshandlebadlayersbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSHANDLEBADLAYERSBASE_H
#define UI_QGSHANDLEBADLAYERSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsHandleBadLayersBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mLayerList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsHandleBadLayersBase)
    {
        if (QgsHandleBadLayersBase->objectName().isEmpty())
            QgsHandleBadLayersBase->setObjectName(QString::fromUtf8("QgsHandleBadLayersBase"));
        QgsHandleBadLayersBase->resize(834, 505);
        verticalLayout = new QVBoxLayout(QgsHandleBadLayersBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLayerList = new QTableWidget(QgsHandleBadLayersBase);
        mLayerList->setObjectName(QString::fromUtf8("mLayerList"));
        mLayerList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(mLayerList);

        buttonBox = new QDialogButtonBox(QgsHandleBadLayersBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsHandleBadLayersBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsHandleBadLayersBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsHandleBadLayersBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsHandleBadLayersBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHandleBadLayersBase)
    {
        QgsHandleBadLayersBase->setWindowTitle(QApplication::translate("QgsHandleBadLayersBase", "Handle bad layers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsHandleBadLayersBase: public Ui_QgsHandleBadLayersBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSHANDLEBADLAYERSBASE_H
