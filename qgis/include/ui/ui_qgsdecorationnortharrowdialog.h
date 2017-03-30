/********************************************************************************
** Form generated from reading UI file 'qgsdecorationnortharrowdialog.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONNORTHARROWDIALOG_H
#define UI_QGSDECORATIONNORTHARROWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationNorthArrowDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *pixmapLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *textLabel6;
    QSlider *sliderRotation;
    QSpinBox *spinAngle;
    QLabel *textLabel8;
    QComboBox *cboPlacement;
    QCheckBox *cboxShow;
    QCheckBox *cboxAutomatic;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationNorthArrowDialog)
    {
        if (QgsDecorationNorthArrowDialog->objectName().isEmpty())
            QgsDecorationNorthArrowDialog->setObjectName(QString::fromUtf8("QgsDecorationNorthArrowDialog"));
        QgsDecorationNorthArrowDialog->resize(382, 193);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDecorationNorthArrowDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsDecorationNorthArrowDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(QgsDecorationNorthArrowDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pixmapLabel = new QLabel(splitter);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pixmapLabel->sizePolicy().hasHeightForWidth());
        pixmapLabel->setSizePolicy(sizePolicy);
        pixmapLabel->setFrameShape(QFrame::StyledPanel);
        pixmapLabel->setScaledContents(false);
        pixmapLabel->setAlignment(Qt::AlignCenter);
        splitter->addWidget(pixmapLabel);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textLabel6 = new QLabel(layoutWidget);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout->addWidget(textLabel6, 0, 0, 1, 1);

        sliderRotation = new QSlider(layoutWidget);
        sliderRotation->setObjectName(QString::fromUtf8("sliderRotation"));
        sliderRotation->setMaximum(360);
        sliderRotation->setSingleStep(1);
        sliderRotation->setPageStep(10);
        sliderRotation->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderRotation, 0, 1, 1, 1);

        spinAngle = new QSpinBox(layoutWidget);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setMaximum(360);
        spinAngle->setSingleStep(1);
        spinAngle->setValue(0);

        gridLayout->addWidget(spinAngle, 0, 2, 1, 1);

        textLabel8 = new QLabel(layoutWidget);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

        gridLayout->addWidget(textLabel8, 1, 0, 1, 1);

        cboPlacement = new QComboBox(layoutWidget);
        cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));

        gridLayout->addWidget(cboPlacement, 1, 1, 1, 2);

        cboxShow = new QCheckBox(layoutWidget);
        cboxShow->setObjectName(QString::fromUtf8("cboxShow"));
        cboxShow->setChecked(true);

        gridLayout->addWidget(cboxShow, 2, 0, 1, 3);

        cboxAutomatic = new QCheckBox(layoutWidget);
        cboxAutomatic->setObjectName(QString::fromUtf8("cboxAutomatic"));
        cboxAutomatic->setChecked(true);

        gridLayout->addWidget(cboxAutomatic, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        splitter->addWidget(layoutWidget);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(QgsDecorationNorthArrowDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        textLabel6->setBuddy(sliderRotation);
        textLabel8->setBuddy(cboPlacement);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(sliderRotation, spinAngle);
        QWidget::setTabOrder(spinAngle, cboPlacement);
        QWidget::setTabOrder(cboPlacement, cboxShow);
        QWidget::setTabOrder(cboxShow, cboxAutomatic);
        QWidget::setTabOrder(cboxAutomatic, buttonBox);

        retranslateUi(QgsDecorationNorthArrowDialog);
        QObject::connect(sliderRotation, SIGNAL(sliderMoved(int)), spinAngle, SLOT(setValue(int)));
        QObject::connect(spinAngle, SIGNAL(valueChanged(int)), sliderRotation, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(QgsDecorationNorthArrowDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationNorthArrowDialog)
    {
        QgsDecorationNorthArrowDialog->setWindowTitle(QApplication::translate("QgsDecorationNorthArrowDialog", "North Arrow Decoration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pixmapLabel->setToolTip(QApplication::translate("QgsDecorationNorthArrowDialog", "Preview of north arrow", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel6->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Angle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sliderRotation->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        textLabel8->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Placement", 0, QApplication::UnicodeUTF8));
        cboPlacement->clear();
        cboPlacement->insertItems(0, QStringList()
         << QApplication::translate("QgsDecorationNorthArrowDialog", "Top Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationNorthArrowDialog", "Top Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationNorthArrowDialog", "Bottom Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDecorationNorthArrowDialog", "Bottom Right", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        cboPlacement->setToolTip(QApplication::translate("QgsDecorationNorthArrowDialog", "Placement on screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cboxShow->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Enable North Arrow", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cboxAutomatic->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cboxAutomatic->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        cboxAutomatic->setText(QApplication::translate("QgsDecorationNorthArrowDialog", "Set direction automatically", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationNorthArrowDialog: public Ui_QgsDecorationNorthArrowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONNORTHARROWDIALOG_H
