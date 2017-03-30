/********************************************************************************
** Form generated from reading UI file 'qgsmeasurebase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMEASUREBASE_H
#define UI_QGSMEASUREBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMeasureBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *editTotal;
    QSpacerItem *spacerItem;
    QLabel *textLabel2;
    QTreeWidget *mTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMeasureBase)
    {
        if (QgsMeasureBase->objectName().isEmpty())
            QgsMeasureBase->setObjectName(QString::fromUtf8("QgsMeasureBase"));
        QgsMeasureBase->resize(281, 272);
        QgsMeasureBase->setBaseSize(QSize(150, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsMeasureBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMeasureBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        editTotal = new QLineEdit(QgsMeasureBase);
        editTotal->setObjectName(QString::fromUtf8("editTotal"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editTotal->setFont(font);
        editTotal->setAlignment(Qt::AlignRight);
        editTotal->setReadOnly(true);

        gridLayout->addWidget(editTotal, 2, 2, 1, 1);

        spacerItem = new QSpacerItem(41, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);

        textLabel2 = new QLabel(QgsMeasureBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        mTable = new QTreeWidget(QgsMeasureBase);
        mTable->setObjectName(QString::fromUtf8("mTable"));
        mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTable->setRootIsDecorated(false);
        mTable->setColumnCount(1);

        gridLayout->addWidget(mTable, 1, 0, 1, 3);

        buttonBox = new QDialogButtonBox(QgsMeasureBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 3, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel2->setBuddy(editTotal);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTable, editTotal);

        retranslateUi(QgsMeasureBase);

        QMetaObject::connectSlotsByName(QgsMeasureBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeasureBase)
    {
        QgsMeasureBase->setWindowTitle(QApplication::translate("QgsMeasureBase", "Measure", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("QgsMeasureBase", "Total", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsMeasureBase", "Segments", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMeasureBase: public Ui_QgsMeasureBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMEASUREBASE_H
