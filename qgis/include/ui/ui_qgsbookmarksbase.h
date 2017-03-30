/********************************************************************************
** Form generated from reading UI file 'qgsbookmarksbase.ui'
**
** Created: Sat Jan 17 20:06:30 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBOOKMARKSBASE_H
#define UI_QGSBOOKMARKSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_QgsBookmarksBase
{
public:
    QGridLayout *gridLayout;
    QTreeView *lstBookmarks;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsBookmarksBase)
    {
        if (QgsBookmarksBase->objectName().isEmpty())
            QgsBookmarksBase->setObjectName(QString::fromUtf8("QgsBookmarksBase"));
        QgsBookmarksBase->resize(440, 370);
        gridLayout = new QGridLayout(QgsBookmarksBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lstBookmarks = new QTreeView(QgsBookmarksBase);
        lstBookmarks->setObjectName(QString::fromUtf8("lstBookmarks"));
        lstBookmarks->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lstBookmarks->setRootIsDecorated(false);
        lstBookmarks->setSortingEnabled(true);

        gridLayout->addWidget(lstBookmarks, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 0, 3, 3);
        buttonBox = new QDialogButtonBox(QgsBookmarksBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        horizontalLayout_2->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        retranslateUi(QgsBookmarksBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsBookmarksBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsBookmarksBase);
    } // setupUi

    void retranslateUi(QDialog *QgsBookmarksBase)
    {
        QgsBookmarksBase->setWindowTitle(QApplication::translate("QgsBookmarksBase", "Geospatial Bookmarks", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsBookmarksBase: public Ui_QgsBookmarksBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBOOKMARKSBASE_H
