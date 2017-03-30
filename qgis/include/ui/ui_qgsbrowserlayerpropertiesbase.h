/********************************************************************************
** Form generated from reading UI file 'qgsbrowserlayerpropertiesbase.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERLAYERPROPERTIESBASE_H
#define UI_QGSBROWSERLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leName;
    QLineEdit *leSource;
    QLabel *label_4;
    QLineEdit *leProvider;
    QFrame *line;
    QLabel *label_3;
    QTextBrowser *txtbMetadata;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblNotice;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsBrowserLayerPropertiesBase)
    {
        if (QgsBrowserLayerPropertiesBase->objectName().isEmpty())
            QgsBrowserLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsBrowserLayerPropertiesBase"));
        QgsBrowserLayerPropertiesBase->resize(800, 600);
        QgsBrowserLayerPropertiesBase->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(QgsBrowserLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsBrowserLayerPropertiesBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(QgsBrowserLayerPropertiesBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leName = new QLineEdit(QgsBrowserLayerPropertiesBase);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setEnabled(true);
        leName->setReadOnly(true);

        gridLayout->addWidget(leName, 0, 1, 1, 1);

        leSource = new QLineEdit(QgsBrowserLayerPropertiesBase);
        leSource->setObjectName(QString::fromUtf8("leSource"));
        leSource->setEnabled(true);
        leSource->setReadOnly(true);

        gridLayout->addWidget(leSource, 1, 1, 1, 1);

        label_4 = new QLabel(QgsBrowserLayerPropertiesBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        leProvider = new QLineEdit(QgsBrowserLayerPropertiesBase);
        leProvider->setObjectName(QString::fromUtf8("leProvider"));
        leProvider->setEnabled(true);
        leProvider->setReadOnly(true);

        gridLayout->addWidget(leProvider, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(QgsBrowserLayerPropertiesBase);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(QgsBrowserLayerPropertiesBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        txtbMetadata = new QTextBrowser(QgsBrowserLayerPropertiesBase);
        txtbMetadata->setObjectName(QString::fromUtf8("txtbMetadata"));

        verticalLayout->addWidget(txtbMetadata);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblNotice = new QLabel(QgsBrowserLayerPropertiesBase);
        lblNotice->setObjectName(QString::fromUtf8("lblNotice"));
        lblNotice->setEnabled(true);

        horizontalLayout_2->addWidget(lblNotice);

        buttonBox = new QDialogButtonBox(QgsBrowserLayerPropertiesBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QgsBrowserLayerPropertiesBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsBrowserLayerPropertiesBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsBrowserLayerPropertiesBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsBrowserLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsBrowserLayerPropertiesBase)
    {
        QgsBrowserLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsBrowserLayerPropertiesBase", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsBrowserLayerPropertiesBase", "Display Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsBrowserLayerPropertiesBase", "Layer Source", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsBrowserLayerPropertiesBase", "Provider", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsBrowserLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
        lblNotice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserLayerPropertiesBase: public Ui_QgsBrowserLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERLAYERPROPERTIESBASE_H
