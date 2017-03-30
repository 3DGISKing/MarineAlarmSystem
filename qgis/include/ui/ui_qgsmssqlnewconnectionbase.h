/********************************************************************************
** Form generated from reading UI file 'qgsmssqlnewconnectionbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMSSQLNEWCONNECTIONBASE_H
#define UI_QGSMSSQLNEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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

class Ui_QgsMssqlNewConnectionBase
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
    QLabel *TextLabel2;
    QLabel *label_2;
    QLabel *TextLabel3;
    QLabel *TextLabel3_2;
    QVBoxLayout *vboxLayout1;
    QLineEdit *txtName;
    QLineEdit *txtService;
    QLineEdit *txtHost;
    QLineEdit *txtDatabase;
    QCheckBox *cb_trustedConnection;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QGridLayout *gridLayout_1;
    QCheckBox *chkStoreUsername;
    QPushButton *btnConnect;
    QCheckBox *chkStorePassword;
    QCheckBox *cb_geometryColumns;
    QCheckBox *cb_allowGeometrylessTables;
    QCheckBox *cb_useEstimatedMetadata;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMssqlNewConnectionBase)
    {
        if (QgsMssqlNewConnectionBase->objectName().isEmpty())
            QgsMssqlNewConnectionBase->setObjectName(QString::fromUtf8("QgsMssqlNewConnectionBase"));
        QgsMssqlNewConnectionBase->resize(311, 352);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsMssqlNewConnectionBase->sizePolicy().hasHeightForWidth());
        QgsMssqlNewConnectionBase->setSizePolicy(sizePolicy);
        QgsMssqlNewConnectionBase->setSizeGripEnabled(true);
        QgsMssqlNewConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsMssqlNewConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox1 = new QGroupBox(QgsMssqlNewConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout1 = new QGridLayout(GroupBox1);
        gridLayout1->setSpacing(5);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
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

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        vboxLayout->addWidget(TextLabel2);

        label_2 = new QLabel(GroupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);

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

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        vboxLayout1->addWidget(txtDatabase);

        cb_trustedConnection = new QCheckBox(GroupBox1);
        cb_trustedConnection->setObjectName(QString::fromUtf8("cb_trustedConnection"));
        cb_trustedConnection->setChecked(true);

        vboxLayout1->addWidget(cb_trustedConnection);

        txtUsername = new QLineEdit(GroupBox1);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));

        vboxLayout1->addWidget(txtUsername);

        txtPassword = new QLineEdit(GroupBox1);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        vboxLayout1->addWidget(txtPassword);


        hboxLayout->addLayout(vboxLayout1);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

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

        cb_geometryColumns = new QCheckBox(GroupBox1);
        cb_geometryColumns->setObjectName(QString::fromUtf8("cb_geometryColumns"));
        cb_geometryColumns->setChecked(true);

        gridLayout1->addWidget(cb_geometryColumns, 2, 0, 1, 1);

        cb_allowGeometrylessTables = new QCheckBox(GroupBox1);
        cb_allowGeometrylessTables->setObjectName(QString::fromUtf8("cb_allowGeometrylessTables"));

        gridLayout1->addWidget(cb_allowGeometrylessTables, 3, 0, 1, 1);

        cb_useEstimatedMetadata = new QCheckBox(GroupBox1);
        cb_useEstimatedMetadata->setObjectName(QString::fromUtf8("cb_useEstimatedMetadata"));
        cb_useEstimatedMetadata->setChecked(true);

        gridLayout1->addWidget(cb_useEstimatedMetadata, 4, 0, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsMssqlNewConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabel1_2->setBuddy(txtName);
        label->setBuddy(txtService);
        TextLabel1->setBuddy(txtHost);
        TextLabel2->setBuddy(txtDatabase);
        TextLabel3->setBuddy(txtUsername);
        TextLabel3_2->setBuddy(txtPassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtName, txtService);
        QWidget::setTabOrder(txtService, txtHost);
        QWidget::setTabOrder(txtHost, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtUsername);
        QWidget::setTabOrder(txtUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, chkStoreUsername);
        QWidget::setTabOrder(chkStoreUsername, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnConnect);
        QWidget::setTabOrder(btnConnect, buttonBox);

        retranslateUi(QgsMssqlNewConnectionBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMssqlNewConnectionBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsMssqlNewConnectionBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsMssqlNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMssqlNewConnectionBase)
    {
        QgsMssqlNewConnectionBase->setWindowTitle(QApplication::translate("QgsMssqlNewConnectionBase", "Create a New MSSQL connection", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("QgsMssqlNewConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Provider/DSN", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Host", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Database", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        TextLabel3->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Username", 0, QApplication::UnicodeUTF8));
        TextLabel3_2->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsMssqlNewConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cb_trustedConnection->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Trusted Connection", 0, QApplication::UnicodeUTF8));
        chkStoreUsername->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Save Username", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsMssqlNewConnectionBase", "&Test Connect", 0, QApplication::UnicodeUTF8));
        chkStorePassword->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Save Password", 0, QApplication::UnicodeUTF8));
        cb_geometryColumns->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Only look in the geometry_columns metadata table", 0, QApplication::UnicodeUTF8));
        cb_allowGeometrylessTables->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Also list tables with no geometry", 0, QApplication::UnicodeUTF8));
        cb_useEstimatedMetadata->setText(QApplication::translate("QgsMssqlNewConnectionBase", "Use estimated table parameters", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMssqlNewConnectionBase: public Ui_QgsMssqlNewConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMSSQLNEWCONNECTIONBASE_H
