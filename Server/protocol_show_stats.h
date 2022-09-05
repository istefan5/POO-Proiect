#ifndef PROTOCOL_SHOW_STATS_H
#define PROTOCOL_SHOW_STATS_H

#include "Protocol.h"

class protocol_show_stats : public Protocol
{

public:
    protocol_show_stats(){};
    QString getMessage();
};

#endif // PROTOCOL_SHOW_STATS_H
