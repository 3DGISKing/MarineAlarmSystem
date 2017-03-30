/********************************************************************************
** Form generated from reading UI file 'qgsvectorrandomcolorrampv2dialogbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORRANDOMCOLORRAMPV2DIALOGBASE_H
#define UI_QGSVECTORRANDOMCOLORRAMPV2DIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsVectorRandomColorRampV2DialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label;
    QSpinBox *spinHue1;
    QLabel *label_4;
    QSpinBox *spinHue2;
    QLabel *label_9;
    QLabel *label_2;
    QSpinBox *spinSat1;
    QLabel *label_5;
    QSpinBox *spinSat2;
    QLabel *label_10;
    QLabel *label_3;
    QSpinBox *spinVal1;
    QLabel *label_6;
    QSpinBox *spinVal2;
    QHBoxLayout *hboxLayout;
    QLabel *label_7;
    QSpinBox *spinCount;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout1;
    QLabel *lblPreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorRandomColorRampV2DialogBase)
    {
        if (QgsVectorRandomColorRampV2DialogBase->objectName().isEmpty())
            QgsVectorRandomColorRampV2DialogBase->setObjectName(QString::fromUtf8("QgsVectorRandomColorRampV2DialogBase"));
        QgsVectorRandomColorRampV2DialogBase->resize(429, 266);
        vboxLayout = new QVBoxLayout(QgsVectorRandomColorRampV2DialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        spinHue1 = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinHue1->setObjectName(QString::fromUtf8("spinHue1"));
        spinHue1->setMaximum(359);

        gridLayout->addWidget(spinHue1, 0, 2, 1, 1);

        label_4 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        spinHue2 = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinHue2->setObjectName(QString::fromUtf8("spinHue2"));
        spinHue2->setMaximum(359);
        spinHue2->setValue(359);

        gridLayout->addWidget(spinHue2, 0, 4, 1, 1);

        label_9 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_2 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        spinSat1 = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinSat1->setObjectName(QString::fromUtf8("spinSat1"));
        spinSat1->setMaximum(255);

        gridLayout->addWidget(spinSat1, 1, 2, 1, 1);

        label_5 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        spinSat2 = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinSat2->setObjectName(QString::fromUtf8("spinSat2"));
        spinSat2->setMaximum(255);
        spinSat2->setValue(255);

        gridLayout->addWidget(spinSat2, 1, 4, 1, 1);

        label_10 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        label_3 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        spinVal1 = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinVal1->setObjectName(QString::fromUtf8("spinVal1"));
        spinVal1->setMaximum(255);

        gridLayout->addWidget(spinVal1, 2, 2, 1, 1);

        label_6 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        spinVal2 = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinVal2->setObjectName(QString::fromUtf8("spinVal2"));
        spinVal2->setMaximum(255);
        spinVal2->setValue(255);

        gridLayout->addWidget(spinVal2, 2, 4, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_7 = new QLabel(QgsVectorRandomColorRampV2DialogBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        hboxLayout->addWidget(label_7);

        spinCount = new QSpinBox(QgsVectorRandomColorRampV2DialogBase);
        spinCount->setObjectName(QString::fromUtf8("spinCount"));
        spinCount->setMinimum(1);
        spinCount->setMaximum(100);
        spinCount->setValue(10);

        hboxLayout->addWidget(spinCount);

        spacerItem = new QSpacerItem(150, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        vboxLayout->addItem(spacerItem1);

        groupBox = new QGroupBox(QgsVectorRandomColorRampV2DialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout1 = new QHBoxLayout(groupBox);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        lblPreview->setAlignment(Qt::AlignCenter);

        hboxLayout1->addWidget(lblPreview);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(QgsVectorRandomColorRampV2DialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(QgsVectorRandomColorRampV2DialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorRandomColorRampV2DialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorRandomColorRampV2DialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorRandomColorRampV2DialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorRandomColorRampV2DialogBase)
    {
        QgsVectorRandomColorRampV2DialogBase->setWindowTitle(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "Random color ramp", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "Hue", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "from", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "to", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "Saturation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "from", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "to", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "Value", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "from", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "to", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "Classes", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsVectorRandomColorRampV2DialogBase", "Preview", 0, QApplication::UnicodeUTF8));
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsVectorRandomColorRampV2DialogBase: public Ui_QgsVectorRandomColorRampV2DialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORRANDOMCOLORRAMPV2DIALOGBASE_H
