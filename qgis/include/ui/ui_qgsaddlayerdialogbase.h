/*
*********************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'qgsaddlayerdialogbase.ui'
**
** Created: Sat Jan 17 20:12:10 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADDLAYERDIALOGBASE_H
#define UI_QGSADDLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAddLayerDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lookInLabel;
    QHBoxLayout *hboxLayout;
    QComboBox *lookInCombo;
    QToolButton *backButton;
    QToolButton *forwardButton;
    QToolButton *toParentButton;
    QToolButton *listModeButton;
    QToolButton *detailModeButton;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *vboxLayout1;
    QListView *listView;
    QWidget *page_2;
    QVBoxLayout *vboxLayout2;
    QTreeView *treeView;
    QLabel *fileNameLabel;
    QLineEdit *fileNameEdit;
    QDialogButtonBox *buttonBox;
    QLabel *fileTypeLabel;
    QComboBox *fileTypeCombo;

    void setupUi(QDialog *QgsAddLayerDialog)
    {
        if (QgsAddLayerDialog->objectName().isEmpty())
            QgsAddLayerDialog->setObjectName(QString::fromUtf8("QgsAddLayerDialog"));
        QgsAddLayerDialog->resize(521, 316);
        QgsAddLayerDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(QgsAddLayerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lookInLabel = new QLabel(QgsAddLayerDialog);
        lookInLabel->setObjectName(QString::fromUtf8("lookInLabel"));

        gridLayout->addWidget(lookInLabel, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lookInCombo = new QComboBox(QgsAddLayerDialog);
        lookInCombo->setObjectName(QString::fromUtf8("lookInCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lookInCombo->sizePolicy().hasHeightForWidth());
        lookInCombo->setSizePolicy(sizePolicy);
        lookInCombo->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(lookInCombo);

        backButton = new QToolButton(QgsAddLayerDialog);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        hboxLayout->addWidget(backButton);

        forwardButton = new QToolButton(QgsAddLayerDialog);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));

        hboxLayout->addWidget(forwardButton);

        toParentButton = new QToolButton(QgsAddLayerDialog);
        toParentButton->setObjectName(QString::fromUtf8("toParentButton"));

        hboxLayout->addWidget(toParentButton);

        listModeButton = new QToolButton(QgsAddLayerDialog);
        listModeButton->setObjectName(QString::fromUtf8("listModeButton"));

        hboxLayout->addWidget(listModeButton);

        detailModeButton = new QToolButton(QgsAddLayerDialog);
        detailModeButton->setObjectName(QString::fromUtf8("detailModeButton"));

        hboxLayout->addWidget(detailModeButton);


        gridLayout->addLayout(hboxLayout, 0, 1, 1, 2);

        splitter = new QSplitter(QgsAddLayerDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        vboxLayout1 = new QVBoxLayout(page);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        listView = new QListView(page);
        listView->setObjectName(QString::fromUtf8("listView"));

        vboxLayout1->addWidget(listView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        vboxLayout2 = new QVBoxLayout(page_2);
        vboxLayout2->setSpacing(0);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        treeView = new QTreeView(page_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        vboxLayout2->addWidget(treeView);

        stackedWidget->addWidget(page_2);

        vboxLayout->addWidget(stackedWidget);

        splitter->addWidget(frame);

        gridLayout->addWidget(splitter, 1, 0, 1, 3);

        fileNameLabel = new QLabel(QgsAddLayerDialog);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy2);
        fileNameLabel->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(fileNameLabel, 2, 0, 1, 1);

        fileNameEdit = new QLineEdit(QgsAddLayerDialog);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileNameEdit->sizePolicy().hasHeightForWidth());
        fileNameEdit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(fileNameEdit, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsAddLayerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 2, 1);

        fileTypeLabel = new QLabel(QgsAddLayerDialog);
        fileTypeLabel->setObjectName(QString::fromUtf8("fileTypeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fileTypeLabel->sizePolicy().hasHeightForWidth());
        fileTypeLabel->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(fileTypeLabel, 3, 0, 1, 1);

        fileTypeCombo = new QComboBox(QgsAddLayerDialog);
        fileTypeCombo->setObjectName(QString::fromUtf8("fileTypeCombo"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(fileTypeCombo->sizePolicy().hasHeightForWidth());
        fileTypeCombo->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(fileTypeCombo, 3, 1, 1, 1);

        QWidget::setTabOrder(lookInCombo, backButton);
        QWidget::setTabOrder(backButton, forwardButton);
        QWidget::setTabOrder(forwardButton, toParentButton);
        QWidget::setTabOrder(toParentButton, listModeButton);
        QWidget::setTabOrder(listModeButton, detailModeButton);
        QWidget::setTabOrder(detailModeButton, listView);
        QWidget::setTabOrder(listView, fileNameEdit);
        QWidget::setTabOrder(fileNameEdit, fileTypeCombo);
        QWidget::setTabOrder(fileTypeCombo, buttonBox);
        QWidget::setTabOrder(buttonBox, treeView);

        retranslateUi(QgsAddLayerDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsAddLayerDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAddLayerDialog)
    {
        lookInLabel->setText(QApplication::translate("QgsAddLayerDialog", "Look in:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        backButton->setToolTip(QApplication::translate("QgsAddLayerDialog", "Back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleName(QApplication::translate("QgsAddLayerDialog", "Back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleDescription(QApplication::translate("QgsAddLayerDialog", "Go back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        forwardButton->setToolTip(QApplication::translate("QgsAddLayerDialog", "Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        forwardButton->setAccessibleName(QApplication::translate("QgsAddLayerDialog", "Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        forwardButton->setAccessibleDescription(QApplication::translate("QgsAddLayerDialog", "Go forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        toParentButton->setToolTip(QApplication::translate("QgsAddLayerDialog", "Parent Directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        toParentButton->setAccessibleName(QApplication::translate("QgsAddLayerDialog", "Parent Directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        toParentButton->setAccessibleDescription(QApplication::translate("QgsAddLayerDialog", "Go to the parent directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        listModeButton->setToolTip(QApplication::translate("QgsAddLayerDialog", "List View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        listModeButton->setAccessibleName(QApplication::translate("QgsAddLayerDialog", "List View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        listModeButton->setAccessibleDescription(QApplication::translate("QgsAddLayerDialog", "Change to list view mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        detailModeButton->setToolTip(QApplication::translate("QgsAddLayerDialog", "Detail View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        detailModeButton->setAccessibleName(QApplication::translate("QgsAddLayerDialog", "Detail View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        detailModeButton->setAccessibleDescription(QApplication::translate("QgsAddLayerDialog", "Change to detail view mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        fileNameLabel->setText(QApplication::translate("QgsAddLayerDialog", "Name:", 0, QApplication::UnicodeUTF8));
        fileTypeLabel->setText(QApplication::translate("QgsAddLayerDialog", "Files of type:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsAddLayerDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsAddLayerDialog: public Ui_QgsAddLayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDLAYERDIALOGBASE_H
