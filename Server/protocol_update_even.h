#ifndef PROTOCOL_UPDATE_EVEN_H
#define PROTOCOL_UPDATE_EVEN_H

#include "Protocol.h"

class protocol_update_even : public Protocol
{
private:
    QString _event;
    QString _pret;

public:
    protocol_update_even(const QString&event,const QString &pret){_event=event;_pret=pret;}
    QString getMessage();
};

#endif // PROTOCOL_UPDATE_EVEN_H
