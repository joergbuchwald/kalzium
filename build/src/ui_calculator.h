#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ktextedit.h"

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *tree;
    QStackedWidget *stack;
    QWidget *intro;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *pic;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    KTextEdit *ktextedit;

    void setupUi(QWidget *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QStringLiteral("calculator"));
        calculator->resize(900, 600);
        calculator->setMinimumSize(QSize(900, 600));
        horizontalLayout_3 = new QHBoxLayout(calculator);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tree = new QTreeWidget(calculator);
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        new QTreeWidgetItem(tree);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setMinimumSize(QSize(150, 0));
        tree->setMaximumSize(QSize(200, 16777215));
        tree->setRootIsDecorated(false);
        tree->setAnimated(true);

        horizontalLayout_3->addWidget(tree);

        stack = new QStackedWidget(calculator);
        stack->setObjectName(QStringLiteral("stack"));
        intro = new QWidget();
        intro->setObjectName(QStringLiteral("intro"));
        verticalLayout = new QVBoxLayout(intro);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(intro);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pic = new QLabel(frame);
        pic->setObjectName(QStringLiteral("pic"));
        pic->setMinimumSize(QSize(128, 128));
        pic->setMaximumSize(QSize(128, 128));

        horizontalLayout->addWidget(pic);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 140));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(intro);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ktextedit = new KTextEdit(frame_2);
        ktextedit->setObjectName(QStringLiteral("ktextedit"));
        ktextedit->setMinimumSize(QSize(600, 0));
        ktextedit->setReadOnly(true);

        horizontalLayout_2->addWidget(ktextedit);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(1, 1);
        stack->addWidget(intro);

        horizontalLayout_3->addWidget(stack);


        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        QTreeWidgetItem *___qtreewidgetitem = tree->headerItem();
        ___qtreewidgetitem->setText(0, tr2i18n("Calculators", nullptr));

        const bool __sortingEnabled = tree->isSortingEnabled();
        tree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, tr2i18n("Introduction", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = tree->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, tr2i18n("Molecular mass Calculator", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = tree->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, tr2i18n("Concentration Calculator", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = tree->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, tr2i18n("Nuclear Calculator", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = tree->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, tr2i18n("Gas Calculator", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = tree->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, tr2i18n("Titration Calculator", nullptr));
        tree->setSortingEnabled(__sortingEnabled);

#ifndef UI_QT_NO_TOOLTIP
        tree->setToolTip(tr2i18n("<big>Select the calculator that you want to use</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        tree->setWhatsThis(tr2i18n("This is the index of the various calculators available. For more information on each calculator, click on 'Introduction'.", nullptr));
#endif // QT_NO_WHATSTHIS
        pic->setText(QString());
        label->setText(tr2i18n("<h1>The Kalzium Calculators</h1>", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        ktextedit->setToolTip(tr2i18n("<big>Information about the various calculators</big>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        ktextedit->setWhatsThis(tr2i18n("This is the description of the function of each calculator in Kalzium", nullptr));
#endif // QT_NO_WHATSTHIS
        ktextedit->setHtml(tr2i18n("<big>Welcome to the Kalzium calculators!<br /></big>\n"
"<p>This calculator contains a variety of calculators for different tasks performing different calculations.</p>\n"
"<p>You can find the following calculators in Kalzium:</p>\n"
"<ul><li><b>Molecular mass calculator<br /></b>This calculator helps you calculate the molecular masses of different molecules.<br />You can specify short form of the molecule names add more such aliases.</li>\n"
"<li><b>Concentrations calculator<br /></b>You can calculate quantities which include:</li>\n"
"<ul type=\"circle\"><li>Amount of substance</li>\n"
"<li>Volume of solvent</li>\n"
"<li>Concentration of substance</li></ul>\n"
"<p>There are a wide range of units to choose from and different methods to specify quantities.</p>\n"
"<li><b>Nuclear calculator<br /></b>This calculator makes use of the nuclear data available in Kalzium to predict the expected masses of a material after time.</li>\n"
"<li><b>Gas calculator<br /></b>This calculator can calculate the values of Tempera"
                        "ture, pressure, volume, amount of gas etc. for various ideal as well as non-ideal gases.</li>\n"
"<li><b>Equation Balancer<br /></b>This calculator can balance chemical equations.</li>\n"
"<li><b>Titration calculator<br /></b>This calculator tries to find out the equivalence point of a pH-meter followed titration best fitting it with an hyperbolic tangent. You can also let it solve an equilibrium system of equations and see how the concentration of a species changes in function of another one.</li></ul>", nullptr));
        Q_UNUSED(calculator);
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CALCULATOR_H

