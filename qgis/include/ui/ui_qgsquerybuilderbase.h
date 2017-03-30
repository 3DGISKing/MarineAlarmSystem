/*
Query builder for vector layers
*/

/********************************************************************************
** Form generated from reading UI file 'qgsquerybuilderbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSQUERYBUILDERBASE_H
#define UI_QGSQUERYBUILDERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsQueryBuilderBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lblDataUri;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QListView *lstFields;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QListView *lstValues;
    QPushButton *btnSampleValues;
    QPushButton *btnGetAllValues;
    QCheckBox *mUseUnfilteredLayer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *groupBox4;
    QGridLayout *gridLayout3;
    QPushButton *btnLike;
    QPushButton *btnIn;
    QPushButton *btnLessEqual;
    QPushButton *btnLessThan;
    QPushButton *btnNotIn;
    QPushButton *btnGreaterThan;
    QPushButton *btnEqual;
    QPushButton *btnILike;
    QPushButton *btnOr;
    QPushButton *btnPct;
    QPushButton *btnNotEqual;
    QPushButton *btnGreaterEqual;
    QPushButton *btnAnd;
    QPushButton *btnNot;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout4;
    QgsCodeEditorSQL *txtSQL;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsQueryBuilderBase)
    {
        if (QgsQueryBuilderBase->objectName().isEmpty())
            QgsQueryBuilderBase->setObjectName(QString::fromUtf8("QgsQueryBuilderBase"));
        QgsQueryBuilderBase->resize(727, 707);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsQueryBuilderBase->sizePolicy().hasHeightForWidth());
        QgsQueryBuilderBase->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsQueryBuilderBase->setWindowIcon(icon);
        QgsQueryBuilderBase->setModal(true);
        gridLayout = new QGridLayout(QgsQueryBuilderBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblDataUri = new QLabel(QgsQueryBuilderBase);
        lblDataUri->setObjectName(QString::fromUtf8("lblDataUri"));

        gridLayout->addWidget(lblDataUri, 0, 0, 1, 1);

        splitter_2 = new QSplitter(QgsQueryBuilderBase);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox1 = new QGroupBox(splitter);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        lstFields = new QListView(groupBox1);
        lstFields->setObjectName(QString::fromUtf8("lstFields"));

        gridLayout1->addWidget(lstFields, 0, 0, 1, 1);

        splitter->addWidget(groupBox1);
        groupBox2 = new QGroupBox(splitter);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        sizePolicy1.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
        groupBox2->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        lstValues = new QListView(groupBox2);
        lstValues->setObjectName(QString::fromUtf8("lstValues"));
        lstValues->setAutoFillBackground(true);
        lstValues->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstValues->setUniformItemSizes(true);

        gridLayout2->addWidget(lstValues, 0, 0, 1, 2);

        btnSampleValues = new QPushButton(groupBox2);
        btnSampleValues->setObjectName(QString::fromUtf8("btnSampleValues"));

        gridLayout2->addWidget(btnSampleValues, 1, 0, 1, 1);

        btnGetAllValues = new QPushButton(groupBox2);
        btnGetAllValues->setObjectName(QString::fromUtf8("btnGetAllValues"));

        gridLayout2->addWidget(btnGetAllValues, 1, 1, 1, 1);

        mUseUnfilteredLayer = new QCheckBox(groupBox2);
        mUseUnfilteredLayer->setObjectName(QString::fromUtf8("mUseUnfilteredLayer"));
        mUseUnfilteredLayer->setEnabled(false);

        gridLayout2->addWidget(mUseUnfilteredLayer, 2, 0, 1, 2);

        splitter->addWidget(groupBox2);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox4 = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
        gridLayout3 = new QGridLayout(groupBox4);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        btnLike = new QPushButton(groupBox4);
        btnLike->setObjectName(QString::fromUtf8("btnLike"));

        gridLayout3->addWidget(btnLike, 0, 3, 1, 1);

        btnIn = new QPushButton(groupBox4);
        btnIn->setObjectName(QString::fromUtf8("btnIn"));

        gridLayout3->addWidget(btnIn, 0, 5, 1, 1);

        btnLessEqual = new QPushButton(groupBox4);
        btnLessEqual->setObjectName(QString::fromUtf8("btnLessEqual"));

        gridLayout3->addWidget(btnLessEqual, 1, 0, 1, 1);

        btnLessThan = new QPushButton(groupBox4);
        btnLessThan->setObjectName(QString::fromUtf8("btnLessThan"));

        gridLayout3->addWidget(btnLessThan, 0, 1, 1, 1);

        btnNotIn = new QPushButton(groupBox4);
        btnNotIn->setObjectName(QString::fromUtf8("btnNotIn"));

        gridLayout3->addWidget(btnNotIn, 0, 6, 1, 1);

        btnGreaterThan = new QPushButton(groupBox4);
        btnGreaterThan->setObjectName(QString::fromUtf8("btnGreaterThan"));

        gridLayout3->addWidget(btnGreaterThan, 0, 2, 1, 1);

        btnEqual = new QPushButton(groupBox4);
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));

        gridLayout3->addWidget(btnEqual, 0, 0, 1, 1);

        btnILike = new QPushButton(groupBox4);
        btnILike->setObjectName(QString::fromUtf8("btnILike"));

        gridLayout3->addWidget(btnILike, 1, 3, 1, 1);

        btnOr = new QPushButton(groupBox4);
        btnOr->setObjectName(QString::fromUtf8("btnOr"));

        gridLayout3->addWidget(btnOr, 1, 5, 1, 1);

        btnPct = new QPushButton(groupBox4);
        btnPct->setObjectName(QString::fromUtf8("btnPct"));

        gridLayout3->addWidget(btnPct, 0, 4, 1, 1);

        btnNotEqual = new QPushButton(groupBox4);
        btnNotEqual->setObjectName(QString::fromUtf8("btnNotEqual"));

        gridLayout3->addWidget(btnNotEqual, 1, 2, 1, 1);

        btnGreaterEqual = new QPushButton(groupBox4);
        btnGreaterEqual->setObjectName(QString::fromUtf8("btnGreaterEqual"));

        gridLayout3->addWidget(btnGreaterEqual, 1, 1, 1, 1);

        btnAnd = new QPushButton(groupBox4);
        btnAnd->setObjectName(QString::fromUtf8("btnAnd"));

        gridLayout3->addWidget(btnAnd, 1, 4, 1, 1);

        btnNot = new QPushButton(groupBox4);
        btnNot->setObjectName(QString::fromUtf8("btnNot"));

        gridLayout3->addWidget(btnNot, 1, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(horizontalSpacer, 0, 7, 1, 1);


        verticalLayout->addWidget(groupBox4);

        groupBox3 = new QGroupBox(verticalLayoutWidget);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox3->sizePolicy().hasHeightForWidth());
        groupBox3->setSizePolicy(sizePolicy2);
        gridLayout4 = new QGridLayout(groupBox3);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        txtSQL = new QgsCodeEditorSQL(groupBox3);
        txtSQL->setObjectName(QString::fromUtf8("txtSQL"));

        gridLayout4->addWidget(txtSQL, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox3);

        splitter_2->addWidget(verticalLayoutWidget);

        gridLayout->addWidget(splitter_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsQueryBuilderBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        splitter_2->raise();
        lblDataUri->raise();
        buttonBox->raise();
        QWidget::setTabOrder(lstFields, lstValues);
        QWidget::setTabOrder(lstValues, btnSampleValues);
        QWidget::setTabOrder(btnSampleValues, btnGetAllValues);
        QWidget::setTabOrder(btnGetAllValues, btnEqual);
        QWidget::setTabOrder(btnEqual, btnLessThan);
        QWidget::setTabOrder(btnLessThan, btnGreaterThan);
        QWidget::setTabOrder(btnGreaterThan, btnLike);
        QWidget::setTabOrder(btnLike, btnPct);
        QWidget::setTabOrder(btnPct, btnIn);
        QWidget::setTabOrder(btnIn, btnNotIn);
        QWidget::setTabOrder(btnNotIn, btnLessEqual);
        QWidget::setTabOrder(btnLessEqual, btnGreaterEqual);
        QWidget::setTabOrder(btnGreaterEqual, btnNotEqual);
        QWidget::setTabOrder(btnNotEqual, btnILike);
        QWidget::setTabOrder(btnILike, btnAnd);
        QWidget::setTabOrder(btnAnd, btnOr);
        QWidget::setTabOrder(btnOr, btnNot);
        QWidget::setTabOrder(btnNot, buttonBox);

        retranslateUi(QgsQueryBuilderBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsQueryBuilderBase, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsQueryBuilderBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(QgsQueryBuilderBase);
    } // setupUi

    void retranslateUi(QDialog *QgsQueryBuilderBase)
    {
        QgsQueryBuilderBase->setWindowTitle(QApplication::translate("QgsQueryBuilderBase", "Query Builder", 0, QApplication::UnicodeUTF8));
        lblDataUri->setText(QApplication::translate("QgsQueryBuilderBase", "Datasource", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("QgsQueryBuilderBase", "Fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        lstFields->setWhatsThis(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of fields in this vector file</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        groupBox2->setTitle(QApplication::translate("QgsQueryBuilderBase", "Values", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        lstValues->setWhatsThis(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of values for the current field.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        btnSampleValues->setToolTip(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Take a <span style=\" font-weight:600;\">sample</span> of records in the vector file</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSampleValues->setText(QApplication::translate("QgsQueryBuilderBase", "Sample", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnGetAllValues->setToolTip(QApplication::translate("QgsQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Retrieve <span style=\" font-weight:600;\">all</span> the record in the vector file (<span style=\" font-style:italic;\">if the table is big, the operation can consume some time</span>)</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnGetAllValues->setText(QApplication::translate("QgsQueryBuilderBase", "All", 0, QApplication::UnicodeUTF8));
        mUseUnfilteredLayer->setText(QApplication::translate("QgsQueryBuilderBase", "Use unfiltered layer", 0, QApplication::UnicodeUTF8));
        groupBox4->setTitle(QApplication::translate("QgsQueryBuilderBase", "Operators", 0, QApplication::UnicodeUTF8));
        btnLike->setText(QApplication::translate("QgsQueryBuilderBase", "LIKE", 0, QApplication::UnicodeUTF8));
        btnIn->setText(QApplication::translate("QgsQueryBuilderBase", "IN", 0, QApplication::UnicodeUTF8));
        btnLessEqual->setText(QApplication::translate("QgsQueryBuilderBase", "<=", 0, QApplication::UnicodeUTF8));
        btnLessThan->setText(QApplication::translate("QgsQueryBuilderBase", "<", 0, QApplication::UnicodeUTF8));
        btnNotIn->setText(QApplication::translate("QgsQueryBuilderBase", "NOT IN", 0, QApplication::UnicodeUTF8));
        btnGreaterThan->setText(QApplication::translate("QgsQueryBuilderBase", ">", 0, QApplication::UnicodeUTF8));
        btnEqual->setText(QApplication::translate("QgsQueryBuilderBase", "=", 0, QApplication::UnicodeUTF8));
        btnILike->setText(QApplication::translate("QgsQueryBuilderBase", "ILIKE", 0, QApplication::UnicodeUTF8));
        btnOr->setText(QApplication::translate("QgsQueryBuilderBase", "OR", 0, QApplication::UnicodeUTF8));
        btnPct->setText(QApplication::translate("QgsQueryBuilderBase", "%", 0, QApplication::UnicodeUTF8));
        btnNotEqual->setText(QApplication::translate("QgsQueryBuilderBase", "!=", 0, QApplication::UnicodeUTF8));
        btnGreaterEqual->setText(QApplication::translate("QgsQueryBuilderBase", ">=", 0, QApplication::UnicodeUTF8));
        btnAnd->setText(QApplication::translate("QgsQueryBuilderBase", "AND", 0, QApplication::UnicodeUTF8));
        btnNot->setText(QApplication::translate("QgsQueryBuilderBase", "NOT", 0, QApplication::UnicodeUTF8));
        groupBox3->setTitle(QApplication::translate("QgsQueryBuilderBase", "Provider specific filter expression", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsQueryBuilderBase: public Ui_QgsQueryBuilderBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSQUERYBUILDERBASE_H
