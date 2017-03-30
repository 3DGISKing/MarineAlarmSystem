/********************************************************************************
** Form generated from reading UI file 'qgsdxfexportdialogbase.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDXFEXPORTDIALOGBASE_H
#define UI_QGSDXFEXPORTDIALOGBASE_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include "qgsfieldcombobox.h"
#include "qgslayertreeview.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDxfExportDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QToolButton *mFileSelectionButton;
    QgsLayerTreeView *mTreeView;
    QLabel *mSaveAsLabel;
    QLabel *mSymbologyModeLabel;
    QLineEdit *mSymbologyScaleLineEdit;
    QComboBox *mSymbologyModeComboBox;
    QLabel *mSymbologyScaleLabel;
    QLineEdit *mFileLineEdit;
    QLabel *label;
    QgsFieldComboBox *mLayerAttributeComboBox;
    QGridLayout *gridLayout_3;
    QPushButton *mUnSelectAllButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *mSelectAllButton;
    QCheckBox *mMapExtentCheckBox;

    void setupUi(QDialog *QgsDxfExportDialogBase)
    {
        if (QgsDxfExportDialogBase->objectName().isEmpty())
            QgsDxfExportDialogBase->setObjectName(QString::fromUtf8("QgsDxfExportDialogBase"));
        QgsDxfExportDialogBase->resize(406, 319);
        gridLayout_2 = new QGridLayout(QgsDxfExportDialogBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsDxfExportDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFileSelectionButton = new QToolButton(QgsDxfExportDialogBase);
        mFileSelectionButton->setObjectName(QString::fromUtf8("mFileSelectionButton"));

        gridLayout->addWidget(mFileSelectionButton, 0, 2, 1, 1);

        mTreeView = new QgsLayerTreeView(QgsDxfExportDialogBase);
        mTreeView->setObjectName(QString::fromUtf8("mTreeView"));
        mTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mTreeView->header()->setDefaultSectionSize(0);

        gridLayout->addWidget(mTreeView, 3, 0, 1, 3);

        mSaveAsLabel = new QLabel(QgsDxfExportDialogBase);
        mSaveAsLabel->setObjectName(QString::fromUtf8("mSaveAsLabel"));

        gridLayout->addWidget(mSaveAsLabel, 0, 0, 1, 1);

        mSymbologyModeLabel = new QLabel(QgsDxfExportDialogBase);
        mSymbologyModeLabel->setObjectName(QString::fromUtf8("mSymbologyModeLabel"));

        gridLayout->addWidget(mSymbologyModeLabel, 1, 0, 1, 1);

        mSymbologyScaleLineEdit = new QLineEdit(QgsDxfExportDialogBase);
        mSymbologyScaleLineEdit->setObjectName(QString::fromUtf8("mSymbologyScaleLineEdit"));

        gridLayout->addWidget(mSymbologyScaleLineEdit, 2, 1, 1, 2);

        mSymbologyModeComboBox = new QComboBox(QgsDxfExportDialogBase);
        mSymbologyModeComboBox->setObjectName(QString::fromUtf8("mSymbologyModeComboBox"));

        gridLayout->addWidget(mSymbologyModeComboBox, 1, 1, 1, 2);

        mSymbologyScaleLabel = new QLabel(QgsDxfExportDialogBase);
        mSymbologyScaleLabel->setObjectName(QString::fromUtf8("mSymbologyScaleLabel"));

        gridLayout->addWidget(mSymbologyScaleLabel, 2, 0, 1, 1);

        mFileLineEdit = new QLineEdit(QgsDxfExportDialogBase);
        mFileLineEdit->setObjectName(QString::fromUtf8("mFileLineEdit"));

        gridLayout->addWidget(mFileLineEdit, 0, 1, 1, 1);

        label = new QLabel(QgsDxfExportDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        mLayerAttributeComboBox = new QgsFieldComboBox(QgsDxfExportDialogBase);
        mLayerAttributeComboBox->setObjectName(QString::fromUtf8("mLayerAttributeComboBox"));
        mLayerAttributeComboBox->setEnabled(false);
        mLayerAttributeComboBox->setEditable(false);

        gridLayout->addWidget(mLayerAttributeComboBox, 4, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mUnSelectAllButton = new QPushButton(QgsDxfExportDialogBase);
        mUnSelectAllButton->setObjectName(QString::fromUtf8("mUnSelectAllButton"));

        gridLayout_3->addWidget(mUnSelectAllButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        mSelectAllButton = new QPushButton(QgsDxfExportDialogBase);
        mSelectAllButton->setObjectName(QString::fromUtf8("mSelectAllButton"));

        gridLayout_3->addWidget(mSelectAllButton, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 2, 0, 1, 2);

        mMapExtentCheckBox = new QCheckBox(QgsDxfExportDialogBase);
        mMapExtentCheckBox->setObjectName(QString::fromUtf8("mMapExtentCheckBox"));

        gridLayout_2->addWidget(mMapExtentCheckBox, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(mLayerAttributeComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsDxfExportDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDxfExportDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDxfExportDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDxfExportDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDxfExportDialogBase)
    {
        QgsDxfExportDialogBase->setWindowTitle(QApplication::translate("QgsDxfExportDialogBase", "DXF export", 0, QApplication::UnicodeUTF8));
        mFileSelectionButton->setText(QApplication::translate("QgsDxfExportDialogBase", "...", 0, QApplication::UnicodeUTF8));
        mSaveAsLabel->setText(QApplication::translate("QgsDxfExportDialogBase", "Save as", 0, QApplication::UnicodeUTF8));
        mSymbologyModeLabel->setText(QApplication::translate("QgsDxfExportDialogBase", "Symbology mode", 0, QApplication::UnicodeUTF8));
        mSymbologyModeComboBox->clear();
        mSymbologyModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsDxfExportDialogBase", "No symbology", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDxfExportDialogBase", "Feature symbology", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDxfExportDialogBase", "Symbol layer symbology", 0, QApplication::UnicodeUTF8)
        );
        mSymbologyScaleLabel->setText(QApplication::translate("QgsDxfExportDialogBase", "Symbology scale", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsDxfExportDialogBase", "Layer attribute", 0, QApplication::UnicodeUTF8));
        mUnSelectAllButton->setText(QApplication::translate("QgsDxfExportDialogBase", "Unselect all", 0, QApplication::UnicodeUTF8));
        mSelectAllButton->setText(QApplication::translate("QgsDxfExportDialogBase", "Select all", 0, QApplication::UnicodeUTF8));
        mMapExtentCheckBox->setText(QApplication::translate("QgsDxfExportDialogBase", "Export features intersecting the current map extent", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDxfExportDialogBase: public Ui_QgsDxfExportDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDXFEXPORTDIALOGBASE_H
