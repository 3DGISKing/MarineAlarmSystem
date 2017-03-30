/********************************************************************************
** Form generated from reading UI file 'qgsdelimitedtextsourceselectbase.ui'
**
** Created: Sat Jan 17 20:06:27 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H
#define UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDelimitedTextSourceSelectBase
{
public:
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabelFileName;
    QLineEdit *txtFilePath;
    QPushButton *btnBrowseForFile;
    QHBoxLayout *horizontalLayout_6;
    QLabel *textLabelLayerName;
    QLineEdit *txtLayerName;
    QLabel *lblEncoding;
    QComboBox *cmbEncoding;
    QGridLayout *gridLayout_2;
    QStackedWidget *swGeomType;
    QWidget *swpGeomXY;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabelx;
    QComboBox *cmbXField;
    QLabel *textLabely;
    QComboBox *cmbYField;
    QCheckBox *cbxXyDms;
    QSpacerItem *hspacer4;
    QWidget *swpGeomWKT;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *cmbWktField;
    QLabel *label;
    QComboBox *cmbGeometryType;
    QSpacerItem *hspacer5;
    QWidget *swpGeomNone;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelFileFormat;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *rowCounter;
    QCheckBox *cbxUseHeader;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *delimiterCSV;
    QRadioButton *delimiterChars;
    QRadioButton *delimiterRegexp;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *cbxSpatialIndex;
    QCheckBox *cbxSubsetIndex;
    QCheckBox *cbxWatchFile;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *geomTypeXY;
    QRadioButton *geomTypeWKT;
    QRadioButton *geomTypeNone;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbxTrimFields;
    QCheckBox *cbxSkipEmptyFields;
    QCheckBox *cbxPointIsComma;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *swFileFormat;
    QWidget *swpCSVOptions;
    QVBoxLayout *verticalLayout_4;
    QWidget *swpDelimOptions;
    QVBoxLayout *verticalLayout_5;
    QFrame *frameDelimiterCharacters;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *layoutDelimChars;
    QCheckBox *cbxDelimComma;
    QCheckBox *cbxDelimTab;
    QCheckBox *cbxDelimSpace;
    QCheckBox *cbxDelimColon;
    QCheckBox *cbxDelimSemicolon;
    QHBoxLayout *layoutDelimOther;
    QLabel *labelDelimOther;
    QLineEdit *txtDelimiterOther;
    QLabel *labelQuote;
    QLineEdit *txtQuoteChars;
    QLabel *labelEscape;
    QLineEdit *txtEscapeChars;
    QSpacerItem *hspacer1;
    QWidget *swpRegexpOptions;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *txtDelimiterRegexp;
    QLabel *lblRegexpError;
    QLabel *label_6;
    QFrame *gridFrame_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tblSample;
    QLabel *lblStatus;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsDelimitedTextSourceSelectBase)
    {
        if (QgsDelimitedTextSourceSelectBase->objectName().isEmpty())
            QgsDelimitedTextSourceSelectBase->setObjectName(QString::fromUtf8("QgsDelimitedTextSourceSelectBase"));
        QgsDelimitedTextSourceSelectBase->resize(666, 478);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsDelimitedTextSourceSelectBase->setWindowIcon(icon);
        verticalLayout_7 = new QVBoxLayout(QgsDelimitedTextSourceSelectBase);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget_3 = new QWidget(QgsDelimitedTextSourceSelectBase);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setAcceptDrops(true);
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        textLabelFileName = new QLabel(widget_3);
        textLabelFileName->setObjectName(QString::fromUtf8("textLabelFileName"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabelFileName->sizePolicy().hasHeightForWidth());
        textLabelFileName->setSizePolicy(sizePolicy);
        textLabelFileName->setIndent(0);

        horizontalLayout_5->addWidget(textLabelFileName);

        txtFilePath = new QLineEdit(widget_3);
        txtFilePath->setObjectName(QString::fromUtf8("txtFilePath"));
        txtFilePath->setReadOnly(false);

        horizontalLayout_5->addWidget(txtFilePath);

        btnBrowseForFile = new QPushButton(widget_3);
        btnBrowseForFile->setObjectName(QString::fromUtf8("btnBrowseForFile"));
        btnBrowseForFile->setEnabled(true);
        btnBrowseForFile->setMaximumSize(QSize(16777215, 16777215));
        btnBrowseForFile->setFlat(false);

        horizontalLayout_5->addWidget(btnBrowseForFile);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        textLabelLayerName = new QLabel(widget_3);
        textLabelLayerName->setObjectName(QString::fromUtf8("textLabelLayerName"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabelLayerName->sizePolicy().hasHeightForWidth());
        textLabelLayerName->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(textLabelLayerName);

        txtLayerName = new QLineEdit(widget_3);
        txtLayerName->setObjectName(QString::fromUtf8("txtLayerName"));

        horizontalLayout_6->addWidget(txtLayerName);

        lblEncoding = new QLabel(widget_3);
        lblEncoding->setObjectName(QString::fromUtf8("lblEncoding"));

        horizontalLayout_6->addWidget(lblEncoding);

        cmbEncoding = new QComboBox(widget_3);
        cmbEncoding->setObjectName(QString::fromUtf8("cmbEncoding"));
        cmbEncoding->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout_6->addWidget(cmbEncoding);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(widget_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        swGeomType = new QStackedWidget(QgsDelimitedTextSourceSelectBase);
        swGeomType->setObjectName(QString::fromUtf8("swGeomType"));
        swpGeomXY = new QWidget();
        swpGeomXY->setObjectName(QString::fromUtf8("swpGeomXY"));
        verticalLayout_8 = new QVBoxLayout(swpGeomXY);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabelx = new QLabel(swpGeomXY);
        textLabelx->setObjectName(QString::fromUtf8("textLabelx"));
        textLabelx->setEnabled(true);

        horizontalLayout->addWidget(textLabelx);

        cmbXField = new QComboBox(swpGeomXY);
        cmbXField->setObjectName(QString::fromUtf8("cmbXField"));
        cmbXField->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmbXField->sizePolicy().hasHeightForWidth());
        cmbXField->setSizePolicy(sizePolicy2);
        cmbXField->setMinimumSize(QSize(120, 0));
        cmbXField->setEditable(false);

        horizontalLayout->addWidget(cmbXField);

        textLabely = new QLabel(swpGeomXY);
        textLabely->setObjectName(QString::fromUtf8("textLabely"));
        textLabely->setEnabled(true);

        horizontalLayout->addWidget(textLabely);

        cmbYField = new QComboBox(swpGeomXY);
        cmbYField->setObjectName(QString::fromUtf8("cmbYField"));
        cmbYField->setEnabled(true);
        sizePolicy2.setHeightForWidth(cmbYField->sizePolicy().hasHeightForWidth());
        cmbYField->setSizePolicy(sizePolicy2);
        cmbYField->setMinimumSize(QSize(120, 0));
        cmbYField->setEditable(false);

        horizontalLayout->addWidget(cmbYField);

        cbxXyDms = new QCheckBox(swpGeomXY);
        cbxXyDms->setObjectName(QString::fromUtf8("cbxXyDms"));

        horizontalLayout->addWidget(cbxXyDms);

        hspacer4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(hspacer4);


        verticalLayout_8->addLayout(horizontalLayout);

        swGeomType->addWidget(swpGeomXY);
        swpGeomWKT = new QWidget();
        swpGeomWKT->setObjectName(QString::fromUtf8("swpGeomWKT"));
        verticalLayout_6 = new QVBoxLayout(swpGeomWKT);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_5 = new QLabel(swpGeomWKT);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        cmbWktField = new QComboBox(swpGeomWKT);
        cmbWktField->setObjectName(QString::fromUtf8("cmbWktField"));
        cmbWktField->setEnabled(true);
        sizePolicy2.setHeightForWidth(cmbWktField->sizePolicy().hasHeightForWidth());
        cmbWktField->setSizePolicy(sizePolicy2);
        cmbWktField->setMinimumSize(QSize(120, 0));
        cmbWktField->setEditable(false);

        horizontalLayout_3->addWidget(cmbWktField);

        label = new QLabel(swpGeomWKT);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);

        horizontalLayout_3->addWidget(label);

        cmbGeometryType = new QComboBox(swpGeomWKT);
        cmbGeometryType->setObjectName(QString::fromUtf8("cmbGeometryType"));
        cmbGeometryType->setEnabled(true);

        horizontalLayout_3->addWidget(cmbGeometryType);

        hspacer5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(hspacer5);


        verticalLayout_6->addLayout(horizontalLayout_3);

        swGeomType->addWidget(swpGeomWKT);
        swpGeomNone = new QWidget();
        swpGeomNone->setObjectName(QString::fromUtf8("swpGeomNone"));
        swGeomType->addWidget(swpGeomNone);

        gridLayout_2->addWidget(swGeomType, 5, 1, 1, 1);

        label_2 = new QLabel(QgsDelimitedTextSourceSelectBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(QgsDelimitedTextSourceSelectBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        labelFileFormat = new QLabel(QgsDelimitedTextSourceSelectBase);
        labelFileFormat->setObjectName(QString::fromUtf8("labelFileFormat"));

        gridLayout_2->addWidget(labelFileFormat, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 9, -1);
        label_4 = new QLabel(QgsDelimitedTextSourceSelectBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_4);

        rowCounter = new QSpinBox(QgsDelimitedTextSourceSelectBase);
        rowCounter->setObjectName(QString::fromUtf8("rowCounter"));
        rowCounter->setMinimumSize(QSize(0, 0));
        rowCounter->setMaximumSize(QSize(16777215, 16777215));
        rowCounter->setWrapping(false);
        rowCounter->setMaximum(9999);
        rowCounter->setValue(0);

        horizontalLayout_4->addWidget(rowCounter);

        cbxUseHeader = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxUseHeader->setObjectName(QString::fromUtf8("cbxUseHeader"));
        cbxUseHeader->setChecked(true);

        horizontalLayout_4->addWidget(cbxUseHeader);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, 0, -1);
        delimiterCSV = new QRadioButton(QgsDelimitedTextSourceSelectBase);
        delimiterCSV->setObjectName(QString::fromUtf8("delimiterCSV"));
        delimiterCSV->setChecked(true);

        horizontalLayout_10->addWidget(delimiterCSV);

        delimiterChars = new QRadioButton(QgsDelimitedTextSourceSelectBase);
        delimiterChars->setObjectName(QString::fromUtf8("delimiterChars"));
        delimiterChars->setChecked(false);

        horizontalLayout_10->addWidget(delimiterChars);

        delimiterRegexp = new QRadioButton(QgsDelimitedTextSourceSelectBase);
        delimiterRegexp->setObjectName(QString::fromUtf8("delimiterRegexp"));
        sizePolicy.setHeightForWidth(delimiterRegexp->sizePolicy().hasHeightForWidth());
        delimiterRegexp->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(delimiterRegexp);


        gridLayout_2->addLayout(horizontalLayout_10, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        cbxSpatialIndex = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxSpatialIndex->setObjectName(QString::fromUtf8("cbxSpatialIndex"));

        horizontalLayout_7->addWidget(cbxSpatialIndex);

        cbxSubsetIndex = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxSubsetIndex->setObjectName(QString::fromUtf8("cbxSubsetIndex"));

        horizontalLayout_7->addWidget(cbxSubsetIndex);

        cbxWatchFile = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxWatchFile->setObjectName(QString::fromUtf8("cbxWatchFile"));

        horizontalLayout_7->addWidget(cbxWatchFile);


        gridLayout_2->addLayout(horizontalLayout_7, 6, 1, 1, 1);

        label_8 = new QLabel(QgsDelimitedTextSourceSelectBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        geomTypeXY = new QRadioButton(QgsDelimitedTextSourceSelectBase);
        geomTypeXY->setObjectName(QString::fromUtf8("geomTypeXY"));
        geomTypeXY->setEnabled(true);
        geomTypeXY->setChecked(true);

        horizontalLayout_11->addWidget(geomTypeXY);

        geomTypeWKT = new QRadioButton(QgsDelimitedTextSourceSelectBase);
        geomTypeWKT->setObjectName(QString::fromUtf8("geomTypeWKT"));
        geomTypeWKT->setEnabled(true);

        horizontalLayout_11->addWidget(geomTypeWKT);

        geomTypeNone = new QRadioButton(QgsDelimitedTextSourceSelectBase);
        geomTypeNone->setObjectName(QString::fromUtf8("geomTypeNone"));

        horizontalLayout_11->addWidget(geomTypeNone);


        gridLayout_2->addLayout(horizontalLayout_11, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cbxTrimFields = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxTrimFields->setObjectName(QString::fromUtf8("cbxTrimFields"));

        horizontalLayout_2->addWidget(cbxTrimFields);

        cbxSkipEmptyFields = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxSkipEmptyFields->setObjectName(QString::fromUtf8("cbxSkipEmptyFields"));

        horizontalLayout_2->addWidget(cbxSkipEmptyFields);

        cbxPointIsComma = new QCheckBox(QgsDelimitedTextSourceSelectBase);
        cbxPointIsComma->setObjectName(QString::fromUtf8("cbxPointIsComma"));
        cbxPointIsComma->setEnabled(true);

        horizontalLayout_2->addWidget(cbxPointIsComma);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        swFileFormat = new QStackedWidget(QgsDelimitedTextSourceSelectBase);
        swFileFormat->setObjectName(QString::fromUtf8("swFileFormat"));
        swpCSVOptions = new QWidget();
        swpCSVOptions->setObjectName(QString::fromUtf8("swpCSVOptions"));
        verticalLayout_4 = new QVBoxLayout(swpCSVOptions);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        swFileFormat->addWidget(swpCSVOptions);
        swpDelimOptions = new QWidget();
        swpDelimOptions->setObjectName(QString::fromUtf8("swpDelimOptions"));
        verticalLayout_5 = new QVBoxLayout(swpDelimOptions);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frameDelimiterCharacters = new QFrame(swpDelimOptions);
        frameDelimiterCharacters->setObjectName(QString::fromUtf8("frameDelimiterCharacters"));
        frameDelimiterCharacters->setFrameShape(QFrame::Box);
        frameDelimiterCharacters->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frameDelimiterCharacters);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutDelimChars = new QHBoxLayout();
        layoutDelimChars->setSpacing(6);
        layoutDelimChars->setObjectName(QString::fromUtf8("layoutDelimChars"));
        layoutDelimChars->setContentsMargins(-1, 0, -1, -1);
        cbxDelimComma = new QCheckBox(frameDelimiterCharacters);
        cbxDelimComma->setObjectName(QString::fromUtf8("cbxDelimComma"));

        layoutDelimChars->addWidget(cbxDelimComma);

        cbxDelimTab = new QCheckBox(frameDelimiterCharacters);
        cbxDelimTab->setObjectName(QString::fromUtf8("cbxDelimTab"));
        cbxDelimTab->setChecked(true);

        layoutDelimChars->addWidget(cbxDelimTab);

        cbxDelimSpace = new QCheckBox(frameDelimiterCharacters);
        cbxDelimSpace->setObjectName(QString::fromUtf8("cbxDelimSpace"));
        cbxDelimSpace->setChecked(false);

        layoutDelimChars->addWidget(cbxDelimSpace);

        cbxDelimColon = new QCheckBox(frameDelimiterCharacters);
        cbxDelimColon->setObjectName(QString::fromUtf8("cbxDelimColon"));

        layoutDelimChars->addWidget(cbxDelimColon);

        cbxDelimSemicolon = new QCheckBox(frameDelimiterCharacters);
        cbxDelimSemicolon->setObjectName(QString::fromUtf8("cbxDelimSemicolon"));

        layoutDelimChars->addWidget(cbxDelimSemicolon);


        verticalLayout_3->addLayout(layoutDelimChars);

        layoutDelimOther = new QHBoxLayout();
        layoutDelimOther->setSpacing(6);
        layoutDelimOther->setObjectName(QString::fromUtf8("layoutDelimOther"));
        layoutDelimOther->setContentsMargins(-1, 0, -1, -1);
        labelDelimOther = new QLabel(frameDelimiterCharacters);
        labelDelimOther->setObjectName(QString::fromUtf8("labelDelimOther"));

        layoutDelimOther->addWidget(labelDelimOther);

        txtDelimiterOther = new QLineEdit(frameDelimiterCharacters);
        txtDelimiterOther->setObjectName(QString::fromUtf8("txtDelimiterOther"));
        txtDelimiterOther->setEnabled(true);
        sizePolicy2.setHeightForWidth(txtDelimiterOther->sizePolicy().hasHeightForWidth());
        txtDelimiterOther->setSizePolicy(sizePolicy2);
        txtDelimiterOther->setMaximumSize(QSize(32767, 32767));
        txtDelimiterOther->setMaxLength(10);

        layoutDelimOther->addWidget(txtDelimiterOther);

        labelQuote = new QLabel(frameDelimiterCharacters);
        labelQuote->setObjectName(QString::fromUtf8("labelQuote"));

        layoutDelimOther->addWidget(labelQuote);

        txtQuoteChars = new QLineEdit(frameDelimiterCharacters);
        txtQuoteChars->setObjectName(QString::fromUtf8("txtQuoteChars"));
        txtQuoteChars->setMaxLength(10);

        layoutDelimOther->addWidget(txtQuoteChars);

        labelEscape = new QLabel(frameDelimiterCharacters);
        labelEscape->setObjectName(QString::fromUtf8("labelEscape"));

        layoutDelimOther->addWidget(labelEscape);

        txtEscapeChars = new QLineEdit(frameDelimiterCharacters);
        txtEscapeChars->setObjectName(QString::fromUtf8("txtEscapeChars"));
        txtEscapeChars->setMaxLength(10);

        layoutDelimOther->addWidget(txtEscapeChars);

        hspacer1 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutDelimOther->addItem(hspacer1);


        verticalLayout_3->addLayout(layoutDelimOther);


        verticalLayout_5->addWidget(frameDelimiterCharacters);

        swFileFormat->addWidget(swpDelimOptions);
        swpRegexpOptions = new QWidget();
        swpRegexpOptions->setObjectName(QString::fromUtf8("swpRegexpOptions"));
        verticalLayout_9 = new QVBoxLayout(swpRegexpOptions);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(swpRegexpOptions);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        txtDelimiterRegexp = new QLineEdit(swpRegexpOptions);
        txtDelimiterRegexp->setObjectName(QString::fromUtf8("txtDelimiterRegexp"));
        txtDelimiterRegexp->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtDelimiterRegexp->sizePolicy().hasHeightForWidth());
        txtDelimiterRegexp->setSizePolicy(sizePolicy3);
        txtDelimiterRegexp->setMaximumSize(QSize(32767, 32767));

        horizontalLayout_8->addWidget(txtDelimiterRegexp);

        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout_8);

        lblRegexpError = new QLabel(swpRegexpOptions);
        lblRegexpError->setObjectName(QString::fromUtf8("lblRegexpError"));
        lblRegexpError->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_9->addWidget(lblRegexpError);

        swFileFormat->addWidget(swpRegexpOptions);

        gridLayout_2->addWidget(swFileFormat, 1, 1, 1, 1);

        label_6 = new QLabel(QgsDelimitedTextSourceSelectBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        gridFrame_2 = new QFrame(QgsDelimitedTextSourceSelectBase);
        gridFrame_2->setObjectName(QString::fromUtf8("gridFrame_2"));
        verticalLayout_2 = new QVBoxLayout(gridFrame_2);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tblSample = new QTableWidget(gridFrame_2);
        tblSample->setObjectName(QString::fromUtf8("tblSample"));

        verticalLayout_2->addWidget(tblSample);


        verticalLayout_7->addWidget(gridFrame_2);

        lblStatus = new QLabel(QgsDelimitedTextSourceSelectBase);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));

        verticalLayout_7->addWidget(lblStatus);

        buttonBox = new QDialogButtonBox(QgsDelimitedTextSourceSelectBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);

        verticalLayout_7->setStretch(2, 1);
        QWidget::setTabOrder(txtFilePath, btnBrowseForFile);
        QWidget::setTabOrder(btnBrowseForFile, txtLayerName);
        QWidget::setTabOrder(txtLayerName, cmbEncoding);
        QWidget::setTabOrder(cmbEncoding, delimiterCSV);
        QWidget::setTabOrder(delimiterCSV, delimiterChars);
        QWidget::setTabOrder(delimiterChars, delimiterRegexp);
        QWidget::setTabOrder(delimiterRegexp, cbxDelimComma);
        QWidget::setTabOrder(cbxDelimComma, cbxDelimTab);
        QWidget::setTabOrder(cbxDelimTab, cbxDelimSpace);
        QWidget::setTabOrder(cbxDelimSpace, cbxDelimColon);
        QWidget::setTabOrder(cbxDelimColon, cbxDelimSemicolon);
        QWidget::setTabOrder(cbxDelimSemicolon, txtDelimiterOther);
        QWidget::setTabOrder(txtDelimiterOther, txtQuoteChars);
        QWidget::setTabOrder(txtQuoteChars, txtEscapeChars);
        QWidget::setTabOrder(txtEscapeChars, txtDelimiterRegexp);
        QWidget::setTabOrder(txtDelimiterRegexp, rowCounter);
        QWidget::setTabOrder(rowCounter, cbxUseHeader);
        QWidget::setTabOrder(cbxUseHeader, cbxTrimFields);
        QWidget::setTabOrder(cbxTrimFields, cbxSkipEmptyFields);
        QWidget::setTabOrder(cbxSkipEmptyFields, cbxPointIsComma);
        QWidget::setTabOrder(cbxPointIsComma, geomTypeXY);
        QWidget::setTabOrder(geomTypeXY, geomTypeWKT);
        QWidget::setTabOrder(geomTypeWKT, geomTypeNone);
        QWidget::setTabOrder(geomTypeNone, cmbXField);
        QWidget::setTabOrder(cmbXField, cmbYField);
        QWidget::setTabOrder(cmbYField, cbxXyDms);
        QWidget::setTabOrder(cbxXyDms, cmbWktField);
        QWidget::setTabOrder(cmbWktField, cmbGeometryType);
        QWidget::setTabOrder(cmbGeometryType, cbxSpatialIndex);
        QWidget::setTabOrder(cbxSpatialIndex, cbxSubsetIndex);
        QWidget::setTabOrder(cbxSubsetIndex, cbxWatchFile);
        QWidget::setTabOrder(cbxWatchFile, tblSample);
        QWidget::setTabOrder(tblSample, buttonBox);

        retranslateUi(QgsDelimitedTextSourceSelectBase);
        QObject::connect(geomTypeNone, SIGNAL(toggled(bool)), cbxSpatialIndex, SLOT(setDisabled(bool)));

        swGeomType->setCurrentIndex(0);
        cmbGeometryType->setCurrentIndex(0);
        swFileFormat->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QgsDelimitedTextSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelimitedTextSourceSelectBase)
    {
        QgsDelimitedTextSourceSelectBase->setWindowTitle(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Create a Layer from a Delimited Text File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QgsDelimitedTextSourceSelectBase->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        QgsDelimitedTextSourceSelectBase->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        QgsDelimitedTextSourceSelectBase->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        textLabelFileName->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "File Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtFilePath->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Full path to the delimited text file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        txtFilePath->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Full path to the delimited text file. In order to properly parse the fields in the file, the delimiter must be defined prior to entering the file name. Use the Browse button to the right of this field to choose the input file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        btnBrowseForFile->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Browse to find the delimited text file to be processed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        btnBrowseForFile->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use this button to browse to the location of the delimited text file. This button will not be enabled until a delimiter has been entered in the <i>Delimiter</i> box. Once a file is chosen, the X and Y field drop-down boxes will be populated with the fields from the delimited text file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btnBrowseForFile->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Browse...", 0, QApplication::UnicodeUTF8));
        textLabelLayerName->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Layer name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtLayerName->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name to display in the map legend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        txtLayerName->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name displayed in the map legend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lblEncoding->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Encoding", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbEncoding->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbEncoding->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbEncoding->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Select the file encoding", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabelx->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "<p align=\"right\">X field</p>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbXField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbXField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbXField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing x values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabely->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "<p align=\"right\">Y field</p>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbYField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbYField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbYField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing y values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cbxXyDms->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxXyDms->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxXyDms->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "X and Y coordinates are expressed in degrees/minutes/seconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxXyDms->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "DMS coordinates", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry field", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbWktField->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbWktField->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cmbWktField->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Name of the field containing well known text value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry type", 0, QApplication::UnicodeUTF8));
        cmbGeometryType->clear();
        cmbGeometryType->insertItems(0, QStringList()
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Detect", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Point", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Line", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsDelimitedTextSourceSelectBase", "Polygon", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Record options", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field options", 0, QApplication::UnicodeUTF8));
        labelFileFormat->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "File format ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number of header lines to discard", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rowCounter->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rowCounter->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        rowCounter->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The number of lines to discard from the beginning of the file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cbxUseHeader->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxUseHeader->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxUseHeader->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Field names are read from the first record. If not selected then fields are numbered", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxUseHeader->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "First record has field names", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        delimiterCSV->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        delimiterCSV->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        delimiterCSV->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file is a comma separated value file, fields delimited by commas and quoted by \"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        delimiterCSV->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "CSV (comma separated values)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        delimiterChars->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        delimiterChars->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        delimiterChars->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Fields are defined by the specified delimiter, quote, and escape characters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        delimiterChars->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Custom delimiters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        delimiterRegexp->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        delimiterRegexp->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        delimiterRegexp->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Each line in the file is split using a regular expression to define the end of each field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        delimiterRegexp->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression delimiter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxSpatialIndex->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxSpatialIndex->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxSpatialIndex->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use a spatial index to improve performance of displaying and spatially selecting features", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxSpatialIndex->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use spatial index", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        cbxSubsetIndex->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxSubsetIndex->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        cbxSubsetIndex->setAccessibleName(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use an index to improve performance of subset filters (set in layer properties)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        cbxSubsetIndex->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Use subset index", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxWatchFile->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxWatchFile->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxWatchFile->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch for changes to the file by other applications while QGIS is running", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxWatchFile->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Watch file", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry definition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        geomTypeXY->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        geomTypeXY->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        geomTypeXY->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is a point defined by X and Y coordinate fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        geomTypeXY->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Point coordinates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        geomTypeWKT->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        geomTypeWKT->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        geomTypeWKT->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Geometry is read as a well known text string from the selected fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        geomTypeWKT->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Well known text (WKT) ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        geomTypeNone->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        geomTypeNone->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        geomTypeNone->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The file contains only attribute information - it will not be displayed on the map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        geomTypeNone->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "No geometry (attribute only table)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxTrimFields->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxTrimFields->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxTrimFields->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim leading and trailing spaces from fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxTrimFields->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Trim fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxSkipEmptyFields->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxSkipEmptyFields->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxSkipEmptyFields->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields in each record", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxSkipEmptyFields->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Discard empty fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxPointIsComma->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxPointIsComma->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxPointIsComma->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Number fields use comma for a decimal separator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxPointIsComma->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Decimal separator is comma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxDelimComma->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimComma->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimComma->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxDelimComma->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Comma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxDelimTab->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimTab->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimTab->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxDelimTab->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Tab", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxDelimSpace->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimSpace->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimSpace->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxDelimSpace->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Space", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxDelimColon->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimColon->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimColon->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxDelimColon->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Colon", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxDelimSemicolon->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxDelimSemicolon->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxDelimSemicolon->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon character is one of the delimiters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxDelimSemicolon->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Semicolon", 0, QApplication::UnicodeUTF8));
        labelDelimOther->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Other delimiters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtDelimiterOther->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtDelimiterOther->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtDelimiterOther->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Delimiters to use when splitting fields in the text file. The delimiter can be more than one character. These characters are used in addition to the comma, tab, space, colon, and semicolon options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        labelQuote->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Quote", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtQuoteChars->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtQuoteChars->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtQuoteChars->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The quote character(s) enclose fields which may include delimiters and new lines", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        txtQuoteChars->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "\"", 0, QApplication::UnicodeUTF8));
        labelEscape->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Escape", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtEscapeChars->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtEscapeChars->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtEscapeChars->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "The escape character(s) force the next character to be treated as a normal character (that is not a delimiter, quote, or new line character). If the escape character is the same as a quote character, it only escapes itself and only within quotes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        txtEscapeChars->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "\"", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Expression", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtDelimiterRegexp->setToolTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        txtDelimiterRegexp->setStatusTip(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtDelimiterRegexp->setWhatsThis(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Regular expression used to split each line into fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lblRegexpError->setText(QString());
        label_6->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Layer settings", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QApplication::translate("QgsDelimitedTextSourceSelectBase", "Sample data", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDelimitedTextSourceSelectBase: public Ui_QgsDelimitedTextSourceSelectBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDELIMITEDTEXTSOURCESELECTBASE_H
