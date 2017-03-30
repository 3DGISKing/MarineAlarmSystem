/********************************************************************************
** Form generated from reading UI file 'qgsnewhttpconnectionbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWHTTPCONNECTIONBASE_H
#define UI_QGSNEWHTTPCONNECTIONBASE_H

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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsNewHttpConnectionBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *mGroupBox;
    QGridLayout *gridLayout1;
    QLabel *lblDpiMode;
    QLabel *TextLabel1;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *TextLabel1_2;
    QLineEdit *txtName;
    QLineEdit *txtUrl;
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QCheckBox *cbxIgnoreGetFeatureInfoURI;
    QCheckBox *cbxIgnoreGetMapURI;
    QCheckBox *cbxIgnoreAxisOrientation;
    QCheckBox *cbxInvertAxisOrientation;
    QCheckBox *cbxSmoothPixmapTransform;
    QLineEdit *txtReferer;
    QLabel *lblReferer;
    QComboBox *cmbDpiMode;

    void setupUi(QDialog *QgsNewHttpConnectionBase)
    {
        if (QgsNewHttpConnectionBase->objectName().isEmpty())
            QgsNewHttpConnectionBase->setObjectName(QString::fromUtf8("QgsNewHttpConnectionBase"));
        QgsNewHttpConnectionBase->resize(475, 463);
        QgsNewHttpConnectionBase->setSizeGripEnabled(true);
        QgsNewHttpConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewHttpConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsNewHttpConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        mGroupBox = new QGroupBox(QgsNewHttpConnectionBase);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        gridLayout1 = new QGridLayout(mGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        lblDpiMode = new QLabel(mGroupBox);
        lblDpiMode->setObjectName(QString::fromUtf8("lblDpiMode"));

        gridLayout1->addWidget(lblDpiMode, 8, 0, 1, 1);

        TextLabel1 = new QLabel(mGroupBox);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setMargin(5);

        gridLayout1->addWidget(TextLabel1, 1, 0, 1, 1);

        label = new QLabel(mGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(true);

        gridLayout1->addWidget(label, 4, 0, 1, 3);

        label_3 = new QLabel(mGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 6, 0, 1, 1);

        label_2 = new QLabel(mGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 5, 0, 1, 1);

        TextLabel1_2 = new QLabel(mGroupBox);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
        TextLabel1_2->setWordWrap(true);
        TextLabel1_2->setMargin(5);

        gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        txtName = new QLineEdit(mGroupBox);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(0, 0));
        txtName->setFrame(true);

        gridLayout1->addWidget(txtName, 0, 1, 1, 1);

        txtUrl = new QLineEdit(mGroupBox);
        txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

        gridLayout1->addWidget(txtUrl, 1, 1, 1, 1);

        txtUserName = new QLineEdit(mGroupBox);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));

        gridLayout1->addWidget(txtUserName, 5, 1, 1, 1);

        txtPassword = new QLineEdit(mGroupBox);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout1->addWidget(txtPassword, 6, 1, 1, 1);

        cbxIgnoreGetFeatureInfoURI = new QCheckBox(mGroupBox);
        cbxIgnoreGetFeatureInfoURI->setObjectName(QString::fromUtf8("cbxIgnoreGetFeatureInfoURI"));

        gridLayout1->addWidget(cbxIgnoreGetFeatureInfoURI, 13, 0, 1, 2);

        cbxIgnoreGetMapURI = new QCheckBox(mGroupBox);
        cbxIgnoreGetMapURI->setObjectName(QString::fromUtf8("cbxIgnoreGetMapURI"));

        gridLayout1->addWidget(cbxIgnoreGetMapURI, 12, 0, 1, 2);

        cbxIgnoreAxisOrientation = new QCheckBox(mGroupBox);
        cbxIgnoreAxisOrientation->setObjectName(QString::fromUtf8("cbxIgnoreAxisOrientation"));

        gridLayout1->addWidget(cbxIgnoreAxisOrientation, 14, 0, 1, 2);

        cbxInvertAxisOrientation = new QCheckBox(mGroupBox);
        cbxInvertAxisOrientation->setObjectName(QString::fromUtf8("cbxInvertAxisOrientation"));

        gridLayout1->addWidget(cbxInvertAxisOrientation, 15, 0, 1, 2);

        cbxSmoothPixmapTransform = new QCheckBox(mGroupBox);
        cbxSmoothPixmapTransform->setObjectName(QString::fromUtf8("cbxSmoothPixmapTransform"));

        gridLayout1->addWidget(cbxSmoothPixmapTransform, 16, 0, 1, 2);

        txtReferer = new QLineEdit(mGroupBox);
        txtReferer->setObjectName(QString::fromUtf8("txtReferer"));

        gridLayout1->addWidget(txtReferer, 7, 1, 1, 1);

        lblReferer = new QLabel(mGroupBox);
        lblReferer->setObjectName(QString::fromUtf8("lblReferer"));

        gridLayout1->addWidget(lblReferer, 7, 0, 1, 1);

        cmbDpiMode = new QComboBox(mGroupBox);
        cmbDpiMode->setObjectName(QString::fromUtf8("cmbDpiMode"));

        gridLayout1->addWidget(cmbDpiMode, 8, 1, 1, 1);


        gridLayout->addWidget(mGroupBox, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblDpiMode->setBuddy(cmbDpiMode);
        TextLabel1->setBuddy(txtUrl);
        label_3->setBuddy(txtPassword);
        label_2->setBuddy(txtUserName);
        TextLabel1_2->setBuddy(txtName);
        lblReferer->setBuddy(txtReferer);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsNewHttpConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewHttpConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewHttpConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewHttpConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewHttpConnectionBase)
    {
        QgsNewHttpConnectionBase->setWindowTitle(QApplication::translate("QgsNewHttpConnectionBase", "Create a new WMS connection", 0, QApplication::UnicodeUTF8));
        mGroupBox->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "Connection details", 0, QApplication::UnicodeUTF8));
        lblDpiMode->setText(QApplication::translate("QgsNewHttpConnectionBase", "DPI-Mode", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("QgsNewHttpConnectionBase", "URL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewHttpConnectionBase", "If the service requires basic authentication, enter a user name and optional password", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsNewHttpConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "&User name", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        txtUrl->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "HTTP address of the Web Map Server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbxIgnoreGetFeatureInfoURI->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore GetFeatureInfo URI reported in capabilities", 0, QApplication::UnicodeUTF8));
        cbxIgnoreGetMapURI->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore GetMap/GetTile URI reported in capabilities", 0, QApplication::UnicodeUTF8));
        cbxIgnoreAxisOrientation->setText(QApplication::translate("QgsNewHttpConnectionBase", "Ignore axis orientation (WMS 1.3/WMTS)", 0, QApplication::UnicodeUTF8));
        cbxInvertAxisOrientation->setText(QApplication::translate("QgsNewHttpConnectionBase", "Invert axis orientation", 0, QApplication::UnicodeUTF8));
        cbxSmoothPixmapTransform->setText(QApplication::translate("QgsNewHttpConnectionBase", "Smooth pixmap transform", 0, QApplication::UnicodeUTF8));
        lblReferer->setText(QApplication::translate("QgsNewHttpConnectionBase", "Referer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsNewHttpConnectionBase: public Ui_QgsNewHttpConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWHTTPCONNECTIONBASE_H
