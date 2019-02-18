#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'rswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSWIDGET_H
#define UI_RSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RSWidget
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout5;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *r_le;
    QLineEdit *s_le;
    QPushButton *filterButton;
    QTextBrowser *text;

    void setupUi(QWidget *RSWidget)
    {
        if (RSWidget->objectName().isEmpty())
            RSWidget->setObjectName(QStringLiteral("RSWidget"));
        RSWidget->resize(597, 430);
        gridLayout = new QGridLayout(RSWidget);
#ifndef UI_Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef UI_Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout5 = new QGridLayout();
#ifndef UI_Q_OS_MAC
        gridLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        label_2 = new QLabel(RSWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout5->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(RSWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout5->addWidget(label, 0, 0, 1, 1);

        r_le = new QLineEdit(RSWidget);
        r_le->setObjectName(QStringLiteral("r_le"));

        gridLayout5->addWidget(r_le, 0, 1, 1, 1);

        s_le = new QLineEdit(RSWidget);
        s_le->setObjectName(QStringLiteral("s_le"));

        gridLayout5->addWidget(s_le, 1, 1, 1, 1);

        filterButton = new QPushButton(RSWidget);
        filterButton->setObjectName(QStringLiteral("filterButton"));

        gridLayout5->addWidget(filterButton, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout5, 6, 0, 1, 1);

        text = new QTextBrowser(RSWidget);
        text->setObjectName(QStringLiteral("text"));
        text->setMinimumSize(QSize(500, 300));
        text->setFrameShape(QFrame::NoFrame);
        text->setFrameShadow(QFrame::Plain);
        text->setLineWidth(1);

        gridLayout->addWidget(text, 1, 0, 1, 1);

#ifndef UI_QT_NO_SHORTCUT
        label_2->setBuddy(s_le);
        label->setBuddy(r_le);
#endif // QT_NO_SHORTCUT

        retranslateUi(RSWidget);

        QMetaObject::connectSlotsByName(RSWidget);
    } // setupUi

    void retranslateUi(QWidget *RSWidget)
    {
        label_2->setText(tr2i18n("S-Phrases: ", nullptr));
        label->setText(tr2i18n("R-Phrases:", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        r_le->setToolTip(tr2i18n("Enter the R-Phrases you want to read. Only \"-\" is allowed as a delimiter. The combinations with \"/\" are not yet implemented.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_STATUSTIP
        r_le->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef UI_QT_NO_WHATSTHIS
        r_le->setWhatsThis(tr2i18n("Enter the R-Phrases you want to read", nullptr));
#endif // QT_NO_WHATSTHIS
        r_le->setText(tr2i18n("1-2-3-4-5-6-7-8-9", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        s_le->setToolTip(tr2i18n("Enter the S-Phrases you want to read. Only \"-\" is allowed as a delimiter. The combinations with \"/\" are not yet implemented.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        s_le->setWhatsThis(tr2i18n("Enter the S-Phrases you want to read", nullptr));
#endif // QT_NO_WHATSTHIS
        s_le->setText(tr2i18n("1-2-3-4-5-6-7-8-9", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        filterButton->setToolTip(tr2i18n("Click here to search for the phrases you entered on the left", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_WHATSTHIS
        filterButton->setWhatsThis(tr2i18n("Click here to search for the phrases you entered on the left", nullptr));
#endif // QT_NO_WHATSTHIS
        filterButton->setText(tr2i18n("&Filter", nullptr));
        Q_UNUSED(RSWidget);
    } // retranslateUi

};

namespace Ui {
    class RSWidget: public Ui_RSWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RSWIDGET_H

