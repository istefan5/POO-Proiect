#ifndef PROTOCOL_SHOW_FAV_H
#define PROTOCOL_SHOW_FAV_H

#include "Protocol.h"

class protocol_show_fav : public Protocol
{
private:
     QString _user;
public:

    protocol_show_fav(const QString user){_user=user;}
    QString getMessage();
};

#endif // PROTOCOL_SHOW_FAV_H
