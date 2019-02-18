#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'settings_calc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_CALC_H
#define UI_SETTINGS_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setupCalc
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *nuclear;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *kcfg_mass;
    QSpacerItem *verticalSpacer_4;
    QWidget *gas;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *kcfg_ideal;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *kcfg_alias;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *kcfg_soluteMass;
    QCheckBox *kcfg_solventVolume;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *setupCalc)
    {
        if (setupCalc->objectName().isEmpty())
            setupCalc->setObjectName(QStringLiteral("setupCalc"));
        setupCalc->resize(575, 221);
        verticalLayout = new QVBoxLayout(setupCalc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(setupCalc);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        nuclear = new QWidget();
        nuclear->setObjectName(QStringLiteral("nuclear"));
        verticalLayout_5 = new QVBoxLayout(nuclear);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        kcfg_mass = new QCheckBox(nuclear);
        kcfg_mass->setObjectName(QStringLiteral("kcfg_mass"));

        verticalLayout_5->addWidget(kcfg_mass);

        verticalSpacer_4 = new QSpacerItem(20, 171, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        tabWidget->addTab(nuclear, QString());
        gas = new QWidget();
        gas->setObjectName(QStringLiteral("gas"));
        verticalLayout_2 = new QVBoxLayout(gas);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        kcfg_ideal = new QCheckBox(gas);
        kcfg_ideal->setObjectName(QStringLiteral("kcfg_ideal"));
        kcfg_ideal->setChecked(true);

        horizontalLayout->addWidget(kcfg_ideal);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 142, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(gas, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        kcfg_alias = new QCheckBox(tab_2);
        kcfg_alias->setObjectName(QStringLiteral("kcfg_alias"));

        verticalLayout_4->addWidget(kcfg_alias);

        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_4->addWidget(checkBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        kcfg_soluteMass = new QCheckBox(tab_3);
        kcfg_soluteMass->setObjectName(QStringLiteral("kcfg_soluteMass"));

        verticalLayout_3->addWidget(kcfg_soluteMass);

        kcfg_solventVolume = new QCheckBox(tab_3);
        kcfg_solventVolume->setObjectName(QStringLiteral("kcfg_solventVolume"));

        verticalLayout_3->addWidget(kcfg_solventVolume);

        verticalSpacer_2 = new QSpacerItem(20, 142, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(setupCalc);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(setupCalc);
    } // setupUi

    void retranslateUi(QWidget *setupCalc)
    {
#ifndef UI_QT_NO_TOOLTIP
        tabWidget->setToolTip(tr2i18n("<big>The settings of the molecular concentration calculator</big>", nullptr));
#endif // QT_NO_TOOLTIP
        kcfg_mass->setText(tr2i18n("Amount is always specified in term of mass", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(nuclear), tr2i18n("Nuclear Calculator", nullptr));
        kcfg_ideal->setText(tr2i18n("Assume Gas is ideal (i.e. do not show Van der Waals co-efficients)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(gas), tr2i18n("Gas Calculator", nullptr));
        kcfg_alias->setText(tr2i18n("Show details such as aliases", nullptr));
        checkBox->setText(tr2i18n("Show the add alias tab", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Mass Calculator", nullptr));
        kcfg_soluteMass->setText(tr2i18n("Amount of solute is always specified in terms of mass", nullptr));
        kcfg_solventVolume->setText(tr2i18n("Amount of solvent is always specified in terms of volume", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), tr2i18n("Concentration Calculator", nullptr));
        Q_UNUSED(setupCalc);
    } // retranslateUi

};

namespace Ui {
    class setupCalc: public Ui_setupCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGS_CALC_H

