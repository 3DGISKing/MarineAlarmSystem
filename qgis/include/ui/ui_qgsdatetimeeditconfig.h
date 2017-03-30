/********************************************************************************
** Form generated from reading UI file 'qgsdatetimeeditconfig.ui'
**
** Created: Sat Jan 17 20:06:21 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATETIMEEDITCONFIG_H
#define UI_QGSDATETIMEEDITCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDateTimeEditConfig
{
public:
    QGridLayout *gridLayout;
    QScrollArea *mHelpScrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QComboBox *mFieldFormatComboBox;
    QLineEdit *mFieldFormatEdit;
    QSpacerItem *horizontalSpacer;
    QToolButton *mFieldHelpToolButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *mDisplayFormatEdit;
    QComboBox *mDisplayFormatComboBox;
    QToolButton *mDisplayHelpToolButton;
    QCheckBox *mCalendarPopupCheckBox;
    QCheckBox *mAllowNullCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateTimeEdit *mDemoDateTimeEdit;

    void setupUi(QWidget *QgsDateTimeEditConfig)
    {
        if (QgsDateTimeEditConfig->objectName().isEmpty())
            QgsDateTimeEditConfig->setObjectName(QString::fromUtf8("QgsDateTimeEditConfig"));
        QgsDateTimeEditConfig->resize(504, 390);
        gridLayout = new QGridLayout(QgsDateTimeEditConfig);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mHelpScrollArea = new QScrollArea(QgsDateTimeEditConfig);
        mHelpScrollArea->setObjectName(QString::fromUtf8("mHelpScrollArea"));
        mHelpScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 468, 1033));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setScaledContents(true);
        label_2->setWordWrap(true);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        mHelpScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(mHelpScrollArea, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        line = new QFrame(QgsDateTimeEditConfig);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 1);

        groupBox_2 = new QGroupBox(QgsDateTimeEditConfig);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mFieldFormatComboBox = new QComboBox(groupBox_2);
        mFieldFormatComboBox->setObjectName(QString::fromUtf8("mFieldFormatComboBox"));
        mFieldFormatComboBox->setMinimumSize(QSize(120, 0));

        gridLayout_3->addWidget(mFieldFormatComboBox, 0, 0, 1, 1);

        mFieldFormatEdit = new QLineEdit(groupBox_2);
        mFieldFormatEdit->setObjectName(QString::fromUtf8("mFieldFormatEdit"));
        mFieldFormatEdit->setEnabled(true);

        gridLayout_3->addWidget(mFieldFormatEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);

        mFieldHelpToolButton = new QToolButton(groupBox_2);
        mFieldHelpToolButton->setObjectName(QString::fromUtf8("mFieldHelpToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionHelpContents.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFieldHelpToolButton->setIcon(icon);
        mFieldHelpToolButton->setCheckable(true);
        mFieldHelpToolButton->setChecked(false);

        gridLayout_3->addWidget(mFieldHelpToolButton, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(QgsDateTimeEditConfig);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        mDisplayFormatEdit = new QLineEdit(groupBox);
        mDisplayFormatEdit->setObjectName(QString::fromUtf8("mDisplayFormatEdit"));
        mDisplayFormatEdit->setEnabled(false);

        gridLayout_2->addWidget(mDisplayFormatEdit, 0, 1, 1, 1);

        mDisplayFormatComboBox = new QComboBox(groupBox);
        mDisplayFormatComboBox->setObjectName(QString::fromUtf8("mDisplayFormatComboBox"));
        mDisplayFormatComboBox->setMinimumSize(QSize(120, 0));
        mDisplayFormatComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(mDisplayFormatComboBox, 0, 0, 1, 1);

        mDisplayHelpToolButton = new QToolButton(groupBox);
        mDisplayHelpToolButton->setObjectName(QString::fromUtf8("mDisplayHelpToolButton"));
        mDisplayHelpToolButton->setIcon(icon);
        mDisplayHelpToolButton->setCheckable(true);
        mDisplayHelpToolButton->setChecked(false);

        gridLayout_2->addWidget(mDisplayHelpToolButton, 0, 2, 1, 1);

        mCalendarPopupCheckBox = new QCheckBox(groupBox);
        mCalendarPopupCheckBox->setObjectName(QString::fromUtf8("mCalendarPopupCheckBox"));
        mCalendarPopupCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(mCalendarPopupCheckBox, 1, 0, 1, 2);

        mAllowNullCheckBox = new QCheckBox(groupBox);
        mAllowNullCheckBox->setObjectName(QString::fromUtf8("mAllowNullCheckBox"));

        gridLayout_2->addWidget(mAllowNullCheckBox, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(QgsDateTimeEditConfig);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        mDemoDateTimeEdit = new QDateTimeEdit(QgsDateTimeEditConfig);
        mDemoDateTimeEdit->setObjectName(QString::fromUtf8("mDemoDateTimeEdit"));
        mDemoDateTimeEdit->setEnabled(false);

        horizontalLayout_3->addWidget(mDemoDateTimeEdit);


        gridLayout->addLayout(horizontalLayout_3, 9, 0, 1, 1);


        retranslateUi(QgsDateTimeEditConfig);

        QMetaObject::connectSlotsByName(QgsDateTimeEditConfig);
    } // setupUi

    void retranslateUi(QWidget *QgsDateTimeEditConfig)
    {
        QgsDateTimeEditConfig->setWindowTitle(QApplication::translate("QgsDateTimeEditConfig", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsDateTimeEditConfig", "<html><head/><body><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#f6f6f6\"><thead><tr><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Format</span></p></td><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Examples result</span></p></td></tr></thead><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">dd.MM.yyyy</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; paddi"
                        "ng-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">21.05.2001</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">ddd MMMM d yy</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">Tue May 21 01</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">hh:mm:ss.zzz</span></p></td><td bgcol"
                        "or=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">14:13:09.042</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">h:m:s ap</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">2:13:9 pm</span></p></td></tr></table><p><br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#f6f6f6\"><thead><tr><td style=\" vertical-align:top; padding-left:1"
                        "0; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Expression</span></p></td><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Date output</span></p></td></tr></thead><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">d</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the day as number without a leading zero (1 to 31)</span></p></td"
                        "></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">dd</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the day as number with a leading zero (01 to 31)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">ddd</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; colo"
                        "r:#66666e; background-color:#f6f6f6;\">the abbreviated localized day name (e.g. 'Mon' to 'Sun'). Uses the system locale to localize the name, i.e.</span><a href=\"http://qt-project.org/doc/qt-5/qlocale.html#system\"><span style=\" font-family:'Arial,FreeSans,sans-serif'; font-size:12px; font-weight:600; text-decoration: underline; color:#00732f;\">QLocale::system</span></a><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\">().</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">dddd</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the long localized day name (e.g. 'Monday' to"
                        " '</span><a href=\"http://qt-project.org/doc/qt-5/qt.html#DayOfWeek-enum\"><span style=\" font-family:'Arial,FreeSans,sans-serif'; font-size:12px; font-weight:600; text-decoration: underline; color:#00732f;\">Qt::Sunday</span></a><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\">'). Uses the system locale to localize the name, i.e.</span><a href=\"http://qt-project.org/doc/qt-5/qlocale.html#system\"><span style=\" font-family:'Arial,FreeSans,sans-serif'; font-size:12px; font-weight:600; text-decoration: underline; color:#00732f;\">QLocale::system</span></a><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\">().</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">M</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-le"
                        "ft:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the month as number without a leading zero (1-12)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">MM</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the month as number with a leading zero (01-12)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; backgrou"
                        "nd-color:#f6f6f6;\">MMM</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the abbreviated localized month name (e.g. 'Jan' to 'Dec'). Uses the system locale to localize the name, i.e.</span><a href=\"http://qt-project.org/doc/qt-5/qlocale.html#system\"><span style=\" font-family:'Arial,FreeSans,sans-serif'; font-size:12px; font-weight:600; text-decoration: underline; color:#00732f;\">QLocale::system</span></a><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\">().</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">MMMM</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-a"
                        "lign:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the long localized month name (e.g. 'January' to 'December'). Uses the system locale to localize the name, i.e.</span><a href=\"http://qt-project.org/doc/qt-5/qlocale.html#system\"><span style=\" font-family:'Arial,FreeSans,sans-serif'; font-size:12px; font-weight:600; text-decoration: underline; color:#00732f;\">QLocale::system</span></a><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\">().</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">yy</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p"
                        "><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the year as two digit number (00-99)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">yyyy</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the year as four digit number</span></p></td></tr></table><p><br/></p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#f6f6f6\"><thead><tr><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\">"
                        "<span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Expression</span></p></td><td style=\" vertical-align:top; padding-left:10; padding-right:15; padding-top:5; padding-bottom:5;\"><p align=\"center\"><span style=\" font-family:'Open Sans,sans-serif'; font-size:12px; font-weight:600; color:#363534;\">Time output</span></p></td></tr></thead><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">h</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the hour without a leading zero (0 to 23 or 1 to 12 if AM/PM display)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align"
                        ":top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">hh</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the hour with a leading zero (00 to 23 or 01 to 12 if AM/PM display)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">H</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">"
                        "the hour without a leading zero (0 to 23, even with AM/PM display)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">HH</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the hour with a leading zero (00 to 23, even with AM/PM display)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">m</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3;"
                        " padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the minute without a leading zero (0 to 59)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">mm</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the minute with a leading zero (00 to 59)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">s</span></p></td><td bgcolor=\""
                        "#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the second without a leading zero (0 to 59)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">ss</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the second with a leading zero (00 to 59)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; fo"
                        "nt-size:11px; color:#66666e; background-color:#f6f6f6;\">z</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the milliseconds without leading zeroes (0 to 999)</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">zzz</span></p></td><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">the milliseconds with leading zeroes (000 to 999)</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; paddi"
                        "ng-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">AP or A</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">use AM/PM display.</span><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; font-style:italic; color:#66666e;\">A/AP</span><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\"> will be replaced by either &quot;AM&quot; or &quot;PM&quot;.</span></p></td></tr><tr><td bgcolor=\"#ffffff\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">ap or a</span></p></td><td bgcolor=\"#ffffff\" style=\" vert"
                        "ical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#ffffff;\">use am/pm display.</span><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; font-style:italic; color:#66666e;\">a/ap</span><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e;\"> will be replaced by either &quot;am&quot; or &quot;pm&quot;.</span></p></td></tr><tr><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">t</span></p></td><td bgcolor=\"#f6f6f6\" style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:3; padding-bottom:3;\"><p><span style=\" font-family:'Open Sans,sans-serif'; font-size:11px; color:#66666e; background-color:#f6f6f6;\">the timezone (for example &q"
                        "uot;CEST&quot;)</span></p></td></tr></table><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsDateTimeEditConfig", "Field format", 0, QApplication::UnicodeUTF8));
        mFieldFormatComboBox->clear();
        mFieldFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsDateTimeEditConfig", "date", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDateTimeEditConfig", "time", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDateTimeEditConfig", "date & time", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDateTimeEditConfig", "custom format", 0, QApplication::UnicodeUTF8)
        );
        mFieldHelpToolButton->setText(QApplication::translate("QgsDateTimeEditConfig", "...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsDateTimeEditConfig", "Widget display", 0, QApplication::UnicodeUTF8));
        mDisplayFormatComboBox->clear();
        mDisplayFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsDateTimeEditConfig", "default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDateTimeEditConfig", "custom", 0, QApplication::UnicodeUTF8)
        );
        mDisplayHelpToolButton->setText(QApplication::translate("QgsDateTimeEditConfig", "...", 0, QApplication::UnicodeUTF8));
        mCalendarPopupCheckBox->setText(QApplication::translate("QgsDateTimeEditConfig", "calendar popup", 0, QApplication::UnicodeUTF8));
        mAllowNullCheckBox->setText(QApplication::translate("QgsDateTimeEditConfig", "allow NULL values", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsDateTimeEditConfig", "preview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDateTimeEditConfig: public Ui_QgsDateTimeEditConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATETIMEEDITCONFIG_H
