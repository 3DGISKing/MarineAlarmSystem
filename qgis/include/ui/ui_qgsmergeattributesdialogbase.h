/********************************************************************************
** Form generated from reading UI file 'qgsmergeattributesdialogbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMERGEATTRIBUTESDIALOGBASE_H
#define UI_QGSMERGEATTRIBUTESDIALOGBASE_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMergeAttributesDialogBase
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mTableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mFromSelectedPushButton;
    QLabel *mTakeSelectedAttributesLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mRemoveFeatureFromSelectionButton;
    QLabel *mRemoveFeatureFromSelectionLabel;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMergeAttributesDialogBase)
    {
        if (QgsMergeAttributesDialogBase->objectName().isEmpty())
            QgsMergeAttributesDialogBase->setObjectName(QString::fromUtf8("QgsMergeAttributesDialogBase"));
        QgsMergeAttributesDialogBase->resize(450, 382);
        gridLayout = new QGridLayout(QgsMergeAttributesDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mTableWidget = new QTableWidget(QgsMergeAttributesDialogBase);
        mTableWidget->setObjectName(QString::fromUtf8("mTableWidget"));

        gridLayout->addWidget(mTableWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFromSelectedPushButton = new QPushButton(QgsMergeAttributesDialogBase);
        mFromSelectedPushButton->setObjectName(QString::fromUtf8("mFromSelectedPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFromSelectedPushButton->sizePolicy().hasHeightForWidth());
        mFromSelectedPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFromSelectedPushButton);

        mTakeSelectedAttributesLabel = new QLabel(QgsMergeAttributesDialogBase);
        mTakeSelectedAttributesLabel->setObjectName(QString::fromUtf8("mTakeSelectedAttributesLabel"));

        horizontalLayout->addWidget(mTakeSelectedAttributesLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mRemoveFeatureFromSelectionButton = new QPushButton(QgsMergeAttributesDialogBase);
        mRemoveFeatureFromSelectionButton->setObjectName(QString::fromUtf8("mRemoveFeatureFromSelectionButton"));

        horizontalLayout_2->addWidget(mRemoveFeatureFromSelectionButton);

        mRemoveFeatureFromSelectionLabel = new QLabel(QgsMergeAttributesDialogBase);
        mRemoveFeatureFromSelectionLabel->setObjectName(QString::fromUtf8("mRemoveFeatureFromSelectionLabel"));

        horizontalLayout_2->addWidget(mRemoveFeatureFromSelectionLabel);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMergeAttributesDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mTakeSelectedAttributesLabel->setBuddy(mFromSelectedPushButton);
        mRemoveFeatureFromSelectionLabel->setBuddy(mRemoveFeatureFromSelectionButton);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTableWidget, mFromSelectedPushButton);
        QWidget::setTabOrder(mFromSelectedPushButton, mRemoveFeatureFromSelectionButton);
        QWidget::setTabOrder(mRemoveFeatureFromSelectionButton, buttonBox);

        retranslateUi(QgsMergeAttributesDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMergeAttributesDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMergeAttributesDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMergeAttributesDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMergeAttributesDialogBase)
    {
        QgsMergeAttributesDialogBase->setWindowTitle(QApplication::translate("QgsMergeAttributesDialogBase", "Merge feature attributes", 0, QApplication::UnicodeUTF8));
        mFromSelectedPushButton->setText(QString());
        mTakeSelectedAttributesLabel->setText(QApplication::translate("QgsMergeAttributesDialogBase", "Take attributes from selected feature", 0, QApplication::UnicodeUTF8));
        mRemoveFeatureFromSelectionButton->setText(QString());
        mRemoveFeatureFromSelectionLabel->setText(QApplication::translate("QgsMergeAttributesDialogBase", "Remove feature from selection", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMergeAttributesDialogBase: public Ui_QgsMergeAttributesDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMERGEATTRIBUTESDIALOGBASE_H
