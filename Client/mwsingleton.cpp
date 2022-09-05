#include "mwsingleton.h"
mwsingleton *mwsingleton::instance=nullptr;

mwsingleton::mwsingleton(QTcpSocket *S,qintptr sd)

    {
        this->w = new MainWindow(S,sd);
        w->show();

    }

    mwsingleton &mwsingleton::getInstance(QTcpSocket *S,qintptr sd)
    {
        if(!mwsingleton::instance)
        {
            mwsingleton::instance= new mwsingleton(S,sd);
        }
        return *mwsingleton::instance;
    }


    void mwsingleton::destroyInstance()
    {
        if(mwsingleton::instance)
        {
            delete mwsingleton::instance;
            mwsingleton::instance=nullptr;
        }

    }


