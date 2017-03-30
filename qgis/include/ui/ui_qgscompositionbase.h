/********************************************************************************
** Form generated from reading UI file 'qgscompositionbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSITIONBASE_H
#define UI_QGSCOMPOSITIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCompositionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_1;
    QLabel *textLabel3;
    QComboBox *mPaperSizeComboBox;
    QLabel *textLabel5;
    QComboBox *mPaperUnitsComboBox;
    QLabel *textLabel4;
    QLineEdit *mPaperWidthLineEdit;
    QLabel *textLabel6;
    QLineEdit *mPaperHeightLineEdit;
    QLabel *textLabel7;
    QComboBox *mPaperOrientationComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsCompositionBase)
    {
        if (QgsCompositionBase->objectName().isEmpty())
            QgsCompositionBase->setObjectName(QString::fromUtf8("QgsCompositionBase"));
        QgsCompositionBase->resize(243, 354);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsCompositionBase->sizePolicy().hasHeightForWidth());
        QgsCompositionBase->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QgsCompositionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(QgsCompositionBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_1 = new QGridLayout(groupBox);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(0, 0, 0, 0);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy1);
        textLabel3->setWordWrap(true);

        gridLayout_1->addWidget(textLabel3, 0, 0, 1, 1);

        mPaperSizeComboBox = new QComboBox(groupBox);
        mPaperSizeComboBox->setObjectName(QString::fromUtf8("mPaperSizeComboBox"));
        mPaperSizeComboBox->setEnabled(true);
        mPaperSizeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_1->addWidget(mPaperSizeComboBox, 1, 0, 1, 2);

        textLabel5 = new QLabel(groupBox);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        sizePolicy1.setHeightForWidth(textLabel5->sizePolicy().hasHeightForWidth());
        textLabel5->setSizePolicy(sizePolicy1);
        textLabel5->setWordWrap(true);

        gridLayout_1->addWidget(textLabel5, 2, 0, 1, 1);

        mPaperUnitsComboBox = new QComboBox(groupBox);
        mPaperUnitsComboBox->setObjectName(QString::fromUtf8("mPaperUnitsComboBox"));
        mPaperUnitsComboBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPaperUnitsComboBox->sizePolicy().hasHeightForWidth());
        mPaperUnitsComboBox->setSizePolicy(sizePolicy2);

        gridLayout_1->addWidget(mPaperUnitsComboBox, 3, 0, 1, 2);

        textLabel4 = new QLabel(groupBox);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        sizePolicy1.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
        textLabel4->setSizePolicy(sizePolicy1);
        textLabel4->setWordWrap(true);

        gridLayout_1->addWidget(textLabel4, 4, 0, 1, 1);

        mPaperWidthLineEdit = new QLineEdit(groupBox);
        mPaperWidthLineEdit->setObjectName(QString::fromUtf8("mPaperWidthLineEdit"));

        gridLayout_1->addWidget(mPaperWidthLineEdit, 5, 0, 1, 2);

        textLabel6 = new QLabel(groupBox);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        sizePolicy1.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
        textLabel6->setSizePolicy(sizePolicy1);
        textLabel6->setWordWrap(true);

        gridLayout_1->addWidget(textLabel6, 6, 0, 1, 2);

        mPaperHeightLineEdit = new QLineEdit(groupBox);
        mPaperHeightLineEdit->setObjectName(QString::fromUtf8("mPaperHeightLineEdit"));

        gridLayout_1->addWidget(mPaperHeightLineEdit, 7, 0, 1, 2);

        textLabel7 = new QLabel(groupBox);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
        sizePolicy1.setHeightForWidth(textLabel7->sizePolicy().hasHeightForWidth());
        textLabel7->setSizePolicy(sizePolicy1);
        textLabel7->setWordWrap(true);

        gridLayout_1->addWidget(textLabel7, 8, 0, 1, 2);

        mPaperOrientationComboBox = new QComboBox(groupBox);
        mPaperOrientationComboBox->setObjectName(QString::fromUtf8("mPaperOrientationComboBox"));
        mPaperOrientationComboBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPaperOrientationComboBox->sizePolicy().hasHeightForWidth());
        mPaperOrientationComboBox->setSizePolicy(sizePolicy2);

        gridLayout_1->addWidget(mPaperOrientationComboBox, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_1->addItem(verticalSpacer, 10, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        textLabel3->setBuddy(mPaperSizeComboBox);
        textLabel5->setBuddy(mPaperUnitsComboBox);
        textLabel4->setBuddy(mPaperWidthLineEdit);
        textLabel6->setBuddy(mPaperHeightLineEdit);
        textLabel7->setBuddy(mPaperOrientationComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsCompositionBase);

        QMetaObject::connectSlotsByName(QgsCompositionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompositionBase)
    {
        QgsCompositionBase->setWindowTitle(QApplication::translate("QgsCompositionBase", "Composition", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsCompositionBase", "Paper", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsCompositionBase", "Size", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("QgsCompositionBase", "Units", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("QgsCompositionBase", "Width", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("QgsCompositionBase", "Height", 0, QApplication::UnicodeUTF8));
        textLabel7->setText(QApplication::translate("QgsCompositionBase", "Orientation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCompositionBase: public Ui_QgsCompositionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSITIONBASE_H
