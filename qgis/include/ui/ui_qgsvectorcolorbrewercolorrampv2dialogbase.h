/********************************************************************************
** Form generated from reading UI file 'qgsvectorcolorbrewercolorrampv2dialogbase.ui'
**
** Created: Sat Jan 17 20:06:22 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORCOLORBREWERCOLORRAMPV2DIALOGBASE_H
#define UI_QGSVECTORCOLORBREWERCOLORRAMPV2DIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsVectorColorBrewerColorRampV2DialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QComboBox *cboSchemeName;
    QComboBox *cboColors;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QLabel *lblPreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorColorBrewerColorRampV2DialogBase)
    {
        if (QgsVectorColorBrewerColorRampV2DialogBase->objectName().isEmpty())
            QgsVectorColorBrewerColorRampV2DialogBase->setObjectName(QString::fromUtf8("QgsVectorColorBrewerColorRampV2DialogBase"));
        QgsVectorColorBrewerColorRampV2DialogBase->resize(400, 300);
        vboxLayout = new QVBoxLayout(QgsVectorColorBrewerColorRampV2DialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsVectorColorBrewerColorRampV2DialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 71, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 2, 1);

        label_2 = new QLabel(QgsVectorColorBrewerColorRampV2DialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cboSchemeName = new QComboBox(QgsVectorColorBrewerColorRampV2DialogBase);
        cboSchemeName->setObjectName(QString::fromUtf8("cboSchemeName"));

        gridLayout->addWidget(cboSchemeName, 0, 1, 1, 1);

        cboColors = new QComboBox(QgsVectorColorBrewerColorRampV2DialogBase);
        cboColors->setObjectName(QString::fromUtf8("cboColors"));

        gridLayout->addWidget(cboColors, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        vboxLayout->addItem(spacerItem1);

        groupBox = new QGroupBox(QgsVectorColorBrewerColorRampV2DialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(lblPreview);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(QgsVectorColorBrewerColorRampV2DialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cboSchemeName);
        label_2->setBuddy(cboColors);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cboSchemeName, cboColors);
        QWidget::setTabOrder(cboColors, buttonBox);

        retranslateUi(QgsVectorColorBrewerColorRampV2DialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorColorBrewerColorRampV2DialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorColorBrewerColorRampV2DialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorColorBrewerColorRampV2DialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorColorBrewerColorRampV2DialogBase)
    {
        QgsVectorColorBrewerColorRampV2DialogBase->setWindowTitle(QApplication::translate("QgsVectorColorBrewerColorRampV2DialogBase", "ColorBrewer ramp", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsVectorColorBrewerColorRampV2DialogBase", "Scheme name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorColorBrewerColorRampV2DialogBase", "Colors", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsVectorColorBrewerColorRampV2DialogBase", "Preview", 0, QApplication::UnicodeUTF8));
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsVectorColorBrewerColorRampV2DialogBase: public Ui_QgsVectorColorBrewerColorRampV2DialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORCOLORBREWERCOLORRAMPV2DIALOGBASE_H
