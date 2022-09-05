#ifndef MWSINGLETON_H
#define MWSINGLETON_H
#include <QTcpSocket>
#include "mainwindow.h"

class mwsingleton
{
public:

    static mwsingleton &getInstance(QTcpSocket *S,qintptr sd);
    static void destroyInstance();

private:

    static mwsingleton *instance;
    MainWindow *w;
    mwsingleton(QTcpSocket *S,qintptr sd) ;
    mwsingleton(const mwsingleton&) {};
    ~mwsingleton() {
        delete w;
    };
};

#endif // MWSINGLETON_H
