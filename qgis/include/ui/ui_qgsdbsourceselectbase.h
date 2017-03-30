/********************************************************************************
** Form generated from reading UI file 'qgsdbsourceselectbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDBSOURCESELECTBASE_H
#define UI_QGSDBSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_QgsDbSourceSelectBase
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *connectionsGroupBox;
    QGridLayout *gridLayout;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QTreeView *mTablesTreeView;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbxAllowGeometrylessTables;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *mHoldDialogOpen;
    QGroupBox *mSearchGroupBox;
    QGridLayout *gridLayout1;
    QLabel *mSearchLabel;
    QLabel *mSearchModeLabel;
    QComboBox *mSearchModeComboBox;
    QLabel *mSearchColumnsLabel;
    QComboBox *mSearchColumnComboBox;
    QLineEdit *mSearchTableEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDbSourceSelectBase)
    {
        if (QgsDbSourceSelectBase->objectName().isEmpty())
            QgsDbSourceSelectBase->setObjectName(QString::fromUtf8("QgsDbSourceSelectBase"));
        QgsDbSourceSelectBase->resize(592, 476);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDbSourceSelectBase->setWindowIcon(icon);
        QgsDbSourceSelectBase->setSizeGripEnabled(true);
        QgsDbSourceSelectBase->setModal(true);
        gridLayout_2 = new QGridLayout(QgsDbSourceSelectBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        connectionsGroupBox = new QGroupBox(QgsDbSourceSelectBase);
        connectionsGroupBox->setObjectName(QString::fromUtf8("connectionsGroupBox"));
        gridLayout = new QGridLayout(connectionsGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cmbConnections = new QComboBox(connectionsGroupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConnect = new QPushButton(connectionsGroupBox);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(connectionsGroupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(connectionsGroupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(connectionsGroupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnLoad = new QPushButton(connectionsGroupBox);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(connectionsGroupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addWidget(connectionsGroupBox, 0, 0, 1, 1);

        mTablesTreeView = new QTreeView(QgsDbSourceSelectBase);
        mTablesTreeView->setObjectName(QString::fromUtf8("mTablesTreeView"));
        mTablesTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(mTablesTreeView, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cbxAllowGeometrylessTables = new QCheckBox(QgsDbSourceSelectBase);
        cbxAllowGeometrylessTables->setObjectName(QString::fromUtf8("cbxAllowGeometrylessTables"));

        horizontalLayout_2->addWidget(cbxAllowGeometrylessTables);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        mHoldDialogOpen = new QCheckBox(QgsDbSourceSelectBase);
        mHoldDialogOpen->setObjectName(QString::fromUtf8("mHoldDialogOpen"));

        horizontalLayout_2->addWidget(mHoldDialogOpen);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        mSearchGroupBox = new QGroupBox(QgsDbSourceSelectBase);
        mSearchGroupBox->setObjectName(QString::fromUtf8("mSearchGroupBox"));
        mSearchGroupBox->setFlat(true);
        mSearchGroupBox->setCheckable(true);
        mSearchGroupBox->setChecked(false);
        gridLayout1 = new QGridLayout(mSearchGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        mSearchLabel = new QLabel(mSearchGroupBox);
        mSearchLabel->setObjectName(QString::fromUtf8("mSearchLabel"));
        mSearchLabel->setEnabled(true);

        gridLayout1->addWidget(mSearchLabel, 0, 0, 1, 1);

        mSearchModeLabel = new QLabel(mSearchGroupBox);
        mSearchModeLabel->setObjectName(QString::fromUtf8("mSearchModeLabel"));
        mSearchModeLabel->setEnabled(true);

        gridLayout1->addWidget(mSearchModeLabel, 2, 0, 1, 2);

        mSearchModeComboBox = new QComboBox(mSearchGroupBox);
        mSearchModeComboBox->setObjectName(QString::fromUtf8("mSearchModeComboBox"));
        mSearchModeComboBox->setEnabled(true);

        gridLayout1->addWidget(mSearchModeComboBox, 2, 2, 1, 1);

        mSearchColumnsLabel = new QLabel(mSearchGroupBox);
        mSearchColumnsLabel->setObjectName(QString::fromUtf8("mSearchColumnsLabel"));
        mSearchColumnsLabel->setEnabled(true);

        gridLayout1->addWidget(mSearchColumnsLabel, 1, 0, 1, 2);

        mSearchColumnComboBox = new QComboBox(mSearchGroupBox);
        mSearchColumnComboBox->setObjectName(QString::fromUtf8("mSearchColumnComboBox"));
        mSearchColumnComboBox->setEnabled(true);

        gridLayout1->addWidget(mSearchColumnComboBox, 1, 2, 1, 1);

        mSearchTableEdit = new QLineEdit(mSearchGroupBox);
        mSearchTableEdit->setObjectName(QString::fromUtf8("mSearchTableEdit"));
        mSearchTableEdit->setEnabled(true);

        gridLayout1->addWidget(mSearchTableEdit, 0, 1, 1, 2);


        gridLayout_2->addWidget(mSearchGroupBox, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDbSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mSearchLabel->setBuddy(mSearchTableEdit);
        mSearchModeLabel->setBuddy(mSearchModeComboBox);
        mSearchColumnsLabel->setBuddy(mSearchColumnComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, mTablesTreeView);
        QWidget::setTabOrder(mTablesTreeView, mSearchGroupBox);
        QWidget::setTabOrder(mSearchGroupBox, mSearchTableEdit);
        QWidget::setTabOrder(mSearchTableEdit, mSearchColumnComboBox);
        QWidget::setTabOrder(mSearchColumnComboBox, mSearchModeComboBox);
        QWidget::setTabOrder(mSearchModeComboBox, buttonBox);

        retranslateUi(QgsDbSourceSelectBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDbSourceSelectBase, SLOT(reject()));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchTableEdit, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchColumnComboBox, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchModeComboBox, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchLabel, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchColumnsLabel, SLOT(setVisible(bool)));
        QObject::connect(mSearchGroupBox, SIGNAL(toggled(bool)), mSearchModeLabel, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(QgsDbSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDbSourceSelectBase)
    {
        QgsDbSourceSelectBase->setWindowTitle(QApplication::translate("QgsDbSourceSelectBase", "Add PostGIS layers", 0, QApplication::UnicodeUTF8));
        connectionsGroupBox->setTitle(QApplication::translate("QgsDbSourceSelectBase", "Connections", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsDbSourceSelectBase", "Connect", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("QgsDbSourceSelectBase", "New", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("QgsDbSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("QgsDbSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
        btnLoad->setText(QApplication::translate("QgsDbSourceSelectBase", "Load", "Load connections from file", QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsDbSourceSelectBase", "Save connections to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsDbSourceSelectBase", "Save", 0, QApplication::UnicodeUTF8));
        cbxAllowGeometrylessTables->setText(QApplication::translate("QgsDbSourceSelectBase", "Also list tables with no geometry", 0, QApplication::UnicodeUTF8));
        mHoldDialogOpen->setText(QApplication::translate("QgsDbSourceSelectBase", "Keep dialog open", 0, QApplication::UnicodeUTF8));
        mSearchGroupBox->setTitle(QApplication::translate("QgsDbSourceSelectBase", "Search options", 0, QApplication::UnicodeUTF8));
        mSearchLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search", 0, QApplication::UnicodeUTF8));
        mSearchModeLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search mode", 0, QApplication::UnicodeUTF8));
        mSearchColumnsLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search in columns", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDbSourceSelectBase: public Ui_QgsDbSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDBSOURCESELECTBASE_H
