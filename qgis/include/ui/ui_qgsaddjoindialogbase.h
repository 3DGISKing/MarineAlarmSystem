/********************************************************************************
** Form generated from reading UI file 'qgsaddjoindialogbase.ui'
**
** Created: Sat Jan 17 20:06:30 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADDJOINDIALOGBASE_H
#define UI_QGSADDJOINDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>

QT_BEGIN_NAMESPACE

class Ui_QgsAddJoinDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mJoinLayerLabel;
    QComboBox *mJoinLayerComboBox;
    QLabel *mJoinFieldLabel;
    QComboBox *mJoinFieldComboBox;
    QLabel *mTargetFieldLabel;
    QComboBox *mTargetFieldComboBox;
    QCheckBox *mCacheInMemoryCheckBox;
    QCheckBox *mCreateIndexCheckBox;
    QCheckBox *mUseJoinFieldsSubset;
    QListView *mJoinFieldsSubsetView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAddJoinDialogBase)
    {
        if (QgsAddJoinDialogBase->objectName().isEmpty())
            QgsAddJoinDialogBase->setObjectName(QString::fromUtf8("QgsAddJoinDialogBase"));
        QgsAddJoinDialogBase->resize(301, 327);
        gridLayout = new QGridLayout(QgsAddJoinDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mJoinLayerLabel = new QLabel(QgsAddJoinDialogBase);
        mJoinLayerLabel->setObjectName(QString::fromUtf8("mJoinLayerLabel"));

        gridLayout->addWidget(mJoinLayerLabel, 0, 0, 1, 1);

        mJoinLayerComboBox = new QComboBox(QgsAddJoinDialogBase);
        mJoinLayerComboBox->setObjectName(QString::fromUtf8("mJoinLayerComboBox"));

        gridLayout->addWidget(mJoinLayerComboBox, 0, 1, 1, 1);

        mJoinFieldLabel = new QLabel(QgsAddJoinDialogBase);
        mJoinFieldLabel->setObjectName(QString::fromUtf8("mJoinFieldLabel"));

        gridLayout->addWidget(mJoinFieldLabel, 1, 0, 1, 1);

        mJoinFieldComboBox = new QComboBox(QgsAddJoinDialogBase);
        mJoinFieldComboBox->setObjectName(QString::fromUtf8("mJoinFieldComboBox"));

        gridLayout->addWidget(mJoinFieldComboBox, 1, 1, 1, 1);

        mTargetFieldLabel = new QLabel(QgsAddJoinDialogBase);
        mTargetFieldLabel->setObjectName(QString::fromUtf8("mTargetFieldLabel"));

        gridLayout->addWidget(mTargetFieldLabel, 2, 0, 1, 1);

        mTargetFieldComboBox = new QComboBox(QgsAddJoinDialogBase);
        mTargetFieldComboBox->setObjectName(QString::fromUtf8("mTargetFieldComboBox"));

        gridLayout->addWidget(mTargetFieldComboBox, 2, 1, 1, 1);

        mCacheInMemoryCheckBox = new QCheckBox(QgsAddJoinDialogBase);
        mCacheInMemoryCheckBox->setObjectName(QString::fromUtf8("mCacheInMemoryCheckBox"));

        gridLayout->addWidget(mCacheInMemoryCheckBox, 3, 0, 1, 2);

        mCreateIndexCheckBox = new QCheckBox(QgsAddJoinDialogBase);
        mCreateIndexCheckBox->setObjectName(QString::fromUtf8("mCreateIndexCheckBox"));

        gridLayout->addWidget(mCreateIndexCheckBox, 4, 0, 1, 2);

        mUseJoinFieldsSubset = new QCheckBox(QgsAddJoinDialogBase);
        mUseJoinFieldsSubset->setObjectName(QString::fromUtf8("mUseJoinFieldsSubset"));

        gridLayout->addWidget(mUseJoinFieldsSubset, 5, 0, 1, 2);

        mJoinFieldsSubsetView = new QListView(QgsAddJoinDialogBase);
        mJoinFieldsSubsetView->setObjectName(QString::fromUtf8("mJoinFieldsSubsetView"));
        mJoinFieldsSubsetView->setEnabled(false);

        gridLayout->addWidget(mJoinFieldsSubsetView, 6, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsAddJoinDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 2);

        QWidget::setTabOrder(mJoinLayerComboBox, mJoinFieldComboBox);
        QWidget::setTabOrder(mJoinFieldComboBox, mTargetFieldComboBox);
        QWidget::setTabOrder(mTargetFieldComboBox, mCacheInMemoryCheckBox);
        QWidget::setTabOrder(mCacheInMemoryCheckBox, mCreateIndexCheckBox);
        QWidget::setTabOrder(mCreateIndexCheckBox, mUseJoinFieldsSubset);
        QWidget::setTabOrder(mUseJoinFieldsSubset, mJoinFieldsSubsetView);
        QWidget::setTabOrder(mJoinFieldsSubsetView, buttonBox);

        retranslateUi(QgsAddJoinDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddJoinDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddJoinDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddJoinDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddJoinDialogBase)
    {
        QgsAddJoinDialogBase->setWindowTitle(QApplication::translate("QgsAddJoinDialogBase", "Add vector join", 0, QApplication::UnicodeUTF8));
        mJoinLayerLabel->setText(QApplication::translate("QgsAddJoinDialogBase", "Join layer", 0, QApplication::UnicodeUTF8));
        mJoinFieldLabel->setText(QApplication::translate("QgsAddJoinDialogBase", "Join field", 0, QApplication::UnicodeUTF8));
        mTargetFieldLabel->setText(QApplication::translate("QgsAddJoinDialogBase", "Target field", 0, QApplication::UnicodeUTF8));
        mCacheInMemoryCheckBox->setText(QApplication::translate("QgsAddJoinDialogBase", "Cache join layer in virtual memory", 0, QApplication::UnicodeUTF8));
        mCreateIndexCheckBox->setText(QApplication::translate("QgsAddJoinDialogBase", "Create attribute index on join field", 0, QApplication::UnicodeUTF8));
        mUseJoinFieldsSubset->setText(QApplication::translate("QgsAddJoinDialogBase", "Choose which fields are joined", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAddJoinDialogBase: public Ui_QgsAddJoinDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDJOINDIALOGBASE_H
