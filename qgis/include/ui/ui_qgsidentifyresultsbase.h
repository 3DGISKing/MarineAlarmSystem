/********************************************************************************
** Form generated from reading UI file 'qgsidentifyresultsbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSIDENTIFYRESULTSBASE_H
#define UI_QGSIDENTIFYRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsIdentifyResultsBase
{
public:
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *mExpandToolButton;
    QToolButton *mCollapseToolButton;
    QToolButton *mExpandNewToolButton;
    QToolButton *mOpenFormButton;
    QToolButton *mClearToolButton;
    QToolButton *mCopyToolButton;
    QToolButton *mPrintToolButton;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *lstResults;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblIdentifyMode;
    QComboBox *cmbIdentifyMode;
    QSpacerItem *horizontalSpacer_43;
    QCheckBox *cbxAutoFeatureForm;
    QWidget *stackedWidgetPage2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tblResults;
    QWidget *stackedWidgetPage3;
    QVBoxLayout *verticalLayout_3;
    QwtPlot *mPlot;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblViewMode;
    QComboBox *cmbViewMode;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mHelpToolButton;

    void setupUi(QDialog *QgsIdentifyResultsBase)
    {
        if (QgsIdentifyResultsBase->objectName().isEmpty())
            QgsIdentifyResultsBase->setObjectName(QString::fromUtf8("QgsIdentifyResultsBase"));
        QgsIdentifyResultsBase->resize(355, 390);
        verticalLayout_4 = new QVBoxLayout(QgsIdentifyResultsBase);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stackedWidget = new QStackedWidget(QgsIdentifyResultsBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        verticalLayout = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, 6);
        mExpandToolButton = new QToolButton(stackedWidgetPage1);
        mExpandToolButton->setObjectName(QString::fromUtf8("mExpandToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/themes/default/mActionExpandTree.png"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandToolButton->setIcon(icon);
        mExpandToolButton->setAutoRaise(true);

        horizontalLayout->addWidget(mExpandToolButton);

        mCollapseToolButton = new QToolButton(stackedWidgetPage1);
        mCollapseToolButton->setObjectName(QString::fromUtf8("mCollapseToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/themes/default/mActionCollapseTree.png"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseToolButton->setIcon(icon1);
        mCollapseToolButton->setAutoRaise(true);

        horizontalLayout->addWidget(mCollapseToolButton);

        mExpandNewToolButton = new QToolButton(stackedWidgetPage1);
        mExpandNewToolButton->setObjectName(QString::fromUtf8("mExpandNewToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../images/themes/default/mActionExpandNewTree.png"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandNewToolButton->setIcon(icon2);
        mExpandNewToolButton->setCheckable(true);
        mExpandNewToolButton->setAutoRaise(true);

        horizontalLayout->addWidget(mExpandNewToolButton);

        mOpenFormButton = new QToolButton(stackedWidgetPage1);
        mOpenFormButton->setObjectName(QString::fromUtf8("mOpenFormButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionPropertyItem.png"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenFormButton->setIcon(icon3);
        mOpenFormButton->setAutoRaise(true);

        horizontalLayout->addWidget(mOpenFormButton);

        mClearToolButton = new QToolButton(stackedWidgetPage1);
        mClearToolButton->setObjectName(QString::fromUtf8("mClearToolButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mClearToolButton->setIcon(icon4);
        mClearToolButton->setCheckable(false);
        mClearToolButton->setAutoRaise(true);

        horizontalLayout->addWidget(mClearToolButton);

        mCopyToolButton = new QToolButton(stackedWidgetPage1);
        mCopyToolButton->setObjectName(QString::fromUtf8("mCopyToolButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        mCopyToolButton->setIcon(icon5);
        mCopyToolButton->setCheckable(false);
        mCopyToolButton->setAutoRaise(true);

        horizontalLayout->addWidget(mCopyToolButton);

        mPrintToolButton = new QToolButton(stackedWidgetPage1);
        mPrintToolButton->setObjectName(QString::fromUtf8("mPrintToolButton"));
        mPrintToolButton->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../images/themes/default/mActionFilePrint.png"), QSize(), QIcon::Normal, QIcon::Off);
        mPrintToolButton->setIcon(icon6);
        mPrintToolButton->setCheckable(false);
        mPrintToolButton->setAutoRaise(true);

        horizontalLayout->addWidget(mPrintToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        lstResults = new QTreeWidget(stackedWidgetPage1);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        lstResults->setHeaderItem(__qtreewidgetitem);
        lstResults->setObjectName(QString::fromUtf8("lstResults"));
        lstResults->setLineWidth(2);
        lstResults->setAlternatingRowColors(true);
        lstResults->setSortingEnabled(true);

        verticalLayout->addWidget(lstResults);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, -1);
        lblIdentifyMode = new QLabel(stackedWidgetPage1);
        lblIdentifyMode->setObjectName(QString::fromUtf8("lblIdentifyMode"));

        horizontalLayout_2->addWidget(lblIdentifyMode);

        cmbIdentifyMode = new QComboBox(stackedWidgetPage1);
        cmbIdentifyMode->setObjectName(QString::fromUtf8("cmbIdentifyMode"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbIdentifyMode->sizePolicy().hasHeightForWidth());
        cmbIdentifyMode->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbIdentifyMode);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_43);

        cbxAutoFeatureForm = new QCheckBox(stackedWidgetPage1);
        cbxAutoFeatureForm->setObjectName(QString::fromUtf8("cbxAutoFeatureForm"));

        horizontalLayout_2->addWidget(cbxAutoFeatureForm);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        verticalLayout_2 = new QVBoxLayout(stackedWidgetPage2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tblResults = new QTableWidget(stackedWidgetPage2);
        if (tblResults->columnCount() < 4)
            tblResults->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblResults->setObjectName(QString::fromUtf8("tblResults"));
        tblResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblResults->setSortingEnabled(false);

        verticalLayout_2->addWidget(tblResults);

        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        verticalLayout_3 = new QVBoxLayout(stackedWidgetPage3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mPlot = new QwtPlot(stackedWidgetPage3);
        mPlot->setObjectName(QString::fromUtf8("mPlot"));

        verticalLayout_3->addWidget(mPlot);

        stackedWidget->addWidget(stackedWidgetPage3);

        verticalLayout_4->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, 5, -1);
        lblViewMode = new QLabel(QgsIdentifyResultsBase);
        lblViewMode->setObjectName(QString::fromUtf8("lblViewMode"));

        horizontalLayout_3->addWidget(lblViewMode);

        cmbViewMode = new QComboBox(QgsIdentifyResultsBase);
        cmbViewMode->setObjectName(QString::fromUtf8("cmbViewMode"));

        horizontalLayout_3->addWidget(cmbViewMode);

        horizontalSpacer_2 = new QSpacerItem(58, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        mHelpToolButton = new QToolButton(QgsIdentifyResultsBase);
        mHelpToolButton->setObjectName(QString::fromUtf8("mHelpToolButton"));
        mHelpToolButton->setEnabled(true);
        mHelpToolButton->setCheckable(false);

        horizontalLayout_3->addWidget(mHelpToolButton);


        verticalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(QgsIdentifyResultsBase);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsIdentifyResultsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIdentifyResultsBase)
    {
        QgsIdentifyResultsBase->setWindowTitle(QApplication::translate("QgsIdentifyResultsBase", "Identify Results", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mExpandToolButton->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Expand tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mExpandToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCollapseToolButton->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Collapse tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCollapseToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mExpandNewToolButton->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "New results will be expanded by default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mExpandNewToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
        mOpenFormButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mClearToolButton->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Clear Results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mClearToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCopyToolButton->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Copy selected feature to clipboard.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCopyToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPrintToolButton->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Print selected HTML response.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mPrintToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblIdentifyMode->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Select identify mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblIdentifyMode->setText(QApplication::translate("QgsIdentifyResultsBase", "Mode", 0, QApplication::UnicodeUTF8));
        cbxAutoFeatureForm->setText(QApplication::translate("QgsIdentifyResultsBase", "Auto open form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tblResults->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsIdentifyResultsBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tblResults->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsIdentifyResultsBase", "FID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tblResults->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsIdentifyResultsBase", "Attribute", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tblResults->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsIdentifyResultsBase", "Value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblViewMode->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Select view mode for raster layers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblViewMode->setText(QApplication::translate("QgsIdentifyResultsBase", "View", 0, QApplication::UnicodeUTF8));
        mHelpToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsIdentifyResultsBase: public Ui_QgsIdentifyResultsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSIDENTIFYRESULTSBASE_H
