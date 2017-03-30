/********************************************************************************
** Form generated from reading UI file 'qgssymbollevelsv2dialogbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLLEVELSV2DIALOGBASE_H
#define UI_QGSSYMBOLLEVELSV2DIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolLevelsV2DialogBase
{
public:
    QGridLayout *gridLayout;
    QCheckBox *chkEnable;
    QLabel *label;
    QTableWidget *tableLevels;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSymbolLevelsV2DialogBase)
    {
        if (QgsSymbolLevelsV2DialogBase->objectName().isEmpty())
            QgsSymbolLevelsV2DialogBase->setObjectName(QString::fromUtf8("QgsSymbolLevelsV2DialogBase"));
        QgsSymbolLevelsV2DialogBase->resize(406, 337);
        gridLayout = new QGridLayout(QgsSymbolLevelsV2DialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        chkEnable = new QCheckBox(QgsSymbolLevelsV2DialogBase);
        chkEnable->setObjectName(QString::fromUtf8("chkEnable"));

        gridLayout->addWidget(chkEnable, 0, 0, 1, 1);

        label = new QLabel(QgsSymbolLevelsV2DialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tableLevels = new QTableWidget(QgsSymbolLevelsV2DialogBase);
        tableLevels->setObjectName(QString::fromUtf8("tableLevels"));
        tableLevels->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableLevels->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableLevels, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSymbolLevelsV2DialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(QgsSymbolLevelsV2DialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSymbolLevelsV2DialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSymbolLevelsV2DialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSymbolLevelsV2DialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSymbolLevelsV2DialogBase)
    {
        QgsSymbolLevelsV2DialogBase->setWindowTitle(QApplication::translate("QgsSymbolLevelsV2DialogBase", "Symbol Levels", 0, QApplication::UnicodeUTF8));
        chkEnable->setText(QApplication::translate("QgsSymbolLevelsV2DialogBase", "Enable symbol levels", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsSymbolLevelsV2DialogBase", "Define the order in which the symbol layers are rendered. The numbers in the cells define in which rendering pass the layer will be drawn.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolLevelsV2DialogBase: public Ui_QgsSymbolLevelsV2DialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLLEVELSV2DIALOGBASE_H
