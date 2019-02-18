#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'gradientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTWIDGET_H
#define UI_GRADIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gradientWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *scheme_combo;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *gradient_combo;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *gradient_spinbox;
    QLabel *lblUnit;
    QSlider *gradient_slider;
    QHBoxLayout *_2;
    QPushButton *Play;
    QLabel *label;
    QSlider *Speed;
    QLabel *text;

    void setupUi(QWidget *gradientWidget)
    {
        if (gradientWidget->objectName().isEmpty())
            gradientWidget->setObjectName(QStringLiteral("gradientWidget"));
        gradientWidget->resize(451, 608);
        verticalLayout = new QVBoxLayout(gradientWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(gradientWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        scheme_combo = new QComboBox(gradientWidget);
        scheme_combo->setObjectName(QStringLiteral("scheme_combo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scheme_combo->sizePolicy().hasHeightForWidth());
        scheme_combo->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(scheme_combo);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(gradientWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(gradientWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        gradient_combo = new QComboBox(gradientWidget);
        gradient_combo->setObjectName(QStringLiteral("gradient_combo"));
        sizePolicy.setHeightForWidth(gradient_combo->sizePolicy().hasHeightForWidth());
        gradient_combo->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(gradient_combo);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(gradientWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gradient_spinbox = new QDoubleSpinBox(groupBox);
        gradient_spinbox->setObjectName(QStringLiteral("gradient_spinbox"));
        gradient_spinbox->setDecimals(3);

        horizontalLayout->addWidget(gradient_spinbox);

        lblUnit = new QLabel(groupBox);
        lblUnit->setObjectName(QStringLiteral("lblUnit"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblUnit->sizePolicy().hasHeightForWidth());
        lblUnit->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(lblUnit);


        verticalLayout_3->addLayout(horizontalLayout);

        gradient_slider = new QSlider(groupBox);
        gradient_slider->setObjectName(QStringLiteral("gradient_slider"));
        gradient_slider->setMinimum(0);
        gradient_slider->setMaximum(6000);
        gradient_slider->setValue(295);
        gradient_slider->setOrientation(Qt::Horizontal);
        gradient_slider->setTickInterval(500);

        verticalLayout_3->addWidget(gradient_slider);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        Play = new QPushButton(groupBox);
        Play->setObjectName(QStringLiteral("Play"));

        _2->addWidget(Play);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        _2->addWidget(label);

        Speed = new QSlider(groupBox);
        Speed->setObjectName(QStringLiteral("Speed"));
        Speed->setMinimum(5);
        Speed->setMaximum(25);
        Speed->setOrientation(Qt::Horizontal);

        _2->addWidget(Speed);


        verticalLayout_3->addLayout(_2);

        text = new QLabel(groupBox);
        text->setObjectName(QStringLiteral("text"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy3);
        text->setTextFormat(Qt::PlainText);
        text->setAlignment(Qt::AlignTop);
        text->setWordWrap(true);

        verticalLayout_3->addWidget(text);


        verticalLayout->addWidget(groupBox);


        retranslateUi(gradientWidget);

        QMetaObject::connectSlotsByName(gradientWidget);
    } // setupUi

    void retranslateUi(QWidget *gradientWidget)
    {
        label_2->setText(tr2i18n("Scheme:", nullptr));
        label_3->setText(tr2i18n("Gradient:", nullptr));
        groupBox->setTitle(QString());
        lblUnit->setText(tr2i18n("K", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        gradient_slider->setToolTip(tr2i18n("Slide to change current temperature", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef UI_QT_NO_TOOLTIP
        Play->setToolTip(tr2i18n("Click to Play / Pause the increase in temperature.", nullptr));
#endif // QT_NO_TOOLTIP
        Play->setText(QString());
        label->setText(tr2i18n("Speed", nullptr));
#ifndef UI_QT_NO_TOOLTIP
        Speed->setToolTip(tr2i18n("Slide to change the speed of increase in temperature.", nullptr));
#endif // QT_NO_TOOLTIP
        text->setText(QString());
        Q_UNUSED(gradientWidget);
    } // retranslateUi

};

namespace Ui {
    class gradientWidget: public Ui_gradientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GRADIENTWIDGET_H

