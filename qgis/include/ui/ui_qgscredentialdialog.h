/********************************************************************************
** Form generated from reading UI file 'qgscredentialdialog.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCREDENTIALDIALOG_H
#define UI_QGSCREDENTIALDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsCredentialDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leUsername;
    QLabel *label_2;
    QLineEdit *lePassword;
    QDialogButtonBox *buttonBox;
    QLabel *labelRealm;
    QLabel *labelMessage;
    QLabel *label_3;

    void setupUi(QDialog *QgsCredentialDialog)
    {
        if (QgsCredentialDialog->objectName().isEmpty())
            QgsCredentialDialog->setObjectName(QString::fromUtf8("QgsCredentialDialog"));
        QgsCredentialDialog->resize(365, 156);
        formLayout = new QFormLayout(QgsCredentialDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(QgsCredentialDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(QgsCredentialDialog);
        leUsername->setObjectName(QString::fromUtf8("leUsername"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leUsername);

        label_2 = new QLabel(QgsCredentialDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        lePassword = new QLineEdit(QgsCredentialDialog);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lePassword);

        buttonBox = new QDialogButtonBox(QgsCredentialDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::SpanningRole, buttonBox);

        labelRealm = new QLabel(QgsCredentialDialog);
        labelRealm->setObjectName(QString::fromUtf8("labelRealm"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelRealm);

        labelMessage = new QLabel(QgsCredentialDialog);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, labelMessage);

        label_3 = new QLabel(QgsCredentialDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);


        retranslateUi(QgsCredentialDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsCredentialDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsCredentialDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsCredentialDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsCredentialDialog)
    {
        QgsCredentialDialog->setWindowTitle(QApplication::translate("QgsCredentialDialog", "Enter Credentials", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsCredentialDialog", "Username", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsCredentialDialog", "Password", 0, QApplication::UnicodeUTF8));
        labelRealm->setText(QApplication::translate("QgsCredentialDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        labelMessage->setText(QApplication::translate("QgsCredentialDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsCredentialDialog", "Realm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCredentialDialog: public Ui_QgsCredentialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCREDENTIALDIALOG_H
