#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'nuclearCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUCLEARCALCULATOR_H
#define UI_NUCLEARCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcombobox.h"
#include "ktextedit.h"

QT_BEGIN_NAMESPACE

class Ui_nuclearCalculator
{
public:
    QVBoxLayout *verticalLayout_2;
    KTextEdit *ktextedit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_11;
    KComboBox *element;
    QLabel *label_12;
    KComboBox *isotope;
    QLabel *label_14;
    QDoubleSpinBox *halfLife;
    KComboBox *halfLife_unit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *mass;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_37;
    KComboBox *mode;
    QLabel *label_69;
    QDoubleSpinBox *initAmt;
    QLabel *label_72;
    QDoubleSpinBox *finalAmt;
    QLabel *label_19;
    QDoubleSpinBox *time;
    KComboBox *initAmtType;
    KComboBox *finalAmtType;
    QSpacerItem *horizontalSpacer_3;
    KComboBox *initAmt_unit;
    KComboBox *finalAmt_unit;
    KComboBox *time_unit;
    QFrame *time_in_halfLives;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QSlider *slider;
    QLabel *numHalfLives;
    QSpacerItem *horizontalSpacer;
    QLabel *error;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *_2;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *reset;

    void setupUi(QWidget *nuclearCalculator)
    {
        if (nuclearCalculator->objectName().isEmpty())
            nuclearCalculator->setObjectName(QStringLiteral("nuclearCalculator"));
        nuclearCalculator->resize(492, 516);
        verticalLayout_2 = new QVBoxLayout(nuclearCalculator);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ktextedit = new KTextEdit(nuclearCalculator);
        ktextedit->setObjectName(QStringLiteral("ktextedit"));
        ktextedit->setMaximumSize(QSize(16777215, 100));
        ktextedit->setReadOnly(true);

        verticalLayout_2->addWidget(ktextedit);

        groupBox = new QGroupBox(nuclearCalculator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        element = new KComboBox(groupBox);
        element->setObjectName(QStringLiteral("element"));

        gridLayout->addWidget(element, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        isotope = new KComboBox(groupBox);
        isotope->setObjectName(QStringLiteral("isotope"));

        gridLayout->addWidget(isotope, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        halfLife = new QDoubleSpinBox(groupBox);
        halfLife->setObjectName(QStringLiteral("halfLife"));
        halfLife->setDecimals(4);
        halfLife->setMaximum(1e+09);

        gridLayout->addWidget(halfLife, 2, 1, 1, 1);

        halfLife_unit = new KComboBox(groupBox);
        halfLife_unit->addItem(QString());
        halfLife_unit->addItem(QString());
        halfLife_unit->addItem(QString());
        halfLife_unit->addItem(QString());
        halfLife_unit->addItem(QString());
        halfLife_unit->addItem(QString());
        halfLife_unit->setObjectName(QStringLiteral("halfLife_unit"));

        gridLayout->addWidget(halfLife_unit, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(477, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mass = new QLabel(groupBox);
        mass->setObjectName(QStringLiteral("mass"));
        mass->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mass, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(nuclearCalculator);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_37 = new QLabel(groupBox_2);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_37, 0, 0, 1, 1);

        mode = new KComboBox(groupBox_2);
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->setObjectName(QStringLiteral("mode"));

        gridLayout_3->addWidget(mode, 0, 1, 1, 1);

        label_69 = new QLabel(groupBox_2);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_69, 1, 0, 1, 1);

        initAmt = new QDoubleSpinBox(groupBox_2);
        initAmt->setObjectName(QStringLiteral("initAmt"));
        initAmt->setDecimals(4);
        initAmt->setMaximum(1e+09);

        gridLayout_3->addWidget(initAmt, 1, 1, 1, 1);

        label_72 = new QLabel(groupBox_2);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_72, 2, 0, 1, 1);

        finalAmt = new QDoubleSpinBox(groupBox_2);
        finalAmt->setObjectName(QStringLiteral("finalAmt"));
        finalAmt->setDecimals(4);
        finalAmt->setMaximum(1e+09);

        gridLayout_3->addWidget(finalAmt, 2, 1, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_19, 3, 0, 1, 1);

        time = new QDoubleSpinBox(groupBox_2);
        time->setObjectName(QStringLiteral("time"));
        time->setReadOnly(true);
        time->setDecimals(4);
        time->setMaximum(1e+09);

        gridLayout_3->addWidget(time, 3, 1, 1, 1);

        initAmtType = new KComboBox(groupBox_2);
        initAmtType->addItem(QString());
        initAmtType->addItem(QString());
        initAmtType->setObjectName(QStringLiteral("initAmtType"));

        gridLayout_3->addWidget(initAmtType, 1, 3, 1, 1);

        finalAmtType = new KComboBox(groupBox_2);
        finalAmtType->addItem(QString());
        finalAmtType->addItem(QString());
        finalAmtType->setObjectName(QStringLiteral("finalAmtType"));

        gridLayout_3->addWidget(finalAmtType, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        initAmt_unit = new KComboBox(groupBox_2);
        initAmt_unit->addItem(QString());
        initAmt_unit->addItem(QString());
        initAmt_unit->addItem(QString());
        initAmt_unit->addItem(QString());
        initAmt_unit->addItem(QString());
        initAmt_unit->addItem(QString());
        initAmt_unit->setObjectName(QStringLiteral("initAmt_unit"));

        gridLayout_3->addWidget(initAmt_unit, 1, 2, 1, 1);

        finalAmt_unit = new KComboBox(groupBox_2);
        finalAmt_unit->addItem(QString());
        finalAmt_unit->addItem(QString());
        finalAmt_unit->addItem(QString());
        finalAmt_unit->addItem(QString());
        finalAmt_unit->addItem(QString());
        finalAmt_unit->addItem(QString());
        finalAmt_unit->setObjectName(QStringLiteral("finalAmt_unit"));

        gridLayout_3->addWidget(finalAmt_unit, 2, 2, 1, 1);

        time_unit = new KComboBox(groupBox_2);
        time_unit->addItem(QString());
        time_unit->addItem(QString());
        time_unit->addItem(QString());
        time_unit->addItem(QString());
        time_unit->addItem(QString());
        time_unit->addItem(QString());
        time_unit->setObjectName(QStringLiteral("time_unit"));

        gridLayout_3->addWidget(time_unit, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        time_in_halfLives = new QFrame(groupBox_2);
        time_in_halfLives->setObjectName(QStringLiteral("time_in_halfLives"));
        time_in_halfLives->setFrameShape(QFrame::StyledPanel);
        time_in_halfLives->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(time_in_halfLives);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_15 = new QLabel(time_in_halfLives);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_15);

        slider = new QSlider(time_in_halfLives);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setMaximum(100);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider);

        numHalfLives = new QLabel(time_in_halfLives);
        numHalfLives->setObjectName(QStringLiteral("numHalfLives"));
        numHalfLives->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(numHalfLives);

        horizontalSpacer = new QSpacerItem(310, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(time_in_halfLives);


        verticalLayout_2->addWidget(groupBox_2);

        error = new QLabel(nuclearCalculator);
        error->setObjectName(QStringLiteral("error"));

        verticalLayout_2->addWidget(error);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_13);

        reset = new QPushButton(nuclearCalculator);
        reset->setObjectName(QStringLiteral("reset"));

        _2->addWidget(reset);


        verticalLayout_2->addLayout(_2);


        retranslateUi(nuclearCalculator);

        mode->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(nuclearCalculator);
    } // setupUi

    void retranslateUi(QWidget *nuclearCalculator)
    {
        ktextedit->setHtml(tr2i18n("<span style=\" font-size:12pt; font-weight:600;\">Select what you want to calculate from the combo box next to the \"calculate\" label and change the values / units to calculate.</span>", nullptr));
        groupBox->setTitle(tr2i18n("Elemental data", nullptr));
        label_11->setText(tr2i18n("<big><b>Element Name:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        element->setToolTip(tr2i18n("<big>Specify the Element you want to consider</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        element->setWhatsThis(tr2i18n("This box is used to specify the element on which calculation is to be performed.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_12->setText(tr2i18n("<big><b>Isotope mass:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        isotope->setToolTip(tr2i18n("<big>Specify an isotope of the current element</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        isotope->setWhatsThis(tr2i18n("This box is used to specify the isotope of the above element on which calculation is performed.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_14->setText(tr2i18n("<big><b>Half-life:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        halfLife->setToolTip(tr2i18n("<big>Specify the half-life of the radioactive isotope</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        halfLife->setWhatsThis(tr2i18n("This box is used to specify the half-life of the above isotope.", nullptr));
#endif // QT_NO_WHATSTHIS
        halfLife_unit->setItemText(0, tr2i18n("years", nullptr));
        halfLife_unit->setItemText(1, tr2i18n("seconds", nullptr));
        halfLife_unit->setItemText(2, tr2i18n("minutes", nullptr));
        halfLife_unit->setItemText(3, tr2i18n("hours", nullptr));
        halfLife_unit->setItemText(4, tr2i18n("days", nullptr));
        halfLife_unit->setItemText(5, tr2i18n("weeks", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        halfLife_unit->setToolTip(tr2i18n("<big>The unit of Half-life</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        halfLife_unit->setWhatsThis(tr2i18n("This box is used to specify the unit of half-life, e.g. years, seconds, etc.", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(tr2i18n("<big><b>Atomic mass:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        mass->setToolTip(tr2i18n("<big>Atomic mass of the isotope selected</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mass->setWhatsThis(tr2i18n("This label displays the atomic mass of the isotope in grams per mole.", nullptr));
#endif // QT_NO_WHATSTHIS
        mass->setText(tr2i18n("0", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        label_2->setToolTip(tr2i18n("<big>The unit of atomic mass</big>", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(tr2i18n("grams / mole", nullptr));
        groupBox_2->setTitle(tr2i18n("Other data", nullptr));
        label_37->setText(tr2i18n("<big><b>Calculate:</b></big>", nullptr));
        mode->setItemText(0, tr2i18n("Initial Amount", nullptr));
        mode->setItemText(1, tr2i18n("Final Amount", nullptr));
        mode->setItemText(2, tr2i18n("Time", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        mode->setToolTip(tr2i18n("<big>Specify what you want to calculate</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        mode->setWhatsThis(tr2i18n("This box is used to decide what you want to calculate, choose among 'Time', 'Initial amount of the substance' and 'Final amount of the substance'.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_69->setText(tr2i18n("<big><b>Initial amount:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        initAmt->setToolTip(tr2i18n("<big>Specify the initial amount of the substance</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        initAmt->setWhatsThis(tr2i18n("This box is used to specify the initial amount of the radioactive substance.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_72->setText(tr2i18n("<big><b>Final amount:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        finalAmt->setToolTip(tr2i18n("<big>Specify the final amount of the substance</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        finalAmt->setWhatsThis(tr2i18n("This box is used to specify the final amount of the radioactive substance.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_19->setText(tr2i18n("<big><b>Time:</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        time->setToolTip(tr2i18n("<big>Specify the time elapsed here</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        time->setWhatsThis(tr2i18n("This box is used to specify the time after which the initial amount decreases to the final amount.", nullptr));
#endif // QT_NO_WHATSTHIS
        initAmtType->setItemText(0, tr2i18n("Mass", nullptr));
        initAmtType->setItemText(1, tr2i18n("moles", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        initAmtType->setToolTip(tr2i18n("<big>The method by which you want to specify mass</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        initAmtType->setWhatsThis(tr2i18n("This box can be used to change the mode in which you want to specify the initial amount of the substance, i.e. mass or moles.", nullptr));
#endif // QT_NO_WHATSTHIS
        finalAmtType->setItemText(0, tr2i18n("Mass", nullptr));
        finalAmtType->setItemText(1, tr2i18n("moles", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        finalAmtType->setToolTip(tr2i18n("<big>Method by which you want to specify the final amount</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        finalAmtType->setWhatsThis(tr2i18n("This box can be used to change the mode in which you want to specify the final amount of the substance, i.e. mass or moles.", nullptr));
#endif // QT_NO_WHATSTHIS
        initAmt_unit->setItemText(0, tr2i18n("grams", nullptr));
        initAmt_unit->setItemText(1, tr2i18n("tons", nullptr));
        initAmt_unit->setItemText(2, tr2i18n("carats", nullptr));
        initAmt_unit->setItemText(3, tr2i18n("pounds", nullptr));
        initAmt_unit->setItemText(4, tr2i18n("ounces", nullptr));
        initAmt_unit->setItemText(5, tr2i18n("troy ounces", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        initAmt_unit->setToolTip(tr2i18n("<big>Specify the unit of initial amount of the substance</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        initAmt_unit->setWhatsThis(tr2i18n("This box can be used to specify the units of the initial amount of the substance. e.g. grams, pounds, etc.", nullptr));
#endif // QT_NO_WHATSTHIS
        finalAmt_unit->setItemText(0, tr2i18n("grams", nullptr));
        finalAmt_unit->setItemText(1, tr2i18n("tons", nullptr));
        finalAmt_unit->setItemText(2, tr2i18n("carats", nullptr));
        finalAmt_unit->setItemText(3, tr2i18n("pounds", nullptr));
        finalAmt_unit->setItemText(4, tr2i18n("ounces", nullptr));
        finalAmt_unit->setItemText(5, tr2i18n("troy ounces", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        finalAmt_unit->setToolTip(tr2i18n("<big>Specify the units of the final amount</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        finalAmt_unit->setWhatsThis(tr2i18n("This box can be used to specify the units of the final amount of the substance. e.g. grams, pounds, etc.", nullptr));
#endif // QT_NO_WHATSTHIS
        time_unit->setItemText(0, tr2i18n("years", nullptr));
        time_unit->setItemText(1, tr2i18n("seconds", nullptr));
        time_unit->setItemText(2, tr2i18n("minutes", nullptr));
        time_unit->setItemText(3, tr2i18n("hours", nullptr));
        time_unit->setItemText(4, tr2i18n("days", nullptr));
        time_unit->setItemText(5, tr2i18n("weeks", nullptr));

#ifndef UI_QT_NO_TOOLTIP
        time_unit->setToolTip(tr2i18n("<big>Specify the units for the time elapsed</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        time_unit->setWhatsThis(tr2i18n("This box is used to specify the units of time. e.g. years, seconds, etc.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_15->setText(tr2i18n("<big><b>Time in half-lives</b></big>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        slider->setToolTip(tr2i18n("<big>Specify the time elapsed by moving the slider</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        slider->setWhatsThis(tr2i18n("This slider can be used to specify the time in terms of number of half-lives between 0 half-lives to 10 half-lives.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        numHalfLives->setToolTip(tr2i18n("<big>The number of half-lives elapsed</big>", nullptr));
#endif // QT_NO_TOOLTIP
        numHalfLives->setText(tr2i18n("0", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        error->setToolTip(tr2i18n("Information/Error message", nullptr));
#endif // QT_NO_TOOLTIP
        error->setText(QString());
#ifndef UI_QT_NO_TOOLTIP
        reset->setToolTip(tr2i18n("<big>Reset all values to initial values</big>", nullptr));
#endif // QT_NO_TOOLTIP
        reset->setText(tr2i18n("Reset", nullptr));
        Q_UNUSED(nuclearCalculator);
    } // retranslateUi

};

namespace Ui {
    class nuclearCalculator: public Ui_nuclearCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NUCLEARCALCULATOR_H

