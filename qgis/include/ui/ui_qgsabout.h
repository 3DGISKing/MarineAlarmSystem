/********************************************************************************
** Form generated from reading UI file 'qgsabout.ui'
**
** Created: Sat Jan 17 20:06:30 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSABOUT_H
#define UI_QGSABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_QgsAbout
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_01;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hboxLayout;
    QLabel *qgisIcon;
    QLabel *TextLabel4;
    QWebView *txtVersion;
    QSpacerItem *spacer_2;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *spacer;
    QHBoxLayout *_2;
    QPushButton *btnQgisHome;
    QPushButton *btnQgisUser;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *txtWhatsNew;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *txtProviders;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QListWidget *lstDevelopers;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QListWidget *lstContributors;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_8;
    QWebView *txtTranslators;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_10;
    QTextBrowser *txtDonors;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *txtLicense;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAbout)
    {
        if (QgsAbout->objectName().isEmpty())
            QgsAbout->setObjectName(QString::fromUtf8("QgsAbout"));
        QgsAbout->resize(903, 444);
        QgsAbout->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsAbout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsAbout);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        new QListWidgetItem(mOptionsListWidget);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptsPage_01 = new QWidget();
        mOptsPage_01->setObjectName(QString::fromUtf8("mOptsPage_01"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_01);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        qgisIcon = new QLabel(mOptsPage_01);
        qgisIcon->setObjectName(QString::fromUtf8("qgisIcon"));
        qgisIcon->setMaximumSize(QSize(60, 60));
        qgisIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/qgis-icon-60x60.png")));
        qgisIcon->setScaledContents(false);

        hboxLayout->addWidget(qgisIcon);

        TextLabel4 = new QLabel(mOptsPage_01);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(TextLabel4);


        verticalLayout_4->addLayout(hboxLayout);

        txtVersion = new QWebView(mOptsPage_01);
        txtVersion->setObjectName(QString::fromUtf8("txtVersion"));
        txtVersion->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));

        verticalLayout_4->addWidget(txtVersion);

        spacer_2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacer_2);

        label_3 = new QLabel(mOptsPage_01);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(mOptsPage_01);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacer);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        btnQgisHome = new QPushButton(mOptsPage_01);
        btnQgisHome->setObjectName(QString::fromUtf8("btnQgisHome"));
        btnQgisHome->setFlat(false);

        _2->addWidget(btnQgisHome);

        btnQgisUser = new QPushButton(mOptsPage_01);
        btnQgisUser->setObjectName(QString::fromUtf8("btnQgisUser"));
        btnQgisUser->setFlat(false);

        _2->addWidget(btnQgisUser);


        verticalLayout_4->addLayout(_2);

        mOptionsStackedWidget->addWidget(mOptsPage_01);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        txtWhatsNew = new QTextBrowser(page);
        txtWhatsNew->setObjectName(QString::fromUtf8("txtWhatsNew"));

        verticalLayout_5->addWidget(txtWhatsNew);

        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        txtProviders = new QTextBrowser(page_2);
        txtProviders->setObjectName(QString::fromUtf8("txtProviders"));

        verticalLayout_6->addWidget(txtProviders);

        mOptionsStackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lstDevelopers = new QListWidget(page_3);
        lstDevelopers->setObjectName(QString::fromUtf8("lstDevelopers"));
        sizePolicy1.setHeightForWidth(lstDevelopers->sizePolicy().hasHeightForWidth());
        lstDevelopers->setSizePolicy(sizePolicy1);
        lstDevelopers->setAlternatingRowColors(true);
        lstDevelopers->setProperty("isWrapping", QVariant(false));

        gridLayout->addWidget(lstDevelopers, 0, 0, 2, 1);

        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/last-hackfest.jpg")));
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setPointSize(17);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 1, 1, 1, 1);

        mOptionsStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        lstContributors = new QListWidget(page_4);
        lstContributors->setObjectName(QString::fromUtf8("lstContributors"));
        lstContributors->setAlternatingRowColors(true);

        verticalLayout_7->addWidget(lstContributors);

        mOptionsStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_8 = new QVBoxLayout(page_5);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        txtTranslators = new QWebView(page_5);
        txtTranslators->setObjectName(QString::fromUtf8("txtTranslators"));
        txtTranslators->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));

        verticalLayout_8->addWidget(txtTranslators);

        mOptionsStackedWidget->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_10 = new QVBoxLayout(page_7);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        txtDonors = new QTextBrowser(page_7);
        txtDonors->setObjectName(QString::fromUtf8("txtDonors"));
        txtDonors->setOpenExternalLinks(true);
        txtDonors->setOpenLinks(true);

        verticalLayout_10->addWidget(txtDonors);

        mOptionsStackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        verticalLayout_11 = new QVBoxLayout(page_8);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        txtLicense = new QTextBrowser(page_8);
        txtLicense->setObjectName(QString::fromUtf8("txtLicense"));

        verticalLayout_11->addWidget(txtLicense);

        mOptionsStackedWidget->addWidget(page_8);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsAbout);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy2);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(mButtonBoxFrame);


        retranslateUi(QgsAbout);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsAbout);
    } // setupUi

    void retranslateUi(QDialog *QgsAbout)
    {
        QgsAbout->setWindowTitle(QApplication::translate("QgsAbout", "About QGIS", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsAbout", "About", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsAbout", "What's New", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsAbout", "Providers", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsAbout", "Developers", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsAbout", "Contributors", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsAbout", "Translators", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsAbout", "Donors", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsAbout", "License", 0, QApplication::UnicodeUTF8));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        TextLabel4->setText(QApplication::translate("QgsAbout", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:x-large; font-weight:600;\"><span style=\" font-size:x-large;\">QGIS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsAbout", "QGIS is licensed under the GNU General Public License", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsAbout", "http://www.gnu.org/licenses", 0, QApplication::UnicodeUTF8));
        btnQgisHome->setText(QApplication::translate("QgsAbout", "QGIS Home Page", 0, QApplication::UnicodeUTF8));
        btnQgisUser->setText(QApplication::translate("QgsAbout", "Join our user mailing list", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("QgsAbout", "Essen (Germany), Developer meeting 2012", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAbout: public Ui_QgsAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSABOUT_H
