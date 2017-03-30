/********************************************************************************
** Form generated from reading UI file 'qgsdecorationscalebardialog.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONSCALEBARDIALOG_H
#define UI_QGSDECORATIONSCALEBARDIALOG_H

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
#include <QtGui/QSpinBox>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationScaleBarDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QComboBox *cboPlacement;
    QLabel *textLabel1;
    QComboBox *cboStyle;
    QLabel *textLabel1_3_2;
    QHBoxLayout *horizontalLayout;
    QgsColorButtonV2 *pbnChangeColor;
    QSpacerItem *horizontalSpacer;
    QLabel *textLabel1_3;
    QSpinBox *spnSize;
    QCheckBox *chkEnable;
    QCheckBox *chkSnapping;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationScaleBarDialog)
    {
        if (QgsDecorationScaleBarDialog->objectName().isEmpty())
            QgsDecorationScaleBarDialog->setObjectName(QString::fromUtf8("QgsDecorationScaleBarDialog"));
        QgsDecorationScaleBarDialog->resize(356, 255);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationScaleBarDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsDecorationScaleBarDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1_2 = new QLabel(QgsDecorationScaleBarDialog);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

        cboPlacement = new QComboBox(QgsDecorationScaleBarDialog);
        cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cboPlacement->sizePolicy().hasHeightForWidth());
        cboPlacement->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cboPlacement, 0, 1, 1, 1);

        textLabel1 = new QLabel(QgsDecorationScaleBarDialog);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        cboStyle = new QComboBox(QgsDecorationScaleBarDialog);
        cboStyle->setObjectName(QString::fromUtf8("cboStyle"));
        sizePolicy1.setHeightForWidth(cboStyle->sizePolicy().hasHeightForWidth());
        cboStyle->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cboStyle, 1, 1, 1, 1);

        textLabel1_3_2 = new QLabel(QgsDecorationScaleBarDialog);
        textLabel1_3_2->setObjectName(QString::fromUtf8("textLabel1_3_2"));
        sizePolicy.setHeightForWidth(textLabel1_3_2->sizePolicy().hasHeightForWidth());
        textLabel1_3_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel1_3_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbnChangeColor = new QgsColorButtonV2(QgsDecorationScaleBarDialog);
        pbnChangeColor->setObjectName(QString::fromUtf8("pbnChangeColor"));
        pbnChangeColor->setMinimumSize(QSize(120, 0));
        pbnChangeColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(pbnChangeColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        textLabel1_3 = new QLabel(QgsDecorationScaleBarDialog);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        sizePolicy.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
        textLabel1_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textLabel1_3, 3, 0, 1, 1);

        spnSize = new QSpinBox(QgsDecorationScaleBarDialog);
        spnSize->setObjectName(QString::fromUtf8("spnSize"));
        sizePolicy1.setHeightForWidth(spnSize->sizePolicy().hasHeightForWidth());
        spnSize->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(spnSize, 3, 1, 1, 1);

        chkEnable = new QCheckBox(QgsDecorationScaleBarDialog);
        chkEnable->setObjectName(QString::fromUtf8("chkEnable"));
        sizePolicy1.setHeightForWidth(chkEnable->sizePolicy().hasHeightForWidth());
        chkEnable->setSizePolicy(sizePolicy1);
        chkEnable->setChecked(true);

        gridLayout->addWidget(chkEnable, 4, 0, 1, 1);

        chkSnapping = new QCheckBox(QgsDecorationScaleBarDialog);
        chkSnapping->setObjectName(QString::fromUtf8("chkSnapping"));
        sizePolicy1.setHeightForWidth(chkSnapping->sizePolicy().hasHeightForWidth());
        chkSnapping->setSizePolicy(sizePolicy1);
        chkSnapping->setChecked(true);

        gridLayout->addWidget(chkSnapping, 5, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsDecorationScaleBarDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        textLabel1_2->setBuddy(cboPlacement);
        textLabel1->setBuddy(cboStyle);
        textLabel1_3->setBuddy(spnSize);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cboPlacement, cboStyle);
        QWidget::setTabOrder(cboStyle, spnSize);
        QWidget::setTabOrder(spnSize, chkEnable);
        QWidget::setTabOrder(chkEnable, chkSnapping);
        QWidget::setTabOrder(chkSnapping, buttonBox);

        retranslateUi(QgsDecorationScaleBarDialog);

        QMetaObject::connectSlotsByName(QgsDecorationScaleBarDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationScaleBarDialog)
    {
        QgsDecorationScaleBarDialog->setWindowTitle(QApplication::translate("QgsDecorationScaleBarDialog", "Scale Bar Decoration", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Placement", 0, QApplication::UnicodeUTF8));
        cboPlacement->clear();
        cboPlacement->insertItems(0, QStringList()
         << QApplication::translate("QgsDecorationScaleBarDialog", "Top Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Top Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Bottom Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Bottom Right", 0, QApplication::UnicodeUTF8)
        );
        textLabel1->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Scale bar style", 0, QApplication::UnicodeUTF8));
        cboStyle->clear();
        cboStyle->insertItems(0, QStringList()
         << QApplication::translate("QgsDecorationScaleBarDialog", "Tick Down", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Tick Up", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Box", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationScaleBarDialog", "Bar", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        cboStyle->setToolTip(QApplication::translate("QgsDecorationScaleBarDialog", "Select the style of the scale bar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel1_3_2->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Color of bar", 0, QApplication::UnicodeUTF8));
        pbnChangeColor->setText(QString());
        textLabel1_3->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Size of bar", 0, QApplication::UnicodeUTF8));
        chkEnable->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Enable scale bar", 0, QApplication::UnicodeUTF8));
        chkSnapping->setText(QApplication::translate("QgsDecorationScaleBarDialog", "Automatically snap to round number on resize", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationScaleBarDialog: public Ui_QgsDecorationScaleBarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONSCALEBARDIALOG_H
