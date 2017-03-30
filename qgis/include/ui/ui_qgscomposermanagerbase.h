/********************************************************************************
** Form generated from reading UI file 'qgscomposermanagerbase.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERMANAGERBASE_H
#define UI_QGSCOMPOSERMANAGERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerManagerBase
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *mComposerListWidget;
    QgsCollapsibleGroupBox *mTemplateGrpBox;
    QGridLayout *gridLayout;
    QPushButton *mAddButton;
    QComboBox *mTemplate;
    QLineEdit *mTemplatePathLineEdit;
    QPushButton *mTemplatePathBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *mTemplatesUserDirBtn;
    QPushButton *mTemplatesDefaultDirBtn;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsComposerManagerBase)
    {
        if (QgsComposerManagerBase->objectName().isEmpty())
            QgsComposerManagerBase->setObjectName(QString::fromUtf8("QgsComposerManagerBase"));
        QgsComposerManagerBase->resize(425, 300);
        QgsComposerManagerBase->setMinimumSize(QSize(425, 300));
        verticalLayout = new QVBoxLayout(QgsComposerManagerBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mComposerListWidget = new QListWidget(QgsComposerManagerBase);
        mComposerListWidget->setObjectName(QString::fromUtf8("mComposerListWidget"));

        verticalLayout->addWidget(mComposerListWidget);

        mTemplateGrpBox = new QgsCollapsibleGroupBox(QgsComposerManagerBase);
        mTemplateGrpBox->setObjectName(QString::fromUtf8("mTemplateGrpBox"));
        mTemplateGrpBox->setMinimumSize(QSize(0, 0));
        mTemplateGrpBox->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(mTemplateGrpBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mAddButton = new QPushButton(mTemplateGrpBox);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddButton->sizePolicy().hasHeightForWidth());
        mAddButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mAddButton, 0, 2, 1, 1);

        mTemplate = new QComboBox(mTemplateGrpBox);
        mTemplate->setObjectName(QString::fromUtf8("mTemplate"));

        gridLayout->addWidget(mTemplate, 0, 0, 1, 2);

        mTemplatePathLineEdit = new QLineEdit(mTemplateGrpBox);
        mTemplatePathLineEdit->setObjectName(QString::fromUtf8("mTemplatePathLineEdit"));

        gridLayout->addWidget(mTemplatePathLineEdit, 1, 0, 1, 1);

        mTemplatePathBtn = new QPushButton(mTemplateGrpBox);
        mTemplatePathBtn->setObjectName(QString::fromUtf8("mTemplatePathBtn"));

        gridLayout->addWidget(mTemplatePathBtn, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(mTemplateGrpBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        mTemplatesUserDirBtn = new QPushButton(mTemplateGrpBox);
        mTemplatesUserDirBtn->setObjectName(QString::fromUtf8("mTemplatesUserDirBtn"));
        sizePolicy.setHeightForWidth(mTemplatesUserDirBtn->sizePolicy().hasHeightForWidth());
        mTemplatesUserDirBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mTemplatesUserDirBtn);

        mTemplatesDefaultDirBtn = new QPushButton(mTemplateGrpBox);
        mTemplatesDefaultDirBtn->setObjectName(QString::fromUtf8("mTemplatesDefaultDirBtn"));
        sizePolicy.setHeightForWidth(mTemplatesDefaultDirBtn->sizePolicy().hasHeightForWidth());
        mTemplatesDefaultDirBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mTemplatesDefaultDirBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);


        verticalLayout->addWidget(mTemplateGrpBox);

        mButtonBox = new QDialogButtonBox(QgsComposerManagerBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(mButtonBox);

        QWidget::setTabOrder(mComposerListWidget, mTemplateGrpBox);
        QWidget::setTabOrder(mTemplateGrpBox, mTemplate);
        QWidget::setTabOrder(mTemplate, mAddButton);
        QWidget::setTabOrder(mAddButton, mTemplatePathLineEdit);
        QWidget::setTabOrder(mTemplatePathLineEdit, mTemplatePathBtn);
        QWidget::setTabOrder(mTemplatePathBtn, mTemplatesUserDirBtn);
        QWidget::setTabOrder(mTemplatesUserDirBtn, mTemplatesDefaultDirBtn);
        QWidget::setTabOrder(mTemplatesDefaultDirBtn, mButtonBox);

        retranslateUi(QgsComposerManagerBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsComposerManagerBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsComposerManagerBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsComposerManagerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsComposerManagerBase)
    {
        QgsComposerManagerBase->setWindowTitle(QApplication::translate("QgsComposerManagerBase", "Composer manager", 0, QApplication::UnicodeUTF8));
        mTemplateGrpBox->setTitle(QApplication::translate("QgsComposerManagerBase", "New from template", 0, QApplication::UnicodeUTF8));
        mAddButton->setText(QApplication::translate("QgsComposerManagerBase", "Add", 0, QApplication::UnicodeUTF8));
        mTemplatePathBtn->setText(QApplication::translate("QgsComposerManagerBase", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerManagerBase", "Open template directory", 0, QApplication::UnicodeUTF8));
        mTemplatesUserDirBtn->setText(QApplication::translate("QgsComposerManagerBase", "user", 0, QApplication::UnicodeUTF8));
        mTemplatesDefaultDirBtn->setText(QApplication::translate("QgsComposerManagerBase", "default", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerManagerBase: public Ui_QgsComposerManagerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERMANAGERBASE_H
