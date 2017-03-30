/********************************************************************************
** Form generated from reading UI file 'qgsdashspacedialogbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDASHSPACEDIALOGBASE_H
#define UI_QGSDASHSPACEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDashSpaceDialogBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mRemoveButton;
    QPushButton *mAddButton;
    QTreeWidget *mDashSpaceTreeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDashSpaceDialogBase)
    {
        if (QgsDashSpaceDialogBase->objectName().isEmpty())
            QgsDashSpaceDialogBase->setObjectName(QString::fromUtf8("QgsDashSpaceDialogBase"));
        QgsDashSpaceDialogBase->resize(400, 277);
        gridLayout = new QGridLayout(QgsDashSpaceDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(245, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        mRemoveButton = new QPushButton(QgsDashSpaceDialogBase);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));

        gridLayout->addWidget(mRemoveButton, 0, 1, 1, 1);

        mAddButton = new QPushButton(QgsDashSpaceDialogBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));

        gridLayout->addWidget(mAddButton, 0, 2, 1, 1);

        mDashSpaceTreeWidget = new QTreeWidget(QgsDashSpaceDialogBase);
        mDashSpaceTreeWidget->setObjectName(QString::fromUtf8("mDashSpaceTreeWidget"));
        mDashSpaceTreeWidget->setColumnCount(2);

        gridLayout->addWidget(mDashSpaceTreeWidget, 1, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsDashSpaceDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 3);


        retranslateUi(QgsDashSpaceDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDashSpaceDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDashSpaceDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDashSpaceDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDashSpaceDialogBase)
    {
        QgsDashSpaceDialogBase->setWindowTitle(QApplication::translate("QgsDashSpaceDialogBase", "Dash space pattern", 0, QApplication::UnicodeUTF8));
        mRemoveButton->setText(QString());
        mAddButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mDashSpaceTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDashSpaceDialogBase", "Space", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDashSpaceDialogBase", "Dash", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDashSpaceDialogBase: public Ui_QgsDashSpaceDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDASHSPACEDIALOGBASE_H
