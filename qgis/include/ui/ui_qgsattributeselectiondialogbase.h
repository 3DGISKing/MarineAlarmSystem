/********************************************************************************
** Form generated from reading UI file 'qgsattributeselectiondialogbase.ui'
**
** Created: Sat Jan 17 20:06:30 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTESELECTIONDIALOGBASE_H
#define UI_QGSATTRIBUTESELECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeSelectionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QGroupBox *mAttributesGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mColumnUpPushButton;
    QPushButton *mColumnDownPushButton;
    QPushButton *mAddColumnPushButton;
    QPushButton *mRemoveColumnPushButton;
    QPushButton *mResetColumnsPushButton;
    QSpacerItem *horizontalSpacer;
    QTableView *mColumnsTableView;
    QGroupBox *mSortingGroupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mSortColumnComboBox;
    QComboBox *mOrderComboBox;
    QPushButton *mAddSortColumnPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *mSortColumnUpPushButton;
    QPushButton *mSortColumnDownPushButton;
    QPushButton *mRemoveSortColumnPushButton;
    QSpacerItem *horizontalSpacer_2;
    QTableView *mSortColumnTableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAttributeSelectionDialogBase)
    {
        if (QgsAttributeSelectionDialogBase->objectName().isEmpty())
            QgsAttributeSelectionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeSelectionDialogBase"));
        QgsAttributeSelectionDialogBase->resize(393, 656);
        gridLayout_2 = new QGridLayout(QgsAttributeSelectionDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(QgsAttributeSelectionDialogBase);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        mAttributesGroupBox = new QGroupBox(splitter);
        mAttributesGroupBox->setObjectName(QString::fromUtf8("mAttributesGroupBox"));
        gridLayout = new QGridLayout(mAttributesGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mColumnUpPushButton = new QPushButton(mAttributesGroupBox);
        mColumnUpPushButton->setObjectName(QString::fromUtf8("mColumnUpPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        mColumnUpPushButton->setIcon(icon);

        horizontalLayout_2->addWidget(mColumnUpPushButton);

        mColumnDownPushButton = new QPushButton(mAttributesGroupBox);
        mColumnDownPushButton->setObjectName(QString::fromUtf8("mColumnDownPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        mColumnDownPushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mColumnDownPushButton);

        mAddColumnPushButton = new QPushButton(mAttributesGroupBox);
        mAddColumnPushButton->setObjectName(QString::fromUtf8("mAddColumnPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddColumnPushButton->setIcon(icon2);

        horizontalLayout_2->addWidget(mAddColumnPushButton);

        mRemoveColumnPushButton = new QPushButton(mAttributesGroupBox);
        mRemoveColumnPushButton->setObjectName(QString::fromUtf8("mRemoveColumnPushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveColumnPushButton->setIcon(icon3);

        horizontalLayout_2->addWidget(mRemoveColumnPushButton);

        mResetColumnsPushButton = new QPushButton(mAttributesGroupBox);
        mResetColumnsPushButton->setObjectName(QString::fromUtf8("mResetColumnsPushButton"));

        horizontalLayout_2->addWidget(mResetColumnsPushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        mColumnsTableView = new QTableView(mAttributesGroupBox);
        mColumnsTableView->setObjectName(QString::fromUtf8("mColumnsTableView"));
        mColumnsTableView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mColumnsTableView->setProperty("showDropIndicator", QVariant(false));
        mColumnsTableView->setDragEnabled(false);
        mColumnsTableView->setDragDropOverwriteMode(false);
        mColumnsTableView->setDragDropMode(QAbstractItemView::NoDragDrop);
        mColumnsTableView->setDefaultDropAction(Qt::IgnoreAction);
        mColumnsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        mColumnsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        mColumnsTableView->setWordWrap(false);
        mColumnsTableView->setCornerButtonEnabled(false);

        gridLayout->addWidget(mColumnsTableView, 0, 0, 1, 2);

        splitter->addWidget(mAttributesGroupBox);
        mSortingGroupBox = new QGroupBox(splitter);
        mSortingGroupBox->setObjectName(QString::fromUtf8("mSortingGroupBox"));
        gridLayout_3 = new QGridLayout(mSortingGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSortColumnComboBox = new QComboBox(mSortingGroupBox);
        mSortColumnComboBox->setObjectName(QString::fromUtf8("mSortColumnComboBox"));
        mSortColumnComboBox->setMinimumSize(QSize(180, 0));

        horizontalLayout_3->addWidget(mSortColumnComboBox);

        mOrderComboBox = new QComboBox(mSortingGroupBox);
        mOrderComboBox->setObjectName(QString::fromUtf8("mOrderComboBox"));
        mOrderComboBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(mOrderComboBox);

        mAddSortColumnPushButton = new QPushButton(mSortingGroupBox);
        mAddSortColumnPushButton->setObjectName(QString::fromUtf8("mAddSortColumnPushButton"));
        mAddSortColumnPushButton->setMaximumSize(QSize(16777215, 16777215));
        mAddSortColumnPushButton->setIcon(icon2);

        horizontalLayout_3->addWidget(mAddSortColumnPushButton);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mSortColumnUpPushButton = new QPushButton(mSortingGroupBox);
        mSortColumnUpPushButton->setObjectName(QString::fromUtf8("mSortColumnUpPushButton"));
        mSortColumnUpPushButton->setIcon(icon);

        horizontalLayout->addWidget(mSortColumnUpPushButton);

        mSortColumnDownPushButton = new QPushButton(mSortingGroupBox);
        mSortColumnDownPushButton->setObjectName(QString::fromUtf8("mSortColumnDownPushButton"));
        mSortColumnDownPushButton->setIcon(icon1);

        horizontalLayout->addWidget(mSortColumnDownPushButton);

        mRemoveSortColumnPushButton = new QPushButton(mSortingGroupBox);
        mRemoveSortColumnPushButton->setObjectName(QString::fromUtf8("mRemoveSortColumnPushButton"));
        mRemoveSortColumnPushButton->setIcon(icon3);

        horizontalLayout->addWidget(mRemoveSortColumnPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        mSortColumnTableView = new QTableView(mSortingGroupBox);
        mSortColumnTableView->setObjectName(QString::fromUtf8("mSortColumnTableView"));
        mSortColumnTableView->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mSortColumnTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        mSortColumnTableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_3->addWidget(mSortColumnTableView, 1, 0, 1, 1);

        splitter->addWidget(mSortingGroupBox);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAttributeSelectionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsAttributeSelectionDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeSelectionDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeSelectionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeSelectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeSelectionDialogBase)
    {
        QgsAttributeSelectionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeSelectionDialogBase", "Select attributes", 0, QApplication::UnicodeUTF8));
        mAttributesGroupBox->setTitle(QApplication::translate("QgsAttributeSelectionDialogBase", "Columns", 0, QApplication::UnicodeUTF8));
        mColumnUpPushButton->setText(QString());
        mColumnDownPushButton->setText(QString());
        mAddColumnPushButton->setText(QString());
        mRemoveColumnPushButton->setText(QString());
        mResetColumnsPushButton->setText(QApplication::translate("QgsAttributeSelectionDialogBase", "Reset", 0, QApplication::UnicodeUTF8));
        mSortingGroupBox->setTitle(QApplication::translate("QgsAttributeSelectionDialogBase", "Sorting", 0, QApplication::UnicodeUTF8));
        mAddSortColumnPushButton->setText(QString());
        mSortColumnUpPushButton->setText(QString());
        mSortColumnDownPushButton->setText(QString());
        mRemoveSortColumnPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeSelectionDialogBase: public Ui_QgsAttributeSelectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTESELECTIONDIALOGBASE_H
