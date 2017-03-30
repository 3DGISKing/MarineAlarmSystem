/********************************************************************************
** Form generated from reading UI file 'qgsnewspatialitelayerdialogbase.ui'
**
** Created: Sat Jan 17 20:06:25 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWSPATIALITELAYERDIALOGBASE_H
#define UI_QGSNEWSPATIALITELAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsNewSpatialiteLayerDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mFileFormatLabel;
    QComboBox *mDatabaseComboBox;
    QToolButton *toolButtonNewDatabase;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leLayerName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *leGeometryColumn;
    QGroupBox *buttonGroup1;
    QGridLayout *gridLayout_2;
    QRadioButton *mPointRadioButton;
    QRadioButton *mLineRadioButton;
    QRadioButton *mPolygonRadioButton;
    QRadioButton *mMultipointRadioButton;
    QRadioButton *mMultilineRadioButton;
    QRadioButton *mMultipolygonRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *leSRID;
    QPushButton *pbnFindSRID;
    QCheckBox *checkBoxPrimaryKey;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QToolButton *mAddAttributeButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTreeWidget *mAttributeView;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mRemoveAttributeButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewSpatialiteLayerDialogBase)
    {
        if (QgsNewSpatialiteLayerDialogBase->objectName().isEmpty())
            QgsNewSpatialiteLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewSpatialiteLayerDialogBase"));
        QgsNewSpatialiteLayerDialogBase->resize(450, 627);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewSpatialiteLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewSpatialiteLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewSpatialiteLayerDialogBase->setMinimumSize(QSize(351, 0));
        QgsNewSpatialiteLayerDialogBase->setMaximumSize(QSize(16777215, 16777215));
        QgsNewSpatialiteLayerDialogBase->setModal(true);
        gridLayout_4 = new QGridLayout(QgsNewSpatialiteLayerDialogBase);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scrollArea = new QScrollArea(QgsNewSpatialiteLayerDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 432, 581));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFileFormatLabel = new QLabel(scrollAreaWidgetContents);
        mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));
        mFileFormatLabel->setEnabled(true);

        horizontalLayout->addWidget(mFileFormatLabel);

        mDatabaseComboBox = new QComboBox(scrollAreaWidgetContents);
        mDatabaseComboBox->setObjectName(QString::fromUtf8("mDatabaseComboBox"));
        mDatabaseComboBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDatabaseComboBox->sizePolicy().hasHeightForWidth());
        mDatabaseComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mDatabaseComboBox);

        toolButtonNewDatabase = new QToolButton(scrollAreaWidgetContents);
        toolButtonNewDatabase->setObjectName(QString::fromUtf8("toolButtonNewDatabase"));

        horizontalLayout->addWidget(toolButtonNewDatabase);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        leLayerName = new QLineEdit(scrollAreaWidgetContents);
        leLayerName->setObjectName(QString::fromUtf8("leLayerName"));
        sizePolicy1.setHeightForWidth(leLayerName->sizePolicy().hasHeightForWidth());
        leLayerName->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(leLayerName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        leGeometryColumn = new QLineEdit(scrollAreaWidgetContents);
        leGeometryColumn->setObjectName(QString::fromUtf8("leGeometryColumn"));
        sizePolicy1.setHeightForWidth(leGeometryColumn->sizePolicy().hasHeightForWidth());
        leGeometryColumn->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(leGeometryColumn);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonGroup1 = new QGroupBox(scrollAreaWidgetContents);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        sizePolicy.setHeightForWidth(buttonGroup1->sizePolicy().hasHeightForWidth());
        buttonGroup1->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(buttonGroup1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mPointRadioButton = new QRadioButton(buttonGroup1);
        mPointRadioButton->setObjectName(QString::fromUtf8("mPointRadioButton"));

        gridLayout_2->addWidget(mPointRadioButton, 0, 0, 1, 1);

        mLineRadioButton = new QRadioButton(buttonGroup1);
        mLineRadioButton->setObjectName(QString::fromUtf8("mLineRadioButton"));

        gridLayout_2->addWidget(mLineRadioButton, 0, 1, 1, 1);

        mPolygonRadioButton = new QRadioButton(buttonGroup1);
        mPolygonRadioButton->setObjectName(QString::fromUtf8("mPolygonRadioButton"));

        gridLayout_2->addWidget(mPolygonRadioButton, 0, 2, 1, 1);

        mMultipointRadioButton = new QRadioButton(buttonGroup1);
        mMultipointRadioButton->setObjectName(QString::fromUtf8("mMultipointRadioButton"));

        gridLayout_2->addWidget(mMultipointRadioButton, 1, 0, 1, 1);

        mMultilineRadioButton = new QRadioButton(buttonGroup1);
        mMultilineRadioButton->setObjectName(QString::fromUtf8("mMultilineRadioButton"));

        gridLayout_2->addWidget(mMultilineRadioButton, 1, 1, 1, 1);

        mMultipolygonRadioButton = new QRadioButton(buttonGroup1);
        mMultipolygonRadioButton->setObjectName(QString::fromUtf8("mMultipolygonRadioButton"));

        gridLayout_2->addWidget(mMultipolygonRadioButton, 1, 2, 1, 1);


        verticalLayout->addWidget(buttonGroup1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leSRID = new QLineEdit(scrollAreaWidgetContents);
        leSRID->setObjectName(QString::fromUtf8("leSRID"));
        leSRID->setReadOnly(true);

        horizontalLayout_3->addWidget(leSRID);

        pbnFindSRID = new QPushButton(scrollAreaWidgetContents);
        pbnFindSRID->setObjectName(QString::fromUtf8("pbnFindSRID"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbnFindSRID->sizePolicy().hasHeightForWidth());
        pbnFindSRID->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(pbnFindSRID);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxPrimaryKey = new QCheckBox(scrollAreaWidgetContents);
        checkBoxPrimaryKey->setObjectName(QString::fromUtf8("checkBoxPrimaryKey"));

        verticalLayout->addWidget(checkBoxPrimaryKey);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(groupBox);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));
        sizePolicy1.setHeightForWidth(mNameEdit->sizePolicy().hasHeightForWidth());
        mNameEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mNameEdit, 0, 1, 1, 2);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        sizePolicy3.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

        mTypeBox = new QComboBox(groupBox);
        mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));
        sizePolicy1.setHeightForWidth(mTypeBox->sizePolicy().hasHeightForWidth());
        mTypeBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mTypeBox, 1, 1, 1, 2);

        mAddAttributeButton = new QToolButton(groupBox);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy4);
        mAddAttributeButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/themes/default/mActionNewAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon);
        mAddAttributeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(mAddAttributeButton, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mAttributeView = new QTreeWidget(groupBox_2);
        mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mAttributeView->sizePolicy().hasHeightForWidth());
        mAttributeView->setSizePolicy(sizePolicy5);
        mAttributeView->setAlternatingRowColors(true);
        mAttributeView->setRootIsDecorated(false);
        mAttributeView->setColumnCount(2);

        gridLayout_3->addWidget(mAttributeView, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        mRemoveAttributeButton = new QToolButton(groupBox_2);
        mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));
        sizePolicy4.setHeightForWidth(mRemoveAttributeButton->sizePolicy().hasHeightForWidth());
        mRemoveAttributeButton->setSizePolicy(sizePolicy4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/themes/default/mActionDeleteAttribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveAttributeButton->setIcon(icon1);
        mRemoveAttributeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(mRemoveAttributeButton, 2, 1, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewSpatialiteLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 9, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        mFileFormatLabel->setBuddy(mDatabaseComboBox);
        label->setBuddy(leLayerName);
        label_2->setBuddy(leGeometryColumn);
        textLabel1->setBuddy(mNameEdit);
        textLabel2->setBuddy(mTypeBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mDatabaseComboBox, toolButtonNewDatabase);
        QWidget::setTabOrder(toolButtonNewDatabase, leLayerName);
        QWidget::setTabOrder(leLayerName, leGeometryColumn);
        QWidget::setTabOrder(leGeometryColumn, mPointRadioButton);
        QWidget::setTabOrder(mPointRadioButton, mLineRadioButton);
        QWidget::setTabOrder(mLineRadioButton, mPolygonRadioButton);
        QWidget::setTabOrder(mPolygonRadioButton, mMultipointRadioButton);
        QWidget::setTabOrder(mMultipointRadioButton, mMultilineRadioButton);
        QWidget::setTabOrder(mMultilineRadioButton, mMultipolygonRadioButton);
        QWidget::setTabOrder(mMultipolygonRadioButton, leSRID);
        QWidget::setTabOrder(leSRID, pbnFindSRID);
        QWidget::setTabOrder(pbnFindSRID, checkBoxPrimaryKey);
        QWidget::setTabOrder(checkBoxPrimaryKey, mNameEdit);
        QWidget::setTabOrder(mNameEdit, mTypeBox);
        QWidget::setTabOrder(mTypeBox, mAddAttributeButton);
        QWidget::setTabOrder(mAddAttributeButton, mAttributeView);
        QWidget::setTabOrder(mAttributeView, mRemoveAttributeButton);
        QWidget::setTabOrder(mRemoveAttributeButton, scrollArea);

        retranslateUi(QgsNewSpatialiteLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewSpatialiteLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewSpatialiteLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewSpatialiteLayerDialogBase)
    {
        QgsNewSpatialiteLayerDialogBase->setWindowTitle(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "New Spatialite Layer", 0, QApplication::UnicodeUTF8));
        mFileFormatLabel->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Database", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButtonNewDatabase->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Create a new Spatialite database", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButtonNewDatabase->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Layer name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leLayerName->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name for the new layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Geometry column", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leGeometryColumn->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name for the new layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        leGeometryColumn->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "geometry", 0, QApplication::UnicodeUTF8));
        buttonGroup1->setTitle(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        mPointRadioButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Point", 0, QApplication::UnicodeUTF8));
        mLineRadioButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Line", 0, QApplication::UnicodeUTF8));
        mPolygonRadioButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Polygon", 0, QApplication::UnicodeUTF8));
        mMultipointRadioButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "MultiPoint", 0, QApplication::UnicodeUTF8));
        mMultilineRadioButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Multiline", 0, QApplication::UnicodeUTF8));
        mMultipolygonRadioButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Multipolygon", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leSRID->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Spatial Reference Id", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pbnFindSRID->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pbnFindSRID->setWhatsThis(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Specify the coordinate reference system of the layer's geometry.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pbnFindSRID->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Specify CRS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxPrimaryKey->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Add an integer id field as the primary key for the new layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxPrimaryKey->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Create an autoincrementing primary key", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "New attribute", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mNameEdit->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "An attribute name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel2->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttributeButton->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Add attribute to list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddAttributeButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Add to attributes list", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Attributes list", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mAttributeView->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRemoveAttributeButton->setToolTip(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Delete selected attribute", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveAttributeButton->setText(QApplication::translate("QgsNewSpatialiteLayerDialogBase", "Remove attribute", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsNewSpatialiteLayerDialogBase: public Ui_QgsNewSpatialiteLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWSPATIALITELAYERDIALOGBASE_H
