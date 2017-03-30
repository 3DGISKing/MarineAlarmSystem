/********************************************************************************
** Form generated from reading UI file 'qgscustomprojectiondialogbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
#define UI_QGSCUSTOMPROJECTIONDIALOGBASE_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsCustomProjectionDialogBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QTreeWidget *leNameList;
    QLabel *label;
    QPlainTextEdit *teParameters;
    QLineEdit *leName;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QPushButton *pbnCopyCRS;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbnAdd;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbnRemove;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *textLabel2_2_2;
    QLabel *label_2;
    QLabel *textLabel1_3;
    QLabel *textLabel2_3;
    QLabel *textLabel2_2;
    QLineEdit *northWGS84;
    QLabel *projectedX;
    QLineEdit *eastWGS84;
    QLabel *projectedY;
    QPushButton *pbnCalculate;

    void setupUi(QDialog *QgsCustomProjectionDialogBase)
    {
        if (QgsCustomProjectionDialogBase->objectName().isEmpty())
            QgsCustomProjectionDialogBase->setObjectName(QString::fromUtf8("QgsCustomProjectionDialogBase"));
        QgsCustomProjectionDialogBase->resize(542, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsCustomProjectionDialogBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsCustomProjectionDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(QgsCustomProjectionDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        leNameList = new QTreeWidget(groupBox);
        leNameList->setObjectName(QString::fromUtf8("leNameList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leNameList->sizePolicy().hasHeightForWidth());
        leNameList->setSizePolicy(sizePolicy);
        leNameList->setAlternatingRowColors(true);
        leNameList->setSortingEnabled(false);
        leNameList->header()->setProperty("showSortIndicator", QVariant(false));

        gridLayout1->addWidget(leNameList, 2, 0, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout1->addWidget(label, 1, 0, 1, 4);

        teParameters = new QPlainTextEdit(groupBox);
        teParameters->setObjectName(QString::fromUtf8("teParameters"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teParameters->sizePolicy().hasHeightForWidth());
        teParameters->setSizePolicy(sizePolicy1);
        teParameters->setMaximumSize(QSize(16777215, 70));

        gridLayout1->addWidget(teParameters, 5, 3, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout1->addWidget(leName, 4, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 4, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        pbnCopyCRS = new QPushButton(groupBox);
        pbnCopyCRS->setObjectName(QString::fromUtf8("pbnCopyCRS"));

        verticalLayout->addWidget(pbnCopyCRS);


        gridLayout1->addLayout(verticalLayout, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbnAdd = new QPushButton(groupBox);
        pbnAdd->setObjectName(QString::fromUtf8("pbnAdd"));

        horizontalLayout_2->addWidget(pbnAdd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbnRemove = new QPushButton(groupBox);
        pbnRemove->setObjectName(QString::fromUtf8("pbnRemove"));

        horizontalLayout_2->addWidget(pbnRemove);


        gridLayout1->addLayout(horizontalLayout_2, 3, 1, 1, 3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsCustomProjectionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsCustomProjectionDialogBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel2_2_2 = new QLabel(groupBox_2);
        textLabel2_2_2->setObjectName(QString::fromUtf8("textLabel2_2_2"));

        gridLayout2->addWidget(textLabel2_2_2, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout2->addWidget(label_2, 0, 0, 1, 3);

        textLabel1_3 = new QLabel(groupBox_2);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout2->addWidget(textLabel1_3, 1, 1, 1, 1);

        textLabel2_3 = new QLabel(groupBox_2);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

        gridLayout2->addWidget(textLabel2_3, 1, 2, 1, 1);

        textLabel2_2 = new QLabel(groupBox_2);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout2->addWidget(textLabel2_2, 2, 0, 1, 1);

        northWGS84 = new QLineEdit(groupBox_2);
        northWGS84->setObjectName(QString::fromUtf8("northWGS84"));
        northWGS84->setEnabled(true);

        gridLayout2->addWidget(northWGS84, 2, 1, 1, 1);

        projectedX = new QLabel(groupBox_2);
        projectedX->setObjectName(QString::fromUtf8("projectedX"));
        projectedX->setEnabled(true);
        projectedX->setFrameShape(QFrame::Box);

        gridLayout2->addWidget(projectedX, 2, 2, 1, 1);

        eastWGS84 = new QLineEdit(groupBox_2);
        eastWGS84->setObjectName(QString::fromUtf8("eastWGS84"));

        gridLayout2->addWidget(eastWGS84, 3, 1, 1, 1);

        projectedY = new QLabel(groupBox_2);
        projectedY->setObjectName(QString::fromUtf8("projectedY"));
        projectedY->setEnabled(true);
        projectedY->setFrameShape(QFrame::Box);
        projectedY->setMargin(1);

        gridLayout2->addWidget(projectedY, 3, 2, 1, 1);

        pbnCalculate = new QPushButton(groupBox_2);
        pbnCalculate->setObjectName(QString::fromUtf8("pbnCalculate"));

        gridLayout2->addWidget(pbnCalculate, 4, 0, 1, 3);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel2_2_2->setBuddy(eastWGS84);
        textLabel2_2->setBuddy(northWGS84);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(northWGS84, eastWGS84);
        QWidget::setTabOrder(eastWGS84, pbnCalculate);
        QWidget::setTabOrder(pbnCalculate, buttonBox);

        retranslateUi(QgsCustomProjectionDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsCustomProjectionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsCustomProjectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCustomProjectionDialogBase)
    {
        QgsCustomProjectionDialogBase->setWindowTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Custom Coordinate Reference System Definition", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Define", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = leNameList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsCustomProjectionDialogBase", "ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsCustomProjectionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsCustomProjectionDialogBase", "You can define your own custom Coordinate Reference System (CRS) here. The definition must conform to the proj4 format for specifying a CRS.", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Name:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters:", 0, QApplication::UnicodeUTF8));
        pbnCopyCRS->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Copy\n"
" existing CRS", 0, QApplication::UnicodeUTF8));
        pbnAdd->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Add new CRS", 0, QApplication::UnicodeUTF8));
        pbnRemove->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Test", 0, QApplication::UnicodeUTF8));
        textLabel2_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "East", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Use the text boxes below to test the CRS definition you are creating. Enter a coordinate where both the lat/long and the transformed result are known (for example by reading off a map). Then press the calculate button to see if the CRS definition you are creating is accurate.", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Geographic / WGS84", 0, QApplication::UnicodeUTF8));
        textLabel2_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Destination CRS        ", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "North", 0, QApplication::UnicodeUTF8));
        projectedX->setText(QString());
        projectedY->setText(QString());
        pbnCalculate->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Calculate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomProjectionDialogBase: public Ui_QgsCustomProjectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
