#ifndef PROTOCOL_UNMARK_FAV_H
#define PROTOCOL_UNMARK_FAV_H

#include "Protocol.h"

class protocol_unmark_fav : public Protocol
{
private:
    QString _user;
    QString _event;

public:

    protocol_unmark_fav(const QString &user,const QString &event){_user=user;_event=event;}
    QString getMessage();
};

#endif // PROTOCOL_UNMARK_FAV_H
