/********************************************************************************
** Form generated from reading UI file 'qgsludialogbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLUDIALOGBASE_H
#define UI_QGSLUDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsLUDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mLowerLabel;
    QLineEdit *mLowerEdit;
    QLabel *mUpperLabel;
    QLineEdit *mUpperEdit;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsLUDialogBase)
    {
        if (QgsLUDialogBase->objectName().isEmpty())
            QgsLUDialogBase->setObjectName(QString::fromUtf8("QgsLUDialogBase"));
        QgsLUDialogBase->resize(227, 122);
        QgsLUDialogBase->setModal(true);
        gridLayout = new QGridLayout(QgsLUDialogBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLowerLabel = new QLabel(QgsLUDialogBase);
        mLowerLabel->setObjectName(QString::fromUtf8("mLowerLabel"));

        gridLayout->addWidget(mLowerLabel, 0, 0, 1, 1);

        mLowerEdit = new QLineEdit(QgsLUDialogBase);
        mLowerEdit->setObjectName(QString::fromUtf8("mLowerEdit"));

        gridLayout->addWidget(mLowerEdit, 0, 1, 1, 1);

        mUpperLabel = new QLabel(QgsLUDialogBase);
        mUpperLabel->setObjectName(QString::fromUtf8("mUpperLabel"));

        gridLayout->addWidget(mUpperLabel, 1, 0, 1, 1);

        mUpperEdit = new QLineEdit(QgsLUDialogBase);
        mUpperEdit->setObjectName(QString::fromUtf8("mUpperEdit"));

        gridLayout->addWidget(mUpperEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLUDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mLowerLabel->setBuddy(mLowerEdit);
        mUpperLabel->setBuddy(mUpperEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsLUDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLUDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLUDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLUDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLUDialogBase)
    {
        QgsLUDialogBase->setWindowTitle(QApplication::translate("QgsLUDialogBase", "Enter class bounds", 0, QApplication::UnicodeUTF8));
        mLowerLabel->setText(QApplication::translate("QgsLUDialogBase", "Lower value", 0, QApplication::UnicodeUTF8));
        mUpperLabel->setText(QApplication::translate("QgsLUDialogBase", "Upper value", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsLUDialogBase: public Ui_QgsLUDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLUDIALOGBASE_H
