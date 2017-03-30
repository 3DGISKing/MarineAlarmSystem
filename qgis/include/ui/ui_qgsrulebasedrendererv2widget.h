/********************************************************************************
** Form generated from reading UI file 'qgsrulebasedrendererv2widget.ui'
**
** Created: Sat Jan 17 20:06:23 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRULEBASEDRENDERERV2WIDGET_H
#define UI_QGSRULEBASEDRENDERERV2WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRuleBasedRendererV2Widget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *viewRules;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRule;
    QPushButton *btnEditRule;
    QPushButton *btnRemoveRule;
    QPushButton *btnRefineRule;
    QPushButton *btnCountFeatures;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRenderingOrder;

    void setupUi(QWidget *QgsRuleBasedRendererV2Widget)
    {
        if (QgsRuleBasedRendererV2Widget->objectName().isEmpty())
            QgsRuleBasedRendererV2Widget->setObjectName(QString::fromUtf8("QgsRuleBasedRendererV2Widget"));
        QgsRuleBasedRendererV2Widget->resize(709, 401);
        verticalLayout = new QVBoxLayout(QgsRuleBasedRendererV2Widget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewRules = new QTreeView(QgsRuleBasedRendererV2Widget);
        viewRules->setObjectName(QString::fromUtf8("viewRules"));
        viewRules->setContextMenuPolicy(Qt::CustomContextMenu);
        viewRules->setAcceptDrops(true);
        viewRules->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        viewRules->setDragEnabled(true);
        viewRules->setDragDropMode(QAbstractItemView::InternalMove);
        viewRules->setSelectionMode(QAbstractItemView::ExtendedSelection);
        viewRules->setAllColumnsShowFocus(true);
        viewRules->header()->setMinimumSectionSize(100);
        viewRules->header()->setStretchLastSection(true);

        verticalLayout->addWidget(viewRules);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnAddRule->setObjectName(QString::fromUtf8("btnAddRule"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionSignPlus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRule->setIcon(icon);

        horizontalLayout->addWidget(btnAddRule);

        btnEditRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnEditRule->setObjectName(QString::fromUtf8("btnEditRule"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditRule->setIcon(icon1);

        horizontalLayout->addWidget(btnEditRule);

        btnRemoveRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnRemoveRule->setObjectName(QString::fromUtf8("btnRemoveRule"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionSignMinus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemoveRule->setIcon(icon2);

        horizontalLayout->addWidget(btnRemoveRule);

        btnRefineRule = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnRefineRule->setObjectName(QString::fromUtf8("btnRefineRule"));
        btnRefineRule->setEnabled(true);
        btnRefineRule->setCheckable(false);
        btnRefineRule->setAutoDefault(false);
        btnRefineRule->setDefault(false);
        btnRefineRule->setFlat(false);

        horizontalLayout->addWidget(btnRefineRule);

        btnCountFeatures = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnCountFeatures->setObjectName(QString::fromUtf8("btnCountFeatures"));

        horizontalLayout->addWidget(btnCountFeatures);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRenderingOrder = new QPushButton(QgsRuleBasedRendererV2Widget);
        btnRenderingOrder->setObjectName(QString::fromUtf8("btnRenderingOrder"));

        horizontalLayout->addWidget(btnRenderingOrder);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QgsRuleBasedRendererV2Widget);

        QMetaObject::connectSlotsByName(QgsRuleBasedRendererV2Widget);
    } // setupUi

    void retranslateUi(QWidget *QgsRuleBasedRendererV2Widget)
    {
#ifndef QT_NO_TOOLTIP
        btnAddRule->setToolTip(QApplication::translate("QgsRuleBasedRendererV2Widget", "Add rule", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEditRule->setToolTip(QApplication::translate("QgsRuleBasedRendererV2Widget", "Edit rule", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEditRule->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemoveRule->setToolTip(QApplication::translate("QgsRuleBasedRendererV2Widget", "Remove rule", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemoveRule->setText(QString());
        btnRefineRule->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Refine current rules", 0, QApplication::UnicodeUTF8));
        btnCountFeatures->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Count features", 0, QApplication::UnicodeUTF8));
        btnRenderingOrder->setText(QApplication::translate("QgsRuleBasedRendererV2Widget", "Rendering order...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsRuleBasedRendererV2Widget);
    } // retranslateUi

};

namespace Ui {
    class QgsRuleBasedRendererV2Widget: public Ui_QgsRuleBasedRendererV2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRULEBASEDRENDERERV2WIDGET_H
