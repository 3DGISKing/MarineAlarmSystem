/********************************************************************************
** Form generated from reading UI file 'qgsfieldspropertiesbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFIELDSPROPERTIESBASE_H
#define UI_QGSFIELDSPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsFieldsPropertiesBase
{
public:
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *mEditorLayoutComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *leEditFormInit;
    QSpacerItem *horizontalSpacer_3;
    QSplitter *mSplitter;
    QWidget *mRelationsAndFieldsFrame;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QgsCollapsibleGroupBox *mFieldsGroupBox;
    QGridLayout *mAttributesListLayout;
    QGridLayout *gridLayout_3;
    QToolButton *mDeleteAttributeButton;
    QToolButton *mCalculateFieldButton;
    QToolButton *mToggleEditingButton;
    QToolButton *mAddAttributeButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *mAttributesListFrame;
    QgsCollapsibleGroupBox *mRelationsFrame;
    QGridLayout *mRelationsFrameLayout;
    QStackedWidget *mAttributeEditorOptionsWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *leEditForm;
    QToolButton *pbnSelectEditForm;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_5;
    QWidget *mAttributesTreeButtonFrame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QToolButton *mAddTabOrGroupButton;
    QToolButton *mRemoveTabGroupItemButton;
    QToolButton *mAddItemButton;
    QToolButton *mMoveUpItem;
    QToolButton *mMoveDownItem;
    QSpacerItem *verticalSpacer_3;
    QWidget *mAttributesTreeFrame;
    QGridLayout *mDesignerListLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mFormSuppressLabel;
    QComboBox *mFormSuppressCmbBx;

    void setupUi(QWidget *QgsFieldsPropertiesBase)
    {
        if (QgsFieldsPropertiesBase->objectName().isEmpty())
            QgsFieldsPropertiesBase->setObjectName(QString::fromUtf8("QgsFieldsPropertiesBase"));
        QgsFieldsPropertiesBase->resize(613, 634);
        gridLayout_6 = new QGridLayout(QgsFieldsPropertiesBase);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(QgsFieldsPropertiesBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        mEditorLayoutComboBox = new QComboBox(QgsFieldsPropertiesBase);
        mEditorLayoutComboBox->setObjectName(QString::fromUtf8("mEditorLayoutComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEditorLayoutComboBox->sizePolicy().hasHeightForWidth());
        mEditorLayoutComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(mEditorLayoutComboBox);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_3 = new QLabel(QgsFieldsPropertiesBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        leEditFormInit = new QLineEdit(QgsFieldsPropertiesBase);
        leEditFormInit->setObjectName(QString::fromUtf8("leEditFormInit"));

        horizontalLayout_3->addWidget(leEditFormInit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 0, 1, 7);

        mSplitter = new QSplitter(QgsFieldsPropertiesBase);
        mSplitter->setObjectName(QString::fromUtf8("mSplitter"));
        mSplitter->setOrientation(Qt::Horizontal);
        mRelationsAndFieldsFrame = new QWidget(mSplitter);
        mRelationsAndFieldsFrame->setObjectName(QString::fromUtf8("mRelationsAndFieldsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mRelationsAndFieldsFrame->sizePolicy().hasHeightForWidth());
        mRelationsAndFieldsFrame->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(mRelationsAndFieldsFrame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(mRelationsAndFieldsFrame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        mFieldsGroupBox = new QgsCollapsibleGroupBox(splitter);
        mFieldsGroupBox->setObjectName(QString::fromUtf8("mFieldsGroupBox"));
        mAttributesListLayout = new QGridLayout(mFieldsGroupBox);
        mAttributesListLayout->setObjectName(QString::fromUtf8("mAttributesListLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mDeleteAttributeButton = new QToolButton(mFieldsGroupBox);
        mDeleteAttributeButton->setObjectName(QString::fromUtf8("mDeleteAttributeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(".designer/xpm/delete_attribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteAttributeButton->setIcon(icon);

        gridLayout_3->addWidget(mDeleteAttributeButton, 0, 1, 1, 1);

        mCalculateFieldButton = new QToolButton(mFieldsGroupBox);
        mCalculateFieldButton->setObjectName(QString::fromUtf8("mCalculateFieldButton"));
        mCalculateFieldButton->setCheckable(false);

        gridLayout_3->addWidget(mCalculateFieldButton, 0, 3, 1, 1);

        mToggleEditingButton = new QToolButton(mFieldsGroupBox);
        mToggleEditingButton->setObjectName(QString::fromUtf8("mToggleEditingButton"));
        mToggleEditingButton->setCheckable(true);

        gridLayout_3->addWidget(mToggleEditingButton, 0, 2, 1, 1);

        mAddAttributeButton = new QToolButton(mFieldsGroupBox);
        mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAddAttributeButton->sizePolicy().hasHeightForWidth());
        mAddAttributeButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(".designer/xpm/new_attribute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeButton->setIcon(icon1);

        gridLayout_3->addWidget(mAddAttributeButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        mAttributesListFrame = new QWidget(mFieldsGroupBox);
        mAttributesListFrame->setObjectName(QString::fromUtf8("mAttributesListFrame"));

        gridLayout_3->addWidget(mAttributesListFrame, 1, 0, 1, 5);


        mAttributesListLayout->addLayout(gridLayout_3, 0, 0, 1, 1);

        splitter->addWidget(mFieldsGroupBox);
        mRelationsFrame = new QgsCollapsibleGroupBox(splitter);
        mRelationsFrame->setObjectName(QString::fromUtf8("mRelationsFrame"));
        mRelationsFrame->setProperty("collapsed", QVariant(true));
        mRelationsFrameLayout = new QGridLayout(mRelationsFrame);
        mRelationsFrameLayout->setObjectName(QString::fromUtf8("mRelationsFrameLayout"));
        splitter->addWidget(mRelationsFrame);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        mSplitter->addWidget(mRelationsAndFieldsFrame);
        mAttributeEditorOptionsWidget = new QStackedWidget(mSplitter);
        mAttributeEditorOptionsWidget->setObjectName(QString::fromUtf8("mAttributeEditorOptionsWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leEditForm = new QLineEdit(page);
        leEditForm->setObjectName(QString::fromUtf8("leEditForm"));

        horizontalLayout_2->addWidget(leEditForm);

        pbnSelectEditForm = new QToolButton(page);
        pbnSelectEditForm->setObjectName(QString::fromUtf8("pbnSelectEditForm"));

        horizontalLayout_2->addWidget(pbnSelectEditForm);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 2);

        mAttributeEditorOptionsWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_5 = new QGridLayout(page_2);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        mAttributesTreeButtonFrame = new QWidget(page_2);
        mAttributesTreeButtonFrame->setObjectName(QString::fromUtf8("mAttributesTreeButtonFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mAttributesTreeButtonFrame->sizePolicy().hasHeightForWidth());
        mAttributesTreeButtonFrame->setSizePolicy(sizePolicy3);
        mAttributesTreeButtonFrame->setMaximumSize(QSize(30, 16777215));
        verticalLayout = new QVBoxLayout(mAttributesTreeButtonFrame);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        mAddTabOrGroupButton = new QToolButton(mAttributesTreeButtonFrame);
        mAddTabOrGroupButton->setObjectName(QString::fromUtf8("mAddTabOrGroupButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionSignPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddTabOrGroupButton->setIcon(icon2);

        verticalLayout->addWidget(mAddTabOrGroupButton);

        mRemoveTabGroupItemButton = new QToolButton(mAttributesTreeButtonFrame);
        mRemoveTabGroupItemButton->setObjectName(QString::fromUtf8("mRemoveTabGroupItemButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionSignMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveTabGroupItemButton->setIcon(icon3);

        verticalLayout->addWidget(mRemoveTabGroupItemButton);

        mAddItemButton = new QToolButton(mAttributesTreeButtonFrame);
        mAddItemButton->setObjectName(QString::fromUtf8("mAddItemButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddItemButton->setIcon(icon4);

        verticalLayout->addWidget(mAddItemButton);

        mMoveUpItem = new QToolButton(mAttributesTreeButtonFrame);
        mMoveUpItem->setObjectName(QString::fromUtf8("mMoveUpItem"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveUpItem->setIcon(icon5);

        verticalLayout->addWidget(mMoveUpItem);

        mMoveDownItem = new QToolButton(mAttributesTreeButtonFrame);
        mMoveDownItem->setObjectName(QString::fromUtf8("mMoveDownItem"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        mMoveDownItem->setIcon(icon6);

        verticalLayout->addWidget(mMoveDownItem);

        verticalSpacer_3 = new QSpacerItem(5, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_5->addWidget(mAttributesTreeButtonFrame, 0, 0, 1, 1);

        mAttributesTreeFrame = new QWidget(page_2);
        mAttributesTreeFrame->setObjectName(QString::fromUtf8("mAttributesTreeFrame"));
        mAttributesTreeFrame->setAutoFillBackground(true);
        mDesignerListLayout = new QGridLayout(mAttributesTreeFrame);
        mDesignerListLayout->setContentsMargins(0, 0, 0, 0);
        mDesignerListLayout->setObjectName(QString::fromUtf8("mDesignerListLayout"));

        gridLayout_5->addWidget(mAttributesTreeFrame, 0, 1, 1, 1);

        mAttributeEditorOptionsWidget->addWidget(page_2);
        mSplitter->addWidget(mAttributeEditorOptionsWidget);

        gridLayout_6->addWidget(mSplitter, 2, 0, 1, 7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFormSuppressLabel = new QLabel(QgsFieldsPropertiesBase);
        mFormSuppressLabel->setObjectName(QString::fromUtf8("mFormSuppressLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mFormSuppressLabel->sizePolicy().hasHeightForWidth());
        mFormSuppressLabel->setSizePolicy(sizePolicy4);
        mFormSuppressLabel->setMinimumSize(QSize(150, 0));
        mFormSuppressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mFormSuppressLabel->setWordWrap(true);

        horizontalLayout->addWidget(mFormSuppressLabel);

        mFormSuppressCmbBx = new QComboBox(QgsFieldsPropertiesBase);
        mFormSuppressCmbBx->setObjectName(QString::fromUtf8("mFormSuppressCmbBx"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mFormSuppressCmbBx->sizePolicy().hasHeightForWidth());
        mFormSuppressCmbBx->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(mFormSuppressCmbBx);


        gridLayout_6->addLayout(horizontalLayout, 3, 0, 1, 7);


        retranslateUi(QgsFieldsPropertiesBase);

        mAttributeEditorOptionsWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsFieldsPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsFieldsPropertiesBase)
    {
        label_2->setText(QApplication::translate("QgsFieldsPropertiesBase", "Attribute editor layout:", 0, QApplication::UnicodeUTF8));
        mEditorLayoutComboBox->clear();
        mEditorLayoutComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsFieldsPropertiesBase", "Autogenerate", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsFieldsPropertiesBase", "Drag and drop designer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsFieldsPropertiesBase", "Provide ui-file", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("QgsFieldsPropertiesBase", "QGIS forms can have a Python function that is called when the form is opened.\n"
"Use this function to add extra logic to your forms.\n"
"\n"
"An example is (in module MyForms.py):\n"
"\n"
"          def open(dialog, layer, feature):\n"
"	geom = feature.geometry()\n"
"	control = dialog.findChild(QWidget,\"MyLineEdit\")\n"
"\n"
"Reference in Python Init Function like so: MyForms.open\n"
"\n"
"MyForms.py must live on PYTHONPATH, .qgis/python, or inside the project folder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsFieldsPropertiesBase", "Python Init function", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leEditFormInit->setToolTip(QApplication::translate("QgsFieldsPropertiesBase", "QGIS forms can have a Python function that is called when the form is opened.\n"
"Use this function to add extra logic to your forms.\n"
"\n"
"An example is (in module MyForms.py):\n"
"\n"
"          def open(dialog, layer, feature):\n"
"	geom = feature.geometry()\n"
"	control = dialog.findChild(QWidget,\"MyLineEdit\")\n"
"\n"
"Reference in Python Init Function like so: MyForms.open\n"
"\n"
"MyForms.py must live on PYTHONPATH, .qgis/python, or inside the project folder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFieldsGroupBox->setTitle(QApplication::translate("QgsFieldsPropertiesBase", "Fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDeleteAttributeButton->setToolTip(QApplication::translate("QgsFieldsPropertiesBase", "Delete column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mDeleteAttributeButton->setText(QString());
        mDeleteAttributeButton->setShortcut(QApplication::translate("QgsFieldsPropertiesBase", "Ctrl+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCalculateFieldButton->setToolTip(QApplication::translate("QgsFieldsPropertiesBase", "Field calculator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mCalculateFieldButton->setWhatsThis(QApplication::translate("QgsFieldsPropertiesBase", "Click to toggle table editing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mCalculateFieldButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mToggleEditingButton->setToolTip(QApplication::translate("QgsFieldsPropertiesBase", "Toggle editing mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mToggleEditingButton->setWhatsThis(QApplication::translate("QgsFieldsPropertiesBase", "Click to toggle table editing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mToggleEditingButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddAttributeButton->setToolTip(QApplication::translate("QgsFieldsPropertiesBase", "New column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddAttributeButton->setText(QString());
        mAddAttributeButton->setShortcut(QApplication::translate("QgsFieldsPropertiesBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        mRelationsFrame->setTitle(QApplication::translate("QgsFieldsPropertiesBase", "Relations", 0, QApplication::UnicodeUTF8));
        pbnSelectEditForm->setText(QApplication::translate("QgsFieldsPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsFieldsPropertiesBase", "Edit UI", 0, QApplication::UnicodeUTF8));
        mAddTabOrGroupButton->setText(QApplication::translate("QgsFieldsPropertiesBase", "+", 0, QApplication::UnicodeUTF8));
        mRemoveTabGroupItemButton->setText(QApplication::translate("QgsFieldsPropertiesBase", "-", 0, QApplication::UnicodeUTF8));
        mAddItemButton->setText(QApplication::translate("QgsFieldsPropertiesBase", ">", 0, QApplication::UnicodeUTF8));
        mMoveUpItem->setText(QApplication::translate("QgsFieldsPropertiesBase", "^", 0, QApplication::UnicodeUTF8));
        mMoveDownItem->setText(QApplication::translate("QgsFieldsPropertiesBase", "v", 0, QApplication::UnicodeUTF8));
        mFormSuppressLabel->setText(QApplication::translate("QgsFieldsPropertiesBase", "Suppress attribute form pop-up after feature creation", 0, QApplication::UnicodeUTF8));
        mFormSuppressCmbBx->clear();
        mFormSuppressCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsFieldsPropertiesBase", "Default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsFieldsPropertiesBase", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsFieldsPropertiesBase", "Off", 0, QApplication::UnicodeUTF8)
        );
        Q_UNUSED(QgsFieldsPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsFieldsPropertiesBase: public Ui_QgsFieldsPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFIELDSPROPERTIESBASE_H
