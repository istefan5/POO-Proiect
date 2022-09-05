#ifndef PROTOCOL_SHOW_NOTIFICATIONS_H
#define PROTOCOL_SHOW_NOTIFICATIONS_H

#include "Protocol.h"

class protocol_show_notifications : public Protocol
{
private:
    QString _user;
public:
    protocol_show_notifications(const QString &user){_user=user;}
    QString getMessage();
};

#endif // PROTOCOL_SHOW_NOTIFICATIONS_H
