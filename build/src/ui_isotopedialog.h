#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'isotopedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISOTOPEDIALOG_H
#define UI_ISOTOPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <isotopeview.h>
#include "isotopeguideview.h"

QT_BEGIN_NAMESPACE

class Ui_isotopeWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    IsotopeGuideView *guide;
    QSlider *Slider;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    IsotopeView *gv;
    QWidget *infoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *isotopeWidget)
    {
        if (isotopeWidget->objectName().isEmpty())
            isotopeWidget->setObjectName(QStringLiteral("isotopeWidget"));
        isotopeWidget->resize(985, 622);
        gridLayout = new QGridLayout(isotopeWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        guide = new IsotopeGuideView(isotopeWidget);
        guide->setObjectName(QStringLiteral("guide"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(guide->sizePolicy().hasHeightForWidth());
        guide->setSizePolicy(sizePolicy);
        guide->setMinimumSize(QSize(150, 0));
        guide->setMaximumSize(QSize(150, 300));
        guide->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        guide->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(guide);

        Slider = new QSlider(isotopeWidget);
        Slider->setObjectName(QStringLiteral("Slider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Slider->sizePolicy().hasHeightForWidth());
        Slider->setSizePolicy(sizePolicy1);
        Slider->setMinimum(1);
        Slider->setMaximum(20);
        Slider->setValue(1);
        Slider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(Slider);

        label_2 = new QLabel(isotopeWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 3, 1, 1);

        gv = new IsotopeView(isotopeWidget);
        gv->setObjectName(QStringLiteral("gv"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gv->sizePolicy().hasHeightForWidth());
        gv->setSizePolicy(sizePolicy2);
        gv->setDragMode(QGraphicsView::ScrollHandDrag);

        gridLayout->addWidget(gv, 0, 2, 1, 1);

        infoWidget = new QWidget(isotopeWidget);
        infoWidget->setObjectName(QStringLiteral("infoWidget"));
        infoWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(infoWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(infoWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(200, 16777203));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        gridLayout->addWidget(infoWidget, 0, 1, 1, 1);


        retranslateUi(isotopeWidget);

        QMetaObject::connectSlotsByName(isotopeWidget);
    } // setupUi

    void retranslateUi(QWidget *isotopeWidget)
    {
        label_2->setText(tr2i18n("Zoom IN / OUT", nullptr));
        label->setText(tr2i18n("<p><b>Information</b></p>\n"
"<p>Right click on an element to view information about it.</p>\n"
"<p>Zoom in and out using your mouse wheel / zoom feature.</p>\n"
"<p>Scroll using left-clicking and dragging / scroll feature.</p>", nullptr));
        Q_UNUSED(isotopeWidget);
    } // retranslateUi

};

namespace Ui {
    class isotopeWidget: public Ui_isotopeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ISOTOPEDIALOG_H

