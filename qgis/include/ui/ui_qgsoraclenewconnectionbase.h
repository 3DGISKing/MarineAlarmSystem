/********************************************************************************
** Form generated from reading UI file 'qgsoraclenewconnectionbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSORACLENEWCONNECTIONBASE_H
#define UI_QGSORACLENEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QgsOracleNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_1;
    QCheckBox *cb_useEstimatedMetadata;
    QLineEdit *txtUsername;
    QLabel *TextLabel3_2;
    QLineEdit *txtPassword;
    QCheckBox *chkStoreUsername;
    QLabel *TextLabel3;
    QLineEdit *txtName;
    QLabel *label;
    QLabel *TextLabel1_2;
    QCheckBox *cb_geometryColumnsOnly;
    QCheckBox *cb_userTablesOnly;
    QCheckBox *cb_allowGeometrylessTables;
    QLabel *TextLabel2_2;
    QLineEdit *txtPort;
    QLineEdit *txtDatabase;
    QPushButton *btnConnect;
    QCheckBox *chkStorePassword;
    QLabel *TextLabel1;
    QLineEdit *txtHost;
    QCheckBox *cb_onlyExistingTypes;

    void setupUi(QDialog *QgsOracleNewConnectionBase)
    {
        if (QgsOracleNewConnectionBase->objectName().isEmpty())
            QgsOracleNewConnectionBase->setObjectName(QString::fromUtf8("QgsOracleNewConnectionBase"));
        QgsOracleNewConnectionBase->resize(400, 489);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOracleNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsOracleNewConnectionBase->setSizePolicy(sizePolicy);
        QgsOracleNewConnectionBase->setSizeGripEnabled(true);
        QgsOracleNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsOracleNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsOracleNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        GroupBox1 = new QGroupBox(QgsOracleNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_1 = new QGridLayout(GroupBox1);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        cb_useEstimatedMetadata = new QCheckBox(GroupBox1);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));

        gridLayout_1->addWidget(cb_useEstimatedMetadata, 11, 0, 1, 3);

        txtUsername = new QLineEdit(GroupBox1);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));

        gridLayout_1->addWidget(txtUsername, 4, 1, 1, 2);

        TextLabel3_2 = new QLabel(GroupBox1);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        gridLayout_1->addWidget(TextLabel3_2, 5, 0, 1, 1);

        txtPassword = new QLineEdit(GroupBox1);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout_1->addWidget(txtPassword, 5, 1, 1, 2);

        chkStoreUsername = new QCheckBox(GroupBox1);
        chkStoreUsername->setObjectName(QString::fromUtf8("chkStoreUsername"));

        gridLayout_1->addWidget(chkStoreUsername, 6, 0, 1, 2);

        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout_1->addWidget(TextLabel3, 4, 0, 1, 1);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout_1->addWidget(txtName, 0, 1, 1, 2);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_1->addWidget(label, 1, 0, 1, 1);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout_1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        cb_geometryColumnsOnly = new QCheckBox(GroupBox1);
        cb_geometryColumnsOnly->setObjectName(QString::fromUtf8("cb_geometryColumnsOnly"));

        gridLayout_1->addWidget(cb_geometryColumnsOnly, 8, 0, 1, 3);

        cb_userTablesOnly = new QCheckBox(GroupBox1);
        cb_userTablesOnly->setObjectName(QString::fromUtf8("cb_userTablesOnly"));

        gridLayout_1->addWidget(cb_userTablesOnly, 9, 0, 1, 3);

        cb_allowGeometrylessTables = new QCheckBox(GroupBox1);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));
        cb_allowGeometrylessTables->setChecked(false);

        gridLayout_1->addWidget(cb_allowGeometrylessTables, 10, 0, 1, 3);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout_1->addWidget(TextLabel2_2, 3, 0, 1, 1);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        gridLayout_1->addWidget(txtPort, 3, 1, 1, 2);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        gridLayout_1->addWidget(txtDatabase, 1, 1, 1, 2);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        gridLayout_1->addWidget(btnConnect, 6, 2, 2, 1);

        chkStorePassword = new QCheckBox(GroupBox1);
        chkStorePassword->setObjectName(QString::fromUtf8("chkStorePassword"));

        gridLayout_1->addWidget(chkStorePassword, 7, 0, 1, 2);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout_1->addWidget(TextLabel1, 2, 0, 1, 1);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        gridLayout_1->addWidget(txtHost, 2, 1, 1, 2);

        cb_onlyExistingTypes = new QCheckBox(GroupBox1);
        cb_onlyExistingTypes->setObjectName(QString::fromUtf8("cb_onlyExistingTypes"));

        gridLayout_1->addWidget(cb_onlyExistingTypes, 12, 0, 1, 3);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabel3_2->setBuddy(txtPassword);
        TextLabel3->setBuddy(txtUsername);
        label->setBuddy(txtDatabase);
        TextLabel1_2->setBuddy(txtName);
        TextLabel2_2->setBuddy(txtPort);
        TextLabel1->setBuddy(txtHost);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtName, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtUsername);
        QWidget::setTabOrder(txtUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, chkStoreUsername);
        QWidget::setTabOrder(chkStoreUsername, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnConnect);
        QWidget::setTabOrder(btnConnect, cb_geometryColumnsOnly);
        QWidget::setTabOrder(cb_geometryColumnsOnly, cb_userTablesOnly);
        QWidget::setTabOrder(cb_userTablesOnly, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, cb_onlyExistingTypes);
        QWidget::setTabOrder(cb_onlyExistingTypes, buttonBox);

        retranslateUi(QgsOracleNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOracleNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOracleNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsOracleNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOracleNewConnectionBase)
    {
        QgsOracleNewConnectionBase->setWindowTitle(QApplication::translate("QgsOracleNewConnectionBase", "Create a New Oracle connection", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("QgsOracleNewConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_useEstimatedMetadata->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Use estimated table statistics for the layer metadata.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_useEstimatedMetadata->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>When the layer is setup various metadata is required for the Oracle table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p><p>By activating this option the following fast table metadata operations are done:</p><p>1) Row count is determined from all_tables.num_rows.</p><p>2) Table extents are always determined with the SDO_TUNE.EXTENTS_OF function even if a layer filter is applied.</p><p>3) The table geometry is determined from the first 100 non-null geometry rows in the table.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_useEstimatedMetadata->setText(QApplication::translate("QgsOracleNewConnectionBase", "Use estimated table metadata", 0, QApplication::UnicodeUTF8));
        TextLabel3_2->setText(QApplication::translate("QgsOracleNewConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
        chkStoreUsername->setText(QApplication::translate("QgsOracleNewConnectionBase", "Save Username", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("QgsOracleNewConnectionBase", "Username", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("QgsOracleNewConnectionBase", "Database", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsOracleNewConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_geometryColumnsOnly->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Restrict the displayed tables to those that are in the all_sdo_geom_metadata table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_geometryColumnsOnly->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>Restricts the displayed tables to those that are in the all_sdo_geom_metadata view. This can speed up the initial display of spatial tables.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_geometryColumnsOnly->setText(QApplication::translate("QgsOracleNewConnectionBase", "Only look in meta data table", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_userTablesOnly->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "When searching for spatial tables restrict the search to tables that are owned by the user.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_userTablesOnly->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>When searching for spatial tables restrict the search to tables that are owned by the user.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_userTablesOnly->setText(QApplication::translate("QgsOracleNewConnectionBase", "Only look for user's tables", 0, QApplication::UnicodeUTF8));
        cb_allowGeometrylessTables->setText(QApplication::translate("QgsOracleNewConnectionBase", "Also list tables with no geometry", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("QgsOracleNewConnectionBase", "Port", 0, QApplication::UnicodeUTF8));
        txtPort->setText(QApplication::translate("QgsOracleNewConnectionBase", "1521", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsOracleNewConnectionBase", "&Test Connect", 0, QApplication::UnicodeUTF8));
        chkStorePassword->setText(QApplication::translate("QgsOracleNewConnectionBase", "Save Password", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("QgsOracleNewConnectionBase", "Host", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_onlyExistingTypes->setToolTip(QApplication::translate("QgsOracleNewConnectionBase", "Only list the existing geometry types and don't offer to add others.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_onlyExistingTypes->setWhatsThis(QApplication::translate("QgsOracleNewConnectionBase", "<html><head/><body><p>When the layer is setup various metadata is required for the Oracle table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p><p>By activating this option the following fast table metadata operations are done:</p><p>1) Row count is determined from all_tables.num_rows.</p><p>2) Table extents are always determined with the SDO_TUNE.EXTENTS_OF function even if a layer filter is applied.</p><p>3) The table geometry is determined from the first 100 non-null geometry rows in the table.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_onlyExistingTypes->setText(QApplication::translate("QgsOracleNewConnectionBase", "Only existing geometry types", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOracleNewConnectionBase: public Ui_QgsOracleNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSORACLENEWCONNECTIONBASE_H
