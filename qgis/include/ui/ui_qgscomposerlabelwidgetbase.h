/********************************************************************************
** Form generated from reading UI file 'qgscomposerlabelwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:29 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLABELWIDGETBASE_H
#define UI_QGSCOMPOSERLABELWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerLabelWidgetBase
{
public:
    QVBoxLayout *_2;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mTextGroupBox;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *mTextEdit;
    QCheckBox *mHtmlCheckBox;
    QPushButton *mInsertExpressionButton;
    QgsCollapsibleGroupBoxBasic *mAppearanceGroup;
    QGridLayout *gridLayout;
    QPushButton *mFontButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QgsColorButtonV2 *mFontColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mMarginLabel;
    QDoubleSpinBox *mMarginDoubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mLeftRadioButton;
    QRadioButton *mCenterRadioButton;
    QRadioButton *mRightRadioButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mTopRadioButton;
    QRadioButton *mMiddleRadioButton;
    QRadioButton *mBottomRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mHorizontalAlignementLabel;
    QLabel *mVerticalAlignementLabel;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *QgsComposerLabelWidgetBase)
    {
        if (QgsComposerLabelWidgetBase->objectName().isEmpty())
            QgsComposerLabelWidgetBase->setObjectName(QString::fromUtf8("QgsComposerLabelWidgetBase"));
        QgsComposerLabelWidgetBase->resize(304, 705);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerLabelWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerLabelWidgetBase->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(QgsComposerLabelWidgetBase);
        _2->setSpacing(0);
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QString::fromUtf8("_2"));
        label = new QLabel(QgsComposerLabelWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        _2->addWidget(label);

        scrollArea = new QScrollArea(QgsComposerLabelWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 302, 682));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mTextGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mTextGroupBox->setObjectName(QString::fromUtf8("mTextGroupBox"));
        mTextGroupBox->setFocusPolicy(Qt::StrongFocus);
        mTextGroupBox->setCheckable(false);
        mTextGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mTextGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mTextGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mTextEdit = new QPlainTextEdit(mTextGroupBox);
        mTextEdit->setObjectName(QString::fromUtf8("mTextEdit"));
        mTextEdit->setTabStopWidth(10);

        gridLayout_2->addWidget(mTextEdit, 0, 0, 1, 1);

        mHtmlCheckBox = new QCheckBox(mTextGroupBox);
        mHtmlCheckBox->setObjectName(QString::fromUtf8("mHtmlCheckBox"));

        gridLayout_2->addWidget(mHtmlCheckBox, 1, 0, 1, 1);

        mInsertExpressionButton = new QPushButton(mTextGroupBox);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));

        gridLayout_2->addWidget(mInsertExpressionButton, 2, 0, 1, 1);


        mainLayout->addWidget(mTextGroupBox);

        mAppearanceGroup = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mAppearanceGroup->setObjectName(QString::fromUtf8("mAppearanceGroup"));
        mAppearanceGroup->setFocusPolicy(Qt::StrongFocus);
        mAppearanceGroup->setCheckable(false);
        mAppearanceGroup->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mAppearanceGroup->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mAppearanceGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFontButton = new QPushButton(mAppearanceGroup);
        mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
        mFontButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mFontButton, 0, 0, 1, 2);

        label_2 = new QLabel(mAppearanceGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFontColorButton = new QgsColorButtonV2(mAppearanceGroup);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        mFontColorButton->setMinimumSize(QSize(120, 0));
        mFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(mFontColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        mMarginLabel = new QLabel(mAppearanceGroup);
        mMarginLabel->setObjectName(QString::fromUtf8("mMarginLabel"));

        gridLayout->addWidget(mMarginLabel, 2, 0, 1, 1);

        mMarginDoubleSpinBox = new QDoubleSpinBox(mAppearanceGroup);
        mMarginDoubleSpinBox->setObjectName(QString::fromUtf8("mMarginDoubleSpinBox"));

        gridLayout->addWidget(mMarginDoubleSpinBox, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mLeftRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2 = new QButtonGroup(QgsComposerLabelWidgetBase);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(mLeftRadioButton);
        mLeftRadioButton->setObjectName(QString::fromUtf8("mLeftRadioButton"));

        horizontalLayout_5->addWidget(mLeftRadioButton);

        mCenterRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2->addButton(mCenterRadioButton);
        mCenterRadioButton->setObjectName(QString::fromUtf8("mCenterRadioButton"));

        horizontalLayout_5->addWidget(mCenterRadioButton);

        mRightRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup_2->addButton(mRightRadioButton);
        mRightRadioButton->setObjectName(QString::fromUtf8("mRightRadioButton"));

        horizontalLayout_5->addWidget(mRightRadioButton);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mTopRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup = new QButtonGroup(QgsComposerLabelWidgetBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(mTopRadioButton);
        mTopRadioButton->setObjectName(QString::fromUtf8("mTopRadioButton"));

        horizontalLayout_6->addWidget(mTopRadioButton);

        mMiddleRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup->addButton(mMiddleRadioButton);
        mMiddleRadioButton->setObjectName(QString::fromUtf8("mMiddleRadioButton"));

        horizontalLayout_6->addWidget(mMiddleRadioButton);

        mBottomRadioButton = new QRadioButton(mAppearanceGroup);
        buttonGroup->addButton(mBottomRadioButton);
        mBottomRadioButton->setObjectName(QString::fromUtf8("mBottomRadioButton"));

        horizontalLayout_6->addWidget(mBottomRadioButton);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 2);

        mHorizontalAlignementLabel = new QLabel(mAppearanceGroup);
        mHorizontalAlignementLabel->setObjectName(QString::fromUtf8("mHorizontalAlignementLabel"));

        gridLayout->addWidget(mHorizontalAlignementLabel, 3, 0, 1, 2);

        mVerticalAlignementLabel = new QLabel(mAppearanceGroup);
        mVerticalAlignementLabel->setObjectName(QString::fromUtf8("mVerticalAlignementLabel"));

        gridLayout->addWidget(mVerticalAlignementLabel, 5, 0, 1, 2);


        mainLayout->addWidget(mAppearanceGroup);

        scrollArea->setWidget(scrollAreaWidgetContents);

        _2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mTextGroupBox);
        QWidget::setTabOrder(mTextGroupBox, mTextEdit);
        QWidget::setTabOrder(mTextEdit, mHtmlCheckBox);
        QWidget::setTabOrder(mHtmlCheckBox, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mAppearanceGroup);
        QWidget::setTabOrder(mAppearanceGroup, mFontButton);
        QWidget::setTabOrder(mFontButton, mFontColorButton);
        QWidget::setTabOrder(mFontColorButton, mMarginDoubleSpinBox);
        QWidget::setTabOrder(mMarginDoubleSpinBox, mLeftRadioButton);
        QWidget::setTabOrder(mLeftRadioButton, mCenterRadioButton);
        QWidget::setTabOrder(mCenterRadioButton, mRightRadioButton);
        QWidget::setTabOrder(mRightRadioButton, mTopRadioButton);
        QWidget::setTabOrder(mTopRadioButton, mMiddleRadioButton);
        QWidget::setTabOrder(mMiddleRadioButton, mBottomRadioButton);

        retranslateUi(QgsComposerLabelWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerLabelWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLabelWidgetBase)
    {
        QgsComposerLabelWidgetBase->setWindowTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Label Options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
        mTextGroupBox->setTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        mHtmlCheckBox->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Render as HTML", 0, QApplication::UnicodeUTF8));
        mInsertExpressionButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Insert an expression...", 0, QApplication::UnicodeUTF8));
        mAppearanceGroup->setTitle(QApplication::translate("QgsComposerLabelWidgetBase", "Appearance", 0, QApplication::UnicodeUTF8));
        mFontButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Font color", 0, QApplication::UnicodeUTF8));
        mFontColorButton->setText(QString());
        mMarginLabel->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Margin", 0, QApplication::UnicodeUTF8));
        mMarginDoubleSpinBox->setPrefix(QString());
        mMarginDoubleSpinBox->setSuffix(QApplication::translate("QgsComposerLabelWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mLeftRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Left", 0, QApplication::UnicodeUTF8));
        mCenterRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Center", 0, QApplication::UnicodeUTF8));
        mRightRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Right", 0, QApplication::UnicodeUTF8));
        mTopRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Top", 0, QApplication::UnicodeUTF8));
        mMiddleRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Middle", 0, QApplication::UnicodeUTF8));
        mBottomRadioButton->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Bottom", 0, QApplication::UnicodeUTF8));
        mHorizontalAlignementLabel->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Horizontal alignment", 0, QApplication::UnicodeUTF8));
        mVerticalAlignementLabel->setText(QApplication::translate("QgsComposerLabelWidgetBase", "Vertical alignment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLabelWidgetBase: public Ui_QgsComposerLabelWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERLABELWIDGETBASE_H
