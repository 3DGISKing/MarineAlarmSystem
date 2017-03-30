/********************************************************************************
** Form generated from reading UI file 'qgssimplifytolerancedialog.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSIMPLIFYTOLERANCEDIALOG_H
#define UI_QGSSIMPLIFYTOLERANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SimplifyLineDialog
{
public:
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QPushButton *okButton;

    void setupUi(QDialog *SimplifyLineDialog)
    {
        if (SimplifyLineDialog->objectName().isEmpty())
            SimplifyLineDialog->setObjectName(QString::fromUtf8("SimplifyLineDialog"));
        SimplifyLineDialog->resize(431, 54);
        hboxLayout = new QHBoxLayout(SimplifyLineDialog);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(SimplifyLineDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        horizontalSlider = new QSlider(SimplifyLineDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        hboxLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(SimplifyLineDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        hboxLayout->addWidget(spinBox);

        okButton = new QPushButton(SimplifyLineDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);


        retranslateUi(SimplifyLineDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SimplifyLineDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SimplifyLineDialog);
    } // setupUi

    void retranslateUi(QDialog *SimplifyLineDialog)
    {
        SimplifyLineDialog->setWindowTitle(QApplication::translate("SimplifyLineDialog", "Simplify line tolerance", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SimplifyLineDialog", "Set tolerance", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("SimplifyLineDialog", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SimplifyLineDialog: public Ui_SimplifyLineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSIMPLIFYTOLERANCEDIALOG_H
