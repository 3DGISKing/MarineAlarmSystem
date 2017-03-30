/********************************************************************************
** Form generated from reading UI file 'qgscomposerlegendlayersdialogbase.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLEGENDLAYERSDIALOGBASE_H
#define UI_QGSCOMPOSERLEGENDLAYERSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerLegendLayersDialogBase
{
public:
    QGridLayout *gridLayout;
    QListWidget *listMapLayers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsComposerLegendLayersDialogBase)
    {
        if (QgsComposerLegendLayersDialogBase->objectName().isEmpty())
            QgsComposerLegendLayersDialogBase->setObjectName(QString::fromUtf8("QgsComposerLegendLayersDialogBase"));
        QgsComposerLegendLayersDialogBase->resize(252, 194);
        gridLayout = new QGridLayout(QgsComposerLegendLayersDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listMapLayers = new QListWidget(QgsComposerLegendLayersDialogBase);
        listMapLayers->setObjectName(QString::fromUtf8("listMapLayers"));

        gridLayout->addWidget(listMapLayers, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsComposerLegendLayersDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(QgsComposerLegendLayersDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsComposerLegendLayersDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsComposerLegendLayersDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsComposerLegendLayersDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsComposerLegendLayersDialogBase)
    {
        QgsComposerLegendLayersDialogBase->setWindowTitle(QApplication::translate("QgsComposerLegendLayersDialogBase", "Add layer to legend", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLegendLayersDialogBase: public Ui_QgsComposerLegendLayersDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERLEGENDLAYERSDIALOGBASE_H
