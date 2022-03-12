/********************************************************************************
** Form generated from reading UI file 'hustlibrary.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUSTLIBRARY_H
#define UI_HUSTLIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HustLibrary
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *find;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QListWidget *listWidget;

    void setupUi(QWidget *HustLibrary)
    {
        if (HustLibrary->objectName().isEmpty())
            HustLibrary->setObjectName(QString::fromUtf8("HustLibrary"));
        HustLibrary->resize(579, 342);
        HustLibrary->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 204, 225, 117), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout_4 = new QVBoxLayout(HustLibrary);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(HustLibrary);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        find = new QLineEdit(HustLibrary);
        find->setObjectName(QString::fromUtf8("find"));

        horizontalLayout_2->addWidget(find);

        pushButton_3 = new QPushButton(HustLibrary);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_2 = new QPushButton(HustLibrary);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(HustLibrary);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_4 = new QPushButton(HustLibrary);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(HustLibrary);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(HustLibrary);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(HustLibrary);

        QMetaObject::connectSlotsByName(HustLibrary);
    } // setupUi

    void retranslateUi(QWidget *HustLibrary)
    {
        HustLibrary->setWindowTitle(QCoreApplication::translate("HustLibrary", "HustLibrary", nullptr));
        label->setText(QCoreApplication::translate("HustLibrary", "HUST Library", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HustLibrary", "Search", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HustLibrary", "Add", nullptr));
        pushButton->setText(QCoreApplication::translate("HustLibrary", "Del", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HustLibrary", "Read Data", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HustLibrary", "Print Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HustLibrary: public Ui_HustLibrary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUSTLIBRARY_H
