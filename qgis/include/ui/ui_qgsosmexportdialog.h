/********************************************************************************
** Form generated from reading UI file 'qgsosmexportdialog.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOSMEXPORTDIALOG_H
#define UI_QGSOSMEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsOSMExportDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *editDbFileName;
    QToolButton *btnBrowseDb;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radPoints;
    QRadioButton *radPolylines;
    QRadioButton *radPolygons;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *editLayerName;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLoadTags;
    QSpacerItem *horizontalSpacer;
    QTreeView *viewTags;
    QCheckBox *chkLoadWhenFinished;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *progressBar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOSMExportDialog)
    {
        if (QgsOSMExportDialog->objectName().isEmpty())
            QgsOSMExportDialog->setObjectName(QString::fromUtf8("QgsOSMExportDialog"));
        QgsOSMExportDialog->resize(456, 434);
        verticalLayout_3 = new QVBoxLayout(QgsOSMExportDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(QgsOSMExportDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editDbFileName = new QLineEdit(groupBox);
        editDbFileName->setObjectName(QString::fromUtf8("editDbFileName"));

        horizontalLayout_3->addWidget(editDbFileName);

        btnBrowseDb = new QToolButton(groupBox);
        btnBrowseDb->setObjectName(QString::fromUtf8("btnBrowseDb"));

        horizontalLayout_3->addWidget(btnBrowseDb);


        verticalLayout_3->addWidget(groupBox);

        groupBox_4 = new QGroupBox(QgsOSMExportDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radPoints = new QRadioButton(groupBox_4);
        radPoints->setObjectName(QString::fromUtf8("radPoints"));
        radPoints->setChecked(true);

        horizontalLayout_2->addWidget(radPoints);

        radPolylines = new QRadioButton(groupBox_4);
        radPolylines->setObjectName(QString::fromUtf8("radPolylines"));

        horizontalLayout_2->addWidget(radPolylines);

        radPolygons = new QRadioButton(groupBox_4);
        radPolygons->setObjectName(QString::fromUtf8("radPolygons"));

        horizontalLayout_2->addWidget(radPolygons);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(QgsOSMExportDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editLayerName = new QLineEdit(groupBox_2);
        editLayerName->setObjectName(QString::fromUtf8("editLayerName"));

        verticalLayout->addWidget(editLayerName);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(QgsOSMExportDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnLoadTags = new QPushButton(groupBox_3);
        btnLoadTags->setObjectName(QString::fromUtf8("btnLoadTags"));

        horizontalLayout->addWidget(btnLoadTags);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        viewTags = new QTreeView(groupBox_3);
        viewTags->setObjectName(QString::fromUtf8("viewTags"));
        viewTags->setSortingEnabled(true);

        verticalLayout_2->addWidget(viewTags);


        verticalLayout_3->addWidget(groupBox_3);

        chkLoadWhenFinished = new QCheckBox(QgsOSMExportDialog);
        chkLoadWhenFinished->setObjectName(QString::fromUtf8("chkLoadWhenFinished"));
        chkLoadWhenFinished->setChecked(true);

        verticalLayout_3->addWidget(chkLoadWhenFinished);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        progressBar = new QProgressBar(QgsOSMExportDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_4->addWidget(progressBar);

        buttonBox = new QDialogButtonBox(QgsOSMExportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(editDbFileName, btnBrowseDb);
        QWidget::setTabOrder(btnBrowseDb, radPoints);
        QWidget::setTabOrder(radPoints, radPolylines);
        QWidget::setTabOrder(radPolylines, radPolygons);
        QWidget::setTabOrder(radPolygons, editLayerName);
        QWidget::setTabOrder(editLayerName, btnLoadTags);
        QWidget::setTabOrder(btnLoadTags, viewTags);
        QWidget::setTabOrder(viewTags, chkLoadWhenFinished);
        QWidget::setTabOrder(chkLoadWhenFinished, buttonBox);

        retranslateUi(QgsOSMExportDialog);

        QMetaObject::connectSlotsByName(QgsOSMExportDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsOSMExportDialog)
    {
        QgsOSMExportDialog->setWindowTitle(QApplication::translate("QgsOSMExportDialog", "Export OpenStreetMap topology to SpatiaLite", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsOSMExportDialog", "Input DB file", 0, QApplication::UnicodeUTF8));
        btnBrowseDb->setText(QApplication::translate("QgsOSMExportDialog", "...", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QgsOSMExportDialog", "Export type", 0, QApplication::UnicodeUTF8));
        radPoints->setText(QApplication::translate("QgsOSMExportDialog", "Points (nodes)", 0, QApplication::UnicodeUTF8));
        radPolylines->setText(QApplication::translate("QgsOSMExportDialog", "Polylines (open ways)", 0, QApplication::UnicodeUTF8));
        radPolygons->setText(QApplication::translate("QgsOSMExportDialog", "Polygons (closed ways)", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsOSMExportDialog", "Output layer name", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsOSMExportDialog", "Exported tags", 0, QApplication::UnicodeUTF8));
        btnLoadTags->setText(QApplication::translate("QgsOSMExportDialog", "Load from DB", 0, QApplication::UnicodeUTF8));
        chkLoadWhenFinished->setText(QApplication::translate("QgsOSMExportDialog", "&Load into canvas when finished", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOSMExportDialog: public Ui_QgsOSMExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOSMEXPORTDIALOG_H
