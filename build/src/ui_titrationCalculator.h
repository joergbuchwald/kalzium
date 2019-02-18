#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'titrationCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITRATIONCALCULATOR_H
#define UI_TITRATIONCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kplotwidget.h"
#include "ktextedit.h"

QT_BEGIN_NAMESPACE

class Ui_titrationCalculator
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTableWidget *tableWidget_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *xaxis;
    QLabel *label_5;
    QLineEdit *yaxis;
    QPushButton *pushButton;
    QLabel *label_8;
    KTextEdit *note;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QDoubleSpinBox *xmin;
    QLabel *label_2;
    QDoubleSpinBox *xmax;
    QLabel *label;
    QDoubleSpinBox *ymin;
    QLabel *label_3;
    QDoubleSpinBox *ymax;
    KPlotWidget *kplotwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *newfile;
    QPushButton *open;
    QPushButton *save;
    QPushButton *saveimage;
    QPushButton *rapidhelp;

    void setupUi(QWidget *titrationCalculator)
    {
        if (titrationCalculator->objectName().isEmpty())
            titrationCalculator->setObjectName(QStringLiteral("titrationCalculator"));
        titrationCalculator->resize(740, 624);
        verticalLayout_5 = new QVBoxLayout(titrationCalculator);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_10 = new QLabel(titrationCalculator);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        tabWidget = new QTabWidget(titrationCalculator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setWordWrap(true);

        verticalLayout_2->addWidget(label_6);

        tableWidget_2 = new QTableWidget(tab);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_2->rowCount() < 50)
            tableWidget_2->setRowCount(50);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setRowCount(50);

        verticalLayout_2->addWidget(tableWidget_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setTextFormat(Qt::AutoText);
        label_7->setScaledContents(false);
        label_7->setWordWrap(true);

        verticalLayout->addWidget(label_7);

        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 50)
            tableWidget->setRowCount(50);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setRowCount(50);
        tableWidget->setColumnCount(2);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        xaxis = new QLineEdit(tab_2);
        xaxis->setObjectName(QStringLiteral("xaxis"));
        xaxis->setMaximumSize(QSize(174, 24));

        horizontalLayout_2->addWidget(xaxis);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        yaxis = new QLineEdit(tab_2);
        yaxis->setObjectName(QStringLiteral("yaxis"));

        horizontalLayout_2->addWidget(yaxis);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        pushButton = new QPushButton(titrationCalculator);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        label_8 = new QLabel(titrationCalculator);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        note = new KTextEdit(titrationCalculator);
        note->setObjectName(QStringLiteral("note"));

        verticalLayout_4->addWidget(note);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(titrationCalculator);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        xmin = new QDoubleSpinBox(titrationCalculator);
        xmin->setObjectName(QStringLiteral("xmin"));

        horizontalLayout_3->addWidget(xmin);

        label_2 = new QLabel(titrationCalculator);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        xmax = new QDoubleSpinBox(titrationCalculator);
        xmax->setObjectName(QStringLiteral("xmax"));
        xmax->setValue(50);

        horizontalLayout_3->addWidget(xmax);

        label = new QLabel(titrationCalculator);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        ymin = new QDoubleSpinBox(titrationCalculator);
        ymin->setObjectName(QStringLiteral("ymin"));

        horizontalLayout_3->addWidget(ymin);

        label_3 = new QLabel(titrationCalculator);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        ymax = new QDoubleSpinBox(titrationCalculator);
        ymax->setObjectName(QStringLiteral("ymax"));
        ymax->setValue(50);

        horizontalLayout_3->addWidget(ymax);


        verticalLayout_3->addLayout(horizontalLayout_3);

        kplotwidget = new KPlotWidget(titrationCalculator);
        kplotwidget->setObjectName(QStringLiteral("kplotwidget"));
        kplotwidget->setFrameShape(QFrame::NoFrame);
        kplotwidget->setFrameShadow(QFrame::Plain);
        kplotwidget->setMidLineWidth(1);
        kplotwidget->setBackgroundColor(QColor(255, 255, 255));
        kplotwidget->setForegroundColor(QColor(0, 0, 0));
        kplotwidget->setProperty("grid", QVariant(true));

        verticalLayout_3->addWidget(kplotwidget);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newfile = new QPushButton(titrationCalculator);
        newfile->setObjectName(QStringLiteral("newfile"));

        horizontalLayout->addWidget(newfile);

        open = new QPushButton(titrationCalculator);
        open->setObjectName(QStringLiteral("open"));

        horizontalLayout->addWidget(open);

        save = new QPushButton(titrationCalculator);
        save->setObjectName(QStringLiteral("save"));

        horizontalLayout->addWidget(save);

        saveimage = new QPushButton(titrationCalculator);
        saveimage->setObjectName(QStringLiteral("saveimage"));

        horizontalLayout->addWidget(saveimage);

        rapidhelp = new QPushButton(titrationCalculator);
        rapidhelp->setObjectName(QStringLiteral("rapidhelp"));

        horizontalLayout->addWidget(rapidhelp);


        verticalLayout_5->addLayout(horizontalLayout);

        QWidget::setTabOrder(xmin, xmax);
        QWidget::setTabOrder(xmax, ymin);
        QWidget::setTabOrder(ymin, ymax);
        QWidget::setTabOrder(ymax, xaxis);
        QWidget::setTabOrder(xaxis, yaxis);
        QWidget::setTabOrder(yaxis, pushButton);
        QWidget::setTabOrder(pushButton, note);
        QWidget::setTabOrder(note, newfile);
        QWidget::setTabOrder(newfile, open);
        QWidget::setTabOrder(open, save);
        QWidget::setTabOrder(save, saveimage);
        QWidget::setTabOrder(saveimage, rapidhelp);

        retranslateUi(titrationCalculator);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(titrationCalculator);
    } // setupUi

    void retranslateUi(QWidget *titrationCalculator)
    {
        label_10->setText(tr2i18n("Choose what you want to do:", nullptr));
        label_6->setText(tr2i18n("Find the equivalence point from experimental values:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(tr2i18n("pH(Y)", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(tr2i18n("Volume(X)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("Tab 1", nullptr));
        label_7->setText(tr2i18n("Solve an equilibrium system and see how the concentration of one ion (Y) changes in function of another one (X)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(tr2i18n("Parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(tr2i18n("Value", nullptr));
        label_4->setText(tr2i18n("X axis:", nullptr));
        label_5->setText(tr2i18n("Y axis:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Tab 2", nullptr));
        pushButton->setText(tr2i18n("Draw Plot", nullptr));
        label_8->setText(tr2i18n("Notes:", nullptr));
        label_9->setText(tr2i18n("X min:", nullptr));
        label_2->setText(tr2i18n("X max:", nullptr));
        label->setText(tr2i18n("Y min:", nullptr));
        label_3->setText(tr2i18n("Y max:", nullptr));
        newfile->setText(tr2i18n("New", nullptr));
        open->setText(tr2i18n("Open", nullptr));
        save->setText(tr2i18n("Save", nullptr));
        saveimage->setText(tr2i18n("Save plot", nullptr));
        rapidhelp->setText(tr2i18n("Example", nullptr));
        Q_UNUSED(titrationCalculator);
    } // retranslateUi

};

namespace Ui {
    class titrationCalculator: public Ui_titrationCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TITRATIONCALCULATOR_H

