/********************************************************************************
** Form generated from reading UI file 'qgsosmimportdialog.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOSMIMPORTDIALOG_H
#define UI_QGSOSMIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsOSMImportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editXmlFileName;
    QToolButton *btnBrowseXml;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editDbFileName;
    QToolButton *btnBrowseDb;
    QGroupBox *groupCreateConn;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *editConnName;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOSMImportDialog)
    {
        if (QgsOSMImportDialog->objectName().isEmpty())
            QgsOSMImportDialog->setObjectName(QString::fromUtf8("QgsOSMImportDialog"));
        QgsOSMImportDialog->resize(396, 257);
        verticalLayout = new QVBoxLayout(QgsOSMImportDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(QgsOSMImportDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editXmlFileName = new QLineEdit(groupBox_2);
        editXmlFileName->setObjectName(QString::fromUtf8("editXmlFileName"));

        horizontalLayout->addWidget(editXmlFileName);

        btnBrowseXml = new QToolButton(groupBox_2);
        btnBrowseXml->setObjectName(QString::fromUtf8("btnBrowseXml"));

        horizontalLayout->addWidget(btnBrowseXml);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(QgsOSMImportDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editDbFileName = new QLineEdit(groupBox);
        editDbFileName->setObjectName(QString::fromUtf8("editDbFileName"));

        horizontalLayout_3->addWidget(editDbFileName);

        btnBrowseDb = new QToolButton(groupBox);
        btnBrowseDb->setObjectName(QString::fromUtf8("btnBrowseDb"));

        horizontalLayout_3->addWidget(btnBrowseDb);


        verticalLayout->addWidget(groupBox);

        groupCreateConn = new QGroupBox(QgsOSMImportDialog);
        groupCreateConn->setObjectName(QString::fromUtf8("groupCreateConn"));
        groupCreateConn->setCheckable(true);
        formLayout = new QFormLayout(groupCreateConn);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupCreateConn);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        editConnName = new QLineEdit(groupCreateConn);
        editConnName->setObjectName(QString::fromUtf8("editConnName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editConnName);


        verticalLayout->addWidget(groupCreateConn);

        verticalSpacer = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progressBar = new QProgressBar(QgsOSMImportDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_2->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(QgsOSMImportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(editXmlFileName, btnBrowseXml);
        QWidget::setTabOrder(btnBrowseXml, editDbFileName);
        QWidget::setTabOrder(editDbFileName, btnBrowseDb);
        QWidget::setTabOrder(btnBrowseDb, groupCreateConn);
        QWidget::setTabOrder(groupCreateConn, editConnName);
        QWidget::setTabOrder(editConnName, buttonBox);

        retranslateUi(QgsOSMImportDialog);

        QMetaObject::connectSlotsByName(QgsOSMImportDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsOSMImportDialog)
    {
        QgsOSMImportDialog->setWindowTitle(QApplication::translate("QgsOSMImportDialog", "OpenStreetMap Import", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsOSMImportDialog", "Input XML file (.osm)", 0, QApplication::UnicodeUTF8));
        btnBrowseXml->setText(QApplication::translate("QgsOSMImportDialog", "...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsOSMImportDialog", "Output SpatiaLite DB file", 0, QApplication::UnicodeUTF8));
        btnBrowseDb->setText(QApplication::translate("QgsOSMImportDialog", "...", 0, QApplication::UnicodeUTF8));
        groupCreateConn->setTitle(QApplication::translate("QgsOSMImportDialog", "Create connection (SpatiaLite) after import", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsOSMImportDialog", "Connection name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOSMImportDialog: public Ui_QgsOSMImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOSMIMPORTDIALOG_H
