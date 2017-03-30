/********************************************************************************
** Form generated from reading UI file 'qgsmessageviewer.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMESSAGEVIEWER_H
#define UI_QGSMESSAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QgsMessageViewer
{
public:
    QGridLayout *gridLayout;
    QTextEdit *txtMessage;
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;

    void setupUi(QDialog *QgsMessageViewer)
    {
        if (QgsMessageViewer->objectName().isEmpty())
            QgsMessageViewer->setObjectName(QString::fromUtf8("QgsMessageViewer"));
        QgsMessageViewer->resize(499, 283);
        QgsMessageViewer->setModal(true);
        gridLayout = new QGridLayout(QgsMessageViewer);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        txtMessage = new QTextEdit(QgsMessageViewer);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));
        txtMessage->setLineWidth(2);
        txtMessage->setAutoFormatting(QTextEdit::AutoNone);
        txtMessage->setReadOnly(true);

        gridLayout->addWidget(txtMessage, 0, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsMessageViewer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        checkBox = new QCheckBox(QgsMessageViewer);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        QWidget::setTabOrder(txtMessage, checkBox);
        QWidget::setTabOrder(checkBox, buttonBox);

        retranslateUi(QgsMessageViewer);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsMessageViewer, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMessageViewer);
    } // setupUi

    void retranslateUi(QDialog *QgsMessageViewer)
    {
        QgsMessageViewer->setWindowTitle(QApplication::translate("QgsMessageViewer", "QGIS Message", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("QgsMessageViewer", "Don't show this message again", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMessageViewer: public Ui_QgsMessageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMESSAGEVIEWER_H
