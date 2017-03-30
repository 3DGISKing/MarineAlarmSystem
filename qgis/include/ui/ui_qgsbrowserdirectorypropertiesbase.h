/********************************************************************************
** Form generated from reading UI file 'qgsbrowserdirectorypropertiesbase.ui'
**
** Created: Sat Jan 17 20:06:30 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERDIRECTORYPROPERTIESBASE_H
#define UI_QGSBROWSERDIRECTORYPROPERTIESBASE_H

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
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserDirectoryPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leSource;
    QVBoxLayout *lytWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsBrowserDirectoryPropertiesBase)
    {
        if (QgsBrowserDirectoryPropertiesBase->objectName().isEmpty())
            QgsBrowserDirectoryPropertiesBase->setObjectName(QString::fromUtf8("QgsBrowserDirectoryPropertiesBase"));
        QgsBrowserDirectoryPropertiesBase->resize(800, 600);
        QgsBrowserDirectoryPropertiesBase->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(QgsBrowserDirectoryPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QgsBrowserDirectoryPropertiesBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leSource = new QLineEdit(QgsBrowserDirectoryPropertiesBase);
        leSource->setObjectName(QString::fromUtf8("leSource"));
        leSource->setEnabled(true);
        leSource->setReadOnly(true);

        gridLayout->addWidget(leSource, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lytWidget = new QVBoxLayout();
        lytWidget->setObjectName(QString::fromUtf8("lytWidget"));

        verticalLayout->addLayout(lytWidget);

        buttonBox = new QDialogButtonBox(QgsBrowserDirectoryPropertiesBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsBrowserDirectoryPropertiesBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsBrowserDirectoryPropertiesBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsBrowserDirectoryPropertiesBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsBrowserDirectoryPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsBrowserDirectoryPropertiesBase)
    {
        QgsBrowserDirectoryPropertiesBase->setWindowTitle(QApplication::translate("QgsBrowserDirectoryPropertiesBase", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsBrowserDirectoryPropertiesBase", "Path", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserDirectoryPropertiesBase: public Ui_QgsBrowserDirectoryPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERDIRECTORYPROPERTIESBASE_H
