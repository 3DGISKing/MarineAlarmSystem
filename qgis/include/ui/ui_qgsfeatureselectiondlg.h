/********************************************************************************
** Form generated from reading UI file 'qgsfeatureselectiondlg.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFEATURESELECTIONDLG_H
#define UI_QGSFEATURESELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsdualview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFeatureSelectionDlg
{
public:
    QVBoxLayout *verticalLayout;
    QgsDualView *mDualView;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFeatureSelectionDlg)
    {
        if (QgsFeatureSelectionDlg->objectName().isEmpty())
            QgsFeatureSelectionDlg->setObjectName(QString::fromUtf8("QgsFeatureSelectionDlg"));
        QgsFeatureSelectionDlg->resize(468, 496);
        verticalLayout = new QVBoxLayout(QgsFeatureSelectionDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mDualView = new QgsDualView(QgsFeatureSelectionDlg);
        mDualView->setObjectName(QString::fromUtf8("mDualView"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mDualView->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mDualView->addWidget(page_2);

        verticalLayout->addWidget(mDualView);

        mButtonBox = new QDialogButtonBox(QgsFeatureSelectionDlg);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);


        retranslateUi(QgsFeatureSelectionDlg);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFeatureSelectionDlg, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFeatureSelectionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFeatureSelectionDlg);
    } // setupUi

    void retranslateUi(QDialog *QgsFeatureSelectionDlg)
    {
        QgsFeatureSelectionDlg->setWindowTitle(QApplication::translate("QgsFeatureSelectionDlg", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsFeatureSelectionDlg: public Ui_QgsFeatureSelectionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFEATURESELECTIONDLG_H
