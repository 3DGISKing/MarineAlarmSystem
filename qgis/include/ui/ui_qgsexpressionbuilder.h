/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilder.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDER_H
#define UI_QGSEXPRESSIONBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscodeeditorsql.h"
#include "qgscollapsiblegroupbox.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *moperationListGroup;
    QGridLayout *gridLayout_6;
    QTreeView *expressionTree;
    QgsFilterLineEdit *txtSearchEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mFunctionHelGroup;
    QGridLayout *gridLayout_4;
    QTextEdit *txtHelpText;
    QGroupBox *mValueGroupBox;
    QGridLayout *gridLayout_7;
    QListWidget *mValueListWidget;
    QWidget *mLoadGroupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblLoad;
    QPushButton *btnLoadAll;
    QPushButton *btnLoadSample;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEqualPushButton;
    QPushButton *btnPlusPushButton;
    QPushButton *btnMinusPushButton;
    QPushButton *btnDividePushButton;
    QPushButton *btnMultiplyPushButton;
    QPushButton *btnExpButton;
    QPushButton *btnConcatButton;
    QPushButton *btnOpenBracketPushButton;
    QPushButton *btnCloseBracketPushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *lblPreview;
    QgsCodeEditorSQL *txtExpressionString;

    void setupUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        if (QgsExpressionBuilderWidgetBase->objectName().isEmpty())
            QgsExpressionBuilderWidgetBase->setObjectName(QString::fromUtf8("QgsExpressionBuilderWidgetBase"));
        QgsExpressionBuilderWidgetBase->resize(418, 447);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExpressionBuilderWidgetBase->sizePolicy().hasHeightForWidth());
        QgsExpressionBuilderWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsExpressionBuilderWidgetBase);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_2 = new QSplitter(QgsExpressionBuilderWidgetBase);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        moperationListGroup = new QGroupBox(splitter);
        moperationListGroup->setObjectName(QString::fromUtf8("moperationListGroup"));
        moperationListGroup->setFlat(true);
        gridLayout_6 = new QGridLayout(moperationListGroup);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, -1, 0, 0);
        expressionTree = new QTreeView(moperationListGroup);
        expressionTree->setObjectName(QString::fromUtf8("expressionTree"));
        expressionTree->setFrameShape(QFrame::StyledPanel);
        expressionTree->setFrameShadow(QFrame::Sunken);
        expressionTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        expressionTree->setUniformRowHeights(false);
        expressionTree->setSortingEnabled(false);
        expressionTree->setAnimated(true);
        expressionTree->header()->setVisible(false);

        gridLayout_6->addWidget(expressionTree, 4, 0, 1, 1);

        txtSearchEdit = new QgsFilterLineEdit(moperationListGroup);
        txtSearchEdit->setObjectName(QString::fromUtf8("txtSearchEdit"));
        txtSearchEdit->setEnabled(true);

        gridLayout_6->addWidget(txtSearchEdit, 2, 0, 1, 1);

        splitter->addWidget(moperationListGroup);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mFunctionHelGroup = new QGroupBox(layoutWidget);
        mFunctionHelGroup->setObjectName(QString::fromUtf8("mFunctionHelGroup"));
        mFunctionHelGroup->setFlat(true);
        gridLayout_4 = new QGridLayout(mFunctionHelGroup);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, -1, 0, 0);
        txtHelpText = new QTextEdit(mFunctionHelGroup);
        txtHelpText->setObjectName(QString::fromUtf8("txtHelpText"));
        txtHelpText->setReadOnly(true);

        gridLayout_4->addWidget(txtHelpText, 0, 0, 1, 1);


        verticalLayout_2->addWidget(mFunctionHelGroup);

        mValueGroupBox = new QGroupBox(layoutWidget);
        mValueGroupBox->setObjectName(QString::fromUtf8("mValueGroupBox"));
        mValueGroupBox->setFlat(true);
        gridLayout_7 = new QGridLayout(mValueGroupBox);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, -1, 0, 0);
        mValueListWidget = new QListWidget(mValueGroupBox);
        mValueListWidget->setObjectName(QString::fromUtf8("mValueListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mValueListWidget->sizePolicy().hasHeightForWidth());
        mValueListWidget->setSizePolicy(sizePolicy1);
        mValueListWidget->setMaximumSize(QSize(16777215, 16777215));
        mValueListWidget->setAutoFillBackground(false);
        mValueListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mValueListWidget->setProperty("showDropIndicator", QVariant(false));
        mValueListWidget->setAlternatingRowColors(true);
        mValueListWidget->setViewMode(QListView::ListMode);

        gridLayout_7->addWidget(mValueListWidget, 0, 0, 1, 2);


        verticalLayout_2->addWidget(mValueGroupBox);

        mLoadGroupBox = new QWidget(layoutWidget);
        mLoadGroupBox->setObjectName(QString::fromUtf8("mLoadGroupBox"));
        horizontalLayout = new QHBoxLayout(mLoadGroupBox);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblLoad = new QLabel(mLoadGroupBox);
        lblLoad->setObjectName(QString::fromUtf8("lblLoad"));

        horizontalLayout->addWidget(lblLoad);

        btnLoadAll = new QPushButton(mLoadGroupBox);
        btnLoadAll->setObjectName(QString::fromUtf8("btnLoadAll"));

        horizontalLayout->addWidget(btnLoadAll);

        btnLoadSample = new QPushButton(mLoadGroupBox);
        btnLoadSample->setObjectName(QString::fromUtf8("btnLoadSample"));

        horizontalLayout->addWidget(btnLoadSample);


        verticalLayout_2->addWidget(mLoadGroupBox);

        splitter->addWidget(layoutWidget);
        splitter_2->addWidget(splitter);
        layoutWidget_1 = new QWidget(splitter_2);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        verticalLayout = new QVBoxLayout(layoutWidget_1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(layoutWidget_1);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOperatorsGroupBox->sizePolicy().hasHeightForWidth());
        mOperatorsGroupBox->setSizePolicy(sizePolicy2);
        mOperatorsGroupBox->setMinimumSize(QSize(27, 0));
        mOperatorsGroupBox->setMaximumSize(QSize(300, 16777215));
        mOperatorsGroupBox->setSizeIncrement(QSize(20, 0));
        mOperatorsGroupBox->setBaseSize(QSize(7, 0));
        mOperatorsGroupBox->setLayoutDirection(Qt::LeftToRight);
        mOperatorsGroupBox->setAutoFillBackground(false);
        mOperatorsGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mOperatorsGroupBox->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(mOperatorsGroupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        btnEqualPushButton = new QPushButton(mOperatorsGroupBox);
        btnEqualPushButton->setObjectName(QString::fromUtf8("btnEqualPushButton"));

        horizontalLayout_2->addWidget(btnEqualPushButton);

        btnPlusPushButton = new QPushButton(mOperatorsGroupBox);
        btnPlusPushButton->setObjectName(QString::fromUtf8("btnPlusPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnPlusPushButton->sizePolicy().hasHeightForWidth());
        btnPlusPushButton->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(btnPlusPushButton);

        btnMinusPushButton = new QPushButton(mOperatorsGroupBox);
        btnMinusPushButton->setObjectName(QString::fromUtf8("btnMinusPushButton"));

        horizontalLayout_2->addWidget(btnMinusPushButton);

        btnDividePushButton = new QPushButton(mOperatorsGroupBox);
        btnDividePushButton->setObjectName(QString::fromUtf8("btnDividePushButton"));

        horizontalLayout_2->addWidget(btnDividePushButton);

        btnMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        btnMultiplyPushButton->setObjectName(QString::fromUtf8("btnMultiplyPushButton"));

        horizontalLayout_2->addWidget(btnMultiplyPushButton);

        btnExpButton = new QPushButton(mOperatorsGroupBox);
        btnExpButton->setObjectName(QString::fromUtf8("btnExpButton"));

        horizontalLayout_2->addWidget(btnExpButton);

        btnConcatButton = new QPushButton(mOperatorsGroupBox);
        btnConcatButton->setObjectName(QString::fromUtf8("btnConcatButton"));

        horizontalLayout_2->addWidget(btnConcatButton);

        btnOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnOpenBracketPushButton->setObjectName(QString::fromUtf8("btnOpenBracketPushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnOpenBracketPushButton->sizePolicy().hasHeightForWidth());
        btnOpenBracketPushButton->setSizePolicy(sizePolicy4);
        btnOpenBracketPushButton->setMinimumSize(QSize(0, 10));

        horizontalLayout_2->addWidget(btnOpenBracketPushButton);

        btnCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnCloseBracketPushButton->setObjectName(QString::fromUtf8("btnCloseBracketPushButton"));

        horizontalLayout_2->addWidget(btnCloseBracketPushButton);


        verticalLayout->addWidget(mOperatorsGroupBox);

        groupBox = new QGroupBox(layoutWidget_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setBaseSize(QSize(0, 0));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 9, 0, 0);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(50);
        lblPreview->setFont(font);
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(0);
        lblPreview->setMidLineWidth(0);
        lblPreview->setScaledContents(false);
        lblPreview->setWordWrap(false);
        lblPreview->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lblPreview, 1, 1, 1, 1);

        txtExpressionString = new QgsCodeEditorSQL(groupBox);
        txtExpressionString->setObjectName(QString::fromUtf8("txtExpressionString"));

        gridLayout->addWidget(txtExpressionString, 0, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        splitter_2->addWidget(layoutWidget_1);

        gridLayout_2->addWidget(splitter_2, 0, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderWidgetBase);

        QMetaObject::connectSlotsByName(QgsExpressionBuilderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        QgsExpressionBuilderWidgetBase->setWindowTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        moperationListGroup->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Function list", 0, QApplication::UnicodeUTF8));
        mFunctionHelGroup->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Selected function help", 0, QApplication::UnicodeUTF8));
        mValueGroupBox->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Field values", 0, QApplication::UnicodeUTF8));
        lblLoad->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Load values", 0, QApplication::UnicodeUTF8));
        btnLoadAll->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "all unique", 0, QApplication::UnicodeUTF8));
        btnLoadSample->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "10 samples", 0, QApplication::UnicodeUTF8));
        mOperatorsGroupBox->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Operators", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnEqualPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Equal operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEqualPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "=", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnPlusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Addition operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnPlusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnMinusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Subtraction operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMinusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnDividePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Division operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnDividePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "/", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnMultiplyPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Multiplication operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMultiplyPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnExpButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Power operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnExpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "^", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnConcatButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "String Concatenation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnConcatButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "||", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnOpenBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Open Bracket ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnOpenBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "(", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnCloseBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Close Bracket ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnCloseBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", ")", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Expression", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblPreview->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderWidgetBase: public Ui_QgsExpressionBuilderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDER_H
