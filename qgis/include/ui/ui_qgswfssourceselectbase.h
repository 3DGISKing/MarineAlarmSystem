/********************************************************************************
** Form generated from reading UI file 'qgswfssourceselectbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSWFSSOURCESELECTBASE_H
#define UI_QGSWFSSOURCESELECTBASE_H

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

class Ui_QgsWFSSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QSpacerItem *spacerItem;
    QPushButton *btnChangeSpatialRefSys;
    QHBoxLayout *horizontalLayoutFilter;
    QLabel *labelFilter;
    QLineEdit *lineFilter;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_2;
    QComboBox *cmbConnections;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConnect;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QSpacerItem *spacerItem1;
    QPushButton *btnLoad;
    QPushButton *btnSave;
    QTreeView *treeView;
    QCheckBox *cbxUseTitleLayerName;

    void setupUi(QDialog *QgsWFSSourceSelectBase)
    {
        if (QgsWFSSourceSelectBase->objectName().isEmpty())
            QgsWFSSourceSelectBase->setObjectName(QString::fromUtf8("QgsWFSSourceSelectBase"));
        QgsWFSSourceSelectBase->resize(592, 439);
        gridLayout = new QGridLayout(QgsWFSSourceSelectBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsWFSSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        gbCRS = new QGroupBox(QgsWFSSourceSelectBase);
        gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
        hboxLayout = new QHBoxLayout(gbCRS);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        labelCoordRefSys = new QLabel(gbCRS);
        labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

        hboxLayout->addWidget(labelCoordRefSys);

        spacerItem = new QSpacerItem(441, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnChangeSpatialRefSys = new QPushButton(gbCRS);
        btnChangeSpatialRefSys->setObjectName(QString::fromUtf8("btnChangeSpatialRefSys"));
        btnChangeSpatialRefSys->setEnabled(false);

        hboxLayout->addWidget(btnChangeSpatialRefSys);


        gridLayout->addWidget(gbCRS, 4, 0, 1, 1);

        horizontalLayoutFilter = new QHBoxLayout();
        horizontalLayoutFilter->setObjectName(QString::fromUtf8("horizontalLayoutFilter"));
        labelFilter = new QLabel(QgsWFSSourceSelectBase);
        labelFilter->setObjectName(QString::fromUtf8("labelFilter"));
        labelFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(labelFilter);

        lineFilter = new QLineEdit(QgsWFSSourceSelectBase);
        lineFilter->setObjectName(QString::fromUtf8("lineFilter"));
        lineFilter->setEnabled(true);

        horizontalLayoutFilter->addWidget(lineFilter);


        gridLayout->addLayout(horizontalLayoutFilter, 1, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsWFSSourceSelectBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_2 = new QGridLayout(GroupBox1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbConnections = new QComboBox(GroupBox1);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_2->addWidget(cmbConnections, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
        btnConnect->setEnabled(false);

        horizontalLayout->addWidget(btnConnect);

        btnNew = new QPushButton(GroupBox1);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnEdit = new QPushButton(GroupBox1);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setEnabled(false);

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(GroupBox1);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setEnabled(false);

        horizontalLayout->addWidget(btnDelete);

        spacerItem1 = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem1);

        btnLoad = new QPushButton(GroupBox1);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        horizontalLayout->addWidget(btnLoad);

        btnSave = new QPushButton(GroupBox1);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        treeView = new QTreeView(QgsWFSSourceSelectBase);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setSortingEnabled(true);
        treeView->header()->setVisible(true);

        gridLayout->addWidget(treeView, 2, 0, 1, 1);

        cbxUseTitleLayerName = new QCheckBox(QgsWFSSourceSelectBase);
        cbxUseTitleLayerName->setObjectName(QString::fromUtf8("cbxUseTitleLayerName"));

        gridLayout->addWidget(cbxUseTitleLayerName, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelFilter->setBuddy(lineFilter);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbConnections, btnConnect);
        QWidget::setTabOrder(btnConnect, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, treeView);
        QWidget::setTabOrder(treeView, btnChangeSpatialRefSys);
        QWidget::setTabOrder(btnChangeSpatialRefSys, buttonBox);

        retranslateUi(QgsWFSSourceSelectBase);

        QMetaObject::connectSlotsByName(QgsWFSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWFSSourceSelectBase)
    {
        QgsWFSSourceSelectBase->setWindowTitle(QApplication::translate("QgsWFSSourceSelectBase", "Add WFS Layer from a Server", 0, QApplication::UnicodeUTF8));
        gbCRS->setTitle(QApplication::translate("QgsWFSSourceSelectBase", "Coordinate reference system", 0, QApplication::UnicodeUTF8));
        labelCoordRefSys->setText(QString());
        btnChangeSpatialRefSys->setText(QApplication::translate("QgsWFSSourceSelectBase", "Change...", 0, QApplication::UnicodeUTF8));
        labelFilter->setText(QApplication::translate("QgsWFSSourceSelectBase", "Filter:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineFilter->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineFilter->setWhatsThis(QApplication::translate("QgsWFSSourceSelectBase", "Display WFS FeatureTypes containing this word in the title, name or abstract", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        GroupBox1->setTitle(QApplication::translate("QgsWFSSourceSelectBase", "Server connections", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsWFSSourceSelectBase", "C&onnect", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("QgsWFSSourceSelectBase", "&New", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("QgsWFSSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("QgsWFSSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnLoad->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Load connections from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnLoad->setText(QApplication::translate("QgsWFSSourceSelectBase", "Load", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("QgsWFSSourceSelectBase", "Save connections to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QApplication::translate("QgsWFSSourceSelectBase", "Save", 0, QApplication::UnicodeUTF8));
        cbxUseTitleLayerName->setText(QApplication::translate("QgsWFSSourceSelectBase", "Use title for layer name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsWFSSourceSelectBase: public Ui_QgsWFSSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSWFSSOURCESELECTBASE_H
