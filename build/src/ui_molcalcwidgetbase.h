#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'molcalcwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOLCALCWIDGETBASE_H
#define UI_MOLCALCWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MolcalcWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *calcTab;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QLineEdit *formulaEdit;
    QPushButton *calcButton;
    QFrame *line1;
    QLabel *resultComposition;
    QHBoxLayout *horizontalLayout_4;
    QLabel *resultMass;
    QLineEdit *resultValue;
    QLabel *resultLabel;
    QSpacerItem *spacerItem1;
    QGroupBox *details;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QTableWidget *table;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QTableWidget *alias_list;
    QWidget *aliasTab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *aliasBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *shortForm;
    QLabel *label_2;
    QLineEdit *fullForm;
    QPushButton *alias;
    QLabel *aliasMessage;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *pre_defined;
    QTableWidget *user_defined;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MolcalcWidgetBase)
    {
        if (MolcalcWidgetBase->objectName().isEmpty())
            MolcalcWidgetBase->setObjectName(QStringLiteral("MolcalcWidgetBase"));
        MolcalcWidgetBase->resize(694, 540);
        verticalLayout_3 = new QVBoxLayout(MolcalcWidgetBase);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(MolcalcWidgetBase);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        calcTab = new QWidget();
        calcTab->setObjectName(QStringLiteral("calcTab"));
        verticalLayout_2 = new QVBoxLayout(calcTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef UI_Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        formulaEdit = new QLineEdit(calcTab);
        formulaEdit->setObjectName(QStringLiteral("formulaEdit"));

        hboxLayout->addWidget(formulaEdit);

        calcButton = new QPushButton(calcTab);
        calcButton->setObjectName(QStringLiteral("calcButton"));

        hboxLayout->addWidget(calcButton);


        verticalLayout_2->addLayout(hboxLayout);

        line1 = new QFrame(calcTab);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line1);

        resultComposition = new QLabel(calcTab);
        resultComposition->setObjectName(QStringLiteral("resultComposition"));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        resultComposition->setFont(font);
        resultComposition->setAlignment(Qt::AlignCenter);
        resultComposition->setWordWrap(true);

        verticalLayout_2->addWidget(resultComposition);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        resultMass = new QLabel(calcTab);
        resultMass->setObjectName(QStringLiteral("resultMass"));
        resultMass->setWordWrap(true);

        horizontalLayout_4->addWidget(resultMass);

        resultValue = new QLineEdit(calcTab);
        resultValue->setObjectName(QStringLiteral("resultValue"));
        resultValue->setReadOnly(true);

        horizontalLayout_4->addWidget(resultValue);


        verticalLayout_2->addLayout(horizontalLayout_4);

        resultLabel = new QLabel(calcTab);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setWordWrap(true);

        verticalLayout_2->addWidget(resultLabel);

        spacerItem1 = new QSpacerItem(41, 131, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(spacerItem1);

        details = new QGroupBox(calcTab);
        details->setObjectName(QStringLiteral("details"));
        horizontalLayout_2 = new QHBoxLayout(details);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(details);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);

        table = new QTableWidget(details);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (table->rowCount() < 1)
            table->setRowCount(1);
        table->setObjectName(QStringLiteral("table"));
        table->setMinimumSize(QSize(520, 0));
        table->setShowGrid(false);
        table->setRowCount(1);
        table->setColumnCount(5);
        table->horizontalHeader()->setHighlightSections(true);

        verticalLayout_7->addWidget(table);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(details);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_6->addWidget(label_5);

        alias_list = new QTableWidget(details);
        if (alias_list->columnCount() < 1)
            alias_list->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        alias_list->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        if (alias_list->rowCount() < 1)
            alias_list->setRowCount(1);
        alias_list->setObjectName(QStringLiteral("alias_list"));
        alias_list->setRowCount(1);
        alias_list->setColumnCount(1);

        verticalLayout_6->addWidget(alias_list);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_2->addWidget(details);

        tabWidget->addTab(calcTab, QString());
        aliasTab = new QWidget();
        aliasTab->setObjectName(QStringLiteral("aliasTab"));
        verticalLayout_4 = new QVBoxLayout(aliasTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        aliasBox = new QGroupBox(aliasTab);
        aliasBox->setObjectName(QStringLiteral("aliasBox"));
        verticalLayout = new QVBoxLayout(aliasBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(aliasBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        shortForm = new QLineEdit(aliasBox);
        shortForm->setObjectName(QStringLiteral("shortForm"));

        horizontalLayout->addWidget(shortForm);

        label_2 = new QLabel(aliasBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        fullForm = new QLineEdit(aliasBox);
        fullForm->setObjectName(QStringLiteral("fullForm"));

        horizontalLayout->addWidget(fullForm);

        alias = new QPushButton(aliasBox);
        alias->setObjectName(QStringLiteral("alias"));

        horizontalLayout->addWidget(alias);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(aliasBox);

        aliasMessage = new QLabel(aliasTab);
        aliasMessage->setObjectName(QStringLiteral("aliasMessage"));

        verticalLayout_4->addWidget(aliasMessage);

        frame = new QFrame(aliasTab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 300));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        pre_defined = new QTableWidget(frame);
        if (pre_defined->columnCount() < 1)
            pre_defined->setColumnCount(1);
        if (pre_defined->rowCount() < 15)
            pre_defined->setRowCount(15);
        pre_defined->setObjectName(QStringLiteral("pre_defined"));
        pre_defined->setRowCount(15);
        pre_defined->setColumnCount(1);

        gridLayout->addWidget(pre_defined, 1, 0, 1, 1);

        user_defined = new QTableWidget(frame);
        if (user_defined->columnCount() < 1)
            user_defined->setColumnCount(1);
        if (user_defined->rowCount() < 15)
            user_defined->setRowCount(15);
        user_defined->setObjectName(QStringLiteral("user_defined"));
        user_defined->setRowCount(15);
        user_defined->setColumnCount(1);

        gridLayout->addWidget(user_defined, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        verticalLayout_4->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 397, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(aliasTab, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(MolcalcWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MolcalcWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *MolcalcWidgetBase)
    {
#ifndef UI_QT_NO_TOOLTIP
        formulaEdit->setToolTip(tr2i18n("Enter molecular formula here", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        formulaEdit->setWhatsThis(tr2i18n("This box can be used to enter the formula for the molecule.\n"
"e.g. 1.> CaCO3\n"
"e.g. 2.> MeOH\n"
"e.g. 3.> #EDTA#\n"
"", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        calcButton->setToolTip(tr2i18n("Click on this button to calculate.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        calcButton->setWhatsThis(tr2i18n("Click on this button to calculate.", nullptr));
#endif // QT_NO_WHATSTHIS
        calcButton->setText(tr2i18n("Calc", nullptr));
        resultComposition->setText(QString());
        resultMass->setText(QString());
        resultLabel->setText(QString());
        details->setTitle(tr2i18n("Details", nullptr));
        label_6->setText(tr2i18n("Composition", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("Element", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Atoms", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(tr2i18n("Atomic mass", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(tr2i18n("Total mass", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(tr2i18n("Percentage", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        table->setToolTip(tr2i18n("Elemental composition", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        table->setWhatsThis(tr2i18n("This table previews the elemental composition of the molecule, i.e. the percentage of each element in the molecule.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_5->setText(tr2i18n("Aliases used", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = alias_list->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(tr2i18n("aliases", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        alias_list->setToolTip(tr2i18n("Aliases used in the formula", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        alias_list->setWhatsThis(tr2i18n("This displays all the aliases used in the molecule.\n"
"For instance, in the molecule MeOH, the alias used is Me = CH3.", nullptr));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(calcTab), tr2i18n("Calculator", nullptr));
        aliasBox->setTitle(tr2i18n("Define alias", nullptr));
        label->setText(tr2i18n("Short-form", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        shortForm->setToolTip(tr2i18n("Short form of the alias", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        shortForm->setWhatsThis(tr2i18n("You can specify the short form of the alias used here, \n"
"for instance, Me.", nullptr));
#endif // QT_NO_WHATSTHIS
        label_2->setText(tr2i18n("Full-form", nullptr));
#ifndef UI_QT_NO_WHATSTHIS
        fullForm->setWhatsThis(tr2i18n("You can enter the full form of the alias in this box, \n"
"for instance, CH3.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        alias->setToolTip(tr2i18n("Click to add the alias", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        alias->setWhatsThis(tr2i18n("Click to add the alias if it is valid.", nullptr));
#endif // QT_NO_WHATSTHIS
        alias->setText(tr2i18n("Add Alias", nullptr));
        aliasMessage->setText(QString());
        label_3->setText(tr2i18n("Pre-defined aliases", nullptr));
        label_4->setText(tr2i18n("User-defined aliases", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        pre_defined->setToolTip(tr2i18n("List of pre-defined aliases.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        pre_defined->setWhatsThis(tr2i18n("This table displays all the pre-defined aliases.", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef UI_QT_NO_TOOLTIP
        user_defined->setToolTip(tr2i18n("List of user-defined aliases.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        user_defined->setWhatsThis(tr2i18n("This is the list of aliases that you or some other user has added.", nullptr));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(aliasTab), tr2i18n("Aliases", nullptr));
        Q_UNUSED(MolcalcWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class MolcalcWidgetBase: public Ui_MolcalcWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MOLCALCWIDGETBASE_H

