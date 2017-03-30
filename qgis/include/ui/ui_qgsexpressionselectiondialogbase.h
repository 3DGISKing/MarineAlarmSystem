/********************************************************************************
** Form generated from reading UI file 'qgsexpressionselectiondialogbase.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H
#define UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include "qgsexpressionbuilderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionSelectionDialogBase
{
public:
    QAction *mActionSelect;
    QAction *mActionAddToSelection;
    QAction *mActionRemoveFromSelection;
    QAction *mActionSelectInstersect;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPbnClose;
    QToolButton *mButtonSelect;
    QgsExpressionBuilderWidget *mExpressionBuilder;

    void setupUi(QDialog *QgsExpressionSelectionDialogBase)
    {
        if (QgsExpressionSelectionDialogBase->objectName().isEmpty())
            QgsExpressionSelectionDialogBase->setObjectName(QString::fromUtf8("QgsExpressionSelectionDialogBase"));
        QgsExpressionSelectionDialogBase->resize(536, 401);
        mActionSelect = new QAction(QgsExpressionSelectionDialogBase);
        mActionSelect->setObjectName(QString::fromUtf8("mActionSelect"));
        mActionAddToSelection = new QAction(QgsExpressionSelectionDialogBase);
        mActionAddToSelection->setObjectName(QString::fromUtf8("mActionAddToSelection"));
        mActionRemoveFromSelection = new QAction(QgsExpressionSelectionDialogBase);
        mActionRemoveFromSelection->setObjectName(QString::fromUtf8("mActionRemoveFromSelection"));
        mActionSelectInstersect = new QAction(QgsExpressionSelectionDialogBase);
        mActionSelectInstersect->setObjectName(QString::fromUtf8("mActionSelectInstersect"));
        gridLayout = new QGridLayout(QgsExpressionSelectionDialogBase);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        mPbnClose = new QPushButton(QgsExpressionSelectionDialogBase);
        mPbnClose->setObjectName(QString::fromUtf8("mPbnClose"));

        gridLayout->addWidget(mPbnClose, 1, 2, 1, 1);

        mButtonSelect = new QToolButton(QgsExpressionSelectionDialogBase);
        mButtonSelect->setObjectName(QString::fromUtf8("mButtonSelect"));
        mButtonSelect->setMinimumSize(QSize(0, 31));
        mButtonSelect->setPopupMode(QToolButton::MenuButtonPopup);
        mButtonSelect->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(mButtonSelect, 1, 1, 1, 1);

        mExpressionBuilder = new QgsExpressionBuilderWidget(QgsExpressionSelectionDialogBase);
        mExpressionBuilder->setObjectName(QString::fromUtf8("mExpressionBuilder"));

        gridLayout->addWidget(mExpressionBuilder, 0, 0, 1, 4);


        retranslateUi(QgsExpressionSelectionDialogBase);

        QMetaObject::connectSlotsByName(QgsExpressionSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsExpressionSelectionDialogBase)
    {
        QgsExpressionSelectionDialogBase->setWindowTitle(QApplication::translate("QgsExpressionSelectionDialogBase", "Select By Expression", 0, QApplication::UnicodeUTF8));
        mActionSelect->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Select", 0, QApplication::UnicodeUTF8));
        mActionAddToSelection->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Add to selection", 0, QApplication::UnicodeUTF8));
        mActionRemoveFromSelection->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Remove from selection", 0, QApplication::UnicodeUTF8));
        mActionSelectInstersect->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Select within selection", 0, QApplication::UnicodeUTF8));
        mPbnClose->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "Close", 0, QApplication::UnicodeUTF8));
        mButtonSelect->setText(QApplication::translate("QgsExpressionSelectionDialogBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionSelectionDialogBase: public Ui_QgsExpressionSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONSELECTIONDIALOGBASE_H
