/********************************************************************************
** Form generated from reading UI file 'qgsdecorationcopyrightdialog.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONCOPYRIGHTDIALOG_H
#define UI_QGSDECORATIONCOPYRIGHTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationCopyrightDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cboxEnabled;
    QLabel *label_2;
    QTextEdit *txtCopyrightText;
    QLabel *textLabel16;
    QComboBox *cboPlacement;
    QLabel *textLabel15;
    QComboBox *cboOrientation;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QgsColorButtonV2 *pbnColorChooser;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationCopyrightDialog)
    {
        if (QgsDecorationCopyrightDialog->objectName().isEmpty())
            QgsDecorationCopyrightDialog->setObjectName(QString::fromUtf8("QgsDecorationCopyrightDialog"));
        QgsDecorationCopyrightDialog->resize(397, 326);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationCopyrightDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsDecorationCopyrightDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cboxEnabled = new QCheckBox(QgsDecorationCopyrightDialog);
        cboxEnabled->setObjectName(QString::fromUtf8("cboxEnabled"));
        cboxEnabled->setChecked(true);

        gridLayout->addWidget(cboxEnabled, 0, 0, 1, 1);

        label_2 = new QLabel(QgsDecorationCopyrightDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtCopyrightText = new QTextEdit(QgsDecorationCopyrightDialog);
        txtCopyrightText->setObjectName(QString::fromUtf8("txtCopyrightText"));

        gridLayout->addWidget(txtCopyrightText, 2, 0, 1, 2);

        textLabel16 = new QLabel(QgsDecorationCopyrightDialog);
        textLabel16->setObjectName(QString::fromUtf8("textLabel16"));

        gridLayout->addWidget(textLabel16, 3, 0, 1, 1);

        cboPlacement = new QComboBox(QgsDecorationCopyrightDialog);
        cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));

        gridLayout->addWidget(cboPlacement, 3, 1, 1, 1);

        textLabel15 = new QLabel(QgsDecorationCopyrightDialog);
        textLabel15->setObjectName(QString::fromUtf8("textLabel15"));

        gridLayout->addWidget(textLabel15, 4, 0, 1, 1);

        cboOrientation = new QComboBox(QgsDecorationCopyrightDialog);
        cboOrientation->setObjectName(QString::fromUtf8("cboOrientation"));

        gridLayout->addWidget(cboOrientation, 4, 1, 1, 1);

        label = new QLabel(QgsDecorationCopyrightDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbnColorChooser = new QgsColorButtonV2(QgsDecorationCopyrightDialog);
        pbnColorChooser->setObjectName(QString::fromUtf8("pbnColorChooser"));
        pbnColorChooser->setMinimumSize(QSize(120, 0));
        pbnColorChooser->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(pbnColorChooser);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDecorationCopyrightDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(txtCopyrightText);
        textLabel16->setBuddy(cboPlacement);
        textLabel15->setBuddy(cboOrientation);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cboxEnabled, txtCopyrightText);
        QWidget::setTabOrder(txtCopyrightText, cboPlacement);
        QWidget::setTabOrder(cboPlacement, cboOrientation);
        QWidget::setTabOrder(cboOrientation, buttonBox);

        retranslateUi(QgsDecorationCopyrightDialog);

        QMetaObject::connectSlotsByName(QgsDecorationCopyrightDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationCopyrightDialog)
    {
        QgsDecorationCopyrightDialog->setWindowTitle(QApplication::translate("QgsDecorationCopyrightDialog", "Copyright Label Decoration", 0, QApplication::UnicodeUTF8));
        cboxEnabled->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Enable copyright label", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsDecorationCopyrightDialog", "&Enter your copyright label here:", 0, QApplication::UnicodeUTF8));
        txtCopyrightText->setHtml(QApplication::translate("QgsDecorationCopyrightDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; font-size:10pt;\">\302\251 QGIS 2013</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textLabel16->setText(QApplication::translate("QgsDecorationCopyrightDialog", "&Placement", 0, QApplication::UnicodeUTF8));
        cboPlacement->clear();
        cboPlacement->insertItems(0, QStringList()
         << QApplication::translate("QgsDecorationCopyrightDialog", "Bottom Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationCopyrightDialog", "Top Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationCopyrightDialog", "Bottom Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationCopyrightDialog", "Top Right", 0, QApplication::UnicodeUTF8)
        );
        textLabel15->setText(QApplication::translate("QgsDecorationCopyrightDialog", "&Orientation", 0, QApplication::UnicodeUTF8));
        cboOrientation->clear();
        cboOrientation->insertItems(0, QStringList()
         << QApplication::translate("QgsDecorationCopyrightDialog", "Horizontal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationCopyrightDialog", "Vertical", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("QgsDecorationCopyrightDialog", "Color", 0, QApplication::UnicodeUTF8));
        pbnColorChooser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationCopyrightDialog: public Ui_QgsDecorationCopyrightDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONCOPYRIGHTDIALOG_H
