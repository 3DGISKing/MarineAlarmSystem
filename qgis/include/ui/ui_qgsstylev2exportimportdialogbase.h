/********************************************************************************
** Form generated from reading UI file 'qgsstylev2exportimportdialogbase.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSTYLEV2EXPORTIMPORTDIALOGBASE_H
#define UI_QGSSTYLEV2EXPORTIMPORTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QgsStyleV2ExportImportDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *fromLabel;
    QComboBox *importTypeCombo;
    QLabel *locationLabel;
    QLineEdit *locationLineEdit;
    QPushButton *btnBrowse;
    QLabel *groupLabel;
    QComboBox *groupCombo;
    QLabel *label;
    QListView *listItems;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsStyleV2ExportImportDialogBase)
    {
        if (QgsStyleV2ExportImportDialogBase->objectName().isEmpty())
            QgsStyleV2ExportImportDialogBase->setObjectName(QString::fromUtf8("QgsStyleV2ExportImportDialogBase"));
        QgsStyleV2ExportImportDialogBase->resize(400, 379);
        gridLayout_2 = new QGridLayout(QgsStyleV2ExportImportDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fromLabel = new QLabel(QgsStyleV2ExportImportDialogBase);
        fromLabel->setObjectName(QString::fromUtf8("fromLabel"));

        gridLayout->addWidget(fromLabel, 0, 0, 1, 1);

        importTypeCombo = new QComboBox(QgsStyleV2ExportImportDialogBase);
        importTypeCombo->setObjectName(QString::fromUtf8("importTypeCombo"));

        gridLayout->addWidget(importTypeCombo, 0, 1, 1, 2);

        locationLabel = new QLabel(QgsStyleV2ExportImportDialogBase);
        locationLabel->setObjectName(QString::fromUtf8("locationLabel"));

        gridLayout->addWidget(locationLabel, 1, 0, 1, 1);

        locationLineEdit = new QLineEdit(QgsStyleV2ExportImportDialogBase);
        locationLineEdit->setObjectName(QString::fromUtf8("locationLineEdit"));

        gridLayout->addWidget(locationLineEdit, 1, 1, 1, 1);

        btnBrowse = new QPushButton(QgsStyleV2ExportImportDialogBase);
        btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));

        gridLayout->addWidget(btnBrowse, 1, 2, 1, 1);

        groupLabel = new QLabel(QgsStyleV2ExportImportDialogBase);
        groupLabel->setObjectName(QString::fromUtf8("groupLabel"));

        gridLayout->addWidget(groupLabel, 2, 0, 1, 1);

        groupCombo = new QComboBox(QgsStyleV2ExportImportDialogBase);
        groupCombo->setObjectName(QString::fromUtf8("groupCombo"));
        groupCombo->setEditable(true);

        gridLayout->addWidget(groupCombo, 2, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        label = new QLabel(QgsStyleV2ExportImportDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        listItems = new QListView(QgsStyleV2ExportImportDialogBase);
        listItems->setObjectName(QString::fromUtf8("listItems"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(listItems->sizePolicy().hasHeightForWidth());
        listItems->setSizePolicy(sizePolicy);
        listItems->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        listItems->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listItems->setIconSize(QSize(48, 48));
        listItems->setMovement(QListView::Static);
        listItems->setResizeMode(QListView::Adjust);
        listItems->setSpacing(5);
        listItems->setViewMode(QListView::IconMode);

        gridLayout_2->addWidget(listItems, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsStyleV2ExportImportDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(QgsStyleV2ExportImportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsStyleV2ExportImportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsStyleV2ExportImportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsStyleV2ExportImportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsStyleV2ExportImportDialogBase)
    {
        QgsStyleV2ExportImportDialogBase->setWindowTitle(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Styles import/export", 0, QApplication::UnicodeUTF8));
        fromLabel->setText(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Import from", 0, QApplication::UnicodeUTF8));
        locationLabel->setText(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Location", 0, QApplication::UnicodeUTF8));
        btnBrowse->setText(QString());
        groupLabel->setText(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Save to group", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsStyleV2ExportImportDialogBase", "Select symbols to export", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsStyleV2ExportImportDialogBase: public Ui_QgsStyleV2ExportImportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSTYLEV2EXPORTIMPORTDIALOGBASE_H
