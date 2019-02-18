#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'plotsetupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTSETUPWIDGET_H
#define UI_PLOTSETUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "kcombobox.h"
#include "kplotwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PlotSetupWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QLabel *minimum_x;
    QLabel *av_x;
    KComboBox *KCB_x;
    QLabel *textLabel2;
    QLabel *maximum_x;
    QLabel *textLabel3_2;
    QGridLayout *gridLayout3;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *to;
    QLabel *textLabel3;
    QLabel *textLabel4;
    QSpinBox *from;
    QPushButton *full;
    QComboBox *comboElementType;
    KComboBox *comboElementLabels;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *av_y;
    QLabel *textLabel1_3;
    QLabel *maximum_y;
    QLabel *textLabel2_2;
    QLabel *textLabel3_3;
    QLabel *minimum_y;
    KComboBox *KCB_y;
    KPlotWidget *plotwidget;

    void setupUi(QWidget *PlotSetupWidget)
    {
        if (PlotSetupWidget->objectName().isEmpty())
            PlotSetupWidget->setObjectName(QStringLiteral("PlotSetupWidget"));
        PlotSetupWidget->resize(615, 293);
        gridLayout_2 = new QGridLayout(PlotSetupWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(PlotSetupWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));

        gridLayout->addWidget(textLabel1_2, 3, 0, 1, 1);

        minimum_x = new QLabel(groupBox);
        minimum_x->setObjectName(QStringLiteral("minimum_x"));

        gridLayout->addWidget(minimum_x, 1, 1, 1, 1);

        av_x = new QLabel(groupBox);
        av_x->setObjectName(QStringLiteral("av_x"));

        gridLayout->addWidget(av_x, 3, 1, 1, 1);

        KCB_x = new KComboBox(groupBox);
        KCB_x->addItem(QString());
        KCB_x->addItem(QString());
        KCB_x->addItem(QString());
        KCB_x->addItem(QString());
        KCB_x->addItem(QString());
        KCB_x->addItem(QString());
        KCB_x->addItem(QString());
        KCB_x->setObjectName(QStringLiteral("KCB_x"));

        gridLayout->addWidget(KCB_x, 0, 0, 1, 2);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        maximum_x = new QLabel(groupBox);
        maximum_x->setObjectName(QStringLiteral("maximum_x"));

        gridLayout->addWidget(maximum_x, 2, 1, 1, 1);

        textLabel3_2 = new QLabel(groupBox);
        textLabel3_2->setObjectName(QStringLiteral("textLabel3_2"));

        gridLayout->addWidget(textLabel3_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout3 = new QGridLayout();
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        gridLayout3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(PlotSetupWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout3->addWidget(label, 3, 0, 1, 1);

        label_4 = new QLabel(PlotSetupWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 0));

        gridLayout3->addWidget(label_4, 4, 0, 1, 1);

        to = new QSpinBox(PlotSetupWidget);
        to->setObjectName(QStringLiteral("to"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(to->sizePolicy().hasHeightForWidth());
        to->setSizePolicy(sizePolicy1);
        to->setMinimum(2);
        to->setMaximum(111);
        to->setValue(36);

        gridLayout3->addWidget(to, 1, 1, 1, 1);

        textLabel3 = new QLabel(PlotSetupWidget);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));

        gridLayout3->addWidget(textLabel3, 0, 0, 1, 1);

        textLabel4 = new QLabel(PlotSetupWidget);
        textLabel4->setObjectName(QStringLiteral("textLabel4"));

        gridLayout3->addWidget(textLabel4, 1, 0, 1, 1);

        from = new QSpinBox(PlotSetupWidget);
        from->setObjectName(QStringLiteral("from"));
        sizePolicy1.setHeightForWidth(from->sizePolicy().hasHeightForWidth());
        from->setSizePolicy(sizePolicy1);
        from->setMinimum(1);
        from->setMaximum(110);

        gridLayout3->addWidget(from, 0, 1, 1, 1);

        full = new QPushButton(PlotSetupWidget);
        full->setObjectName(QStringLiteral("full"));
        sizePolicy1.setHeightForWidth(full->sizePolicy().hasHeightForWidth());
        full->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(full, 2, 1, 1, 1);

        comboElementType = new QComboBox(PlotSetupWidget);
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->addItem(QString());
        comboElementType->setObjectName(QStringLiteral("comboElementType"));

        gridLayout3->addWidget(comboElementType, 4, 1, 1, 1);

        comboElementLabels = new KComboBox(PlotSetupWidget);
        comboElementLabels->addItem(QString());
        comboElementLabels->addItem(QString());
        comboElementLabels->addItem(QString());
        comboElementLabels->setObjectName(QStringLiteral("comboElementLabels"));
        sizePolicy1.setHeightForWidth(comboElementLabels->sizePolicy().hasHeightForWidth());
        comboElementLabels->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(comboElementLabels, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout3, 0, 2, 1, 1);

        groupBox_2 = new QGroupBox(PlotSetupWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
#ifndef UI_Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        av_y = new QLabel(groupBox_2);
        av_y->setObjectName(QStringLiteral("av_y"));

        gridLayout1->addWidget(av_y, 3, 1, 1, 1);

        textLabel1_3 = new QLabel(groupBox_2);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));

        gridLayout1->addWidget(textLabel1_3, 3, 0, 1, 1);

        maximum_y = new QLabel(groupBox_2);
        maximum_y->setObjectName(QStringLiteral("maximum_y"));

        gridLayout1->addWidget(maximum_y, 2, 1, 1, 1);

        textLabel2_2 = new QLabel(groupBox_2);
        textLabel2_2->setObjectName(QStringLiteral("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 2, 0, 1, 1);

        textLabel3_3 = new QLabel(groupBox_2);
        textLabel3_3->setObjectName(QStringLiteral("textLabel3_3"));

        gridLayout1->addWidget(textLabel3_3, 1, 0, 1, 1);

        minimum_y = new QLabel(groupBox_2);
        minimum_y->setObjectName(QStringLiteral("minimum_y"));

        gridLayout1->addWidget(minimum_y, 1, 1, 1, 1);

        KCB_y = new KComboBox(groupBox_2);
        KCB_y->addItem(QString());
        KCB_y->addItem(QString());
        KCB_y->addItem(QString());
        KCB_y->addItem(QString());
        KCB_y->addItem(QString());
        KCB_y->addItem(QString());
        KCB_y->addItem(QString());
        KCB_y->setObjectName(QStringLiteral("KCB_y"));

        gridLayout1->addWidget(KCB_y, 0, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        plotwidget = new KPlotWidget(PlotSetupWidget);
        plotwidget->setObjectName(QStringLiteral("plotwidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plotwidget->sizePolicy().hasHeightForWidth());
        plotwidget->setSizePolicy(sizePolicy2);
        plotwidget->setMinimumSize(QSize(150, 150));

        gridLayout_2->addWidget(plotwidget, 1, 0, 1, 3);

#ifndef UI_QT_NO_SHORTCUT
        label->setBuddy(comboElementLabels);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(KCB_x, KCB_y);
        QWidget::setTabOrder(KCB_y, from);
        QWidget::setTabOrder(from, to);
        QWidget::setTabOrder(to, full);
        QWidget::setTabOrder(full, comboElementLabels);
        QWidget::setTabOrder(comboElementLabels, comboElementType);

        retranslateUi(PlotSetupWidget);

        KCB_y->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PlotSetupWidget);
    } // setupUi

    void retranslateUi(QWidget *PlotSetupWidget)
    {
        groupBox->setTitle(tr2i18n("X-Axis", nullptr));
        textLabel1_2->setText(tr2i18n("Average value:", nullptr));
        minimum_x->setText(QString());
        av_x->setText(QString());
        KCB_x->setItemText(0, tr2i18n("Atomic Number", nullptr));
        KCB_x->setItemText(1, tr2i18n("Atomic Mass", nullptr));
        KCB_x->setItemText(2, tr2i18n("Electronegativity", nullptr));
        KCB_x->setItemText(3, tr2i18n("Melting Point", nullptr));
        KCB_x->setItemText(4, tr2i18n("Boiling Point", nullptr));
        KCB_x->setItemText(5, tr2i18n("Atomic Radius", nullptr));
        KCB_x->setItemText(6, tr2i18n("Covalent Radius", nullptr));

#ifndef UI_QT_NO_WHATSTHIS
        KCB_x->setWhatsThis(tr2i18n("Here you can define what you want to plot", nullptr));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(tr2i18n("Maximum value:", nullptr));
        maximum_x->setText(QString());
        textLabel3_2->setText(tr2i18n("Minimum value:", nullptr));
        label->setText(tr2i18n("Display:", nullptr));
        label_4->setText(tr2i18n("Element Type:", nullptr));
        textLabel3->setText(tr2i18n("First element:", nullptr));
        textLabel4->setText(tr2i18n("Last element:", nullptr));
        full->setText(tr2i18n("All elements", nullptr));
        comboElementType->setItemText(0, tr2i18n("All elements", nullptr));
        comboElementType->setItemText(1, tr2i18n("Metals", nullptr));
        comboElementType->setItemText(2, tr2i18n("Non-Metals / Metalloids", nullptr));
        comboElementType->setItemText(3, tr2i18n("s block elements", nullptr));
        comboElementType->setItemText(4, tr2i18n("p block elements", nullptr));
        comboElementType->setItemText(5, tr2i18n("d block elements", nullptr));
        comboElementType->setItemText(6, tr2i18n("f block elements", nullptr));
        comboElementType->setItemText(7, tr2i18n("Noble gases", nullptr));
        comboElementType->setItemText(8, tr2i18n("Alkalie metals", nullptr));
        comboElementType->setItemText(9, tr2i18n("Alkaline earth metals", nullptr));
        comboElementType->setItemText(10, tr2i18n("Lanthanides", nullptr));
        comboElementType->setItemText(11, tr2i18n("Actinides", nullptr));
        comboElementType->setItemText(12, tr2i18n("Radio-active elements", nullptr));

        comboElementLabels->setItemText(0, tr2i18n("No Labels", nullptr));
        comboElementLabels->setItemText(1, tr2i18n("Element Names", nullptr));
        comboElementLabels->setItemText(2, tr2i18n("Element Symbols", nullptr));

        groupBox_2->setTitle(tr2i18n("Y-Axis", nullptr));
        av_y->setText(QString());
        textLabel1_3->setText(tr2i18n("Average value:", nullptr));
        maximum_y->setText(QString());
        textLabel2_2->setText(tr2i18n("Maximum value:", nullptr));
        textLabel3_3->setText(tr2i18n("Minimum value:", nullptr));
        minimum_y->setText(QString());
        KCB_y->setItemText(0, tr2i18n("Atomic Number", nullptr));
        KCB_y->setItemText(1, tr2i18n("Atomic Mass", nullptr));
        KCB_y->setItemText(2, tr2i18n("Electronegativity", nullptr));
        KCB_y->setItemText(3, tr2i18n("Melting Point", nullptr));
        KCB_y->setItemText(4, tr2i18n("Boiling Point", nullptr));
        KCB_y->setItemText(5, tr2i18n("Atomic Radius", nullptr));
        KCB_y->setItemText(6, tr2i18n("Covalent Radius", nullptr));

#ifndef UI_QT_NO_WHATSTHIS
        KCB_y->setWhatsThis(tr2i18n("Here you can define what you want to plot", nullptr));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(PlotSetupWidget);
    } // retranslateUi

};

namespace Ui {
    class PlotSetupWidget: public Ui_PlotSetupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PLOTSETUPWIDGET_H

