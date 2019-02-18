#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'spectrumview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMVIEW_H
#define UI_SPECTRUMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "kalziumunitcombobox.h"
#include "spectrumwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpectrumView
{
public:
    QGridLayout *gridLayout;
    SpectrumWidget *m_spectrumWidget;
    QGridLayout *detailGridLayout;
    QLabel *label1;
    QSpinBox *minimumValue;
    QSpacerItem *verticalSpacer;
    QTreeWidget *peakListTable;
    QLabel *label2;
    QSpinBox *maximumValue;
    QGroupBox *groupBox;
    QGridLayout *gridLayout4;
    KalziumUnitCombobox *m_lengthUnit;
    QComboBox *m_spectrumType;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_resetZoom;

    void setupUi(QWidget *SpectrumView)
    {
        if (SpectrumView->objectName().isEmpty())
            SpectrumView->setObjectName(QStringLiteral("SpectrumView"));
        SpectrumView->resize(578, 413);
        gridLayout = new QGridLayout(SpectrumView);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_spectrumWidget = new SpectrumWidget(SpectrumView);
        m_spectrumWidget->setObjectName(QStringLiteral("m_spectrumWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_spectrumWidget->sizePolicy().hasHeightForWidth());
        m_spectrumWidget->setSizePolicy(sizePolicy);
        m_spectrumWidget->setMinimumSize(QSize(0, 100));

        gridLayout->addWidget(m_spectrumWidget, 0, 0, 1, 4);

        detailGridLayout = new QGridLayout();
        detailGridLayout->setObjectName(QStringLiteral("detailGridLayout"));
        label1 = new QLabel(SpectrumView);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        detailGridLayout->addWidget(label1, 1, 0, 1, 1);

        minimumValue = new QSpinBox(SpectrumView);
        minimumValue->setObjectName(QStringLiteral("minimumValue"));
        minimumValue->setMinimum(1);
        minimumValue->setMaximum(40000);
        minimumValue->setValue(3800);

        detailGridLayout->addWidget(minimumValue, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        detailGridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        peakListTable = new QTreeWidget(SpectrumView);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        peakListTable->setHeaderItem(__qtreewidgetitem);
        peakListTable->setObjectName(QStringLiteral("peakListTable"));

        detailGridLayout->addWidget(peakListTable, 1, 2, 6, 1);

        label2 = new QLabel(SpectrumView);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        detailGridLayout->addWidget(label2, 1, 1, 1, 1);

        maximumValue = new QSpinBox(SpectrumView);
        maximumValue->setObjectName(QStringLiteral("maximumValue"));
        maximumValue->setMinimum(1);
        maximumValue->setMaximum(40000);
        maximumValue->setValue(7800);

        detailGridLayout->addWidget(maximumValue, 2, 1, 1, 1);

        groupBox = new QGroupBox(SpectrumView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout4 = new QGridLayout(groupBox);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        m_lengthUnit = new KalziumUnitCombobox(groupBox);
        m_lengthUnit->setObjectName(QStringLiteral("m_lengthUnit"));

        gridLayout4->addWidget(m_lengthUnit, 0, 1, 1, 1);

        m_spectrumType = new QComboBox(groupBox);
        m_spectrumType->addItem(QString());
        m_spectrumType->addItem(QString());
        m_spectrumType->setObjectName(QStringLiteral("m_spectrumType"));

        gridLayout4->addWidget(m_spectrumType, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout4->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout4->addWidget(label_2, 1, 0, 1, 1);


        detailGridLayout->addWidget(groupBox, 5, 0, 1, 2);

        btn_resetZoom = new QPushButton(SpectrumView);
        btn_resetZoom->setObjectName(QStringLiteral("btn_resetZoom"));

        detailGridLayout->addWidget(btn_resetZoom, 3, 0, 1, 2);


        gridLayout->addLayout(detailGridLayout, 2, 1, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label1->setBuddy(minimumValue);
        label2->setBuddy(maximumValue);
#endif // QT_NO_SHORTCUT

        retranslateUi(SpectrumView);

        QMetaObject::connectSlotsByName(SpectrumView);
    } // setupUi

    void retranslateUi(QWidget *SpectrumView)
    {
#ifndef UI_QT_NO_TOOLTIP
        SpectrumView->setToolTip(tr2i18n("This page gives an overview of the spectrum of this element. Using the mouse you can zoom into the spectrum.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        SpectrumView->setWhatsThis(tr2i18n("This page gives an overview of the spectrum of this element.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        m_spectrumWidget->setToolTip(tr2i18n("This is the spectrum of the element.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        m_spectrumWidget->setWhatsThis(tr2i18n("This is the spectrum of the element.", nullptr));
#endif // QT_NO_WHATSTHIS
        label1->setText(tr2i18n("&Minimum value:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        minimumValue->setToolTip(tr2i18n("This sets the leftmost wavelength of the spectrum.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        minimumValue->setWhatsThis(tr2i18n("This sets the leftmost wavelength of the spectrum.", nullptr));
#endif // QT_NO_WHATSTHIS
        minimumValue->setSuffix(QString());
        label2->setText(tr2i18n("Maximum &value:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        maximumValue->setToolTip(tr2i18n("This sets the rightmost wavelength of the spectrum.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        maximumValue->setWhatsThis(tr2i18n("This sets the rightmost wavelength of the spectrum.", nullptr));
#endif // QT_NO_WHATSTHIS
        maximumValue->setSuffix(QString());
        groupBox->setTitle(tr2i18n("Spectrum Settings", nullptr));
        m_spectrumType->setItemText(0, tr2i18n("Emission spectrum", nullptr));
        m_spectrumType->setItemText(1, tr2i18n("Absorption spectrum", nullptr));

        label->setText(tr2i18n("Unit:", nullptr));
        label_2->setText(tr2i18n("Type:", nullptr));
        btn_resetZoom->setText(tr2i18n("Reset zoom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpectrumView: public Ui_SpectrumView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SPECTRUMVIEW_H

