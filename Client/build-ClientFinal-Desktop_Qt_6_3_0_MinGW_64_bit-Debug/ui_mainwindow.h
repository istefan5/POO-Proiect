/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page_Login;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Register;
    QPushButton *pushButton_ForgotPassword;
    QWidget *page_ForgotPassword;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Email;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_Login_3;
    QWidget *page_Register;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_1_Username;
    QLineEdit *lineEdit_2_Password;
    QLineEdit *lineEdit_3_Confirm;
    QLineEdit *lineEdit_4_Email;
    QPushButton *pushButton_Submit;
    QPushButton *pushButton_Login_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 430);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: grey;"));
        page_Login = new QWidget();
        page_Login->setObjectName(QString::fromUtf8("page_Login"));
        verticalLayout_4 = new QVBoxLayout(page_Login);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_username = new QLineEdit(page_Login);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setEnabled(true);
        lineEdit_username->setMinimumSize(QSize(240, 35));
        lineEdit_username->setMaximumSize(QSize(250, 35));
        lineEdit_username->setSizeIncrement(QSize(0, 0));
        lineEdit_username->setAlignment(Qt::AlignCenter);
        lineEdit_username->setReadOnly(false);

        verticalLayout_2->addWidget(lineEdit_username, 0, Qt::AlignHCenter);

        lineEdit_password = new QLineEdit(page_Login);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(240, 35));
        lineEdit_password->setMaximumSize(QSize(250, 35));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_password, 0, Qt::AlignHCenter);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_Login = new QPushButton(page_Login);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setMinimumSize(QSize(270, 40));
        pushButton_Login->setMaximumSize(QSize(300, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Akzidenz Grotesk BQ Medium")});
        font.setBold(false);
        pushButton_Login->setFont(font);
        pushButton_Login->setToolTipDuration(0);
        pushButton_Login->setStyleSheet(QString::fromUtf8(" background-color: #13aa52;\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0 .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout->addWidget(pushButton_Login, 0, Qt::AlignHCenter);

        pushButton_Register = new QPushButton(page_Login);
        pushButton_Register->setObjectName(QString::fromUtf8("pushButton_Register"));
        pushButton_Register->setMinimumSize(QSize(270, 40));
        pushButton_Register->setMaximumSize(QSize(300, 40));
        pushButton_Register->setFont(font);
        pushButton_Register->setToolTipDuration(0);
        pushButton_Register->setStyleSheet(QString::fromUtf8(" background-color: #13aa52;\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0 .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout->addWidget(pushButton_Register, 0, Qt::AlignHCenter);

        pushButton_ForgotPassword = new QPushButton(page_Login);
        pushButton_ForgotPassword->setObjectName(QString::fromUtf8("pushButton_ForgotPassword"));
        pushButton_ForgotPassword->setMinimumSize(QSize(270, 40));
        pushButton_ForgotPassword->setMaximumSize(QSize(300, 40));
        pushButton_ForgotPassword->setToolTipDuration(0);
        pushButton_ForgotPassword->setStyleSheet(QString::fromUtf8(" background-color: #13aa52;\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0 .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout->addWidget(pushButton_ForgotPassword, 0, Qt::AlignHCenter);


        verticalLayout_4->addLayout(verticalLayout);

        stackedWidget->addWidget(page_Login);
        page_ForgotPassword = new QWidget();
        page_ForgotPassword->setObjectName(QString::fromUtf8("page_ForgotPassword"));
        verticalLayout_9 = new QVBoxLayout(page_ForgotPassword);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        lineEdit_Username = new QLineEdit(page_ForgotPassword);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Username->sizePolicy().hasHeightForWidth());
        lineEdit_Username->setSizePolicy(sizePolicy);
        lineEdit_Username->setMinimumSize(QSize(240, 35));
        lineEdit_Username->setMaximumSize(QSize(250, 35));
        lineEdit_Username->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lineEdit_Username, 0, Qt::AlignHCenter);

        lineEdit_Email = new QLineEdit(page_ForgotPassword);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));
        lineEdit_Email->setMinimumSize(QSize(240, 35));
        lineEdit_Email->setMaximumSize(QSize(250, 35));
        lineEdit_Email->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lineEdit_Email, 0, Qt::AlignHCenter);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        pushButton_Send = new QPushButton(page_ForgotPassword);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setMinimumSize(QSize(270, 40));
        pushButton_Send->setMaximumSize(QSize(300, 40));
        pushButton_Send->setStyleSheet(QString::fromUtf8(" background-color: #13aa52;\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0 .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout_8->addWidget(pushButton_Send, 0, Qt::AlignHCenter);

        pushButton_Login_3 = new QPushButton(page_ForgotPassword);
        pushButton_Login_3->setObjectName(QString::fromUtf8("pushButton_Login_3"));
        pushButton_Login_3->setMinimumSize(QSize(270, 40));
        pushButton_Login_3->setMaximumSize(QSize(300, 40));
        pushButton_Login_3->setToolTipDuration(0);
        pushButton_Login_3->setStyleSheet(QString::fromUtf8(" background-color: rgb(69, 118, 225);\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0, .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout_8->addWidget(pushButton_Login_3, 0, Qt::AlignHCenter);


        verticalLayout_9->addLayout(verticalLayout_8);

        stackedWidget->addWidget(page_ForgotPassword);
        page_Register = new QWidget();
        page_Register->setObjectName(QString::fromUtf8("page_Register"));
        verticalLayout_6 = new QVBoxLayout(page_Register);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lineEdit_1_Username = new QLineEdit(page_Register);
        lineEdit_1_Username->setObjectName(QString::fromUtf8("lineEdit_1_Username"));
        lineEdit_1_Username->setMinimumSize(QSize(240, 35));
        lineEdit_1_Username->setMaximumSize(QSize(250, 35));
        lineEdit_1_Username->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lineEdit_1_Username, 0, Qt::AlignHCenter);

        lineEdit_2_Password = new QLineEdit(page_Register);
        lineEdit_2_Password->setObjectName(QString::fromUtf8("lineEdit_2_Password"));
        lineEdit_2_Password->setMinimumSize(QSize(240, 35));
        lineEdit_2_Password->setMaximumSize(QSize(250, 35));
        lineEdit_2_Password->setEchoMode(QLineEdit::Password);
        lineEdit_2_Password->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lineEdit_2_Password, 0, Qt::AlignHCenter);

        lineEdit_3_Confirm = new QLineEdit(page_Register);
        lineEdit_3_Confirm->setObjectName(QString::fromUtf8("lineEdit_3_Confirm"));
        lineEdit_3_Confirm->setMinimumSize(QSize(240, 35));
        lineEdit_3_Confirm->setMaximumSize(QSize(250, 35));
        lineEdit_3_Confirm->setEchoMode(QLineEdit::Password);
        lineEdit_3_Confirm->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lineEdit_3_Confirm, 0, Qt::AlignHCenter);

        lineEdit_4_Email = new QLineEdit(page_Register);
        lineEdit_4_Email->setObjectName(QString::fromUtf8("lineEdit_4_Email"));
        lineEdit_4_Email->setMinimumSize(QSize(240, 35));
        lineEdit_4_Email->setMaximumSize(QSize(250, 35));
        lineEdit_4_Email->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lineEdit_4_Email, 0, Qt::AlignHCenter);

        pushButton_Submit = new QPushButton(page_Register);
        pushButton_Submit->setObjectName(QString::fromUtf8("pushButton_Submit"));
        pushButton_Submit->setMinimumSize(QSize(270, 40));
        pushButton_Submit->setMaximumSize(QSize(300, 40));
        pushButton_Submit->setToolTipDuration(0);
        pushButton_Submit->setStyleSheet(QString::fromUtf8(" background-color: #13aa52;\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0 .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout_5->addWidget(pushButton_Submit, 0, Qt::AlignHCenter);

        pushButton_Login_2 = new QPushButton(page_Register);
        pushButton_Login_2->setObjectName(QString::fromUtf8("pushButton_Login_2"));
        pushButton_Login_2->setMinimumSize(QSize(270, 40));
        pushButton_Login_2->setMaximumSize(QSize(300, 40));
        pushButton_Login_2->setToolTipDuration(0);
        pushButton_Login_2->setStyleSheet(QString::fromUtf8(" background-color: rgb(69, 118, 225);\n"
"  border: 1px solid #13aa52;\n"
"  border-radius: 4px;\n"
"  box-shadow: rgba(0, 0, 0, .1) 0 2px 4px 0;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  font-family: \"Akzidenz Grotesk BQ Medium\", -apple-system, BlinkMacSystemFont, sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 400;\n"
"  outline: none;\n"
"  outline: 0;\n"
"  padding: 10px 25px;\n"
"  text-align: center;\n"
"  transform: translateY(0);\n"
"  transition: transform 150ms, box-shadow 150ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
""));

        verticalLayout_5->addWidget(pushButton_Login_2, 0, Qt::AlignHCenter);


        verticalLayout_6->addLayout(verticalLayout_5);

        stackedWidget->addWidget(page_Register);

        verticalLayout_3->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButton_ForgotPassword->setText(QCoreApplication::translate("MainWindow", "Forgot Password", nullptr));
        lineEdit_Username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_Email->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "Send Email", nullptr));
        pushButton_Login_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_1_Username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_2_Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_3_Confirm->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        lineEdit_4_Email->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        pushButton_Submit->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        pushButton_Login_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
