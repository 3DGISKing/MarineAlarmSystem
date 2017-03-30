/********************************************************************************
** Form generated from reading UI file 'qgsprojectlayergroupdialogbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTLAYERGROUPDIALOGBASE_H
#define UI_QGSPROJECTLAYERGROUPDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include "qgslayertreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectLayerGroupDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mProjectFileLabel;
    QLineEdit *mProjectFileLineEdit;
    QToolButton *mBrowseFileToolButton;
    QDialogButtonBox *mButtonBox;
    QgsLayerTreeView *mTreeView;

    void setupUi(QDialog *QgsProjectLayerGroupDialogBase)
    {
        if (QgsProjectLayerGroupDialogBase->objectName().isEmpty())
            QgsProjectLayerGroupDialogBase->setObjectName(QString::fromUtf8("QgsProjectLayerGroupDialogBase"));
        QgsProjectLayerGroupDialogBase->resize(400, 300);
        gridLayout = new QGridLayout(QgsProjectLayerGroupDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mProjectFileLabel = new QLabel(QgsProjectLayerGroupDialogBase);
        mProjectFileLabel->setObjectName(QString::fromUtf8("mProjectFileLabel"));

        horizontalLayout->addWidget(mProjectFileLabel);

        mProjectFileLineEdit = new QLineEdit(QgsProjectLayerGroupDialogBase);
        mProjectFileLineEdit->setObjectName(QString::fromUtf8("mProjectFileLineEdit"));

        horizontalLayout->addWidget(mProjectFileLineEdit);

        mBrowseFileToolButton = new QToolButton(QgsProjectLayerGroupDialogBase);
        mBrowseFileToolButton->setObjectName(QString::fromUtf8("mBrowseFileToolButton"));

        horizontalLayout->addWidget(mBrowseFileToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsProjectLayerGroupDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);

        mTreeView = new QgsLayerTreeView(QgsProjectLayerGroupDialogBase);
        mTreeView->setObjectName(QString::fromUtf8("mTreeView"));
        mTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mTreeView->header()->setDefaultSectionSize(0);

        gridLayout->addWidget(mTreeView, 1, 0, 1, 1);


        retranslateUi(QgsProjectLayerGroupDialogBase);

        QMetaObject::connectSlotsByName(QgsProjectLayerGroupDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectLayerGroupDialogBase)
    {
        QgsProjectLayerGroupDialogBase->setWindowTitle(QApplication::translate("QgsProjectLayerGroupDialogBase", "Select layers and groups to embed", 0, QApplication::UnicodeUTF8));
        mProjectFileLabel->setText(QApplication::translate("QgsProjectLayerGroupDialogBase", "Project file", 0, QApplication::UnicodeUTF8));
        mBrowseFileToolButton->setText(QApplication::translate("QgsProjectLayerGroupDialogBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectLayerGroupDialogBase: public Ui_QgsProjectLayerGroupDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTLAYERGROUPDIALOGBASE_H
