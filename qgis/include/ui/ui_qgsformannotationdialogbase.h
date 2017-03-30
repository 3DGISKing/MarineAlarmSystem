/********************************************************************************
** Form generated from reading UI file 'qgsformannotationdialogbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSFORMANNOTATIONDIALOGBASE_H
#define UI_QGSFORMANNOTATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsFormAnnotationDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mFileLineEdit;
    QToolButton *mBrowseToolButton;
    QStackedWidget *mStackedWidget;
    QWidget *page;
    QWidget *page_2;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsFormAnnotationDialogBase)
    {
        if (QgsFormAnnotationDialogBase->objectName().isEmpty())
            QgsFormAnnotationDialogBase->setObjectName(QString::fromUtf8("QgsFormAnnotationDialogBase"));
        QgsFormAnnotationDialogBase->resize(298, 134);
        gridLayout = new QGridLayout(QgsFormAnnotationDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFileLineEdit = new QLineEdit(QgsFormAnnotationDialogBase);
        mFileLineEdit->setObjectName(QString::fromUtf8("mFileLineEdit"));

        horizontalLayout->addWidget(mFileLineEdit);

        mBrowseToolButton = new QToolButton(QgsFormAnnotationDialogBase);
        mBrowseToolButton->setObjectName(QString::fromUtf8("mBrowseToolButton"));

        horizontalLayout->addWidget(mBrowseToolButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsFormAnnotationDialogBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mStackedWidget, 1, 0, 1, 1);

        mButtonBox = new QDialogButtonBox(QgsFormAnnotationDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 2, 0, 1, 1);


        retranslateUi(QgsFormAnnotationDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsFormAnnotationDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsFormAnnotationDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsFormAnnotationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsFormAnnotationDialogBase)
    {
        QgsFormAnnotationDialogBase->setWindowTitle(QApplication::translate("QgsFormAnnotationDialogBase", "Form annotation", 0, QApplication::UnicodeUTF8));
        mBrowseToolButton->setText(QApplication::translate("QgsFormAnnotationDialogBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsFormAnnotationDialogBase: public Ui_QgsFormAnnotationDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSFORMANNOTATIONDIALOGBASE_H
