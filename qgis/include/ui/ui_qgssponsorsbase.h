/********************************************************************************
** Form generated from reading UI file 'qgssponsorsbase.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSPONSORSBASE_H
#define UI_QGSSPONSORSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_QgsSponsorsBase
{
public:
    QGridLayout *gridLayout;
    QLabel *qgisIcon;
    QTextBrowser *txtSponsors;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSponsorsBase)
    {
        if (QgsSponsorsBase->objectName().isEmpty())
            QgsSponsorsBase->setObjectName(QString::fromUtf8("QgsSponsorsBase"));
        QgsSponsorsBase->resize(640, 453);
        gridLayout = new QGridLayout(QgsSponsorsBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        qgisIcon = new QLabel(QgsSponsorsBase);
        qgisIcon->setObjectName(QString::fromUtf8("qgisIcon"));

        gridLayout->addWidget(qgisIcon, 0, 0, 1, 1);

        txtSponsors = new QTextBrowser(QgsSponsorsBase);
        txtSponsors->setObjectName(QString::fromUtf8("txtSponsors"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtSponsors->sizePolicy().hasHeightForWidth());
        txtSponsors->setSizePolicy(sizePolicy);
        txtSponsors->setOpenExternalLinks(true);

        gridLayout->addWidget(txtSponsors, 0, 1, 2, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSponsorsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(QgsSponsorsBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSponsorsBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSponsorsBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSponsorsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSponsorsBase)
    {
        QgsSponsorsBase->setWindowTitle(QApplication::translate("QgsSponsorsBase", "QGIS Sponsors", 0, QApplication::UnicodeUTF8));
        qgisIcon->setText(QApplication::translate("QgsSponsorsBase", "TextLabel", 0, QApplication::UnicodeUTF8));
        txtSponsors->setHtml(QApplication::translate("QgsSponsorsBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt;\">We work really hard to make this nice software for you. See all the cool features it has? Get a warm fuzzy feeling when you use it? QGIS is a labour of love by a dedicated team of developers. We want you to copy &amp; share it and put it in the hands of as many people as possible. If QGIS is saving you money or you like our work and have the financial ability to help, please consider sponsoring the development of QGIS. We use money from sponsors to pay for travel and costs related to our bi-annual hackfests"
                        ", and to generally support the goals of our project.<br /><br />Please see the </span><a href=\"http://qgis.org/en/site/getinvolved/governance/sponsorship/sponsorship.html\"><span style=\" font-family:'Ubuntu'; font-size:10pt; text-decoration: underline; color:#0000ff;\">QGIS Sponsorship Web Page</span></a><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> for more details. In the </span><a href=\"http://qgis.org/en/site/about/sponsorship.html#list-of-sponsors\"><span style=\" text-decoration: underline; color:#0000ff;\">Sponsors page</span></a><span style=\" font-family:'Ubuntu'; font-size:10pt;\"> you can see the fine people and companies that are helping us financially - a great big 'thank you' to you all!</span></p>\n"
"<hr />\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/sponsors/sponsors/gold.png\" /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/sponsors/sponsors/aas_300wide.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<hr />\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/sponsors/sponsors/silver.png\" /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/sponsors/sponsors/vorarlberg.png\" /> <img src=\":/images/sponsors/sponsors/gaia.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<hr />\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/sponsors/sponsors/bronze.png\" /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/sponsors/sponsors/ibw.png\" /> <img src=\":/images/sponsors/sponsors/geosynergy.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<hr /></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSponsorsBase: public Ui_QgsSponsorsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSPONSORSBASE_H
