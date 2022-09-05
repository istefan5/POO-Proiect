#ifndef PROTOCOL_BUY_TICKET_H
#define PROTOCOL_BUY_TICKET_H

#include "Protocol.h"

class protocol_buy_ticket : public Protocol
{
private:
    QString _user;
    QString _event;
public:
    protocol_buy_ticket(const QString&user,const QString &event){_user=user;_event=event;}
    QString getMessage();
};

#endif // PROTOCOL_BUY_TICKET_H
