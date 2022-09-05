/********************************************************************************
** Form generated from reading UI file 'meniu.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENIU_H
#define UI_MENIU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Meniu
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_Menu;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_Events;
    QPushButton *pushButton_Istoric;
    QPushButton *pushButton_Notificari;
    QPushButton *pushButton_LogOut;

    void setupUi(QWidget *Meniu)
    {
        if (Meniu->objectName().isEmpty())
            Meniu->setObjectName(QString::fromUtf8("Meniu"));
        Meniu->resize(600, 480);
        gridLayout = new QGridLayout(Meniu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(Meniu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: grey;"));
        page_Menu = new QWidget();
        page_Menu->setObjectName(QString::fromUtf8("page_Menu"));
        verticalLayout_3 = new QVBoxLayout(page_Menu);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(page_Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(140, 40));
        label->setMaximumSize(QSize(140, 40));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        pushButton_Events = new QPushButton(page_Menu);
        pushButton_Events->setObjectName(QString::fromUtf8("pushButton_Events"));
        pushButton_Events->setMinimumSize(QSize(170, 40));
        pushButton_Events->setMaximumSize(QSize(170, 40));

        verticalLayout->addWidget(pushButton_Events, 0, Qt::AlignHCenter);

        pushButton_Istoric = new QPushButton(page_Menu);
        pushButton_Istoric->setObjectName(QString::fromUtf8("pushButton_Istoric"));
        pushButton_Istoric->setMinimumSize(QSize(170, 40));
        pushButton_Istoric->setMaximumSize(QSize(170, 40));

        verticalLayout->addWidget(pushButton_Istoric, 0, Qt::AlignHCenter);

        pushButton_Notificari = new QPushButton(page_Menu);
        pushButton_Notificari->setObjectName(QString::fromUtf8("pushButton_Notificari"));
        pushButton_Notificari->setMinimumSize(QSize(170, 40));
        pushButton_Notificari->setMaximumSize(QSize(170, 40));

        verticalLayout->addWidget(pushButton_Notificari, 0, Qt::AlignHCenter);

        pushButton_LogOut = new QPushButton(page_Menu);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setMinimumSize(QSize(100, 30));
        pushButton_LogOut->setMaximumSize(QSize(100, 30));

        verticalLayout->addWidget(pushButton_LogOut, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(page_Menu);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Meniu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Meniu);
    } // setupUi

    void retranslateUi(QWidget *Meniu)
    {
        Meniu->setWindowTitle(QCoreApplication::translate("Meniu", "Form", nullptr));
        label->setText(QCoreApplication::translate("Meniu", "        Meniu Principal", nullptr));
        pushButton_Events->setText(QCoreApplication::translate("Meniu", "Categorii Evenimente", nullptr));
        pushButton_Istoric->setText(QCoreApplication::translate("Meniu", "Istoric Cont", nullptr));
        pushButton_Notificari->setText(QCoreApplication::translate("Meniu", "Notificari Evenimente", nullptr));
        pushButton_LogOut->setText(QCoreApplication::translate("Meniu", "LogOut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Meniu: public Ui_Meniu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENIU_H
