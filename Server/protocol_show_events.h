#ifndef PROTOCOL_SHOW_EVENTS_H
#define PROTOCOL_SHOW_EVENTS_H

#include "Protocol.h"

class protocol_show_events : public Protocol
{private:
     QString _tip;
public:

    protocol_show_events(const QString &tip ){_tip=tip;}
    QString getMessage();

};

#endif // PROTOCOL_SHOW_EVENTS_H
