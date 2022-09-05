#ifndef PROTOCOL_ADD_FAV_H
#define PROTOCOL_ADD_FAV_H

#include "Protocol.h"

class protocol_add_fav : public Protocol
{private:
    QString _user;
    QString _event;

public:

    protocol_add_fav(const QString &user,const QString &event){_user=user;_event=event;}
    QString getMessage();
};

#endif // PROTOCOL_ADD_FAV_H
