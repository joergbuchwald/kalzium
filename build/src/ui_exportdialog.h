#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "kcombobox.h"
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_exportDialogForm
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *elementListWidget;
    QListWidget *propertyListWidget;
    QLabel *label;
    KUrlRequester *targetFile;
    QLabel *label_2;
    KComboBox *formatList;

    void setupUi(QWidget *exportDialogForm)
    {
        if (exportDialogForm->objectName().isEmpty())
            exportDialogForm->setObjectName(QStringLiteral("exportDialogForm"));
        exportDialogForm->resize(506, 287);
        gridLayout = new QGridLayout(exportDialogForm);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(exportDialogForm);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(true);
        elementListWidget = new QListWidget(splitter);
        elementListWidget->setObjectName(QStringLiteral("elementListWidget"));
        elementListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        splitter->addWidget(elementListWidget);
        propertyListWidget = new QListWidget(splitter);
        propertyListWidget->setObjectName(QStringLiteral("propertyListWidget"));
        propertyListWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        splitter->addWidget(propertyListWidget);

        gridLayout->addWidget(splitter, 0, 0, 2, 3);

        label = new QLabel(exportDialogForm);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        targetFile = new KUrlRequester(exportDialogForm);
        targetFile->setObjectName(QStringLiteral("targetFile"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(targetFile->sizePolicy().hasHeightForWidth());
        targetFile->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(targetFile, 2, 1, 1, 2);

        label_2 = new QLabel(exportDialogForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        formatList = new KComboBox(exportDialogForm);
        formatList->setObjectName(QStringLiteral("formatList"));

        gridLayout->addWidget(formatList, 3, 1, 1, 2);


        retranslateUi(exportDialogForm);

        QMetaObject::connectSlotsByName(exportDialogForm);
    } // setupUi

    void retranslateUi(QWidget *exportDialogForm)
    {
        label->setText(tr2i18n("File:", nullptr));
        label_2->setText(tr2i18n("Format:", nullptr));
        Q_UNUSED(exportDialogForm);
    } // retranslateUi

};

namespace Ui {
    class exportDialogForm: public Ui_exportDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EXPORTDIALOG_H

