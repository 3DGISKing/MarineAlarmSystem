/********************************************************************************
** Form generated from reading UI file 'qgscomposerpicturewidgetbase.ui'
**
** Created: Sat Jan 17 20:06:28 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERPICTUREWIDGETBASE_H
#define UI_QGSCOMPOSERPICTUREWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsdatadefinedbutton.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerPictureWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *mPreviewGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mPictureLineEdit;
    QPushButton *mPictureBrowseButton;
    QgsDataDefinedButton *mSourceDDBtn;
    QLabel *label_4;
    QComboBox *mResizeModeComboBox;
    QLabel *label_5;
    QComboBox *mAnchorPointComboBox;
    QgsCollapsibleGroupBoxBasic *mSearchDirectoriesGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *mPreviewsLoadingLabel;
    QListWidget *mPreviewListWidget;
    QLabel *label_3;
    QComboBox *mSearchDirectoriesComboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mRemoveDirectoryButton;
    QPushButton *mAddDirectoryButton;
    QgsCollapsibleGroupBoxBasic *mRotationGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *mRotationFromComposerMapCheckBox;
    QComboBox *mComposerMapComboBox;
    QDoubleSpinBox *mPictureRotationSpinBox;

    void setupUi(QWidget *QgsComposerPictureWidgetBase)
    {
        if (QgsComposerPictureWidgetBase->objectName().isEmpty())
            QgsComposerPictureWidgetBase->setObjectName(QString::fromUtf8("QgsComposerPictureWidgetBase"));
        QgsComposerPictureWidgetBase->resize(332, 572);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerPictureWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerPictureWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsComposerPictureWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(QgsComposerPictureWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(label_2);

        scrollArea = new QScrollArea(QgsComposerPictureWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 314, 554));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mPreviewGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mPreviewGroupBox->setObjectName(QString::fromUtf8("mPreviewGroupBox"));
        mPreviewGroupBox->setFocusPolicy(Qt::StrongFocus);
        mPreviewGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mPreviewGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mPreviewGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(mPreviewGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPictureLineEdit = new QLineEdit(mPreviewGroupBox);
        mPictureLineEdit->setObjectName(QString::fromUtf8("mPictureLineEdit"));

        horizontalLayout_2->addWidget(mPictureLineEdit);

        mPictureBrowseButton = new QPushButton(mPreviewGroupBox);
        mPictureBrowseButton->setObjectName(QString::fromUtf8("mPictureBrowseButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPictureBrowseButton->sizePolicy().hasHeightForWidth());
        mPictureBrowseButton->setSizePolicy(sizePolicy2);
        mPictureBrowseButton->setMaximumSize(QSize(30, 32767));

        horizontalLayout_2->addWidget(mPictureBrowseButton);

        mSourceDDBtn = new QgsDataDefinedButton(mPreviewGroupBox);
        mSourceDDBtn->setObjectName(QString::fromUtf8("mSourceDDBtn"));

        horizontalLayout_2->addWidget(mSourceDDBtn);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        label_4 = new QLabel(mPreviewGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(mPreviewGroupBox);
        mResizeModeComboBox->setObjectName(QString::fromUtf8("mResizeModeComboBox"));

        gridLayout->addWidget(mResizeModeComboBox, 3, 0, 1, 1);

        label_5 = new QLabel(mPreviewGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        mAnchorPointComboBox = new QComboBox(mPreviewGroupBox);
        mAnchorPointComboBox->setObjectName(QString::fromUtf8("mAnchorPointComboBox"));

        gridLayout->addWidget(mAnchorPointComboBox, 5, 0, 1, 1);


        mainLayout->addWidget(mPreviewGroupBox);

        mSearchDirectoriesGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mSearchDirectoriesGroupBox->setObjectName(QString::fromUtf8("mSearchDirectoriesGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mSearchDirectoriesGroupBox->sizePolicy().hasHeightForWidth());
        mSearchDirectoriesGroupBox->setSizePolicy(sizePolicy3);
        mSearchDirectoriesGroupBox->setFocusPolicy(Qt::StrongFocus);
        mSearchDirectoriesGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mSearchDirectoriesGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mSearchDirectoriesGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mPreviewsLoadingLabel = new QLabel(mSearchDirectoriesGroupBox);
        mPreviewsLoadingLabel->setObjectName(QString::fromUtf8("mPreviewsLoadingLabel"));
        QFont font;
        font.setItalic(true);
        mPreviewsLoadingLabel->setFont(font);
        mPreviewsLoadingLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mPreviewsLoadingLabel);

        mPreviewListWidget = new QListWidget(mSearchDirectoriesGroupBox);
        mPreviewListWidget->setObjectName(QString::fromUtf8("mPreviewListWidget"));
        mPreviewListWidget->setProperty("showDropIndicator", QVariant(false));
        mPreviewListWidget->setDragDropMode(QAbstractItemView::DragDrop);
        mPreviewListWidget->setMovement(QListView::Free);
        mPreviewListWidget->setFlow(QListView::LeftToRight);
        mPreviewListWidget->setProperty("isWrapping", QVariant(true));
        mPreviewListWidget->setResizeMode(QListView::Adjust);
        mPreviewListWidget->setGridSize(QSize(30, 30));
        mPreviewListWidget->setViewMode(QListView::IconMode);
        mPreviewListWidget->setWordWrap(true);

        verticalLayout->addWidget(mPreviewListWidget);

        label_3 = new QLabel(mSearchDirectoriesGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        mSearchDirectoriesComboBox = new QComboBox(mSearchDirectoriesGroupBox);
        mSearchDirectoriesComboBox->setObjectName(QString::fromUtf8("mSearchDirectoriesComboBox"));
        mSearchDirectoriesComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        verticalLayout->addWidget(mSearchDirectoriesComboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRemoveDirectoryButton = new QPushButton(mSearchDirectoriesGroupBox);
        mRemoveDirectoryButton->setObjectName(QString::fromUtf8("mRemoveDirectoryButton"));

        horizontalLayout->addWidget(mRemoveDirectoryButton);

        mAddDirectoryButton = new QPushButton(mSearchDirectoriesGroupBox);
        mAddDirectoryButton->setObjectName(QString::fromUtf8("mAddDirectoryButton"));

        horizontalLayout->addWidget(mAddDirectoryButton);


        verticalLayout->addLayout(horizontalLayout);


        mainLayout->addWidget(mSearchDirectoriesGroupBox);

        mRotationGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mRotationGroupBox->setObjectName(QString::fromUtf8("mRotationGroupBox"));
        mRotationGroupBox->setFocusPolicy(Qt::StrongFocus);
        mRotationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mRotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(mRotationGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mRotationFromComposerMapCheckBox = new QCheckBox(mRotationGroupBox);
        mRotationFromComposerMapCheckBox->setObjectName(QString::fromUtf8("mRotationFromComposerMapCheckBox"));

        gridLayout_2->addWidget(mRotationFromComposerMapCheckBox, 1, 0, 1, 1);

        mComposerMapComboBox = new QComboBox(mRotationGroupBox);
        mComposerMapComboBox->setObjectName(QString::fromUtf8("mComposerMapComboBox"));

        gridLayout_2->addWidget(mComposerMapComboBox, 1, 1, 1, 1);

        mPictureRotationSpinBox = new QDoubleSpinBox(mRotationGroupBox);
        mPictureRotationSpinBox->setObjectName(QString::fromUtf8("mPictureRotationSpinBox"));
        mPictureRotationSpinBox->setMaximum(360);

        gridLayout_2->addWidget(mPictureRotationSpinBox, 0, 0, 1, 2);

        gridLayout_2->setColumnStretch(1, 1);

        mainLayout->addWidget(mRotationGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, mPreviewGroupBox);
        QWidget::setTabOrder(mPreviewGroupBox, mPictureLineEdit);
        QWidget::setTabOrder(mPictureLineEdit, mPictureBrowseButton);
        QWidget::setTabOrder(mPictureBrowseButton, mSourceDDBtn);
        QWidget::setTabOrder(mSourceDDBtn, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAnchorPointComboBox);
        QWidget::setTabOrder(mAnchorPointComboBox, mSearchDirectoriesGroupBox);
        QWidget::setTabOrder(mSearchDirectoriesGroupBox, mPreviewListWidget);
        QWidget::setTabOrder(mPreviewListWidget, mSearchDirectoriesComboBox);
        QWidget::setTabOrder(mSearchDirectoriesComboBox, mRemoveDirectoryButton);
        QWidget::setTabOrder(mRemoveDirectoryButton, mAddDirectoryButton);
        QWidget::setTabOrder(mAddDirectoryButton, mRotationGroupBox);
        QWidget::setTabOrder(mRotationGroupBox, mPictureRotationSpinBox);
        QWidget::setTabOrder(mPictureRotationSpinBox, mRotationFromComposerMapCheckBox);
        QWidget::setTabOrder(mRotationFromComposerMapCheckBox, mComposerMapComboBox);

        retranslateUi(QgsComposerPictureWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerPictureWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerPictureWidgetBase)
    {
        QgsComposerPictureWidgetBase->setWindowTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Picture Options", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Picture", 0, QApplication::UnicodeUTF8));
        mPreviewGroupBox->setTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Image source", 0, QApplication::UnicodeUTF8));
        mPictureBrowseButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mSourceDDBtn->setText(QApplication::translate("QgsComposerPictureWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Resize mode", 0, QApplication::UnicodeUTF8));
        mResizeModeComboBox->clear();
        mResizeModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerPictureWidgetBase", "Zoom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Stretch", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Clip", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Zoom and resize frame", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Resize frame to image size", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Placement", 0, QApplication::UnicodeUTF8));
        mAnchorPointComboBox->clear();
        mAnchorPointComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerPictureWidgetBase", "Top left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Top center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Top right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Middle left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Middle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Middle right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Bottom left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Bottom center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerPictureWidgetBase", "Bottom right", 0, QApplication::UnicodeUTF8)
        );
        mSearchDirectoriesGroupBox->setTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Search directories", 0, QApplication::UnicodeUTF8));
        mPreviewsLoadingLabel->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Loading previews...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Image search paths", 0, QApplication::UnicodeUTF8));
        mRemoveDirectoryButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Remove", 0, QApplication::UnicodeUTF8));
        mAddDirectoryButton->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Add...", 0, QApplication::UnicodeUTF8));
        mRotationGroupBox->setTitle(QApplication::translate("QgsComposerPictureWidgetBase", "Image rotation", 0, QApplication::UnicodeUTF8));
        mRotationFromComposerMapCheckBox->setText(QApplication::translate("QgsComposerPictureWidgetBase", "Sync with map", 0, QApplication::UnicodeUTF8));
        mPictureRotationSpinBox->setSuffix(QApplication::translate("QgsComposerPictureWidgetBase", " \302\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerPictureWidgetBase: public Ui_QgsComposerPictureWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERPICTUREWIDGETBASE_H
