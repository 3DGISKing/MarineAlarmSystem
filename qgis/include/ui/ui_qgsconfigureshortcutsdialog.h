/********************************************************************************
** Form generated from reading UI file 'qgsconfigureshortcutsdialog.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCONFIGURESHORTCUTSDIALOG_H
#define UI_QGSCONFIGURESHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsConfigureShortcutsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeActions;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnChangeShortcut;
    QPushButton *btnSetNoShortcut;
    QPushButton *btnResetShortcut;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLoadShortcuts;
    QPushButton *btnSaveShortcuts;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsConfigureShortcutsDialog)
    {
        if (QgsConfigureShortcutsDialog->objectName().isEmpty())
            QgsConfigureShortcutsDialog->setObjectName(QString::fromUtf8("QgsConfigureShortcutsDialog"));
        QgsConfigureShortcutsDialog->resize(385, 304);
        verticalLayout = new QVBoxLayout(QgsConfigureShortcutsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeActions = new QTreeWidget(QgsConfigureShortcutsDialog);
        treeActions->setObjectName(QString::fromUtf8("treeActions"));
        treeActions->setRootIsDecorated(false);
        treeActions->setColumnCount(2);

        verticalLayout->addWidget(treeActions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnChangeShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnChangeShortcut->setObjectName(QString::fromUtf8("btnChangeShortcut"));
        btnChangeShortcut->setFocusPolicy(Qt::NoFocus);
        btnChangeShortcut->setCheckable(true);
        btnChangeShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnChangeShortcut);

        btnSetNoShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnSetNoShortcut->setObjectName(QString::fromUtf8("btnSetNoShortcut"));
        btnSetNoShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnSetNoShortcut);

        btnResetShortcut = new QPushButton(QgsConfigureShortcutsDialog);
        btnResetShortcut->setObjectName(QString::fromUtf8("btnResetShortcut"));
        btnResetShortcut->setAutoDefault(false);

        horizontalLayout->addWidget(btnResetShortcut);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnLoadShortcuts = new QPushButton(QgsConfigureShortcutsDialog);
        btnLoadShortcuts->setObjectName(QString::fromUtf8("btnLoadShortcuts"));
        btnLoadShortcuts->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnLoadShortcuts);

        btnSaveShortcuts = new QPushButton(QgsConfigureShortcutsDialog);
        btnSaveShortcuts->setObjectName(QString::fromUtf8("btnSaveShortcuts"));
        btnSaveShortcuts->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnSaveShortcuts);

        buttonBox = new QDialogButtonBox(QgsConfigureShortcutsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(treeActions, btnSetNoShortcut);
        QWidget::setTabOrder(btnSetNoShortcut, btnResetShortcut);
        QWidget::setTabOrder(btnResetShortcut, btnLoadShortcuts);
        QWidget::setTabOrder(btnLoadShortcuts, btnSaveShortcuts);
        QWidget::setTabOrder(btnSaveShortcuts, buttonBox);

        retranslateUi(QgsConfigureShortcutsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsConfigureShortcutsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsConfigureShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsConfigureShortcutsDialog)
    {
        QgsConfigureShortcutsDialog->setWindowTitle(QApplication::translate("QgsConfigureShortcutsDialog", "Configure shortcuts", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeActions->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsConfigureShortcutsDialog", "Shortcut", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsConfigureShortcutsDialog", "Action", 0, QApplication::UnicodeUTF8));
        btnChangeShortcut->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Change", 0, QApplication::UnicodeUTF8));
        btnSetNoShortcut->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Set none", 0, QApplication::UnicodeUTF8));
        btnResetShortcut->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Set default", 0, QApplication::UnicodeUTF8));
        btnLoadShortcuts->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Load...", 0, QApplication::UnicodeUTF8));
        btnSaveShortcuts->setText(QApplication::translate("QgsConfigureShortcutsDialog", "Save...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsConfigureShortcutsDialog: public Ui_QgsConfigureShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCONFIGURESHORTCUTSDIALOG_H
