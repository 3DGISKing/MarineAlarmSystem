/********************************************************************************
** Form generated from reading UI file 'qgssnappingdialogbase.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSNAPPINGDIALOGBASE_H
#define UI_QGSSNAPPINGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSnappingDialogBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mLayerTreeWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbxEnableTopologicalEditingCheckBox;
    QCheckBox *cbxEnableIntersectionSnappingCheckBox;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsSnappingDialogBase)
    {
        if (QgsSnappingDialogBase->objectName().isEmpty())
            QgsSnappingDialogBase->setObjectName(QString::fromUtf8("QgsSnappingDialogBase"));
        QgsSnappingDialogBase->resize(760, 290);
        gridLayout = new QGridLayout(QgsSnappingDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 3);
        mLayerTreeWidget = new QTreeWidget(QgsSnappingDialogBase);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(5, Qt::AlignLeft|Qt::AlignVCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        mLayerTreeWidget->setHeaderItem(__qtreewidgetitem);
        mLayerTreeWidget->setObjectName(QString::fromUtf8("mLayerTreeWidget"));
        mLayerTreeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        mLayerTreeWidget->setIndentation(0);
        mLayerTreeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(mLayerTreeWidget, 0, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 0, 3, -1);
        cbxEnableTopologicalEditingCheckBox = new QCheckBox(QgsSnappingDialogBase);
        cbxEnableTopologicalEditingCheckBox->setObjectName(QString::fromUtf8("cbxEnableTopologicalEditingCheckBox"));
        cbxEnableTopologicalEditingCheckBox->setChecked(false);
        cbxEnableTopologicalEditingCheckBox->setTristate(false);

        horizontalLayout_2->addWidget(cbxEnableTopologicalEditingCheckBox);

        cbxEnableIntersectionSnappingCheckBox = new QCheckBox(QgsSnappingDialogBase);
        cbxEnableIntersectionSnappingCheckBox->setObjectName(QString::fromUtf8("cbxEnableIntersectionSnappingCheckBox"));
        cbxEnableIntersectionSnappingCheckBox->setChecked(false);
        cbxEnableIntersectionSnappingCheckBox->setTristate(false);

        horizontalLayout_2->addWidget(cbxEnableIntersectionSnappingCheckBox);

        mButtonBox = new QDialogButtonBox(QgsSnappingDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(mButtonBox);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 3);


        retranslateUi(QgsSnappingDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsSnappingDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsSnappingDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSnappingDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSnappingDialogBase)
    {
        QgsSnappingDialogBase->setWindowTitle(QApplication::translate("QgsSnappingDialogBase", "Snapping options", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mLayerTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("QgsSnappingDialogBase", "Avoid intersections", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("QgsSnappingDialogBase", "Units", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsSnappingDialogBase", "Tolerance", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsSnappingDialogBase", "Mode", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsSnappingDialogBase", "Layer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("QgsSnappingDialogBase", "Avoid intersections of new polygons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbxEnableTopologicalEditingCheckBox->setText(QApplication::translate("QgsSnappingDialogBase", "Enable topological editing", 0, QApplication::UnicodeUTF8));
        cbxEnableIntersectionSnappingCheckBox->setText(QApplication::translate("QgsSnappingDialogBase", "Enable snapping on intersection", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSnappingDialogBase: public Ui_QgsSnappingDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSNAPPINGDIALOGBASE_H
