/********************************************************************************
** Form generated from reading UI file 'qgsinvertedpolygonrendererwidgetbase.ui'
**
** Created: Sat Jan 17 20:06:26 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H
#define UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsInvertedPolygonRendererWidgetBase
{
public:
    QVBoxLayout *mLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mRendererLabel;
    QComboBox *mRendererComboBox;
    QCheckBox *mMergePolygonsCheckBox;

    void setupUi(QWidget *QgsInvertedPolygonRendererWidgetBase)
    {
        if (QgsInvertedPolygonRendererWidgetBase->objectName().isEmpty())
            QgsInvertedPolygonRendererWidgetBase->setObjectName(QString::fromUtf8("QgsInvertedPolygonRendererWidgetBase"));
        QgsInvertedPolygonRendererWidgetBase->resize(316, 75);
        mLayout = new QVBoxLayout(QgsInvertedPolygonRendererWidgetBase);
        mLayout->setObjectName(QString::fromUtf8("mLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRendererLabel = new QLabel(QgsInvertedPolygonRendererWidgetBase);
        mRendererLabel->setObjectName(QString::fromUtf8("mRendererLabel"));

        horizontalLayout->addWidget(mRendererLabel);

        mRendererComboBox = new QComboBox(QgsInvertedPolygonRendererWidgetBase);
        mRendererComboBox->setObjectName(QString::fromUtf8("mRendererComboBox"));

        horizontalLayout->addWidget(mRendererComboBox);


        mLayout->addLayout(horizontalLayout);

        mMergePolygonsCheckBox = new QCheckBox(QgsInvertedPolygonRendererWidgetBase);
        mMergePolygonsCheckBox->setObjectName(QString::fromUtf8("mMergePolygonsCheckBox"));

        mLayout->addWidget(mMergePolygonsCheckBox);


        retranslateUi(QgsInvertedPolygonRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsInvertedPolygonRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsInvertedPolygonRendererWidgetBase)
    {
        QgsInvertedPolygonRendererWidgetBase->setWindowTitle(QApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mRendererLabel->setText(QApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Sub renderer:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mMergePolygonsCheckBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mMergePolygonsCheckBox->setText(QApplication::translate("QgsInvertedPolygonRendererWidgetBase", "Merge polygons before rendering (slow)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsInvertedPolygonRendererWidgetBase: public Ui_QgsInvertedPolygonRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSINVERTEDPOLYGONRENDERERWIDGETBASE_H
