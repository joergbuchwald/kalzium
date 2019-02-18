#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'concCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONCCALCULATOR_H
#define UI_CONCCALCULATOR_H

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

class Ui_concCalculator
{
public:
    QVBoxLayout *verticalLayout_2;
    KTextEdit *ktextedit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_36;
    QDoubleSpinBox *amtSolute;
    KComboBox *amtSltType;
    QLabel *label_39;
    QDoubleSpinBox *molarMass;
    QLabel *label_40;
    QDoubleSpinBox *eqtMass;
    QLabel *label_52;
    QDoubleSpinBox *densitySolute;
    QLabel *label_31;
    QDoubleSpinBox *amtSolvent;
    KComboBox *amtSlvtType;
    QLabel *label_42;
    QDoubleSpinBox *molarMassSolvent;
    QLabel *label_55;
    QDoubleSpinBox *densitySolvent;
    QLabel *label_41;
    QDoubleSpinBox *concentration;
    QLabel *label_37;
    KComboBox *mode;
    QSpacerItem *horizontalSpacer;
    KComboBox *densSlvt_unit;
    KComboBox *conc_unit;
    KComboBox *amtSlvt_unit;
    QLabel *label_19;
    KComboBox *densSlt_unit;
    KComboBox *amtSlt_unit;
    QLabel *label_17;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_2;
    QLabel *error;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *reset;

    void setupUi(QWidget *concCalculator)
    {
        if (concCalculator->objectName().isEmpty())
            concCalculator->setObjectName(QStringLiteral("concCalculator"));
        concCalculator->setEnabled(true);
        concCalculator->resize(706, 465);
        verticalLayout_2 = new QVBoxLayout(concCalculator);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ktextedit = new KTextEdit(concCalculator);
        ktextedit->setObjectName(QStringLiteral("ktextedit"));
        ktextedit->setReadOnly(true);

        verticalLayout_2->addWidget(ktextedit);

        groupBox = new QGroupBox(concCalculator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_36, 1, 0, 1, 1);

        amtSolute = new QDoubleSpinBox(groupBox);
        amtSolute->setObjectName(QStringLiteral("amtSolute"));
        amtSolute->setDecimals(4);
        amtSolute->setMaximum(1e+09);

        gridLayout->addWidget(amtSolute, 1, 1, 1, 1);

        amtSltType = new KComboBox(groupBox);
        amtSltType->setObjectName(QStringLiteral("amtSltType"));

        gridLayout->addWidget(amtSltType, 1, 3, 1, 1);

        label_39 = new QLabel(groupBox);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_39, 2, 0, 1, 1);

        molarMass = new QDoubleSpinBox(groupBox);
        molarMass->setObjectName(QStringLiteral("molarMass"));
        molarMass->setDecimals(4);
        molarMass->setMaximum(1e+09);

        gridLayout->addWidget(molarMass, 2, 1, 1, 1);

        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_40, 3, 0, 1, 1);

        eqtMass = new QDoubleSpinBox(groupBox);
        eqtMass->setObjectName(QStringLiteral("eqtMass"));
        eqtMass->setDecimals(4);
        eqtMass->setMaximum(1e+09);

        gridLayout->addWidget(eqtMass, 3, 1, 1, 1);

        label_52 = new QLabel(groupBox);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_52, 4, 0, 1, 1);

        densitySolute = new QDoubleSpinBox(groupBox);
        densitySolute->setObjectName(QStringLiteral("densitySolute"));
        densitySolute->setDecimals(4);
        densitySolute->setMaximum(1e+09);

        gridLayout->addWidget(densitySolute, 4, 1, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_31, 5, 0, 1, 1);

        amtSolvent = new QDoubleSpinBox(groupBox);
        amtSolvent->setObjectName(QStringLiteral("amtSolvent"));
        amtSolvent->setDecimals(4);
        amtSolvent->setMaximum(1e+09);

        gridLayout->addWidget(amtSolvent, 5, 1, 1, 1);

        amtSlvtType = new KComboBox(groupBox);
        amtSlvtType->setObjectName(QStringLiteral("amtSlvtType"));

        gridLayout->addWidget(amtSlvtType, 5, 3, 1, 1);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_42, 6, 0, 1, 1);

        molarMassSolvent = new QDoubleSpinBox(groupBox);
        molarMassSolvent->setObjectName(QStringLiteral("molarMassSolvent"));
        molarMassSolvent->setDecimals(4);
        molarMassSolvent->setMaximum(1e+09);

        gridLayout->addWidget(molarMassSolvent, 6, 1, 1, 1);

        label_55 = new QLabel(groupBox);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_55, 7, 0, 1, 1);

        densitySolvent = new QDoubleSpinBox(groupBox);
        densitySolvent->setObjectName(QStringLiteral("densitySolvent"));
        densitySolvent->setDecimals(4);
        densitySolvent->setMaximum(1e+09);

        gridLayout->addWidget(densitySolvent, 7, 1, 1, 1);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_41, 8, 0, 1, 1);

        concentration = new QDoubleSpinBox(groupBox);
        concentration->setObjectName(QStringLiteral("concentration"));
        concentration->setDecimals(4);
        concentration->setMaximum(1e+09);

        gridLayout->addWidget(concentration, 8, 1, 1, 1);

        label_37 = new QLabel(groupBox);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_37, 0, 0, 1, 1);

        mode = new KComboBox(groupBox);
        mode->setObjectName(QStringLiteral("mode"));

        gridLayout->addWidget(mode, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 5, 1, 1);

        densSlvt_unit = new KComboBox(groupBox);
        densSlvt_unit->setObjectName(QStringLiteral("densSlvt_unit"));

        gridLayout->addWidget(densSlvt_unit, 7, 2, 1, 1);

        conc_unit = new KComboBox(groupBox);
        conc_unit->setObjectName(QStringLiteral("conc_unit"));

        gridLayout->addWidget(conc_unit, 8, 2, 1, 1);

        amtSlvt_unit = new KComboBox(groupBox);
        amtSlvt_unit->setObjectName(QStringLiteral("amtSlvt_unit"));

        gridLayout->addWidget(amtSlvt_unit, 5, 2, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 6, 2, 1, 1);

        densSlt_unit = new KComboBox(groupBox);
        densSlt_unit->setObjectName(QStringLiteral("densSlt_unit"));

        gridLayout->addWidget(densSlt_unit, 4, 2, 1, 1);

        amtSlt_unit = new KComboBox(groupBox);
        amtSlt_unit->setObjectName(QStringLiteral("amtSlt_unit"));

        gridLayout->addWidget(amtSlt_unit, 1, 2, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 2, 2, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 6, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        error = new QLabel(concCalculator);
        error->setObjectName(QStringLiteral("error"));

        verticalLayout_2->addWidget(error);

        verticalSpacer_4 = new QSpacerItem(20, 232, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        reset = new QPushButton(concCalculator);
        reset->setObjectName(QStringLiteral("reset"));

        horizontalLayout_4->addWidget(reset);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(concCalculator);

        mode->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(concCalculator);
    } // setupUi

    void retranslateUi(QWidget *concCalculator)
    {
        ktextedit->setHtml(tr2i18n("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Some of the following data is not necessary. For instance, if you specify the amount of solute in moles, you do not have to specify the molar mass of the solute.</span></p></body></html>", nullptr));
        groupBox->setTitle(tr2i18n("Data", nullptr));
        label_36->setText(tr2i18n("<big><b>Amount of solute:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        amtSolute->setToolTip(tr2i18n("<big>Specify the amount of solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        amtSolute->setWhatsThis(tr2i18n("This is the box used to specify the amount of solute in the solution.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        amtSltType->setToolTip(tr2i18n("The method by which you want to specify the amount of solute", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        amtSltType->setWhatsThis(tr2i18n("This box is used to change the mode in which the amount of solute is specified, i.e. mass, moles or volume.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_39->setText(tr2i18n("<big><b>Molar mass of solute:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        molarMass->setToolTip(tr2i18n("<big>Specify the molar mass of the solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        molarMass->setWhatsThis(tr2i18n("This box is used to specify the molar mass of the substance.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_40->setText(tr2i18n("<big><b>Equivalent mass of solute:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        eqtMass->setToolTip(tr2i18n("<big>Specify the equivalent mass of the solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        eqtMass->setWhatsThis(tr2i18n("This box is used to specify the equivalent mass of the solute. This is required only if concentration in terms of normality is involved.\n"
"Normality = Number of Equivalents / liter of solution", nullptr));
#endif // QT_NO_WHATSTHIS
        label_52->setText(tr2i18n("<big><b>Density of solute:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        densitySolute->setToolTip(tr2i18n("<big>Specify the density of the solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        densitySolute->setWhatsThis(tr2i18n("This box is used to specify the value of the density of the solute. This is required only if you are specifying the amount of solute in terms of volume.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_31->setText(tr2i18n("<big><b>Amount of Solvent:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        amtSolvent->setToolTip(tr2i18n("<big>Specify the amount of solvent</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        amtSolvent->setWhatsThis(tr2i18n("This box is used to specify the amount of solvent in the solution.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        amtSlvtType->setToolTip(tr2i18n("<big>The method by which you want to specify volume</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        amtSlvtType->setWhatsThis(tr2i18n("This box is used to change the mode in which amount of solvent is specified, i.e. mass, moles or volume.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_42->setText(tr2i18n("<big><b>Molar mass of solvent:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        molarMassSolvent->setToolTip(tr2i18n("<big>Specify the molar mass of the solvent</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        molarMassSolvent->setWhatsThis(tr2i18n("This box is used to specify the molar mass of the solvent.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_55->setText(tr2i18n("<big><b>Density of Solvent:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        densitySolvent->setToolTip(tr2i18n("<big>Specify the density of the solvent</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        densitySolvent->setWhatsThis(tr2i18n("This box is used to specify the density of the solution and is required only if the amount of solution is specified/needed in terms of mass.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_41->setText(tr2i18n("<big><b>Concentration:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        concentration->setToolTip(tr2i18n("<big>Specify the concentration of the solution</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        concentration->setWhatsThis(tr2i18n("This box is used to specify the concentration of the solution in respective units to the right.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_37->setText(tr2i18n("<big><b>Calculate:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        mode->setToolTip(tr2i18n("<big>Specify what you want to calculate</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mode->setWhatsThis(tr2i18n("This is the list of quantities that you can calculate. Choose one of the quantities and specify the other required values to calculate it.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        densSlvt_unit->setToolTip(tr2i18n("Specify the units for density of solvent", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        conc_unit->setToolTip(tr2i18n("<big>Specify the unit/method for specifying concentration</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        amtSlvt_unit->setToolTip(tr2i18n("<big>The units for amount of solvent</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        amtSlvt_unit->setWhatsThis(tr2i18n("This box is used to specify the units for the amount of solvent in the solution.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        label_19->setToolTip(tr2i18n("<big>The units for molar mass of solvent</big>", nullptr));
#endif // QT_NO_TOOLTIP
        label_19->setText(tr2i18n("(g/mole)", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        densSlt_unit->setToolTip(tr2i18n("<big>Specify the units of density</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        densSlt_unit->setWhatsThis(tr2i18n("This box is used to specify the units of the density of the solute. This is required only if you are specifying the amount of solute in terms of volume.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        amtSlt_unit->setToolTip(tr2i18n("<big>Specify the units for the amount of solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        amtSlt_unit->setWhatsThis(tr2i18n("This box is used to specify the units for the amount of solute in the solution.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        label_17->setToolTip(tr2i18n("<big>Units for molar mass of solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
        label_17->setText(tr2i18n("(g/mol)", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        label_18->setToolTip(tr2i18n("<big>Units for equivalent mass of solute</big>", nullptr));
#endif // QT_NO_TOOLTIP
        label_18->setText(tr2i18n("(g/mole)", nullptr));
        error->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        reset->setToolTip(tr2i18n("<big>Reset all values to initial values</big>", nullptr));
#endif // QT_NO_TOOLTIP
        reset->setText(tr2i18n("Reset", nullptr));
        Q_UNUSED(concCalculator);
    } // retranslateUi

};

namespace Ui {
    class concCalculator: public Ui_concCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONCCALCULATOR_H

