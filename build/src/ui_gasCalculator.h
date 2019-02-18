#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'gasCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GASCALCULATOR_H
#define UI_GASCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcombobox.h"
#include "ktextedit.h"

QT_BEGIN_NAMESPACE

class Ui_gasCalculator
{
public:
    QVBoxLayout *verticalLayout_2;
    KTextEdit *ktextedit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *molarMass;
    QLabel *label_25;
    QDoubleSpinBox *moles;
    QLabel *label_24;
    QDoubleSpinBox *mass;
    KComboBox *mass_unit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_27;
    QDoubleSpinBox *pressure;
    KComboBox *pressure_unit;
    QLabel *label_29;
    QDoubleSpinBox *temp;
    KComboBox *temp_unit;
    QLabel *label_26;
    QDoubleSpinBox *volume;
    KComboBox *volume_unit;
    QLabel *label_3;
    KComboBox *mode;
    QLabel *label_4;
    QGroupBox *non_ideal;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_30;
    QLabel *label_28;
    QDoubleSpinBox *b;
    QDoubleSpinBox *a;
    QHBoxLayout *horizontalLayout;
    KComboBox *b_unit;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLabel *result;
    QLabel *error;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *reset;

    void setupUi(QWidget *gasCalculator)
    {
        if (gasCalculator->objectName().isEmpty())
            gasCalculator->setObjectName(QStringLiteral("gasCalculator"));
        gasCalculator->resize(626, 526);
        verticalLayout_2 = new QVBoxLayout(gasCalculator);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ktextedit = new KTextEdit(gasCalculator);
        ktextedit->setObjectName(QStringLiteral("ktextedit"));
        ktextedit->setMaximumSize(QSize(16777215, 150));
        ktextedit->setReadOnly(true);

        verticalLayout_2->addWidget(ktextedit);

        groupBox = new QGroupBox(gasCalculator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        molarMass = new QDoubleSpinBox(groupBox);
        molarMass->setObjectName(QStringLiteral("molarMass"));
        molarMass->setDecimals(4);
        molarMass->setMaximum(1e+09);

        gridLayout->addWidget(molarMass, 1, 1, 1, 1);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_25, 2, 0, 1, 1);

        moles = new QDoubleSpinBox(groupBox);
        moles->setObjectName(QStringLiteral("moles"));
        moles->setDecimals(4);
        moles->setMaximum(1e+09);

        gridLayout->addWidget(moles, 2, 1, 1, 1);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 3, 0, 1, 1);

        mass = new QDoubleSpinBox(groupBox);
        mass->setObjectName(QStringLiteral("mass"));
        mass->setDecimals(4);
        mass->setMaximum(1e+09);

        gridLayout->addWidget(mass, 3, 1, 1, 1);

        mass_unit = new KComboBox(groupBox);
        mass_unit->setObjectName(QStringLiteral("mass_unit"));

        gridLayout->addWidget(mass_unit, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(175, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 3, 1, 1);

        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_27, 4, 0, 1, 1);

        pressure = new QDoubleSpinBox(groupBox);
        pressure->setObjectName(QStringLiteral("pressure"));
        pressure->setDecimals(4);
        pressure->setMaximum(1e+09);

        gridLayout->addWidget(pressure, 4, 1, 1, 1);

        pressure_unit = new KComboBox(groupBox);
        pressure_unit->setObjectName(QStringLiteral("pressure_unit"));

        gridLayout->addWidget(pressure_unit, 4, 2, 1, 1);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_29, 5, 0, 1, 1);

        temp = new QDoubleSpinBox(groupBox);
        temp->setObjectName(QStringLiteral("temp"));
        temp->setDecimals(4);
        temp->setMaximum(1e+09);

        gridLayout->addWidget(temp, 5, 1, 1, 1);

        temp_unit = new KComboBox(groupBox);
        temp_unit->setObjectName(QStringLiteral("temp_unit"));

        gridLayout->addWidget(temp_unit, 5, 2, 1, 1);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 6, 0, 1, 1);

        volume = new QDoubleSpinBox(groupBox);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setReadOnly(true);
        volume->setDecimals(4);
        volume->setMaximum(1e+09);

        gridLayout->addWidget(volume, 6, 1, 1, 1);

        volume_unit = new KComboBox(groupBox);
        volume_unit->setObjectName(QStringLiteral("volume_unit"));
        volume_unit->setEnabled(true);

        gridLayout->addWidget(volume_unit, 6, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mode = new KComboBox(groupBox);
        mode->setObjectName(QStringLiteral("mode"));

        gridLayout->addWidget(mode, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        non_ideal = new QGroupBox(gasCalculator);
        non_ideal->setObjectName(QStringLiteral("non_ideal"));
        verticalLayout = new QVBoxLayout(non_ideal);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_30 = new QLabel(non_ideal);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_30, 0, 0, 1, 1);

        label_28 = new QLabel(non_ideal);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_28, 1, 0, 1, 1);

        b = new QDoubleSpinBox(non_ideal);
        b->setObjectName(QStringLiteral("b"));
        b->setDecimals(4);
        b->setMaximum(1e+09);

        gridLayout_4->addWidget(b, 0, 1, 1, 1);

        a = new QDoubleSpinBox(non_ideal);
        a->setObjectName(QStringLiteral("a"));
        a->setDecimals(4);
        a->setMaximum(1e+09);

        gridLayout_4->addWidget(a, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        b_unit = new KComboBox(non_ideal);
        b_unit->setObjectName(QStringLiteral("b_unit"));

        horizontalLayout->addWidget(b_unit);

        label = new QLabel(non_ideal);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        gridLayout_4->addLayout(horizontalLayout, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_5 = new QLabel(non_ideal);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_4->addWidget(label_5, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        verticalLayout_2->addWidget(non_ideal);

        result = new QLabel(gasCalculator);
        result->setObjectName(QStringLiteral("result"));

        verticalLayout_2->addWidget(result);

        error = new QLabel(gasCalculator);
        error->setObjectName(QStringLiteral("error"));

        verticalLayout_2->addWidget(error);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_22);

        reset = new QPushButton(gasCalculator);
        reset->setObjectName(QStringLiteral("reset"));

        horizontalLayout_12->addWidget(reset);


        verticalLayout_2->addLayout(horizontalLayout_12);


        retranslateUi(gasCalculator);

        mode->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(gasCalculator);
    } // setupUi

    void retranslateUi(QWidget *gasCalculator)
    {
        ktextedit->setHtml(tr2i18n("<big><b>Change the quantities and observe the other quantities change dynamically.<br />Mass and moles are directly dependent for a given gas.</b></big>", nullptr));
        groupBox->setTitle(tr2i18n("Data", nullptr));
        label_2->setText(tr2i18n("<big><b>Molar mass of the gas:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        molarMass->setToolTip(tr2i18n("<big>Specify the molar mass of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        molarMass->setWhatsThis(tr2i18n("This box can be used to specify the molar mass of the gas, e.g. 2 for Hydrogen gas.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_25->setText(tr2i18n("<big><b>Moles:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        moles->setToolTip(tr2i18n("<big>Specify the number of moles of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        moles->setWhatsThis(tr2i18n("This box can be used to specify the number of moles of the gas.\n"
"Moles = mass / molar mass", nullptr));
#endif // QT_NO_WHATSTHIS
        label_24->setText(tr2i18n("<big><b>Mass:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        mass->setToolTip(tr2i18n("<big>Specify the Mass of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mass->setWhatsThis(tr2i18n("This box can be used to specify the mass of the gas.\n"
"Mass = moles * molar mass", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        mass_unit->setToolTip(tr2i18n("<big>Specify the unit of mass of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mass_unit->setWhatsThis(tr2i18n("This box is used to change the units of mass.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_27->setText(tr2i18n("<big><b>Pressure:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        pressure->setToolTip(tr2i18n("<big>Specify the Pressure of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        pressure->setWhatsThis(tr2i18n("This box can be used to change the pressure of the gas.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        pressure_unit->setToolTip(tr2i18n("<big>Specify the units for pressure of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        pressure_unit->setWhatsThis(tr2i18n("This box can be used to specify the units of pressure, e.g. atmospheres, bars, etc.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_29->setText(tr2i18n("<big><b>Temperature:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        temp->setToolTip(tr2i18n("<big>Specify the temperature of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        temp->setWhatsThis(tr2i18n("This box can be used to specify the temperature of the gas.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        temp_unit->setToolTip(tr2i18n("<big>Specify the units for the temperature of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        temp_unit->setWhatsThis(tr2i18n("This box can be used to specify the units of temperature, e.g. Kelvin, Celsius, etc.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_26->setText(tr2i18n("<big><b>Volume:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        volume->setToolTip(tr2i18n("<big>Specify the volume of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        volume->setWhatsThis(tr2i18n("This box can be used to specify the volume of the gas.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        volume_unit->setToolTip(tr2i18n("<big>Specify the units for volume of the gas</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        volume_unit->setWhatsThis(tr2i18n("This box can be used to change the units of volume, e.g. liters.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_3->setText(tr2i18n("<big><b>Calculate:</b></big>", nullptr));
        label_4->setText(tr2i18n("(g/mol)", nullptr));
        non_ideal->setTitle(tr2i18n("Data for non-ideal gases", nullptr));
        label_30->setText(tr2i18n("<big><b>Van der Waals constant 'b':</b></big>", nullptr));
        label_28->setText(tr2i18n("<big><b>Van der Waals constant 'a':</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        b->setToolTip(tr2i18n("Specify the units of the van der Waals constant 'b'", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        b->setWhatsThis(tr2i18n("This box can be used to specify the van der Waals constant 'b' for the gas. This is required only for a real gas. It can be marked as 0.0 for an ideal gas.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        a->setToolTip(tr2i18n("Specify the units of the van der Waals constant 'a'", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        a->setWhatsThis(tr2i18n("This box can be used to specify the van der Waals constant 'a' for the gas. This is required only for a real gas. It can be marked as 0.0 for an ideal gas.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        b_unit->setToolTip(tr2i18n("The units of the van der Waals constant 'b'", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        b_unit->setWhatsThis(tr2i18n("This can be used to specify the units of the van der Waals constant 'b'.", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(tr2i18n("per mole", nullptr));
        label_5->setText(tr2i18n("liter^2 atmosphere/mol^2", nullptr));
        result->setText(QString());
        error->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        reset->setToolTip(tr2i18n("Click to reset all values to initial values", nullptr));
#endif // QT_NO_TOOLTIP
        reset->setText(tr2i18n("Reset", nullptr));
        Q_UNUSED(gasCalculator);
    } // retranslateUi

};

namespace Ui {
    class gasCalculator: public Ui_gasCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GASCALCULATOR_H

