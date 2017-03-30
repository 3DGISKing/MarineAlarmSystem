/********************************************************************************
** Form generated from reading UI file 'qgsosmdownloaddialog.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOSMDOWNLOADDIALOG_H
#define UI_QGSOSMDOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsOSMDownloadDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radExtentCanvas;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radExtentLayer;
    QComboBox *cboLayers;
    QRadioButton *radExtentManual;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *editYMax;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *editXMin;
    QLineEdit *editXMax;
    QSpacerItem *horizontalSpacer;
    QLineEdit *editYMin;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFileName;
    QToolButton *btnBrowse;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editSize;
    QProgressBar *progress;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOSMDownloadDialog)
    {
        if (QgsOSMDownloadDialog->objectName().isEmpty())
            QgsOSMDownloadDialog->setObjectName(QString::fromUtf8("QgsOSMDownloadDialog"));
        QgsOSMDownloadDialog->resize(398, 312);
        verticalLayout_2 = new QVBoxLayout(QgsOSMDownloadDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(QgsOSMDownloadDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radExtentCanvas = new QRadioButton(groupBox);
        radExtentCanvas->setObjectName(QString::fromUtf8("radExtentCanvas"));
        radExtentCanvas->setChecked(true);

        verticalLayout->addWidget(radExtentCanvas);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radExtentLayer = new QRadioButton(groupBox);
        radExtentLayer->setObjectName(QString::fromUtf8("radExtentLayer"));

        horizontalLayout_2->addWidget(radExtentLayer);

        cboLayers = new QComboBox(groupBox);
        cboLayers->setObjectName(QString::fromUtf8("cboLayers"));

        horizontalLayout_2->addWidget(cboLayers);


        verticalLayout->addLayout(horizontalLayout_2);

        radExtentManual = new QRadioButton(groupBox);
        radExtentManual->setObjectName(QString::fromUtf8("radExtentManual"));

        verticalLayout->addWidget(radExtentManual);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        editYMax = new QLineEdit(groupBox);
        editYMax->setObjectName(QString::fromUtf8("editYMax"));

        gridLayout->addWidget(editYMax, 0, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        editXMin = new QLineEdit(groupBox);
        editXMin->setObjectName(QString::fromUtf8("editXMin"));

        gridLayout->addWidget(editXMin, 1, 0, 1, 2);

        editXMax = new QLineEdit(groupBox);
        editXMax->setObjectName(QString::fromUtf8("editXMax"));

        gridLayout->addWidget(editXMax, 1, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        editYMin = new QLineEdit(groupBox);
        editYMin->setObjectName(QString::fromUtf8("editYMin"));

        gridLayout->addWidget(editYMin, 2, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QgsOSMDownloadDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editFileName = new QLineEdit(groupBox_2);
        editFileName->setObjectName(QString::fromUtf8("editFileName"));

        horizontalLayout->addWidget(editFileName);

        btnBrowse = new QToolButton(groupBox_2);
        btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));

        horizontalLayout->addWidget(btnBrowse);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editSize = new QLineEdit(QgsOSMDownloadDialog);
        editSize->setObjectName(QString::fromUtf8("editSize"));
        editSize->setReadOnly(true);

        horizontalLayout_3->addWidget(editSize);

        progress = new QProgressBar(QgsOSMDownloadDialog);
        progress->setObjectName(QString::fromUtf8("progress"));

        horizontalLayout_3->addWidget(progress);

        buttonBox = new QDialogButtonBox(QgsOSMDownloadDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(radExtentCanvas, radExtentLayer);
        QWidget::setTabOrder(radExtentLayer, cboLayers);
        QWidget::setTabOrder(cboLayers, radExtentManual);
        QWidget::setTabOrder(radExtentManual, editYMax);
        QWidget::setTabOrder(editYMax, editXMin);
        QWidget::setTabOrder(editXMin, editXMax);
        QWidget::setTabOrder(editXMax, editYMin);
        QWidget::setTabOrder(editYMin, editFileName);
        QWidget::setTabOrder(editFileName, btnBrowse);
        QWidget::setTabOrder(btnBrowse, buttonBox);

        retranslateUi(QgsOSMDownloadDialog);

        QMetaObject::connectSlotsByName(QgsOSMDownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsOSMDownloadDialog)
    {
        QgsOSMDownloadDialog->setWindowTitle(QApplication::translate("QgsOSMDownloadDialog", "Download OpenStreetMap data", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsOSMDownloadDialog", "Extent", 0, QApplication::UnicodeUTF8));
        radExtentCanvas->setText(QApplication::translate("QgsOSMDownloadDialog", "From map canvas", 0, QApplication::UnicodeUTF8));
        radExtentLayer->setText(QApplication::translate("QgsOSMDownloadDialog", "From layer", 0, QApplication::UnicodeUTF8));
        radExtentManual->setText(QApplication::translate("QgsOSMDownloadDialog", "Manual", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsOSMDownloadDialog", "Output file", 0, QApplication::UnicodeUTF8));
        btnBrowse->setText(QApplication::translate("QgsOSMDownloadDialog", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOSMDownloadDialog: public Ui_QgsOSMDownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOSMDOWNLOADDIALOG_H
