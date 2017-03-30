/********************************************************************************
** Form generated from reading UI file 'qgsvectorgradientcolorrampv2dialogbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORGRADIENTCOLORRAMPV2DIALOGBASE_H
#define UI_QGSVECTORGRADIENTCOLORRAMPV2DIALOGBASE_H

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
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorGradientColorRampV2DialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *spacerItem;
    QComboBox *cboType;
    QgsColorButtonV2 *btnColor2;
    QLabel *label_3;
    QgsColorButtonV2 *btnColor1;
    QGroupBox *groupStops;
    QGridLayout *gridLayout_1;
    QTreeWidget *treeStops;
    QPushButton *btnAddStop;
    QPushButton *btnRemoveStop;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblPreview;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInformation;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorGradientColorRampV2DialogBase)
    {
        if (QgsVectorGradientColorRampV2DialogBase->objectName().isEmpty())
            QgsVectorGradientColorRampV2DialogBase->setObjectName(QString::fromUtf8("QgsVectorGradientColorRampV2DialogBase"));
        QgsVectorGradientColorRampV2DialogBase->resize(400, 379);
        verticalLayout = new QVBoxLayout(QgsVectorGradientColorRampV2DialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsVectorGradientColorRampV2DialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsVectorGradientColorRampV2DialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 71, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 2, 1);

        cboType = new QComboBox(QgsVectorGradientColorRampV2DialogBase);
        cboType->setObjectName(QString::fromUtf8("cboType"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cboType->sizePolicy().hasHeightForWidth());
        cboType->setSizePolicy(sizePolicy);
        cboType->setStyleSheet(QString::fromUtf8(""));
        cboType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout->addWidget(cboType, 2, 1, 1, 1);

        btnColor2 = new QgsColorButtonV2(QgsVectorGradientColorRampV2DialogBase);
        btnColor2->setObjectName(QString::fromUtf8("btnColor2"));
        btnColor2->setMinimumSize(QSize(120, 0));
        btnColor2->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(btnColor2, 1, 1, 1, 1);

        label_3 = new QLabel(QgsVectorGradientColorRampV2DialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        btnColor1 = new QgsColorButtonV2(QgsVectorGradientColorRampV2DialogBase);
        btnColor1->setObjectName(QString::fromUtf8("btnColor1"));
        btnColor1->setMinimumSize(QSize(120, 0));
        btnColor1->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(btnColor1, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupStops = new QGroupBox(QgsVectorGradientColorRampV2DialogBase);
        groupStops->setObjectName(QString::fromUtf8("groupStops"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(groupStops->sizePolicy().hasHeightForWidth());
        groupStops->setSizePolicy(sizePolicy1);
        groupStops->setCheckable(true);
        groupStops->setChecked(false);
        gridLayout_1 = new QGridLayout(groupStops);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        treeStops = new QTreeWidget(groupStops);
        treeStops->setObjectName(QString::fromUtf8("treeStops"));
        treeStops->setRootIsDecorated(false);
        treeStops->setColumnCount(2);

        gridLayout_1->addWidget(treeStops, 0, 0, 3, 1);

        btnAddStop = new QPushButton(groupStops);
        btnAddStop->setObjectName(QString::fromUtf8("btnAddStop"));

        gridLayout_1->addWidget(btnAddStop, 0, 1, 1, 1);

        btnRemoveStop = new QPushButton(groupStops);
        btnRemoveStop->setObjectName(QString::fromUtf8("btnRemoveStop"));

        gridLayout_1->addWidget(btnRemoveStop, 1, 1, 1, 1);


        verticalLayout->addWidget(groupStops);

        groupBox = new QGroupBox(QgsVectorGradientColorRampV2DialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lblPreview);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnInformation = new QPushButton(QgsVectorGradientColorRampV2DialogBase);
        btnInformation->setObjectName(QString::fromUtf8("btnInformation"));

        horizontalLayout->addWidget(btnInformation);

        buttonBox = new QDialogButtonBox(QgsVectorGradientColorRampV2DialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(btnColor1);
        label_2->setBuddy(btnColor2);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(btnColor1, btnColor2);
        QWidget::setTabOrder(btnColor2, groupStops);
        QWidget::setTabOrder(groupStops, treeStops);
        QWidget::setTabOrder(treeStops, btnAddStop);

        retranslateUi(QgsVectorGradientColorRampV2DialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorGradientColorRampV2DialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorGradientColorRampV2DialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorGradientColorRampV2DialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorGradientColorRampV2DialogBase)
    {
        QgsVectorGradientColorRampV2DialogBase->setWindowTitle(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Gradient color ramp", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Color 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Color 2", 0, QApplication::UnicodeUTF8));
        btnColor2->setText(QString());
        label_3->setText(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Type", 0, QApplication::UnicodeUTF8));
        btnColor1->setText(QString());
        groupStops->setTitle(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Multiple stops", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeStops->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Offset (%)", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Color", 0, QApplication::UnicodeUTF8));
        btnAddStop->setText(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Add stop", 0, QApplication::UnicodeUTF8));
        btnRemoveStop->setText(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Remove stop", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Preview", 0, QApplication::UnicodeUTF8));
        lblPreview->setText(QString());
        btnInformation->setText(QApplication::translate("QgsVectorGradientColorRampV2DialogBase", "Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorGradientColorRampV2DialogBase: public Ui_QgsVectorGradientColorRampV2DialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORGRADIENTCOLORRAMPV2DIALOGBASE_H
