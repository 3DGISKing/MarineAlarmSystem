/********************************************************************************
** Form generated from reading UI file 'qgsopenvectorlayerdialogbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOPENVECTORLAYERDIALOGBASE_H
#define UI_QGSOPENVECTORLAYERDIALOGBASE_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_QgsOpenVectorLayerDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *srcGroupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcDirectory;
    QRadioButton *radioSrcDatabase;
    QRadioButton *radioSrcProtocol;
    QLabel *label_3;
    QComboBox *cmbEncodings;
    QGroupBox *protocolGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *cmbProtocolTypes;
    QLabel *label;
    QLineEdit *protocolURI;
    QGroupBox *fileGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *labelDirectoryType;
    QComboBox *cmbDirectoryTypes;
    QLabel *labelSrcDataset;
    QLineEdit *inputSrcDataset;
    QPushButton *buttonSelectSrc;
    QDialogButtonBox *buttonBox;
    QGroupBox *dbGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QComboBox *cmbDatabaseTypes;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *btnNew;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QComboBox *cmbConnections;

    void setupUi(QDialog *QgsOpenVectorLayerDialogBase)
    {
        if (QgsOpenVectorLayerDialogBase->objectName().isEmpty())
            QgsOpenVectorLayerDialogBase->setObjectName(QString::fromUtf8("QgsOpenVectorLayerDialogBase"));
        QgsOpenVectorLayerDialogBase->setWindowModality(Qt::WindowModal);
        QgsOpenVectorLayerDialogBase->resize(500, 709);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOpenVectorLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsOpenVectorLayerDialogBase->setSizePolicy(sizePolicy);
        QgsOpenVectorLayerDialogBase->setMinimumSize(QSize(500, 150));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsOpenVectorLayerDialogBase->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(QgsOpenVectorLayerDialogBase);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        srcGroupBox_2 = new QGroupBox(QgsOpenVectorLayerDialogBase);
        srcGroupBox_2->setObjectName(QString::fromUtf8("srcGroupBox_2"));
        sizePolicy.setHeightForWidth(srcGroupBox_2->sizePolicy().hasHeightForWidth());
        srcGroupBox_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(srcGroupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioSrcFile = new QRadioButton(srcGroupBox_2);
        radioSrcFile->setObjectName(QString::fromUtf8("radioSrcFile"));

        gridLayout->addWidget(radioSrcFile, 0, 0, 1, 1);

        radioSrcDirectory = new QRadioButton(srcGroupBox_2);
        radioSrcDirectory->setObjectName(QString::fromUtf8("radioSrcDirectory"));

        gridLayout->addWidget(radioSrcDirectory, 0, 1, 1, 1);

        radioSrcDatabase = new QRadioButton(srcGroupBox_2);
        radioSrcDatabase->setObjectName(QString::fromUtf8("radioSrcDatabase"));

        gridLayout->addWidget(radioSrcDatabase, 0, 2, 1, 1);

        radioSrcProtocol = new QRadioButton(srcGroupBox_2);
        radioSrcProtocol->setObjectName(QString::fromUtf8("radioSrcProtocol"));

        gridLayout->addWidget(radioSrcProtocol, 0, 3, 1, 1);

        label_3 = new QLabel(srcGroupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        cmbEncodings = new QComboBox(srcGroupBox_2);
        cmbEncodings->setObjectName(QString::fromUtf8("cmbEncodings"));
        cmbEncodings->setMinimumSize(QSize(380, 0));

        gridLayout->addWidget(cmbEncodings, 1, 1, 1, 3);


        gridLayout_5->addWidget(srcGroupBox_2, 0, 0, 1, 1);

        protocolGroupBox = new QGroupBox(QgsOpenVectorLayerDialogBase);
        protocolGroupBox->setObjectName(QString::fromUtf8("protocolGroupBox"));
        protocolGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(protocolGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(protocolGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cmbProtocolTypes = new QComboBox(protocolGroupBox);
        cmbProtocolTypes->setObjectName(QString::fromUtf8("cmbProtocolTypes"));

        gridLayout_2->addWidget(cmbProtocolTypes, 0, 1, 2, 1);

        label = new QLabel(protocolGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 2, 1);

        protocolURI = new QLineEdit(protocolGroupBox);
        protocolURI->setObjectName(QString::fromUtf8("protocolURI"));

        gridLayout_2->addWidget(protocolURI, 2, 1, 1, 1);


        gridLayout_5->addWidget(protocolGroupBox, 1, 0, 1, 1);

        fileGroupBox = new QGroupBox(QgsOpenVectorLayerDialogBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        fileGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(fileGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelDirectoryType = new QLabel(fileGroupBox);
        labelDirectoryType->setObjectName(QString::fromUtf8("labelDirectoryType"));

        gridLayout_3->addWidget(labelDirectoryType, 0, 0, 1, 1);

        cmbDirectoryTypes = new QComboBox(fileGroupBox);
        cmbDirectoryTypes->setObjectName(QString::fromUtf8("cmbDirectoryTypes"));

        gridLayout_3->addWidget(cmbDirectoryTypes, 0, 2, 1, 2);

        labelSrcDataset = new QLabel(fileGroupBox);
        labelSrcDataset->setObjectName(QString::fromUtf8("labelSrcDataset"));

        gridLayout_3->addWidget(labelSrcDataset, 1, 0, 1, 2);

        inputSrcDataset = new QLineEdit(fileGroupBox);
        inputSrcDataset->setObjectName(QString::fromUtf8("inputSrcDataset"));
        inputSrcDataset->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(inputSrcDataset, 1, 2, 1, 1);

        buttonSelectSrc = new QPushButton(fileGroupBox);
        buttonSelectSrc->setObjectName(QString::fromUtf8("buttonSelectSrc"));

        gridLayout_3->addWidget(buttonSelectSrc, 1, 3, 1, 1);


        gridLayout_5->addWidget(fileGroupBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsOpenVectorLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Open);

        gridLayout_5->addWidget(buttonBox, 4, 0, 1, 1);

        dbGroupBox = new QGroupBox(QgsOpenVectorLayerDialogBase);
        dbGroupBox->setObjectName(QString::fromUtf8("dbGroupBox"));
        sizePolicy.setHeightForWidth(dbGroupBox->sizePolicy().hasHeightForWidth());
        dbGroupBox->setSizePolicy(sizePolicy);
        dbGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_6 = new QGridLayout(dbGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_4 = new QLabel(dbGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        cmbDatabaseTypes = new QComboBox(dbGroupBox);
        cmbDatabaseTypes->setObjectName(QString::fromUtf8("cmbDatabaseTypes"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbDatabaseTypes->sizePolicy().hasHeightForWidth());
        cmbDatabaseTypes->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(cmbDatabaseTypes, 0, 1, 1, 1);

        groupBox = new QGroupBox(dbGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btnNew = new QPushButton(groupBox);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        gridLayout_4->addWidget(btnNew, 1, 0, 1, 1);

        btnEdit = new QPushButton(groupBox);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        gridLayout_4->addWidget(btnEdit, 1, 1, 1, 1);

        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        gridLayout_4->addWidget(btnDelete, 1, 2, 1, 1);

        cmbConnections = new QComboBox(groupBox);
        cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

        gridLayout_4->addWidget(cmbConnections, 0, 0, 1, 3);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 2);


        gridLayout_5->addWidget(dbGroupBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(protocolURI);
        labelSrcDataset->setBuddy(inputSrcDataset);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(radioSrcFile, radioSrcDirectory);
        QWidget::setTabOrder(radioSrcDirectory, radioSrcDatabase);
        QWidget::setTabOrder(radioSrcDatabase, radioSrcProtocol);
        QWidget::setTabOrder(radioSrcProtocol, cmbEncodings);
        QWidget::setTabOrder(cmbEncodings, cmbProtocolTypes);
        QWidget::setTabOrder(cmbProtocolTypes, protocolURI);
        QWidget::setTabOrder(protocolURI, cmbDirectoryTypes);
        QWidget::setTabOrder(cmbDirectoryTypes, inputSrcDataset);
        QWidget::setTabOrder(inputSrcDataset, buttonSelectSrc);
        QWidget::setTabOrder(buttonSelectSrc, cmbDatabaseTypes);
        QWidget::setTabOrder(cmbDatabaseTypes, cmbConnections);
        QWidget::setTabOrder(cmbConnections, btnNew);
        QWidget::setTabOrder(btnNew, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);
        QWidget::setTabOrder(btnDelete, buttonBox);

        retranslateUi(QgsOpenVectorLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOpenVectorLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOpenVectorLayerDialogBase, SLOT(reject()));
        QObject::connect(radioSrcDatabase, SIGNAL(toggled(bool)), dbGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(QgsOpenVectorLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOpenVectorLayerDialogBase)
    {
        QgsOpenVectorLayerDialogBase->setWindowTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Add vector layer", 0, QApplication::UnicodeUTF8));
        srcGroupBox_2->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Source type", 0, QApplication::UnicodeUTF8));
        radioSrcFile->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "File", 0, QApplication::UnicodeUTF8));
        radioSrcDirectory->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Directory", 0, QApplication::UnicodeUTF8));
        radioSrcDatabase->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Database", 0, QApplication::UnicodeUTF8));
        radioSrcProtocol->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Protocol", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Encoding", 0, QApplication::UnicodeUTF8));
        protocolGroupBox->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Protocol", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "URI", 0, QApplication::UnicodeUTF8));
        fileGroupBox->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Source", 0, QApplication::UnicodeUTF8));
        labelDirectoryType->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        labelSrcDataset->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Dataset", 0, QApplication::UnicodeUTF8));
        buttonSelectSrc->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Browse", 0, QApplication::UnicodeUTF8));
        dbGroupBox->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Database", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Connections", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "New", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Edit", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOpenVectorLayerDialogBase: public Ui_QgsOpenVectorLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOPENVECTORLAYERDIALOGBASE_H
