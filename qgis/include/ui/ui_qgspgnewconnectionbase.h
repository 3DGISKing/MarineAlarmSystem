/********************************************************************************
** Form generated from reading UI file 'qgspgnewconnectionbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPGNEWCONNECTIONBASE_H
#define UI_QGSPGNEWCONNECTIONBASE_H

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
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsPgNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *TextLabel1_2;
    QLabel *label;
    QLabel *TextLabel1;
    QLabel *TextLabel2_2;
    QLabel *TextLabel2;
    QLabel *TextLabel3_3;
    QLabel *TextLabel3;
    QLabel *TextLabel3_2;
    QVBoxLayout *vboxLayout1;
    QLineEdit *txtName;
    QLineEdit *txtService;
    QLineEdit *txtHost;
    QLineEdit *txtPort;
    QLineEdit *txtDatabase;
    QComboBox *cbxSSLmode;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QCheckBox *cb_geometryColumnsOnly;
    QCheckBox *cb_publicSchemaOnly;
    QGridLayout *gridLayout_1;
    QCheckBox *chkStoreUsername;
    QPushButton *btnConnect;
    QCheckBox *chkStorePassword;
    QCheckBox *cb_useEstimatedMetadata;
    QCheckBox *cb_allowGeometrylessTables;
    QCheckBox *cb_dontResolveType;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsPgNewConnectionBase)
    {
        if (QgsPgNewConnectionBase->objectName().isEmpty())
            QgsPgNewConnectionBase->setObjectName(QString::fromUtf8("QgsPgNewConnectionBase"));
        QgsPgNewConnectionBase->resize(425, 599);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsPgNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsPgNewConnectionBase->setSizePolicy(sizePolicy);
        QgsPgNewConnectionBase->setSizeGripEnabled(true);
        QgsPgNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsPgNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox1 = new QGroupBox(QgsPgNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout1 = new QGridLayout(GroupBox1);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(0, -1, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        vboxLayout->addWidget(TextLabel1_2);

        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        vboxLayout->addWidget(TextLabel1);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        vboxLayout->addWidget(TextLabel2_2);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        vboxLayout->addWidget(TextLabel2);

        TextLabel3_3 = new QLabel(GroupBox1);
        TextLabel3_3->setObjectName(QString::fromUtf8("TextLabel3_3"));

        vboxLayout->addWidget(TextLabel3_3);

        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        vboxLayout->addWidget(TextLabel3);

        TextLabel3_2 = new QLabel(GroupBox1);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        vboxLayout->addWidget(TextLabel3_2);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        vboxLayout1->addWidget(txtName);

        txtService = new QLineEdit(GroupBox1);
        txtService->setObjectName(QString::fromUtf8("txtService"));

        vboxLayout1->addWidget(txtService);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        vboxLayout1->addWidget(txtHost);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        vboxLayout1->addWidget(txtPort);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        vboxLayout1->addWidget(txtDatabase);

        cbxSSLmode = new QComboBox(GroupBox1);
        cbxSSLmode->setObjectName(QString::fromUtf8("cbxSSLmode"));

        vboxLayout1->addWidget(cbxSSLmode);

        txtUsername = new QLineEdit(GroupBox1);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));

        vboxLayout1->addWidget(txtUsername);

        txtPassword = new QLineEdit(GroupBox1);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        vboxLayout1->addWidget(txtPassword);


        hboxLayout->addLayout(vboxLayout1);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

        cb_geometryColumnsOnly = new QCheckBox(GroupBox1);
        cb_geometryColumnsOnly->setObjectName(QString::fromUtf8("cb_geometryColumnsOnly"));

        gridLayout1->addWidget(cb_geometryColumnsOnly, 2, 0, 1, 1);

        cb_publicSchemaOnly = new QCheckBox(GroupBox1);
        cb_publicSchemaOnly->setObjectName(QString::fromUtf8("cb_publicSchemaOnly"));

        gridLayout1->addWidget(cb_publicSchemaOnly, 4, 0, 1, 1);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        chkStoreUsername = new QCheckBox(GroupBox1);
        chkStoreUsername->setObjectName(QString::fromUtf8("chkStoreUsername"));

        gridLayout_1->addWidget(chkStoreUsername, 0, 0, 1, 1);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        gridLayout_1->addWidget(btnConnect, 0, 1, 2, 1);

        chkStorePassword = new QCheckBox(GroupBox1);
        chkStorePassword->setObjectName(QString::fromUtf8("chkStorePassword"));

        gridLayout_1->addWidget(chkStorePassword, 1, 0, 1, 1);


        gridLayout1->addLayout(gridLayout_1, 1, 0, 1, 1);

        cb_useEstimatedMetadata = new QCheckBox(GroupBox1);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));

        gridLayout1->addWidget(cb_useEstimatedMetadata, 6, 0, 1, 1);

        cb_allowGeometrylessTables = new QCheckBox(GroupBox1);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));
        cb_allowGeometrylessTables->setChecked(false);

        gridLayout1->addWidget(cb_allowGeometrylessTables, 5, 0, 1, 1);

        cb_dontResolveType = new QCheckBox(GroupBox1);
        cb_dontResolveType->setObjectName(QString::fromUtf8("cb_dontResolveType"));

        gridLayout1->addWidget(cb_dontResolveType, 3, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsPgNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabel1_2->setBuddy(txtName);
        label->setBuddy(txtService);
        TextLabel1->setBuddy(txtHost);
        TextLabel2_2->setBuddy(txtPort);
        TextLabel2->setBuddy(txtDatabase);
        TextLabel3_3->setBuddy(cbxSSLmode);
        TextLabel3->setBuddy(txtUsername);
        TextLabel3_2->setBuddy(txtPassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtName, txtService);
        QWidget::setTabOrder(txtService, txtHost);
        QWidget::setTabOrder(txtHost, txtPort);
        QWidget::setTabOrder(txtPort, txtDatabase);
        QWidget::setTabOrder(txtDatabase, cbxSSLmode);
        QWidget::setTabOrder(cbxSSLmode, txtUsername);
        QWidget::setTabOrder(txtUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, chkStoreUsername);
        QWidget::setTabOrder(chkStoreUsername, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnConnect);
        QWidget::setTabOrder(btnConnect, cb_geometryColumnsOnly);
        QWidget::setTabOrder(cb_geometryColumnsOnly, cb_publicSchemaOnly);
        QWidget::setTabOrder(cb_publicSchemaOnly, cb_allowGeometrylessTables);
        QWidget::setTabOrder(cb_allowGeometrylessTables, cb_useEstimatedMetadata);
        QWidget::setTabOrder(cb_useEstimatedMetadata, buttonBox);

        retranslateUi(QgsPgNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsPgNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsPgNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsPgNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPgNewConnectionBase)
    {
        QgsPgNewConnectionBase->setWindowTitle(QApplication::translate("QgsPgNewConnectionBase", "Create a New PostGIS connection", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("QgsPgNewConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsPgNewConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsPgNewConnectionBase", "Service", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("QgsPgNewConnectionBase", "Host", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("QgsPgNewConnectionBase", "Port", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("QgsPgNewConnectionBase", "Database", 0, QApplication::UnicodeUTF8));
        TextLabel3_3->setText(QApplication::translate("QgsPgNewConnectionBase", "SSL mode", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("QgsPgNewConnectionBase", "Username", 0, QApplication::UnicodeUTF8));
        TextLabel3_2->setText(QApplication::translate("QgsPgNewConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsPgNewConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        txtPort->setText(QApplication::translate("QgsPgNewConnectionBase", "5432", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_geometryColumnsOnly->setToolTip(QApplication::translate("QgsPgNewConnectionBase", "Restrict the displayed tables to those that are in the layer registries.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_geometryColumnsOnly->setWhatsThis(QApplication::translate("QgsPgNewConnectionBase", "Restricts the displayed tables to those that are found in the layer registries (geometry_columns, geography_columns, topology.layer). This can speed up the initial display of spatial tables.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_geometryColumnsOnly->setText(QApplication::translate("QgsPgNewConnectionBase", "Only show layers in the layer registries", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_publicSchemaOnly->setToolTip(QApplication::translate("QgsPgNewConnectionBase", "Restrict the search to the public schema for spatial tables not in the geometry_columns table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_publicSchemaOnly->setWhatsThis(QApplication::translate("QgsPgNewConnectionBase", "When searching for spatial tables that are not in the geometry_columns tables, restrict the search to tables that are in the public schema (for some databases this can save lots of time)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_publicSchemaOnly->setText(QApplication::translate("QgsPgNewConnectionBase", "Only look in the 'public' schema", 0, QApplication::UnicodeUTF8));
        chkStoreUsername->setText(QApplication::translate("QgsPgNewConnectionBase", "Save Username", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsPgNewConnectionBase", "&Test Connect", 0, QApplication::UnicodeUTF8));
        chkStorePassword->setText(QApplication::translate("QgsPgNewConnectionBase", "Save Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_useEstimatedMetadata->setToolTip(QApplication::translate("QgsPgNewConnectionBase", "Use estimated table statistics for the layer metadata.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_useEstimatedMetadata->setWhatsThis(QApplication::translate("QgsPgNewConnectionBase", "<html>\n"
"<body>\n"
"<p>When the layer is setup various metadata is required for the PostGIS table. This includes information such as the table row count, geometry type and spatial extents of the data in the geometry column. If the table contains a large number of rows determining this metadata is time consuming.</p>\n"
"<p>By activating this option the following fast table metadata operations are done:</p>\n"
"<p>1) Row count is determined from table statistics obtained from running the PostgreSQL table analyse function.</p>\n"
"<p>2) Table extents are always determined with the estimated_extent PostGIS function even if a layer filter is applied.</p>\n"
"<p>3) If the table geometry type is unknown and is not exclusively taken from the geometry_columns table, then it is determined from the first 100 non-null geometry rows in the table.</p>\n"
"</body>\n"
"</html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_useEstimatedMetadata->setText(QApplication::translate("QgsPgNewConnectionBase", "Use estimated table metadata", 0, QApplication::UnicodeUTF8));
        cb_allowGeometrylessTables->setText(QApplication::translate("QgsPgNewConnectionBase", "Also list tables with no geometry", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_dontResolveType->setToolTip(QApplication::translate("QgsPgNewConnectionBase", "Restrict the displayed tables to those that are in the layer registries.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cb_dontResolveType->setWhatsThis(QApplication::translate("QgsPgNewConnectionBase", "Restricts the displayed tables to those that are found in the layer registries (geometry_columns, geography_columns, topology.layer). This can speed up the initial display of spatial tables.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cb_dontResolveType->setText(QApplication::translate("QgsPgNewConnectionBase", "Don't resolve type of unrestricted columns (GEOMETRY)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsPgNewConnectionBase: public Ui_QgsPgNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPGNEWCONNECTIONBASE_H
