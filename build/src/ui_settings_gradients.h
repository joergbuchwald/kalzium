#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'settings_gradients.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_GRADIENTS_H
#define UI_SETTINGS_GRADIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_setupGradients
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *vboxLayout1;
    QCheckBox *kcfg_LogarithmicCovalentRadiusGradient;
    QCheckBox *kcfg_LogarithmicVanDerWaalsRadiusGradient;
    QCheckBox *kcfg_LogarithmicMassGradient;
    QCheckBox *kcfg_LogarithmicBoilingPointGradient;
    QCheckBox *kcfg_LogarithmicMeltingPointGradient;
    QCheckBox *kcfg_LogarithmicElectronegativityGradient;
    QCheckBox *kcfg_LogarithmicDiscoverydateGradient;
    QCheckBox *kcfg_LogarithmicElectronaffinityGradient;
    QCheckBox *kcfg_LogarithmicIonizationGradient;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    KColorButton *kcfg_MaxColor;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    KColorButton *kcfg_MinColor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *setupGradients)
    {
        if (setupGradients->objectName().isEmpty())
            setupGradients->setObjectName(QStringLiteral("setupGradients"));
        setupGradients->resize(650, 426);
        vboxLayout = new QVBoxLayout(setupGradients);
#ifndef UI_Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(setupGradients);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(318, 16777215));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        horizontalLayout_3->addWidget(label);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        kcfg_LogarithmicCovalentRadiusGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicCovalentRadiusGradient->setObjectName(QStringLiteral("kcfg_LogarithmicCovalentRadiusGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicCovalentRadiusGradient);

        kcfg_LogarithmicVanDerWaalsRadiusGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicVanDerWaalsRadiusGradient->setObjectName(QStringLiteral("kcfg_LogarithmicVanDerWaalsRadiusGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicVanDerWaalsRadiusGradient);

        kcfg_LogarithmicMassGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicMassGradient->setObjectName(QStringLiteral("kcfg_LogarithmicMassGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicMassGradient);

        kcfg_LogarithmicBoilingPointGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicBoilingPointGradient->setObjectName(QStringLiteral("kcfg_LogarithmicBoilingPointGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicBoilingPointGradient);

        kcfg_LogarithmicMeltingPointGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicMeltingPointGradient->setObjectName(QStringLiteral("kcfg_LogarithmicMeltingPointGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicMeltingPointGradient);

        kcfg_LogarithmicElectronegativityGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicElectronegativityGradient->setObjectName(QStringLiteral("kcfg_LogarithmicElectronegativityGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicElectronegativityGradient);

        kcfg_LogarithmicDiscoverydateGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicDiscoverydateGradient->setObjectName(QStringLiteral("kcfg_LogarithmicDiscoverydateGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicDiscoverydateGradient);

        kcfg_LogarithmicElectronaffinityGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicElectronaffinityGradient->setObjectName(QStringLiteral("kcfg_LogarithmicElectronaffinityGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicElectronaffinityGradient);

        kcfg_LogarithmicIonizationGradient = new QCheckBox(setupGradients);
        kcfg_LogarithmicIonizationGradient->setObjectName(QStringLiteral("kcfg_LogarithmicIonizationGradient"));

        vboxLayout1->addWidget(kcfg_LogarithmicIonizationGradient);


        horizontalLayout_3->addLayout(vboxLayout1);


        vboxLayout->addLayout(horizontalLayout_3);

        line = new QFrame(setupGradients);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(setupGradients);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        kcfg_MaxColor = new KColorButton(setupGradients);
        kcfg_MaxColor->setObjectName(QStringLiteral("kcfg_MaxColor"));

        horizontalLayout_2->addWidget(kcfg_MaxColor);


        vboxLayout->addLayout(horizontalLayout_2);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(setupGradients);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        kcfg_MinColor = new KColorButton(setupGradients);
        kcfg_MinColor->setObjectName(QStringLiteral("kcfg_MinColor"));

        horizontalLayout->addWidget(kcfg_MinColor);


        vboxLayout2->addLayout(horizontalLayout);


        vboxLayout->addLayout(vboxLayout2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        retranslateUi(setupGradients);

        QMetaObject::connectSlotsByName(setupGradients);
    } // setupUi

    void retranslateUi(QWidget *setupGradients)
    {
        label->setStyleSheet(QString());
        label->setText(tr2i18n("Instead of using a linear gradient to display the given property of an element in the periodic table, Kalzium can also use a logarithmic gradient.\n"
"\n"
"Check the properties you want to have displayed with a logarithmic gradient.", nullptr));
        kcfg_LogarithmicCovalentRadiusGradient->setText(tr2i18n("Covalent Radius", nullptr));
        kcfg_LogarithmicVanDerWaalsRadiusGradient->setText(tr2i18n("Van der Waals Radius", nullptr));
        kcfg_LogarithmicMassGradient->setText(tr2i18n("Mass", nullptr));
        kcfg_LogarithmicBoilingPointGradient->setText(tr2i18n("Boiling Point", nullptr));
        kcfg_LogarithmicMeltingPointGradient->setText(tr2i18n("Melting Point", nullptr));
        kcfg_LogarithmicElectronegativityGradient->setText(tr2i18n("Electronegativity", nullptr));
        kcfg_LogarithmicDiscoverydateGradient->setText(tr2i18n("Discovery Date", nullptr));
        kcfg_LogarithmicElectronaffinityGradient->setText(tr2i18n("Electronaffinity", nullptr));
        kcfg_LogarithmicIonizationGradient->setText(tr2i18n("Ionization", nullptr));
        label_3->setText(tr2i18n("Maximal Value Color:", nullptr));
        label_2->setText(tr2i18n("Minimal Value Color:", nullptr));
        Q_UNUSED(setupGradients);
    } // retranslateUi

};

namespace Ui {
    class setupGradients: public Ui_setupGradients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGS_GRADIENTS_H

