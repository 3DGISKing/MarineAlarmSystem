/********************************************************************************
** Form generated from reading UI file 'qgslabelpropertydialogbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELPROPERTYDIALOGBASE_H
#define UI_QGSLABELPROPERTYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include "qgscolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelPropertyDialogBase
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLabelTextLabel;
    QLineEdit *mLabelTextLineEdit;
    QGroupBox *mFontGroupBox;
    QGridLayout *gridLayout;
    QComboBox *mFontStyleCmbBx;
    QgsColorButton *mFontColorButton;
    QFontComboBox *mFontFamilyCmbBx;
    QHBoxLayout *horizontalLayout;
    QLabel *mFontSizeLabel;
    QDoubleSpinBox *mFontSizeSpinBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *mFontUnderlineBtn;
    QToolButton *mFontStrikethroughBtn;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFontBoldBtn;
    QToolButton *mFontItalicBtn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *mMinScaleSpinBox;
    QSpinBox *mMaxScaleSpinBox;
    QCheckBox *mShowLabelChkbx;
    QCheckBox *mAlwaysShowChkbx;
    QGroupBox *mBufferGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mBufferSizeLabel;
    QDoubleSpinBox *mBufferSizeSpinBox;
    QgsColorButton *mBufferColorButton;
    QGroupBox *mPositionGroupBlox;
    QGridLayout *gridLayout_3;
    QLabel *mLabelDistanceLabel;
    QDoubleSpinBox *mLabelDistanceSpinBox;
    QLabel *mXCoordLabel;
    QDoubleSpinBox *mXCoordSpinBox;
    QLabel *mYCoordLabel;
    QDoubleSpinBox *mYCoordSpinBox;
    QLabel *mHaliLabel;
    QComboBox *mHaliComboBox;
    QLabel *mValiLabel;
    QComboBox *mValiComboBox;
    QLabel *mRotationLabel;
    QDoubleSpinBox *mRotationSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelPropertyDialogBase)
    {
        if (QgsLabelPropertyDialogBase->objectName().isEmpty())
            QgsLabelPropertyDialogBase->setObjectName(QString::fromUtf8("QgsLabelPropertyDialogBase"));
        QgsLabelPropertyDialogBase->resize(415, 695);
        gridLayout_4 = new QGridLayout(QgsLabelPropertyDialogBase);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mLabelTextLabel = new QLabel(QgsLabelPropertyDialogBase);
        mLabelTextLabel->setObjectName(QString::fromUtf8("mLabelTextLabel"));

        horizontalLayout_3->addWidget(mLabelTextLabel);

        mLabelTextLineEdit = new QLineEdit(QgsLabelPropertyDialogBase);
        mLabelTextLineEdit->setObjectName(QString::fromUtf8("mLabelTextLineEdit"));

        horizontalLayout_3->addWidget(mLabelTextLineEdit);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        mFontGroupBox = new QGroupBox(QgsLabelPropertyDialogBase);
        mFontGroupBox->setObjectName(QString::fromUtf8("mFontGroupBox"));
        gridLayout = new QGridLayout(mFontGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mFontStyleCmbBx = new QComboBox(mFontGroupBox);
        mFontStyleCmbBx->setObjectName(QString::fromUtf8("mFontStyleCmbBx"));

        gridLayout->addWidget(mFontStyleCmbBx, 1, 1, 1, 2);

        mFontColorButton = new QgsColorButton(mFontGroupBox);
        mFontColorButton->setObjectName(QString::fromUtf8("mFontColorButton"));
        mFontColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(mFontColorButton, 3, 2, 1, 1);

        mFontFamilyCmbBx = new QFontComboBox(mFontGroupBox);
        mFontFamilyCmbBx->setObjectName(QString::fromUtf8("mFontFamilyCmbBx"));
        mFontFamilyCmbBx->setEditable(false);

        gridLayout->addWidget(mFontFamilyCmbBx, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFontSizeLabel = new QLabel(mFontGroupBox);
        mFontSizeLabel->setObjectName(QString::fromUtf8("mFontSizeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFontSizeLabel->sizePolicy().hasHeightForWidth());
        mFontSizeLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mFontSizeLabel);

        mFontSizeSpinBox = new QDoubleSpinBox(mFontGroupBox);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));
        mFontSizeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mFontSizeSpinBox->setMaximum(999999);

        horizontalLayout->addWidget(mFontSizeSpinBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        label_3 = new QLabel(mFontGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mFontUnderlineBtn = new QToolButton(mFontGroupBox);
        mFontUnderlineBtn->setObjectName(QString::fromUtf8("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        font.setUnderline(true);
        mFontUnderlineBtn->setFont(font);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontUnderlineBtn);

        mFontStrikethroughBtn = new QToolButton(mFontGroupBox);
        mFontStrikethroughBtn->setObjectName(QString::fromUtf8("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font1);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontStrikethroughBtn);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mFontBoldBtn = new QToolButton(mFontGroupBox);
        mFontBoldBtn->setObjectName(QString::fromUtf8("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(false);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        mFontBoldBtn->setFont(font2);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontBoldBtn);

        mFontItalicBtn = new QToolButton(mFontGroupBox);
        mFontItalicBtn->setObjectName(QString::fromUtf8("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(false);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setItalic(true);
        mFontItalicBtn->setFont(font3);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_4->addWidget(mFontItalicBtn);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 2);


        gridLayout_4->addWidget(mFontGroupBox, 2, 0, 1, 1);

        groupBox = new QGroupBox(QgsLabelPropertyDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label);

        mMinScaleSpinBox = new QSpinBox(groupBox);
        mMinScaleSpinBox->setObjectName(QString::fromUtf8("mMinScaleSpinBox"));
        mMinScaleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mMinScaleSpinBox->setMinimum(1);
        mMinScaleSpinBox->setMaximum(999999999);

        horizontalLayout_5->addWidget(mMinScaleSpinBox);

        mMaxScaleSpinBox = new QSpinBox(groupBox);
        mMaxScaleSpinBox->setObjectName(QString::fromUtf8("mMaxScaleSpinBox"));
        mMaxScaleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mMaxScaleSpinBox->setMinimum(1);
        mMaxScaleSpinBox->setMaximum(999999999);
        mMaxScaleSpinBox->setValue(10000000);

        horizontalLayout_5->addWidget(mMaxScaleSpinBox);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        mShowLabelChkbx = new QCheckBox(groupBox);
        mShowLabelChkbx->setObjectName(QString::fromUtf8("mShowLabelChkbx"));

        gridLayout_5->addWidget(mShowLabelChkbx, 0, 0, 1, 1);

        mAlwaysShowChkbx = new QCheckBox(groupBox);
        mAlwaysShowChkbx->setObjectName(QString::fromUtf8("mAlwaysShowChkbx"));

        gridLayout_5->addWidget(mAlwaysShowChkbx, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        mBufferGroupBox = new QGroupBox(QgsLabelPropertyDialogBase);
        mBufferGroupBox->setObjectName(QString::fromUtf8("mBufferGroupBox"));
        gridLayout_2 = new QGridLayout(mBufferGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBufferSizeLabel = new QLabel(mBufferGroupBox);
        mBufferSizeLabel->setObjectName(QString::fromUtf8("mBufferSizeLabel"));
        sizePolicy.setHeightForWidth(mBufferSizeLabel->sizePolicy().hasHeightForWidth());
        mBufferSizeLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mBufferSizeLabel);

        mBufferSizeSpinBox = new QDoubleSpinBox(mBufferGroupBox);
        mBufferSizeSpinBox->setObjectName(QString::fromUtf8("mBufferSizeSpinBox"));
        mBufferSizeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mBufferSizeSpinBox->setMaximum(999999);

        horizontalLayout_2->addWidget(mBufferSizeSpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        mBufferColorButton = new QgsColorButton(mBufferGroupBox);
        mBufferColorButton->setObjectName(QString::fromUtf8("mBufferColorButton"));
        mBufferColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(mBufferColorButton, 0, 1, 1, 1);


        gridLayout_4->addWidget(mBufferGroupBox, 3, 0, 1, 1);

        mPositionGroupBlox = new QGroupBox(QgsLabelPropertyDialogBase);
        mPositionGroupBlox->setObjectName(QString::fromUtf8("mPositionGroupBlox"));
        gridLayout_3 = new QGridLayout(mPositionGroupBlox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelDistanceLabel = new QLabel(mPositionGroupBlox);
        mLabelDistanceLabel->setObjectName(QString::fromUtf8("mLabelDistanceLabel"));
        sizePolicy.setHeightForWidth(mLabelDistanceLabel->sizePolicy().hasHeightForWidth());
        mLabelDistanceLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mLabelDistanceLabel, 0, 0, 1, 1);

        mLabelDistanceSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mLabelDistanceSpinBox->setObjectName(QString::fromUtf8("mLabelDistanceSpinBox"));
        mLabelDistanceSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(mLabelDistanceSpinBox, 0, 1, 1, 1);

        mXCoordLabel = new QLabel(mPositionGroupBlox);
        mXCoordLabel->setObjectName(QString::fromUtf8("mXCoordLabel"));
        sizePolicy.setHeightForWidth(mXCoordLabel->sizePolicy().hasHeightForWidth());
        mXCoordLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mXCoordLabel, 1, 0, 1, 1);

        mXCoordSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mXCoordSpinBox->setObjectName(QString::fromUtf8("mXCoordSpinBox"));
        mXCoordSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mXCoordSpinBox->setMinimum(-1e+09);
        mXCoordSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mXCoordSpinBox, 1, 1, 1, 1);

        mYCoordLabel = new QLabel(mPositionGroupBlox);
        mYCoordLabel->setObjectName(QString::fromUtf8("mYCoordLabel"));
        sizePolicy.setHeightForWidth(mYCoordLabel->sizePolicy().hasHeightForWidth());
        mYCoordLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mYCoordLabel, 2, 0, 1, 1);

        mYCoordSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mYCoordSpinBox->setObjectName(QString::fromUtf8("mYCoordSpinBox"));
        mYCoordSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mYCoordSpinBox->setMinimum(-1e+09);
        mYCoordSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mYCoordSpinBox, 2, 1, 1, 1);

        mHaliLabel = new QLabel(mPositionGroupBlox);
        mHaliLabel->setObjectName(QString::fromUtf8("mHaliLabel"));
        sizePolicy.setHeightForWidth(mHaliLabel->sizePolicy().hasHeightForWidth());
        mHaliLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mHaliLabel, 3, 0, 1, 1);

        mHaliComboBox = new QComboBox(mPositionGroupBlox);
        mHaliComboBox->setObjectName(QString::fromUtf8("mHaliComboBox"));
        mHaliComboBox->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(mHaliComboBox, 3, 1, 1, 1);

        mValiLabel = new QLabel(mPositionGroupBlox);
        mValiLabel->setObjectName(QString::fromUtf8("mValiLabel"));
        sizePolicy.setHeightForWidth(mValiLabel->sizePolicy().hasHeightForWidth());
        mValiLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mValiLabel, 4, 0, 1, 1);

        mValiComboBox = new QComboBox(mPositionGroupBlox);
        mValiComboBox->setObjectName(QString::fromUtf8("mValiComboBox"));
        mValiComboBox->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(mValiComboBox, 4, 1, 1, 1);

        mRotationLabel = new QLabel(mPositionGroupBlox);
        mRotationLabel->setObjectName(QString::fromUtf8("mRotationLabel"));
        sizePolicy.setHeightForWidth(mRotationLabel->sizePolicy().hasHeightForWidth());
        mRotationLabel->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(mRotationLabel, 5, 0, 1, 1);

        mRotationSpinBox = new QDoubleSpinBox(mPositionGroupBlox);
        mRotationSpinBox->setObjectName(QString::fromUtf8("mRotationSpinBox"));
        mRotationSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mRotationSpinBox->setMaximum(360);

        gridLayout_3->addWidget(mRotationSpinBox, 5, 1, 1, 1);


        gridLayout_4->addWidget(mPositionGroupBlox, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsLabelPropertyDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 5, 0, 1, 1);


        retranslateUi(QgsLabelPropertyDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsLabelPropertyDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsLabelPropertyDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsLabelPropertyDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelPropertyDialogBase)
    {
        QgsLabelPropertyDialogBase->setWindowTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Label properties", 0, QApplication::UnicodeUTF8));
        mLabelTextLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Text", 0, QApplication::UnicodeUTF8));
        mFontGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Font", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontStyleCmbBx->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Available typeface styles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontColorButton->setText(QString());
        mFontSizeLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Style", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontUnderlineBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Underlined text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontUnderlineBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontStrikethroughBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Strikeout text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontStrikethroughBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontBoldBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Bold text\n"
"(data defined only, overrides Style)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontBoldBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontItalicBtn->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Italic text\n"
"(data defined only, overrides Style)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontItalicBtn->setText(QApplication::translate("QgsLabelPropertyDialogBase", "I", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Display", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Scale-based", 0, QApplication::UnicodeUTF8));
        mMinScaleSpinBox->setPrefix(QApplication::translate("QgsLabelPropertyDialogBase", "Min ", 0, QApplication::UnicodeUTF8));
        mMaxScaleSpinBox->setPrefix(QApplication::translate("QgsLabelPropertyDialogBase", "Max ", 0, QApplication::UnicodeUTF8));
        mShowLabelChkbx->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Show label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAlwaysShowChkbx->setToolTip(QApplication::translate("QgsLabelPropertyDialogBase", "Ignores priority and permits collisions/overlaps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAlwaysShowChkbx->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Always show (exceptions above)", 0, QApplication::UnicodeUTF8));
        mBufferGroupBox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Buffer", 0, QApplication::UnicodeUTF8));
        mBufferSizeLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Size", 0, QApplication::UnicodeUTF8));
        mBufferColorButton->setText(QString());
        mPositionGroupBlox->setTitle(QApplication::translate("QgsLabelPropertyDialogBase", "Position", 0, QApplication::UnicodeUTF8));
        mLabelDistanceLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Label distance", 0, QApplication::UnicodeUTF8));
        mXCoordLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "X Coordinate", 0, QApplication::UnicodeUTF8));
        mYCoordLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Y Coordinate", 0, QApplication::UnicodeUTF8));
        mHaliLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Horizontal alignment", 0, QApplication::UnicodeUTF8));
        mValiLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Vertical alignment", 0, QApplication::UnicodeUTF8));
        mRotationLabel->setText(QApplication::translate("QgsLabelPropertyDialogBase", "Rotation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelPropertyDialogBase: public Ui_QgsLabelPropertyDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELPROPERTYDIALOGBASE_H
