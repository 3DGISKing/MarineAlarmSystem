/********************************************************************************
** Form generated from reading UI file 'qgsrelationmanagerdialogbase.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRELATIONMANAGERDIALOGBASE_H
#define UI_QGSRELATIONMANAGERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRelationManagerDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mRelationsTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mBtnAddRelation;
    QPushButton *mBtnRemoveRelation;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsRelationManagerDialogBase)
    {
        if (QgsRelationManagerDialogBase->objectName().isEmpty())
            QgsRelationManagerDialogBase->setObjectName(QString::fromUtf8("QgsRelationManagerDialogBase"));
        QgsRelationManagerDialogBase->resize(713, 427);
        verticalLayout = new QVBoxLayout(QgsRelationManagerDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mRelationsTable = new QTableWidget(QgsRelationManagerDialogBase);
        if (mRelationsTable->columnCount() < 6)
            mRelationsTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mRelationsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        mRelationsTable->setObjectName(QString::fromUtf8("mRelationsTable"));

        verticalLayout->addWidget(mRelationsTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mBtnAddRelation = new QPushButton(QgsRelationManagerDialogBase);
        mBtnAddRelation->setObjectName(QString::fromUtf8("mBtnAddRelation"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionSignPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAddRelation->setIcon(icon);

        horizontalLayout->addWidget(mBtnAddRelation);

        mBtnRemoveRelation = new QPushButton(QgsRelationManagerDialogBase);
        mBtnRemoveRelation->setObjectName(QString::fromUtf8("mBtnRemoveRelation"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionSignMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRemoveRelation->setIcon(icon1);

        horizontalLayout->addWidget(mBtnRemoveRelation);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRelationManagerDialogBase);

        QMetaObject::connectSlotsByName(QgsRelationManagerDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRelationManagerDialogBase)
    {
        QgsRelationManagerDialogBase->setWindowTitle(QApplication::translate("QgsRelationManagerDialogBase", "Dialog", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mRelationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsRelationManagerDialogBase", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mRelationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referencing Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = mRelationsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referencing Field", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = mRelationsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referenced Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = mRelationsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QgsRelationManagerDialogBase", "Referenced Field", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = mRelationsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QgsRelationManagerDialogBase", "Id", 0, QApplication::UnicodeUTF8));
        mBtnAddRelation->setText(QApplication::translate("QgsRelationManagerDialogBase", "Add Relation", 0, QApplication::UnicodeUTF8));
        mBtnRemoveRelation->setText(QApplication::translate("QgsRelationManagerDialogBase", "Remove Relation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRelationManagerDialogBase: public Ui_QgsRelationManagerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRELATIONMANAGERDIALOGBASE_H
