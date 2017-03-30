/********************************************************************************
** Form generated from reading UI file 'qgsdatadefinedsymboldialogbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATADEFINEDSYMBOLDIALOGBASE_H
#define UI_QGSDATADEFINEDSYMBOLDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDataDefinedSymbolDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *mButtonBox;
    QTreeWidget *mTreeWidget;

    void setupUi(QDialog *QgsDataDefinedSymbolDialog)
    {
        if (QgsDataDefinedSymbolDialog->objectName().isEmpty())
            QgsDataDefinedSymbolDialog->setObjectName(QString::fromUtf8("QgsDataDefinedSymbolDialog"));
        QgsDataDefinedSymbolDialog->resize(439, 320);
        gridLayout = new QGridLayout(QgsDataDefinedSymbolDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 3);
        mButtonBox = new QDialogButtonBox(QgsDataDefinedSymbolDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 1, 0, 1, 1);

        mTreeWidget = new QTreeWidget(QgsDataDefinedSymbolDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        mTreeWidget->setHeaderItem(__qtreewidgetitem);
        mTreeWidget->setObjectName(QString::fromUtf8("mTreeWidget"));
        mTreeWidget->setFrameShape(QFrame::NoFrame);
        mTreeWidget->setAlternatingRowColors(true);
        mTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        mTreeWidget->setWordWrap(true);
        mTreeWidget->header()->setMinimumSectionSize(10);

        gridLayout->addWidget(mTreeWidget, 0, 0, 1, 1);


        retranslateUi(QgsDataDefinedSymbolDialog);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsDataDefinedSymbolDialog, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsDataDefinedSymbolDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDataDefinedSymbolDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDataDefinedSymbolDialog)
    {
        QgsDataDefinedSymbolDialog->setWindowTitle(QApplication::translate("QgsDataDefinedSymbolDialog", "Data defined properties", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsDataDefinedSymbolDialog", "Help", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDataDefinedSymbolDialog", "Expression", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDataDefinedSymbolDialog", "Property", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDataDefinedSymbolDialog: public Ui_QgsDataDefinedSymbolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATADEFINEDSYMBOLDIALOGBASE_H
