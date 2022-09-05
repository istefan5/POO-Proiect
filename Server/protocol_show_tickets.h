#ifndef PROTOCOL_SHOW_TICKETS_H
#define PROTOCOL_SHOW_TICKETS_H

#include "Protocol.h"

class protocol_show_tickets : public Protocol
{
private:
    QString _user;
public:
    protocol_show_tickets(const QString&user){_user=user;}
    QString getMessage();
};

#endif // PROTOCOL_SHOW_TICKETS_H
