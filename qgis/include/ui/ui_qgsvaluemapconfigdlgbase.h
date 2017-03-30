/********************************************************************************
** Form generated from reading UI file 'qgsvaluemapconfigdlgbase.ui'
**
** Created: Sat Jan 17 20:06:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVALUEMAPCONFIGDLGBASE_H
#define UI_QGSVALUEMAPCONFIGDLGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsValueMapWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *valueMapLabel;
    QPushButton *loadFromLayerButton;
    QPushButton *loadFromCSVButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QPushButton *removeSelectedButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsValueMapWidget)
    {
        if (QgsValueMapWidget->objectName().isEmpty())
            QgsValueMapWidget->setObjectName(QString::fromUtf8("QgsValueMapWidget"));
        QgsValueMapWidget->resize(701, 493);
        gridLayout = new QGridLayout(QgsValueMapWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        valueMapLabel = new QLabel(QgsValueMapWidget);
        valueMapLabel->setObjectName(QString::fromUtf8("valueMapLabel"));
        valueMapLabel->setWordWrap(true);

        gridLayout->addWidget(valueMapLabel, 0, 0, 1, 3);

        loadFromLayerButton = new QPushButton(QgsValueMapWidget);
        loadFromLayerButton->setObjectName(QString::fromUtf8("loadFromLayerButton"));

        gridLayout->addWidget(loadFromLayerButton, 1, 0, 1, 1);

        loadFromCSVButton = new QPushButton(QgsValueMapWidget);
        loadFromCSVButton->setObjectName(QString::fromUtf8("loadFromCSVButton"));

        gridLayout->addWidget(loadFromCSVButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(339, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        tableWidget = new QTableWidget(QgsValueMapWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);

        removeSelectedButton = new QPushButton(QgsValueMapWidget);
        removeSelectedButton->setObjectName(QString::fromUtf8("removeSelectedButton"));

        gridLayout->addWidget(removeSelectedButton, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(518, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 1, 1, 2);


        retranslateUi(QgsValueMapWidget);

        QMetaObject::connectSlotsByName(QgsValueMapWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsValueMapWidget)
    {
        QgsValueMapWidget->setWindowTitle(QApplication::translate("QgsValueMapWidget", "Form", 0, QApplication::UnicodeUTF8));
        valueMapLabel->setText(QApplication::translate("QgsValueMapWidget", "Combo box with predefined items. Value is stored in the attribute, description is shown in the combo box.", 0, QApplication::UnicodeUTF8));
        loadFromLayerButton->setText(QApplication::translate("QgsValueMapWidget", "Load Data from layer", 0, QApplication::UnicodeUTF8));
        loadFromCSVButton->setText(QApplication::translate("QgsValueMapWidget", "Load Data from CSV file", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsValueMapWidget", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsValueMapWidget", "Description", 0, QApplication::UnicodeUTF8));
        removeSelectedButton->setText(QApplication::translate("QgsValueMapWidget", "Remove Selected", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsValueMapWidget: public Ui_QgsValueMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVALUEMAPCONFIGDLGBASE_H
