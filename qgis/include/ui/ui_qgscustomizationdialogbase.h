/********************************************************************************
** Form generated from reading UI file 'qgscustomizationdialogbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMIZATIONDIALOGBASE_H
#define UI_QGSCUSTOMIZATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCustomizationDialogBase
{
public:
    QAction *actionCatch;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionExpandAll;
    QAction *actionCollapseAll;
    QAction *actionSelectAll;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mCustomizationEnabledCheckBox;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QgsCustomizationDialogBase)
    {
        if (QgsCustomizationDialogBase->objectName().isEmpty())
            QgsCustomizationDialogBase->setObjectName(QString::fromUtf8("QgsCustomizationDialogBase"));
        QgsCustomizationDialogBase->resize(503, 370);
        actionCatch = new QAction(QgsCustomizationDialogBase);
        actionCatch->setObjectName(QString::fromUtf8("actionCatch"));
        actionCatch->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionSelect.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCatch->setIcon(icon);
        actionSave = new QAction(QgsCustomizationDialogBase);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionLoad = new QAction(QgsCustomizationDialogBase);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon2);
        actionExpandAll = new QAction(QgsCustomizationDialogBase);
        actionExpandAll->setObjectName(QString::fromUtf8("actionExpandAll"));
        actionCollapseAll = new QAction(QgsCustomizationDialogBase);
        actionCollapseAll->setObjectName(QString::fromUtf8("actionCollapseAll"));
        actionSelectAll = new QAction(QgsCustomizationDialogBase);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        centralwidget = new QWidget(QgsCustomizationDialogBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mCustomizationEnabledCheckBox = new QCheckBox(centralwidget);
        mCustomizationEnabledCheckBox->setObjectName(QString::fromUtf8("mCustomizationEnabledCheckBox"));

        verticalLayout_2->addWidget(mCustomizationEnabledCheckBox);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeWidget->setColumnCount(3);
        treeWidget->header()->setVisible(true);

        verticalLayout_2->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(buttonBox);

        QgsCustomizationDialogBase->setCentralWidget(centralwidget);
        toolBar = new QToolBar(QgsCustomizationDialogBase);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        QgsCustomizationDialogBase->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionCatch);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionLoad);
        toolBar->addAction(actionExpandAll);
        toolBar->addAction(actionCollapseAll);
        toolBar->addAction(actionSelectAll);

        retranslateUi(QgsCustomizationDialogBase);

        QMetaObject::connectSlotsByName(QgsCustomizationDialogBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsCustomizationDialogBase)
    {
        QgsCustomizationDialogBase->setWindowTitle(QApplication::translate("QgsCustomizationDialogBase", "Customization", 0, QApplication::UnicodeUTF8));
        actionCatch->setText(QApplication::translate("QgsCustomizationDialogBase", "Catch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCatch->setToolTip(QApplication::translate("QgsCustomizationDialogBase", "Switch to catching widgets in main application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("QgsCustomizationDialogBase", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("QgsCustomizationDialogBase", "Save to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLoad->setText(QApplication::translate("QgsCustomizationDialogBase", "Load", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLoad->setToolTip(QApplication::translate("QgsCustomizationDialogBase", "Load from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExpandAll->setText(QApplication::translate("QgsCustomizationDialogBase", "Expand All", 0, QApplication::UnicodeUTF8));
        actionCollapseAll->setText(QApplication::translate("QgsCustomizationDialogBase", "Collapse All", 0, QApplication::UnicodeUTF8));
        actionSelectAll->setText(QApplication::translate("QgsCustomizationDialogBase", "Select All", 0, QApplication::UnicodeUTF8));
        mCustomizationEnabledCheckBox->setText(QApplication::translate("QgsCustomizationDialogBase", "Enable customization", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("QgsCustomizationDialogBase", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomizationDialogBase: public Ui_QgsCustomizationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMIZATIONDIALOGBASE_H
