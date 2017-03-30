/********************************************************************************
** Form generated from reading UI file 'qgsrastercalcdialogbase.ui'
**
** Created: Sat Jan 17 20:06:24 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERCALCDIALOGBASE_H
#define UI_QGSRASTERCALCDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterCalcDialogBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *mRasterBandsGroupBox;
    QGridLayout *gridLayout_2;
    QListWidget *mRasterBandsListWidget;
    QGroupBox *mResultGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *mOutputLayerLabel;
    QLineEdit *mOutputLayerLineEdit;
    QPushButton *mOutputLayerPushButton;
    QPushButton *mCurrentLayerExtentButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *mRowsLabel;
    QSpinBox *mNRowsSpinBox;
    QDoubleSpinBox *mYMinSpinBox;
    QLabel *mYMinLabel;
    QLabel *mXMinLabel;
    QLabel *mXMaxLabel;
    QSpinBox *mNColumnsSpinBox;
    QDoubleSpinBox *mYMaxSpinBox;
    QLabel *mColumnsLabel;
    QLabel *mYMaxLabel;
    QDoubleSpinBox *mXMinSpinBox;
    QDoubleSpinBox *mXMaxSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *mOutputFormatComboBox;
    QLabel *mOutputFormatLabel;
    QCheckBox *mAddResultToProjectCheckBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBox *mOperatorsGroupBox;
    QGridLayout *gridLayout;
    QPushButton *mASinButton;
    QPushButton *mMultiplyPushButton;
    QPushButton *mOrButton;
    QPushButton *mDividePushButton;
    QPushButton *mMinusPushButton;
    QPushButton *mEqualButton;
    QPushButton *mOpenBracketPushButton;
    QPushButton *mSqrtButton;
    QPushButton *mATanButton;
    QPushButton *mGreaterButton;
    QPushButton *mCosButton;
    QPushButton *mAndButton;
    QPushButton *mExpButton;
    QPushButton *mLesserEqualButton;
    QPushButton *mLessButton;
    QPushButton *mGreaterEqualButton;
    QPushButton *mSinButton;
    QPushButton *mPlusPushButton;
    QPushButton *mACosButton;
    QPushButton *mCloseBracketPushButton;
    QPushButton *mTanButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *mExpressionTextEdit;
    QLabel *mExpressionValidLabel;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsRasterCalcDialogBase)
    {
        if (QgsRasterCalcDialogBase->objectName().isEmpty())
            QgsRasterCalcDialogBase->setObjectName(QString::fromUtf8("QgsRasterCalcDialogBase"));
        QgsRasterCalcDialogBase->resize(677, 589);
        verticalLayout_3 = new QVBoxLayout(QgsRasterCalcDialogBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter_2 = new QSplitter(QgsRasterCalcDialogBase);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        mRasterBandsGroupBox = new QGroupBox(splitter);
        mRasterBandsGroupBox->setObjectName(QString::fromUtf8("mRasterBandsGroupBox"));
        gridLayout_2 = new QGridLayout(mRasterBandsGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mRasterBandsListWidget = new QListWidget(mRasterBandsGroupBox);
        mRasterBandsListWidget->setObjectName(QString::fromUtf8("mRasterBandsListWidget"));

        gridLayout_2->addWidget(mRasterBandsListWidget, 0, 0, 1, 1);

        splitter->addWidget(mRasterBandsGroupBox);
        mResultGroupBox = new QGroupBox(splitter);
        mResultGroupBox->setObjectName(QString::fromUtf8("mResultGroupBox"));
        gridLayout_4 = new QGridLayout(mResultGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mOutputLayerLabel = new QLabel(mResultGroupBox);
        mOutputLayerLabel->setObjectName(QString::fromUtf8("mOutputLayerLabel"));

        gridLayout_4->addWidget(mOutputLayerLabel, 0, 0, 1, 1);

        mOutputLayerLineEdit = new QLineEdit(mResultGroupBox);
        mOutputLayerLineEdit->setObjectName(QString::fromUtf8("mOutputLayerLineEdit"));

        gridLayout_4->addWidget(mOutputLayerLineEdit, 0, 2, 1, 1);

        mOutputLayerPushButton = new QPushButton(mResultGroupBox);
        mOutputLayerPushButton->setObjectName(QString::fromUtf8("mOutputLayerPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOutputLayerPushButton->sizePolicy().hasHeightForWidth());
        mOutputLayerPushButton->setSizePolicy(sizePolicy);
        mOutputLayerPushButton->setMinimumSize(QSize(20, 0));

        gridLayout_4->addWidget(mOutputLayerPushButton, 0, 3, 1, 1);

        mCurrentLayerExtentButton = new QPushButton(mResultGroupBox);
        mCurrentLayerExtentButton->setObjectName(QString::fromUtf8("mCurrentLayerExtentButton"));

        gridLayout_4->addWidget(mCurrentLayerExtentButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mRowsLabel = new QLabel(mResultGroupBox);
        mRowsLabel->setObjectName(QString::fromUtf8("mRowsLabel"));

        gridLayout_3->addWidget(mRowsLabel, 2, 3, 1, 1);

        mNRowsSpinBox = new QSpinBox(mResultGroupBox);
        mNRowsSpinBox->setObjectName(QString::fromUtf8("mNRowsSpinBox"));
        mNRowsSpinBox->setMaximum(999999999);

        gridLayout_3->addWidget(mNRowsSpinBox, 2, 4, 1, 1);

        mYMinSpinBox = new QDoubleSpinBox(mResultGroupBox);
        mYMinSpinBox->setObjectName(QString::fromUtf8("mYMinSpinBox"));
        mYMinSpinBox->setDecimals(5);
        mYMinSpinBox->setMinimum(-1e+09);
        mYMinSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mYMinSpinBox, 1, 1, 1, 1);

        mYMinLabel = new QLabel(mResultGroupBox);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));

        gridLayout_3->addWidget(mYMinLabel, 1, 0, 1, 1);

        mXMinLabel = new QLabel(mResultGroupBox);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));

        gridLayout_3->addWidget(mXMinLabel, 0, 0, 1, 1);

        mXMaxLabel = new QLabel(mResultGroupBox);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));

        gridLayout_3->addWidget(mXMaxLabel, 0, 3, 1, 1);

        mNColumnsSpinBox = new QSpinBox(mResultGroupBox);
        mNColumnsSpinBox->setObjectName(QString::fromUtf8("mNColumnsSpinBox"));
        mNColumnsSpinBox->setMaximum(999999999);

        gridLayout_3->addWidget(mNColumnsSpinBox, 2, 1, 1, 1);

        mYMaxSpinBox = new QDoubleSpinBox(mResultGroupBox);
        mYMaxSpinBox->setObjectName(QString::fromUtf8("mYMaxSpinBox"));
        mYMaxSpinBox->setDecimals(5);
        mYMaxSpinBox->setMinimum(-1e+09);
        mYMaxSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mYMaxSpinBox, 1, 4, 1, 1);

        mColumnsLabel = new QLabel(mResultGroupBox);
        mColumnsLabel->setObjectName(QString::fromUtf8("mColumnsLabel"));

        gridLayout_3->addWidget(mColumnsLabel, 2, 0, 1, 1);

        mYMaxLabel = new QLabel(mResultGroupBox);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));

        gridLayout_3->addWidget(mYMaxLabel, 1, 3, 1, 1);

        mXMinSpinBox = new QDoubleSpinBox(mResultGroupBox);
        mXMinSpinBox->setObjectName(QString::fromUtf8("mXMinSpinBox"));
        mXMinSpinBox->setDecimals(5);
        mXMinSpinBox->setMinimum(-1e+09);
        mXMinSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mXMinSpinBox, 0, 1, 1, 1);

        mXMaxSpinBox = new QDoubleSpinBox(mResultGroupBox);
        mXMaxSpinBox->setObjectName(QString::fromUtf8("mXMaxSpinBox"));
        mXMaxSpinBox->setDecimals(5);
        mXMaxSpinBox->setMinimum(-1e+09);
        mXMaxSpinBox->setMaximum(1e+09);

        gridLayout_3->addWidget(mXMaxSpinBox, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 4);

        mOutputFormatComboBox = new QComboBox(mResultGroupBox);
        mOutputFormatComboBox->setObjectName(QString::fromUtf8("mOutputFormatComboBox"));

        gridLayout_4->addWidget(mOutputFormatComboBox, 3, 2, 1, 1);

        mOutputFormatLabel = new QLabel(mResultGroupBox);
        mOutputFormatLabel->setObjectName(QString::fromUtf8("mOutputFormatLabel"));

        gridLayout_4->addWidget(mOutputFormatLabel, 3, 0, 1, 1);

        mAddResultToProjectCheckBox = new QCheckBox(mResultGroupBox);
        mAddResultToProjectCheckBox->setObjectName(QString::fromUtf8("mAddResultToProjectCheckBox"));
        mAddResultToProjectCheckBox->setChecked(true);

        gridLayout_4->addWidget(mAddResultToProjectCheckBox, 4, 0, 1, 4);

        splitter->addWidget(mResultGroupBox);
        splitter_2->addWidget(splitter);
        verticalLayoutWidget = new QWidget(splitter_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mOperatorsGroupBox = new QgsCollapsibleGroupBox(verticalLayoutWidget);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        gridLayout = new QGridLayout(mOperatorsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 0);
        mASinButton = new QPushButton(mOperatorsGroupBox);
        mASinButton->setObjectName(QString::fromUtf8("mASinButton"));

        gridLayout->addWidget(mASinButton, 1, 3, 1, 1);

        mMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        mMultiplyPushButton->setObjectName(QString::fromUtf8("mMultiplyPushButton"));

        gridLayout->addWidget(mMultiplyPushButton, 0, 1, 1, 1);

        mOrButton = new QPushButton(mOperatorsGroupBox);
        mOrButton->setObjectName(QString::fromUtf8("mOrButton"));

        gridLayout->addWidget(mOrButton, 2, 6, 1, 1);

        mDividePushButton = new QPushButton(mOperatorsGroupBox);
        mDividePushButton->setObjectName(QString::fromUtf8("mDividePushButton"));

        gridLayout->addWidget(mDividePushButton, 1, 1, 1, 1);

        mMinusPushButton = new QPushButton(mOperatorsGroupBox);
        mMinusPushButton->setObjectName(QString::fromUtf8("mMinusPushButton"));

        gridLayout->addWidget(mMinusPushButton, 1, 0, 1, 1);

        mEqualButton = new QPushButton(mOperatorsGroupBox);
        mEqualButton->setObjectName(QString::fromUtf8("mEqualButton"));

        gridLayout->addWidget(mEqualButton, 2, 2, 1, 1);

        mOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mOpenBracketPushButton->setObjectName(QString::fromUtf8("mOpenBracketPushButton"));

        gridLayout->addWidget(mOpenBracketPushButton, 0, 6, 1, 1);

        mSqrtButton = new QPushButton(mOperatorsGroupBox);
        mSqrtButton->setObjectName(QString::fromUtf8("mSqrtButton"));

        gridLayout->addWidget(mSqrtButton, 0, 2, 1, 1);

        mATanButton = new QPushButton(mOperatorsGroupBox);
        mATanButton->setObjectName(QString::fromUtf8("mATanButton"));

        gridLayout->addWidget(mATanButton, 1, 5, 1, 1);

        mGreaterButton = new QPushButton(mOperatorsGroupBox);
        mGreaterButton->setObjectName(QString::fromUtf8("mGreaterButton"));

        gridLayout->addWidget(mGreaterButton, 2, 1, 1, 1);

        mCosButton = new QPushButton(mOperatorsGroupBox);
        mCosButton->setObjectName(QString::fromUtf8("mCosButton"));

        gridLayout->addWidget(mCosButton, 1, 2, 1, 1);

        mAndButton = new QPushButton(mOperatorsGroupBox);
        mAndButton->setObjectName(QString::fromUtf8("mAndButton"));

        gridLayout->addWidget(mAndButton, 2, 5, 1, 1);

        mExpButton = new QPushButton(mOperatorsGroupBox);
        mExpButton->setObjectName(QString::fromUtf8("mExpButton"));

        gridLayout->addWidget(mExpButton, 0, 4, 1, 1);

        mLesserEqualButton = new QPushButton(mOperatorsGroupBox);
        mLesserEqualButton->setObjectName(QString::fromUtf8("mLesserEqualButton"));

        gridLayout->addWidget(mLesserEqualButton, 2, 3, 1, 1);

        mLessButton = new QPushButton(mOperatorsGroupBox);
        mLessButton->setObjectName(QString::fromUtf8("mLessButton"));

        gridLayout->addWidget(mLessButton, 2, 0, 1, 1);

        mGreaterEqualButton = new QPushButton(mOperatorsGroupBox);
        mGreaterEqualButton->setObjectName(QString::fromUtf8("mGreaterEqualButton"));

        gridLayout->addWidget(mGreaterEqualButton, 2, 4, 1, 1);

        mSinButton = new QPushButton(mOperatorsGroupBox);
        mSinButton->setObjectName(QString::fromUtf8("mSinButton"));

        gridLayout->addWidget(mSinButton, 0, 3, 1, 1);

        mPlusPushButton = new QPushButton(mOperatorsGroupBox);
        mPlusPushButton->setObjectName(QString::fromUtf8("mPlusPushButton"));

        gridLayout->addWidget(mPlusPushButton, 0, 0, 1, 1);

        mACosButton = new QPushButton(mOperatorsGroupBox);
        mACosButton->setObjectName(QString::fromUtf8("mACosButton"));

        gridLayout->addWidget(mACosButton, 0, 5, 1, 1);

        mCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        mCloseBracketPushButton->setObjectName(QString::fromUtf8("mCloseBracketPushButton"));

        gridLayout->addWidget(mCloseBracketPushButton, 1, 6, 1, 1);

        mTanButton = new QPushButton(mOperatorsGroupBox);
        mTanButton->setObjectName(QString::fromUtf8("mTanButton"));

        gridLayout->addWidget(mTanButton, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 7, 1, 1);


        verticalLayout->addWidget(mOperatorsGroupBox);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        mExpressionTextEdit = new QTextEdit(groupBox);
        mExpressionTextEdit->setObjectName(QString::fromUtf8("mExpressionTextEdit"));

        verticalLayout_2->addWidget(mExpressionTextEdit);


        verticalLayout->addWidget(groupBox);

        splitter_2->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter_2);

        mExpressionValidLabel = new QLabel(QgsRasterCalcDialogBase);
        mExpressionValidLabel->setObjectName(QString::fromUtf8("mExpressionValidLabel"));

        verticalLayout_3->addWidget(mExpressionValidLabel);

        mButtonBox = new QDialogButtonBox(QgsRasterCalcDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(mButtonBox);

        mRasterBandsGroupBox->raise();
        mResultGroupBox->raise();
        mButtonBox->raise();
        mExpressionValidLabel->raise();
        verticalLayoutWidget->raise();
        mOperatorsGroupBox->raise();
#ifndef QT_NO_SHORTCUT
        mOutputLayerLabel->setBuddy(mOutputLayerPushButton);
#endif // QT_NO_SHORTCUT

        retranslateUi(QgsRasterCalcDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsRasterCalcDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsRasterCalcDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsRasterCalcDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterCalcDialogBase)
    {
        QgsRasterCalcDialogBase->setWindowTitle(QApplication::translate("QgsRasterCalcDialogBase", "Raster calculator", 0, QApplication::UnicodeUTF8));
        mRasterBandsGroupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Raster bands", 0, QApplication::UnicodeUTF8));
        mResultGroupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Result layer", 0, QApplication::UnicodeUTF8));
        mOutputLayerLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Output layer", 0, QApplication::UnicodeUTF8));
        mOutputLayerPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "...", 0, QApplication::UnicodeUTF8));
        mCurrentLayerExtentButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "Current layer extent", 0, QApplication::UnicodeUTF8));
        mRowsLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Rows", 0, QApplication::UnicodeUTF8));
        mYMinLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Y min", 0, QApplication::UnicodeUTF8));
        mXMinLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "X min", 0, QApplication::UnicodeUTF8));
        mXMaxLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "XMax", 0, QApplication::UnicodeUTF8));
        mColumnsLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Columns", 0, QApplication::UnicodeUTF8));
        mYMaxLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Y max", 0, QApplication::UnicodeUTF8));
        mOutputFormatLabel->setText(QApplication::translate("QgsRasterCalcDialogBase", "Output format", 0, QApplication::UnicodeUTF8));
        mAddResultToProjectCheckBox->setText(QApplication::translate("QgsRasterCalcDialogBase", "Add result to project", 0, QApplication::UnicodeUTF8));
        mOperatorsGroupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Operators", 0, QApplication::UnicodeUTF8));
        mASinButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "asin", 0, QApplication::UnicodeUTF8));
        mMultiplyPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "*", 0, QApplication::UnicodeUTF8));
        mOrButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "OR", 0, QApplication::UnicodeUTF8));
        mDividePushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "/", 0, QApplication::UnicodeUTF8));
        mMinusPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "-", 0, QApplication::UnicodeUTF8));
        mEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "=", 0, QApplication::UnicodeUTF8));
        mOpenBracketPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "(", 0, QApplication::UnicodeUTF8));
        mSqrtButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "sqrt", 0, QApplication::UnicodeUTF8));
        mATanButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "atan", 0, QApplication::UnicodeUTF8));
        mGreaterButton->setText(QApplication::translate("QgsRasterCalcDialogBase", ">", 0, QApplication::UnicodeUTF8));
        mCosButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "cos", 0, QApplication::UnicodeUTF8));
        mAndButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "AND", 0, QApplication::UnicodeUTF8));
        mExpButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "^", 0, QApplication::UnicodeUTF8));
        mLesserEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "<=", 0, QApplication::UnicodeUTF8));
        mLessButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "<", 0, QApplication::UnicodeUTF8));
        mGreaterEqualButton->setText(QApplication::translate("QgsRasterCalcDialogBase", ">=", 0, QApplication::UnicodeUTF8));
        mSinButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "sin", 0, QApplication::UnicodeUTF8));
        mPlusPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "+", 0, QApplication::UnicodeUTF8));
        mACosButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "acos", 0, QApplication::UnicodeUTF8));
        mCloseBracketPushButton->setText(QApplication::translate("QgsRasterCalcDialogBase", ")", 0, QApplication::UnicodeUTF8));
        mTanButton->setText(QApplication::translate("QgsRasterCalcDialogBase", "tan", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsRasterCalcDialogBase", "Raster calculator expression", 0, QApplication::UnicodeUTF8));
        mExpressionValidLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsRasterCalcDialogBase: public Ui_QgsRasterCalcDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERCALCDIALOGBASE_H
