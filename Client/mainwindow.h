#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "meniu.h"
#include <QTcpSocket>
#include <QMainWindow>
#include <QWidget>


QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QTcpSocket *S,qintptr sd,QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Register_clicked();

    void on_pushButton_ForgotPassword_clicked();

    void on_pushButton_Login_2_clicked();

    void on_pushButton_Login_3_clicked();

    void on_pushButton_Submit_clicked();

    void on_lineEdit_Confirm_editingFinished();

    void on_pushButton_Send_clicked();

    bool check_correct_password(QString s);



    void on_pushButton_Admin_clicked();

    void on_pushButton_Login_4_clicked();

    void on_pushButton_Submit_2_clicked();

    void on_pushButton_Adauga_Eveniment_clicked();

    void on_pushButton_Muzica_clicked();

    void on_pushButton_Sport_clicked();


    void on_pushButton_Teatru_clicked();

    void on_pushButton_LogOut_clicked();



    void on_pushButton_Modifica_Eveniment_clicked();

    void on_pushButton_Back_clicked();





    void on_pushButton_Back_2_clicked();

    void on_pushButton_Back_5_clicked();

    void on_pushButton_Muzica_Modif_clicked();

    void on_pushButton_Sport_Modif_clicked();

    void on_pushButton_Teatru_Modif_clicked();

    void on_lineEdit_1_Username_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_ModificaPret_clicked();

    void on_pushButton_Adaugare_Eveniment_clicked();

    void on_pushButton_Back_3_clicked();

public slots:

    void logOut();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    qintptr socketDescriptor;

    Meniu* _Meniu;


};
#endif // MAINWINDOW_H
