/********************************************************************************
** Form generated from reading UI file 'qgsgpsinformationwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSGPSINFORMATIONWIDGETBASE_H
#define UI_QGSGPSINFORMATIONWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsGPSInformationWidgetBase
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mBtnCloseFeature;
    QLabel *mLblStatusIndicator;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mBtnAddVertex;
    QToolButton *mBtnResetFeature;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *mBtnPosition;
    QToolButton *mBtnSignal;
    QToolButton *mBtnSatellites;
    QToolButton *mBtnOptions;
    QToolButton *mBtnDebug;
    QSpacerItem *horizontalSpacer;
    QPushButton *mConnectButton;
    QStackedWidget *mStackedWidget;
    QWidget *stackedWidgetPage1;
    QGridLayout *gridLayout_11;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_10;
    QLineEdit *mTxtLatitude;
    QSpacerItem *verticalSpacer_2;
    QLabel *mLblLongitude;
    QLineEdit *mTxtLongitude;
    QLineEdit *mTxtAltitude;
    QLabel *mLblAltitude;
    QLabel *mLblLatitude;
    QLabel *mLblUtcTime;
    QLineEdit *mTxtDateTime;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *mTxtSpeed;
    QLabel *mLblSpeed;
    QLineEdit *mTxtDirection;
    QLabel *mLblDirection;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *mTxtHdop;
    QLabel *mLblHdop;
    QLineEdit *mTxtVdop;
    QLabel *mLblVdop;
    QLineEdit *mTxtPdop;
    QLabel *mLblPdop;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *mTxtFixMode;
    QLabel *mLblFixMode;
    QLineEdit *mTxtFixType;
    QLabel *mLblFixType;
    QLineEdit *mTxtQuality;
    QLabel *mLblQuality;
    QLineEdit *mTxtStatus;
    QLabel *mLblStatus;
    QLineEdit *mTxtSatellitesUsed;
    QLabel *mLblSatellitesUsed;
    QLineEdit *mTxtHacc;
    QLineEdit *mTxtVacc;
    QLabel *mLblHacc;
    QLabel *mLblVacc;
    QWidget *stackedWidgetPage2;
    QWidget *stackedWidgetPage3;
    QWidget *stackedWidgetPage4;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QGroupBox *mDeviceGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *mRadAutodetect;
    QRadioButton *mRadUserPath;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *mCboDevices;
    QToolButton *mBtnRefreshDevices;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *mGpsdDevice;
    QLineEdit *mGpsdHost;
    QLineEdit *mGpsdPort;
    QRadioButton *mRadGpsd;
    QRadioButton *mRadInternal;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *mCbxAutoAddVertices;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *mSpinTrackWidth;
    QPushButton *mBtnTrackColor;
    QCheckBox *mCbxAutoCommit;
    QGroupBox *mLogFileGroupBox;
    QGridLayout *gridLayout_13;
    QLineEdit *mTxtLogFile;
    QPushButton *mBtnLogFile;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QRadioButton *radRecenterWhenNeeded;
    QHBoxLayout *horizontalLayout;
    QSpinBox *mSpinMapExtentMultiplier;
    QRadioButton *radNeverRecenter;
    QRadioButton *radRecenterMap;
    QGroupBox *mGroupShowMarker;
    QGridLayout *gridLayout_3;
    QSlider *mSliderMarkerSize;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QWidget *stackedWidgetPage5;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *mGPSPlainTextEdit;

    void setupUi(QWidget *QgsGPSInformationWidgetBase)
    {
        if (QgsGPSInformationWidgetBase->objectName().isEmpty())
            QgsGPSInformationWidgetBase->setObjectName(QString::fromUtf8("QgsGPSInformationWidgetBase"));
        QgsGPSInformationWidgetBase->resize(215, 591);
        gridLayout_4 = new QGridLayout(QgsGPSInformationWidgetBase);
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(2);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        mBtnCloseFeature = new QPushButton(QgsGPSInformationWidgetBase);
        mBtnCloseFeature->setObjectName(QString::fromUtf8("mBtnCloseFeature"));
        mBtnCloseFeature->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBtnCloseFeature->sizePolicy().hasHeightForWidth());
        mBtnCloseFeature->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(mBtnCloseFeature);

        mLblStatusIndicator = new QLabel(QgsGPSInformationWidgetBase);
        mLblStatusIndicator->setObjectName(QString::fromUtf8("mLblStatusIndicator"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLblStatusIndicator->sizePolicy().hasHeightForWidth());
        mLblStatusIndicator->setSizePolicy(sizePolicy1);
        mLblStatusIndicator->setMinimumSize(QSize(42, 0));
        mLblStatusIndicator->setMaximumSize(QSize(42, 16777215));
        mLblStatusIndicator->setFrameShape(QFrame::Box);
        mLblStatusIndicator->setScaledContents(true);

        horizontalLayout_4->addWidget(mLblStatusIndicator);

        horizontalLayout_4->setStretch(0, 50);

        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 4);
        mBtnAddVertex = new QPushButton(QgsGPSInformationWidgetBase);
        mBtnAddVertex->setObjectName(QString::fromUtf8("mBtnAddVertex"));
        mBtnAddVertex->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mBtnAddVertex->sizePolicy().hasHeightForWidth());
        mBtnAddVertex->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(mBtnAddVertex);

        mBtnResetFeature = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnResetFeature->setObjectName(QString::fromUtf8("mBtnResetFeature"));
        sizePolicy1.setHeightForWidth(mBtnResetFeature->sizePolicy().hasHeightForWidth());
        mBtnResetFeature->setSizePolicy(sizePolicy1);
        mBtnResetFeature->setMinimumSize(QSize(32, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionRotatePointSymbols.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnResetFeature->setIcon(icon);

        horizontalLayout_6->addWidget(mBtnResetFeature);


        gridLayout_4->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mBtnPosition = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnPosition->setObjectName(QString::fromUtf8("mBtnPosition"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnPosition->setIcon(icon1);

        horizontalLayout_2->addWidget(mBtnPosition);

        mBtnSignal = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnSignal->setObjectName(QString::fromUtf8("mBtnSignal"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/gpsicons/barchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSignal->setIcon(icon2);

        horizontalLayout_2->addWidget(mBtnSignal);

        mBtnSatellites = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnSatellites->setObjectName(QString::fromUtf8("mBtnSatellites"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/gpsicons/polarchart.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnSatellites->setIcon(icon3);

        horizontalLayout_2->addWidget(mBtnSatellites);

        mBtnOptions = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnOptions->setObjectName(QString::fromUtf8("mBtnOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnOptions->setIcon(icon4);

        horizontalLayout_2->addWidget(mBtnOptions);

        mBtnDebug = new QToolButton(QgsGPSInformationWidgetBase);
        mBtnDebug->setObjectName(QString::fromUtf8("mBtnDebug"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionCopySelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnDebug->setIcon(icon5);

        horizontalLayout_2->addWidget(mBtnDebug);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mConnectButton = new QPushButton(QgsGPSInformationWidgetBase);
        mConnectButton->setObjectName(QString::fromUtf8("mConnectButton"));
        sizePolicy2.setHeightForWidth(mConnectButton->sizePolicy().hasHeightForWidth());
        mConnectButton->setSizePolicy(sizePolicy2);
        mConnectButton->setCheckable(true);

        horizontalLayout_2->addWidget(mConnectButton);


        gridLayout_4->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        mStackedWidget = new QStackedWidget(QgsGPSInformationWidgetBase);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        gridLayout_11 = new QGridLayout(stackedWidgetPage1);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        scrollArea_2 = new QScrollArea(stackedWidgetPage1);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 193, 504));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(2);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(2);
        gridLayout_10->setContentsMargins(2, 2, 2, 2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mTxtLatitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtLatitude->setObjectName(QString::fromUtf8("mTxtLatitude"));
        mTxtLatitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtLatitude, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_2, 3, 1, 1, 1);

        mLblLongitude = new QLabel(scrollAreaWidgetContents_2);
        mLblLongitude->setObjectName(QString::fromUtf8("mLblLongitude"));

        gridLayout_10->addWidget(mLblLongitude, 1, 0, 1, 1);

        mTxtLongitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtLongitude->setObjectName(QString::fromUtf8("mTxtLongitude"));
        mTxtLongitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtLongitude, 1, 1, 1, 1);

        mTxtAltitude = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtAltitude->setObjectName(QString::fromUtf8("mTxtAltitude"));
        mTxtAltitude->setReadOnly(true);

        gridLayout_10->addWidget(mTxtAltitude, 2, 1, 1, 1);

        mLblAltitude = new QLabel(scrollAreaWidgetContents_2);
        mLblAltitude->setObjectName(QString::fromUtf8("mLblAltitude"));

        gridLayout_10->addWidget(mLblAltitude, 2, 0, 1, 1);

        mLblLatitude = new QLabel(scrollAreaWidgetContents_2);
        mLblLatitude->setObjectName(QString::fromUtf8("mLblLatitude"));

        gridLayout_10->addWidget(mLblLatitude, 0, 0, 1, 1);

        mLblUtcTime = new QLabel(scrollAreaWidgetContents_2);
        mLblUtcTime->setObjectName(QString::fromUtf8("mLblUtcTime"));

        gridLayout_10->addWidget(mLblUtcTime, 4, 0, 1, 1);

        mTxtDateTime = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDateTime->setObjectName(QString::fromUtf8("mTxtDateTime"));
        mTxtDateTime->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDateTime, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_4, 8, 1, 1, 1);

        mTxtSpeed = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtSpeed->setObjectName(QString::fromUtf8("mTxtSpeed"));
        mTxtSpeed->setReadOnly(true);

        gridLayout_10->addWidget(mTxtSpeed, 6, 1, 1, 1);

        mLblSpeed = new QLabel(scrollAreaWidgetContents_2);
        mLblSpeed->setObjectName(QString::fromUtf8("mLblSpeed"));

        gridLayout_10->addWidget(mLblSpeed, 6, 0, 1, 1);

        mTxtDirection = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtDirection->setObjectName(QString::fromUtf8("mTxtDirection"));
        mTxtDirection->setReadOnly(true);

        gridLayout_10->addWidget(mTxtDirection, 7, 1, 1, 1);

        mLblDirection = new QLabel(scrollAreaWidgetContents_2);
        mLblDirection->setObjectName(QString::fromUtf8("mLblDirection"));

        gridLayout_10->addWidget(mLblDirection, 7, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_5, 5, 1, 1, 1);

        mTxtHdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtHdop->setObjectName(QString::fromUtf8("mTxtHdop"));
        mTxtHdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtHdop, 9, 1, 1, 1);

        mLblHdop = new QLabel(scrollAreaWidgetContents_2);
        mLblHdop->setObjectName(QString::fromUtf8("mLblHdop"));

        gridLayout_10->addWidget(mLblHdop, 9, 0, 1, 1);

        mTxtVdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtVdop->setObjectName(QString::fromUtf8("mTxtVdop"));
        mTxtVdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtVdop, 10, 1, 1, 1);

        mLblVdop = new QLabel(scrollAreaWidgetContents_2);
        mLblVdop->setObjectName(QString::fromUtf8("mLblVdop"));

        gridLayout_10->addWidget(mLblVdop, 10, 0, 1, 1);

        mTxtPdop = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtPdop->setObjectName(QString::fromUtf8("mTxtPdop"));
        mTxtPdop->setReadOnly(true);

        gridLayout_10->addWidget(mTxtPdop, 11, 1, 1, 1);

        mLblPdop = new QLabel(scrollAreaWidgetContents_2);
        mLblPdop->setObjectName(QString::fromUtf8("mLblPdop"));

        gridLayout_10->addWidget(mLblPdop, 11, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer_3, 14, 1, 1, 1);

        mTxtFixMode = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtFixMode->setObjectName(QString::fromUtf8("mTxtFixMode"));
        mTxtFixMode->setReadOnly(true);

        gridLayout_10->addWidget(mTxtFixMode, 15, 1, 1, 1);

        mLblFixMode = new QLabel(scrollAreaWidgetContents_2);
        mLblFixMode->setObjectName(QString::fromUtf8("mLblFixMode"));

        gridLayout_10->addWidget(mLblFixMode, 15, 0, 1, 1);

        mTxtFixType = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtFixType->setObjectName(QString::fromUtf8("mTxtFixType"));
        mTxtFixType->setReadOnly(true);

        gridLayout_10->addWidget(mTxtFixType, 16, 1, 1, 1);

        mLblFixType = new QLabel(scrollAreaWidgetContents_2);
        mLblFixType->setObjectName(QString::fromUtf8("mLblFixType"));

        gridLayout_10->addWidget(mLblFixType, 16, 0, 1, 1);

        mTxtQuality = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtQuality->setObjectName(QString::fromUtf8("mTxtQuality"));
        mTxtQuality->setReadOnly(true);

        gridLayout_10->addWidget(mTxtQuality, 17, 1, 1, 1);

        mLblQuality = new QLabel(scrollAreaWidgetContents_2);
        mLblQuality->setObjectName(QString::fromUtf8("mLblQuality"));

        gridLayout_10->addWidget(mLblQuality, 17, 0, 1, 1);

        mTxtStatus = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtStatus->setObjectName(QString::fromUtf8("mTxtStatus"));
        mTxtStatus->setReadOnly(true);

        gridLayout_10->addWidget(mTxtStatus, 18, 1, 1, 1);

        mLblStatus = new QLabel(scrollAreaWidgetContents_2);
        mLblStatus->setObjectName(QString::fromUtf8("mLblStatus"));

        gridLayout_10->addWidget(mLblStatus, 18, 0, 1, 1);

        mTxtSatellitesUsed = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtSatellitesUsed->setObjectName(QString::fromUtf8("mTxtSatellitesUsed"));
        mTxtSatellitesUsed->setReadOnly(true);

        gridLayout_10->addWidget(mTxtSatellitesUsed, 19, 1, 1, 1);

        mLblSatellitesUsed = new QLabel(scrollAreaWidgetContents_2);
        mLblSatellitesUsed->setObjectName(QString::fromUtf8("mLblSatellitesUsed"));

        gridLayout_10->addWidget(mLblSatellitesUsed, 19, 0, 1, 1);

        mTxtHacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtHacc->setObjectName(QString::fromUtf8("mTxtHacc"));

        gridLayout_10->addWidget(mTxtHacc, 12, 1, 1, 1);

        mTxtVacc = new QLineEdit(scrollAreaWidgetContents_2);
        mTxtVacc->setObjectName(QString::fromUtf8("mTxtVacc"));

        gridLayout_10->addWidget(mTxtVacc, 13, 1, 1, 1);

        mLblHacc = new QLabel(scrollAreaWidgetContents_2);
        mLblHacc->setObjectName(QString::fromUtf8("mLblHacc"));

        gridLayout_10->addWidget(mLblHacc, 12, 0, 1, 1);

        mLblVacc = new QLabel(scrollAreaWidgetContents_2);
        mLblVacc->setObjectName(QString::fromUtf8("mLblVacc"));

        gridLayout_10->addWidget(mLblVacc, 13, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_10, 2, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_11->addWidget(scrollArea_2, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        mStackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        mStackedWidget->addWidget(stackedWidgetPage3);
        stackedWidgetPage4 = new QWidget();
        stackedWidgetPage4->setObjectName(QString::fromUtf8("stackedWidgetPage4"));
        gridLayout_5 = new QGridLayout(stackedWidgetPage4);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        scrollArea = new QScrollArea(stackedWidgetPage4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 287, 638));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setContentsMargins(2, 2, 2, 2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(4);
        mDeviceGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mDeviceGroupBox->setObjectName(QString::fromUtf8("mDeviceGroupBox"));
        gridLayout = new QGridLayout(mDeviceGroupBox);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 2, -1, 4);
        mRadAutodetect = new QRadioButton(mDeviceGroupBox);
        mRadAutodetect->setObjectName(QString::fromUtf8("mRadAutodetect"));
        mRadAutodetect->setChecked(true);

        gridLayout->addWidget(mRadAutodetect, 0, 0, 1, 1);

        mRadUserPath = new QRadioButton(mDeviceGroupBox);
        mRadUserPath->setObjectName(QString::fromUtf8("mRadUserPath"));

        gridLayout->addWidget(mRadUserPath, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        mCboDevices = new QComboBox(mDeviceGroupBox);
        mCboDevices->setObjectName(QString::fromUtf8("mCboDevices"));
        mCboDevices->setEnabled(false);

        horizontalLayout_3->addWidget(mCboDevices);

        mBtnRefreshDevices = new QToolButton(mDeviceGroupBox);
        mBtnRefreshDevices->setObjectName(QString::fromUtf8("mBtnRefreshDevices"));
        mBtnRefreshDevices->setEnabled(false);
        mBtnRefreshDevices->setIcon(icon);

        horizontalLayout_3->addWidget(mBtnRefreshDevices);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setVerticalSpacing(2);
        gridLayout_12->setContentsMargins(20, -1, -1, -1);
        label_4 = new QLabel(mDeviceGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_12->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(mDeviceGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_12->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(mDeviceGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_12->addWidget(label_5, 2, 0, 1, 1);

        mGpsdDevice = new QLineEdit(mDeviceGroupBox);
        mGpsdDevice->setObjectName(QString::fromUtf8("mGpsdDevice"));
        mGpsdDevice->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mGpsdDevice->sizePolicy().hasHeightForWidth());
        mGpsdDevice->setSizePolicy(sizePolicy3);

        gridLayout_12->addWidget(mGpsdDevice, 2, 1, 1, 1);

        mGpsdHost = new QLineEdit(mDeviceGroupBox);
        mGpsdHost->setObjectName(QString::fromUtf8("mGpsdHost"));
        mGpsdHost->setEnabled(false);
        sizePolicy3.setHeightForWidth(mGpsdHost->sizePolicy().hasHeightForWidth());
        mGpsdHost->setSizePolicy(sizePolicy3);

        gridLayout_12->addWidget(mGpsdHost, 0, 1, 1, 1);

        mGpsdPort = new QLineEdit(mDeviceGroupBox);
        mGpsdPort->setObjectName(QString::fromUtf8("mGpsdPort"));
        mGpsdPort->setEnabled(false);
        sizePolicy3.setHeightForWidth(mGpsdPort->sizePolicy().hasHeightForWidth());
        mGpsdPort->setSizePolicy(sizePolicy3);
        mGpsdPort->setMaxLength(5);

        gridLayout_12->addWidget(mGpsdPort, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_12, 5, 0, 1, 1);

        mRadGpsd = new QRadioButton(mDeviceGroupBox);
        mRadGpsd->setObjectName(QString::fromUtf8("mRadGpsd"));

        gridLayout->addWidget(mRadGpsd, 4, 0, 1, 1);

        mRadInternal = new QRadioButton(mDeviceGroupBox);
        mRadInternal->setObjectName(QString::fromUtf8("mRadInternal"));

        gridLayout->addWidget(mRadInternal, 1, 0, 1, 1);


        gridLayout_7->addWidget(mDeviceGroupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(2);
        gridLayout_9->setContentsMargins(-1, 2, -1, 4);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 2, -1, 4);
        mCbxAutoAddVertices = new QCheckBox(groupBox_3);
        mCbxAutoAddVertices->setObjectName(QString::fromUtf8("mCbxAutoAddVertices"));

        verticalLayout->addWidget(mCbxAutoAddVertices);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mSpinTrackWidth = new QSpinBox(groupBox_3);
        mSpinTrackWidth->setObjectName(QString::fromUtf8("mSpinTrackWidth"));

        horizontalLayout_7->addWidget(mSpinTrackWidth);

        mBtnTrackColor = new QPushButton(groupBox_3);
        mBtnTrackColor->setObjectName(QString::fromUtf8("mBtnTrackColor"));

        horizontalLayout_7->addWidget(mBtnTrackColor);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_9->addWidget(groupBox_3, 1, 0, 1, 1);

        mCbxAutoCommit = new QCheckBox(groupBox_2);
        mCbxAutoCommit->setObjectName(QString::fromUtf8("mCbxAutoCommit"));

        gridLayout_9->addWidget(mCbxAutoCommit, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 2, 0, 1, 1);

        mLogFileGroupBox = new QGroupBox(scrollAreaWidgetContents);
        mLogFileGroupBox->setObjectName(QString::fromUtf8("mLogFileGroupBox"));
        mLogFileGroupBox->setEnabled(true);
        mLogFileGroupBox->setMinimumSize(QSize(0, 0));
        mLogFileGroupBox->setCheckable(true);
        mLogFileGroupBox->setChecked(false);
        gridLayout_13 = new QGridLayout(mLogFileGroupBox);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(-1, 2, -1, 4);
        mTxtLogFile = new QLineEdit(mLogFileGroupBox);
        mTxtLogFile->setObjectName(QString::fromUtf8("mTxtLogFile"));
        mTxtLogFile->setEnabled(true);
        sizePolicy.setHeightForWidth(mTxtLogFile->sizePolicy().hasHeightForWidth());
        mTxtLogFile->setSizePolicy(sizePolicy);
        mTxtLogFile->setAcceptDrops(false);
        mTxtLogFile->setReadOnly(true);

        gridLayout_13->addWidget(mTxtLogFile, 0, 0, 1, 1);

        mBtnLogFile = new QPushButton(mLogFileGroupBox);
        mBtnLogFile->setObjectName(QString::fromUtf8("mBtnLogFile"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(23);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mBtnLogFile->sizePolicy().hasHeightForWidth());
        mBtnLogFile->setSizePolicy(sizePolicy4);
        mBtnLogFile->setMinimumSize(QSize(23, 0));

        gridLayout_13->addWidget(mBtnLogFile, 0, 1, 1, 1);

        gridLayout_13->setColumnStretch(0, 100);

        gridLayout_7->addWidget(mLogFileGroupBox, 5, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setVerticalSpacing(2);
        gridLayout_8->setContentsMargins(-1, 2, -1, 4);
        radRecenterWhenNeeded = new QRadioButton(groupBox);
        radRecenterWhenNeeded->setObjectName(QString::fromUtf8("radRecenterWhenNeeded"));

        gridLayout_8->addWidget(radRecenterWhenNeeded, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, -1, -1);
        mSpinMapExtentMultiplier = new QSpinBox(groupBox);
        mSpinMapExtentMultiplier->setObjectName(QString::fromUtf8("mSpinMapExtentMultiplier"));
        mSpinMapExtentMultiplier->setEnabled(false);
        sizePolicy.setHeightForWidth(mSpinMapExtentMultiplier->sizePolicy().hasHeightForWidth());
        mSpinMapExtentMultiplier->setSizePolicy(sizePolicy);
        mSpinMapExtentMultiplier->setMinimum(5);
        mSpinMapExtentMultiplier->setMaximum(100);
        mSpinMapExtentMultiplier->setSingleStep(1);
        mSpinMapExtentMultiplier->setValue(50);

        horizontalLayout->addWidget(mSpinMapExtentMultiplier);


        gridLayout_8->addLayout(horizontalLayout, 2, 0, 1, 1);

        radNeverRecenter = new QRadioButton(groupBox);
        radNeverRecenter->setObjectName(QString::fromUtf8("radNeverRecenter"));

        gridLayout_8->addWidget(radNeverRecenter, 3, 0, 1, 1);

        radRecenterMap = new QRadioButton(groupBox);
        radRecenterMap->setObjectName(QString::fromUtf8("radRecenterMap"));
        radRecenterMap->setChecked(true);

        gridLayout_8->addWidget(radRecenterMap, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 4, 0, 1, 1);

        mGroupShowMarker = new QGroupBox(scrollAreaWidgetContents);
        mGroupShowMarker->setObjectName(QString::fromUtf8("mGroupShowMarker"));
        mGroupShowMarker->setCheckable(true);
        gridLayout_3 = new QGridLayout(mGroupShowMarker);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(2);
        gridLayout_3->setContentsMargins(-1, 4, -1, 4);
        mSliderMarkerSize = new QSlider(mGroupShowMarker);
        mSliderMarkerSize->setObjectName(QString::fromUtf8("mSliderMarkerSize"));
        sizePolicy.setHeightForWidth(mSliderMarkerSize->sizePolicy().hasHeightForWidth());
        mSliderMarkerSize->setSizePolicy(sizePolicy);
        mSliderMarkerSize->setMinimum(8);
        mSliderMarkerSize->setMaximum(128);
        mSliderMarkerSize->setSingleStep(4);
        mSliderMarkerSize->setPageStep(8);
        mSliderMarkerSize->setSliderPosition(10);
        mSliderMarkerSize->setOrientation(Qt::Horizontal);
        mSliderMarkerSize->setTickPosition(QSlider::TicksBelow);

        gridLayout_3->addWidget(mSliderMarkerSize, 0, 0, 1, 3);

        label = new QLabel(mGroupShowMarker);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        label_2 = new QLabel(mGroupShowMarker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_2, 1, 2, 1, 1);


        gridLayout_7->addWidget(mGroupShowMarker, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage4);
        stackedWidgetPage5 = new QWidget();
        stackedWidgetPage5->setObjectName(QString::fromUtf8("stackedWidgetPage5"));
        gridLayout_6 = new QGridLayout(stackedWidgetPage5);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGPSPlainTextEdit = new QPlainTextEdit(stackedWidgetPage5);
        mGPSPlainTextEdit->setObjectName(QString::fromUtf8("mGPSPlainTextEdit"));
        mGPSPlainTextEdit->setAcceptDrops(false);
        mGPSPlainTextEdit->setUndoRedoEnabled(false);

        gridLayout_6->addWidget(mGPSPlainTextEdit, 0, 0, 1, 1);

        mStackedWidget->addWidget(stackedWidgetPage5);

        gridLayout_4->addWidget(mStackedWidget, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(mGpsdPort);
        label_3->setBuddy(mGpsdHost);
        label_5->setBuddy(mGpsdDevice);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mBtnPosition, mBtnSignal);
        QWidget::setTabOrder(mBtnSignal, mBtnSatellites);
        QWidget::setTabOrder(mBtnSatellites, mBtnOptions);
        QWidget::setTabOrder(mBtnOptions, mBtnDebug);
        QWidget::setTabOrder(mBtnDebug, mConnectButton);
        QWidget::setTabOrder(mConnectButton, mBtnCloseFeature);
        QWidget::setTabOrder(mBtnCloseFeature, mBtnAddVertex);
        QWidget::setTabOrder(mBtnAddVertex, mBtnResetFeature);
        QWidget::setTabOrder(mBtnResetFeature, mTxtLatitude);
        QWidget::setTabOrder(mTxtLatitude, mTxtLongitude);
        QWidget::setTabOrder(mTxtLongitude, mTxtAltitude);
        QWidget::setTabOrder(mTxtAltitude, mTxtDateTime);
        QWidget::setTabOrder(mTxtDateTime, mTxtSpeed);
        QWidget::setTabOrder(mTxtSpeed, mTxtDirection);
        QWidget::setTabOrder(mTxtDirection, mTxtHdop);
        QWidget::setTabOrder(mTxtHdop, mTxtVdop);
        QWidget::setTabOrder(mTxtVdop, mTxtPdop);
        QWidget::setTabOrder(mTxtPdop, mTxtFixMode);
        QWidget::setTabOrder(mTxtFixMode, mTxtFixType);
        QWidget::setTabOrder(mTxtFixType, mTxtQuality);
        QWidget::setTabOrder(mTxtQuality, mTxtStatus);
        QWidget::setTabOrder(mTxtStatus, mTxtSatellitesUsed);
        QWidget::setTabOrder(mTxtSatellitesUsed, mRadAutodetect);
        QWidget::setTabOrder(mRadAutodetect, mRadUserPath);
        QWidget::setTabOrder(mRadUserPath, mCboDevices);
        QWidget::setTabOrder(mCboDevices, mBtnRefreshDevices);
        QWidget::setTabOrder(mBtnRefreshDevices, mRadGpsd);
        QWidget::setTabOrder(mRadGpsd, mGpsdHost);
        QWidget::setTabOrder(mGpsdHost, mGpsdPort);
        QWidget::setTabOrder(mGpsdPort, mGpsdDevice);
        QWidget::setTabOrder(mGpsdDevice, mCbxAutoCommit);
        QWidget::setTabOrder(mCbxAutoCommit, mCbxAutoAddVertices);
        QWidget::setTabOrder(mCbxAutoAddVertices, mSpinTrackWidth);
        QWidget::setTabOrder(mSpinTrackWidth, mBtnTrackColor);
        QWidget::setTabOrder(mBtnTrackColor, mGroupShowMarker);
        QWidget::setTabOrder(mGroupShowMarker, mSliderMarkerSize);
        QWidget::setTabOrder(mSliderMarkerSize, radRecenterMap);
        QWidget::setTabOrder(radRecenterMap, radRecenterWhenNeeded);
        QWidget::setTabOrder(radRecenterWhenNeeded, mSpinMapExtentMultiplier);
        QWidget::setTabOrder(mSpinMapExtentMultiplier, radNeverRecenter);
        QWidget::setTabOrder(radNeverRecenter, mLogFileGroupBox);
        QWidget::setTabOrder(mLogFileGroupBox, mTxtLogFile);
        QWidget::setTabOrder(mTxtLogFile, mBtnLogFile);
        QWidget::setTabOrder(mBtnLogFile, mGPSPlainTextEdit);

        retranslateUi(QgsGPSInformationWidgetBase);
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mCboDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mCboDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadUserPath, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setEnabled(bool)));
        QObject::connect(mRadAutodetect, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setEnabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadGpsd, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));
        QObject::connect(radRecenterWhenNeeded, SIGNAL(toggled(bool)), mSpinMapExtentMultiplier, SLOT(setEnabled(bool)));
        QObject::connect(radRecenterMap, SIGNAL(toggled(bool)), mSpinMapExtentMultiplier, SLOT(setDisabled(bool)));
        QObject::connect(radNeverRecenter, SIGNAL(toggled(bool)), mSpinMapExtentMultiplier, SLOT(setDisabled(bool)));
        QObject::connect(mCbxAutoAddVertices, SIGNAL(toggled(bool)), mBtnAddVertex, SLOT(setDisabled(bool)));
        QObject::connect(mConnectButton, SIGNAL(toggled(bool)), mDeviceGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(mConnectButton, SIGNAL(toggled(bool)), mLogFileGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mGpsdHost, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mGpsdPort, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mGpsdDevice, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mCboDevices, SLOT(setDisabled(bool)));
        QObject::connect(mRadInternal, SIGNAL(toggled(bool)), mBtnRefreshDevices, SLOT(setDisabled(bool)));

        mStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsGPSInformationWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsGPSInformationWidgetBase)
    {
        QgsGPSInformationWidgetBase->setWindowTitle(QApplication::translate("QgsGPSInformationWidgetBase", "GPS Connect", 0, QApplication::UnicodeUTF8));
        mBtnCloseFeature->setText(QApplication::translate("QgsGPSInformationWidgetBase", "&Add feature", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLblStatusIndicator->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Quick status indicator:\n"
"green = good or 3D fix\n"
"yellow = good 2D fix\n"
"red = no fix or bad fix\n"
"gray = no data\n"
"\n"
"2D/3D depends on this information being available", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblStatusIndicator->setText(QString());
        mBtnAddVertex->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Add track point", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnResetFeature->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Reset track", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnResetFeature->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnPosition->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnPosition->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnSignal->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Signal", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnSignal->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnSatellites->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Satellite", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnSatellites->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnOptions->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnOptions->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnDebug->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Debug", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnDebug->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mConnectButton->setText(QApplication::translate("QgsGPSInformationWidgetBase", "&Connect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtLatitude->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "latitude of position fix (degrees)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblLongitude->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Longitude", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtLongitude->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "longitude of position fix (degrees)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mTxtAltitude->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "antenna altitude with respect to geoid (mean sea level)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblAltitude->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Altitude", 0, QApplication::UnicodeUTF8));
        mLblLatitude->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Latitude", 0, QApplication::UnicodeUTF8));
        mLblUtcTime->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Time of fix", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtDateTime->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "date/time of position fix (UTC)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mTxtDateTime->setText(QString());
#ifndef QT_NO_TOOLTIP
        mTxtSpeed->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "speed over ground", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLblSpeed->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLblSpeed->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Speed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtDirection->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "track direction (degrees)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLblDirection->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mLblDirection->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Direction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtHdop->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Horizontal Dilution of Precision", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblHdop->setText(QApplication::translate("QgsGPSInformationWidgetBase", "HDOP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtVdop->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Vertical Dilution of Precision", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblVdop->setText(QApplication::translate("QgsGPSInformationWidgetBase", "VDOP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtPdop->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Position Dilution of Precision", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblPdop->setText(QApplication::translate("QgsGPSInformationWidgetBase", "PDOP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtFixMode->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "GPS receiver configuration 2D/3D mode: Automatic or Manual", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblFixMode->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtFixType->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "position fix dimensions: 2D, 3D or No fix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblFixType->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Dimensions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtQuality->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "quality of the position fix: Differential, Non-differential or No position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblQuality->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Quality", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtStatus->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "position fix status: Valid or Invalid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblStatus->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Status", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mTxtSatellitesUsed->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "number of satellites used in the position fix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLblSatellitesUsed->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Satellites", 0, QApplication::UnicodeUTF8));
        mLblHacc->setText(QApplication::translate("QgsGPSInformationWidgetBase", "H accurancy", 0, QApplication::UnicodeUTF8));
        mLblVacc->setText(QApplication::translate("QgsGPSInformationWidgetBase", "V accurancy", 0, QApplication::UnicodeUTF8));
        mDeviceGroupBox->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Connection", 0, QApplication::UnicodeUTF8));
        mRadAutodetect->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Autodetect", 0, QApplication::UnicodeUTF8));
        mRadUserPath->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Serial device", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnRefreshDevices->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Refresh serial device list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnRefreshDevices->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Port", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Host", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Device", 0, QApplication::UnicodeUTF8));
        mGpsdPort->setInputMask(QApplication::translate("QgsGPSInformationWidgetBase", "00000; ", 0, QApplication::UnicodeUTF8));
        mRadGpsd->setText(QApplication::translate("QgsGPSInformationWidgetBase", "gpsd", 0, QApplication::UnicodeUTF8));
        mRadInternal->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Internal", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Digitizing", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Track", 0, QApplication::UnicodeUTF8));
        mCbxAutoAddVertices->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Automatically add points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSpinTrackWidth->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "Track width in pixels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSpinTrackWidth->setSuffix(QApplication::translate("QgsGPSInformationWidgetBase", " width", 0, QApplication::UnicodeUTF8));
        mBtnTrackColor->setStyleSheet(QString());
        mBtnTrackColor->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCbxAutoCommit->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "save layer after every feature added", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mCbxAutoCommit->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Automatically save added feature", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLogFileGroupBox->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "save GPS data (NMEA sentences) to a file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLogFileGroupBox->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Log File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnLogFile->setToolTip(QApplication::translate("QgsGPSInformationWidgetBase", "browse for log file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnLogFile->setText(QApplication::translate("QgsGPSInformationWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Map centering", 0, QApplication::UnicodeUTF8));
        radRecenterWhenNeeded->setText(QApplication::translate("QgsGPSInformationWidgetBase", "when leaving", 0, QApplication::UnicodeUTF8));
        mSpinMapExtentMultiplier->setSuffix(QApplication::translate("QgsGPSInformationWidgetBase", "% of map extent", 0, QApplication::UnicodeUTF8));
        radNeverRecenter->setText(QApplication::translate("QgsGPSInformationWidgetBase", "never", 0, QApplication::UnicodeUTF8));
        radRecenterMap->setText(QApplication::translate("QgsGPSInformationWidgetBase", "always", 0, QApplication::UnicodeUTF8));
        mGroupShowMarker->setTitle(QApplication::translate("QgsGPSInformationWidgetBase", "Cursor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Small", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsGPSInformationWidgetBase", "Large", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsGPSInformationWidgetBase: public Ui_QgsGPSInformationWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSGPSINFORMATIONWIDGETBASE_H
