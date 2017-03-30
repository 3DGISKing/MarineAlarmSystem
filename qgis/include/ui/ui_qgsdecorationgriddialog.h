/********************************************************************************
** Form generated from reading UI file 'qgsdecorationgriddialog.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDECORATIONGRIDDIALOG_H
#define UI_QGSDECORATIONGRIDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsDecorationGridDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QCheckBox *chkEnable;
    QLabel *mIntervalXLabel;
    QLabel *mIntervalYLabel;
    QFrame *line_2;
    QLabel *mGridTypeLabel;
    QLabel *mLineSymbolLabel;
    QComboBox *mGridTypeComboBox;
    QPushButton *mLineSymbolButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *mDrawAnnotationCheckBox;
    QGridLayout *gridLayout;
    QLabel *mAnnotationDirectionLabel;
    QComboBox *mAnnotationDirectionComboBox;
    QPushButton *mAnnotationFontButton;
    QLabel *mDistanceToFrameLabel;
    QDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QLabel *mCoordinatePrecisionLabel;
    QSpinBox *mCoordinatePrecisionSpinBox;
    QLabel *mMarkerSymbolLabel;
    QPushButton *mMarkerSymbolButton;
    QFrame *line_3;
    QLabel *mOffsetXLabel;
    QLabel *mOffsetYLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *mPbtnUpdateFromExtents;
    QPushButton *mPbtnUpdateFromLayer;
    QLineEdit *mIntervalXEdit;
    QLineEdit *mIntervalYEdit;
    QLineEdit *mOffsetXEdit;
    QLineEdit *mOffsetYEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDecorationGridDialog)
    {
        if (QgsDecorationGridDialog->objectName().isEmpty())
            QgsDecorationGridDialog->setObjectName(QString::fromUtf8("QgsDecorationGridDialog"));
        QgsDecorationGridDialog->resize(603, 335);
        verticalLayout = new QVBoxLayout(QgsDecorationGridDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        chkEnable = new QCheckBox(QgsDecorationGridDialog);
        chkEnable->setObjectName(QString::fromUtf8("chkEnable"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chkEnable->sizePolicy().hasHeightForWidth());
        chkEnable->setSizePolicy(sizePolicy);
        chkEnable->setLayoutDirection(Qt::LeftToRight);
        chkEnable->setChecked(true);

        gridLayout_3->addWidget(chkEnable, 0, 0, 1, 1);

        mIntervalXLabel = new QLabel(QgsDecorationGridDialog);
        mIntervalXLabel->setObjectName(QString::fromUtf8("mIntervalXLabel"));
        mIntervalXLabel->setWordWrap(true);

        gridLayout_3->addWidget(mIntervalXLabel, 1, 0, 1, 1);

        mIntervalYLabel = new QLabel(QgsDecorationGridDialog);
        mIntervalYLabel->setObjectName(QString::fromUtf8("mIntervalYLabel"));
        mIntervalYLabel->setWordWrap(true);

        gridLayout_3->addWidget(mIntervalYLabel, 2, 0, 1, 1);

        line_2 = new QFrame(QgsDecorationGridDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 3, 0, 1, 2);

        mGridTypeLabel = new QLabel(QgsDecorationGridDialog);
        mGridTypeLabel->setObjectName(QString::fromUtf8("mGridTypeLabel"));
        mGridTypeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mGridTypeLabel, 4, 0, 1, 1);

        mLineSymbolLabel = new QLabel(QgsDecorationGridDialog);
        mLineSymbolLabel->setObjectName(QString::fromUtf8("mLineSymbolLabel"));
        mLineSymbolLabel->setWordWrap(true);

        gridLayout_3->addWidget(mLineSymbolLabel, 5, 0, 1, 1);

        mGridTypeComboBox = new QComboBox(QgsDecorationGridDialog);
        mGridTypeComboBox->setObjectName(QString::fromUtf8("mGridTypeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mGridTypeComboBox->sizePolicy().hasHeightForWidth());
        mGridTypeComboBox->setSizePolicy(sizePolicy1);
        mGridTypeComboBox->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mGridTypeComboBox, 4, 1, 1, 1);

        mLineSymbolButton = new QPushButton(QgsDecorationGridDialog);
        mLineSymbolButton->setObjectName(QString::fromUtf8("mLineSymbolButton"));
        mLineSymbolButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mLineSymbolButton->sizePolicy().hasHeightForWidth());
        mLineSymbolButton->setSizePolicy(sizePolicy2);
        mLineSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mLineSymbolButton, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 2, 1, 1);

        mDrawAnnotationCheckBox = new QGroupBox(QgsDecorationGridDialog);
        mDrawAnnotationCheckBox->setObjectName(QString::fromUtf8("mDrawAnnotationCheckBox"));
        mDrawAnnotationCheckBox->setFlat(false);
        mDrawAnnotationCheckBox->setCheckable(true);
        mDrawAnnotationCheckBox->setChecked(false);
        gridLayout = new QGridLayout(mDrawAnnotationCheckBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        mAnnotationDirectionLabel = new QLabel(mDrawAnnotationCheckBox);
        mAnnotationDirectionLabel->setObjectName(QString::fromUtf8("mAnnotationDirectionLabel"));
        mAnnotationDirectionLabel->setFrameShape(QFrame::NoFrame);
        mAnnotationDirectionLabel->setWordWrap(true);

        gridLayout->addWidget(mAnnotationDirectionLabel, 0, 0, 1, 1);

        mAnnotationDirectionComboBox = new QComboBox(mDrawAnnotationCheckBox);
        mAnnotationDirectionComboBox->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBox"));

        gridLayout->addWidget(mAnnotationDirectionComboBox, 0, 1, 1, 1);

        mAnnotationFontButton = new QPushButton(mDrawAnnotationCheckBox);
        mAnnotationFontButton->setObjectName(QString::fromUtf8("mAnnotationFontButton"));

        gridLayout->addWidget(mAnnotationFontButton, 1, 0, 1, 2);

        mDistanceToFrameLabel = new QLabel(mDrawAnnotationCheckBox);
        mDistanceToFrameLabel->setObjectName(QString::fromUtf8("mDistanceToFrameLabel"));
        mDistanceToFrameLabel->setWordWrap(true);

        gridLayout->addWidget(mDistanceToFrameLabel, 2, 0, 1, 1);

        mDistanceToMapFrameSpinBox = new QDoubleSpinBox(mDrawAnnotationCheckBox);
        mDistanceToMapFrameSpinBox->setObjectName(QString::fromUtf8("mDistanceToMapFrameSpinBox"));

        gridLayout->addWidget(mDistanceToMapFrameSpinBox, 2, 1, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mDrawAnnotationCheckBox);
        mCoordinatePrecisionLabel->setObjectName(QString::fromUtf8("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout->addWidget(mCoordinatePrecisionLabel, 3, 0, 1, 1);

        mCoordinatePrecisionSpinBox = new QSpinBox(mDrawAnnotationCheckBox);
        mCoordinatePrecisionSpinBox->setObjectName(QString::fromUtf8("mCoordinatePrecisionSpinBox"));

        gridLayout->addWidget(mCoordinatePrecisionSpinBox, 3, 1, 1, 1);


        gridLayout_3->addWidget(mDrawAnnotationCheckBox, 0, 3, 8, 2);

        mMarkerSymbolLabel = new QLabel(QgsDecorationGridDialog);
        mMarkerSymbolLabel->setObjectName(QString::fromUtf8("mMarkerSymbolLabel"));

        gridLayout_3->addWidget(mMarkerSymbolLabel, 6, 0, 1, 1);

        mMarkerSymbolButton = new QPushButton(QgsDecorationGridDialog);
        mMarkerSymbolButton->setObjectName(QString::fromUtf8("mMarkerSymbolButton"));
        mMarkerSymbolButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(mMarkerSymbolButton->sizePolicy().hasHeightForWidth());
        mMarkerSymbolButton->setSizePolicy(sizePolicy2);
        mMarkerSymbolButton->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(mMarkerSymbolButton, 6, 1, 1, 1);

        line_3 = new QFrame(QgsDecorationGridDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 7, 0, 1, 2);

        mOffsetXLabel = new QLabel(QgsDecorationGridDialog);
        mOffsetXLabel->setObjectName(QString::fromUtf8("mOffsetXLabel"));
        mOffsetXLabel->setWordWrap(true);

        gridLayout_3->addWidget(mOffsetXLabel, 8, 0, 1, 1);

        mOffsetYLabel = new QLabel(QgsDecorationGridDialog);
        mOffsetYLabel->setObjectName(QString::fromUtf8("mOffsetYLabel"));
        mOffsetYLabel->setWordWrap(true);

        gridLayout_3->addWidget(mOffsetYLabel, 9, 0, 1, 1);

        groupBox = new QGroupBox(QgsDecorationGridDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mPbtnUpdateFromExtents = new QPushButton(groupBox);
        mPbtnUpdateFromExtents->setObjectName(QString::fromUtf8("mPbtnUpdateFromExtents"));

        gridLayout_2->addWidget(mPbtnUpdateFromExtents, 0, 0, 1, 1);

        mPbtnUpdateFromLayer = new QPushButton(groupBox);
        mPbtnUpdateFromLayer->setObjectName(QString::fromUtf8("mPbtnUpdateFromLayer"));

        gridLayout_2->addWidget(mPbtnUpdateFromLayer, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 8, 3, 2, 2);

        mIntervalXEdit = new QLineEdit(QgsDecorationGridDialog);
        mIntervalXEdit->setObjectName(QString::fromUtf8("mIntervalXEdit"));

        gridLayout_3->addWidget(mIntervalXEdit, 1, 1, 1, 1);

        mIntervalYEdit = new QLineEdit(QgsDecorationGridDialog);
        mIntervalYEdit->setObjectName(QString::fromUtf8("mIntervalYEdit"));

        gridLayout_3->addWidget(mIntervalYEdit, 2, 1, 1, 1);

        mOffsetXEdit = new QLineEdit(QgsDecorationGridDialog);
        mOffsetXEdit->setObjectName(QString::fromUtf8("mOffsetXEdit"));

        gridLayout_3->addWidget(mOffsetXEdit, 8, 1, 1, 1);

        mOffsetYEdit = new QLineEdit(QgsDecorationGridDialog);
        mOffsetYEdit->setObjectName(QString::fromUtf8("mOffsetYEdit"));

        gridLayout_3->addWidget(mOffsetYEdit, 9, 1, 1, 1);

        gridLayout_3->setColumnMinimumWidth(0, 125);
        gridLayout_3->setColumnMinimumWidth(1, 100);

        verticalLayout->addLayout(gridLayout_3);

        buttonBox = new QDialogButtonBox(QgsDecorationGridDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsDecorationGridDialog);

        QMetaObject::connectSlotsByName(QgsDecorationGridDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsDecorationGridDialog)
    {
        QgsDecorationGridDialog->setWindowTitle(QApplication::translate("QgsDecorationGridDialog", "Grid properties", 0, QApplication::UnicodeUTF8));
        chkEnable->setText(QApplication::translate("QgsDecorationGridDialog", "Enable grid", 0, QApplication::UnicodeUTF8));
        mIntervalXLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Interval X", 0, QApplication::UnicodeUTF8));
        mIntervalYLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Interval Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        mGridTypeLabel->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        mGridTypeLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Grid type", 0, QApplication::UnicodeUTF8));
        mLineSymbolLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Line symbol", 0, QApplication::UnicodeUTF8));
        mLineSymbolButton->setText(QString());
        mDrawAnnotationCheckBox->setTitle(QApplication::translate("QgsDecorationGridDialog", "Draw annotation", 0, QApplication::UnicodeUTF8));
        mAnnotationDirectionLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Annotation direction", 0, QApplication::UnicodeUTF8));
        mAnnotationFontButton->setText(QApplication::translate("QgsDecorationGridDialog", "Font...", 0, QApplication::UnicodeUTF8));
        mDistanceToFrameLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Distance to map frame", 0, QApplication::UnicodeUTF8));
        mCoordinatePrecisionLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Coordinate precision", 0, QApplication::UnicodeUTF8));
        mMarkerSymbolLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Marker symbol", 0, QApplication::UnicodeUTF8));
        mMarkerSymbolButton->setText(QString());
        mOffsetXLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Offset X", 0, QApplication::UnicodeUTF8));
        mOffsetYLabel->setText(QApplication::translate("QgsDecorationGridDialog", "Offset Y", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsDecorationGridDialog", "Update Interval / Offset from", 0, QApplication::UnicodeUTF8));
        mPbtnUpdateFromExtents->setText(QApplication::translate("QgsDecorationGridDialog", "Canvas Extents", 0, QApplication::UnicodeUTF8));
        mPbtnUpdateFromLayer->setText(QApplication::translate("QgsDecorationGridDialog", "Active Raster Layer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDecorationGridDialog: public Ui_QgsDecorationGridDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDECORATIONGRIDDIALOG_H
