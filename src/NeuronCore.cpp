#include <iostream>

#include "NeuronCore.h"

bool NeuronCore::canShot(Packet& packet)
{
    double now = sc_time_stamp().to_double() / GlobalParams::clock_period_ps;

    // return false;
    packet.make(
        0, 1, 0, now, 1
    );
    return true;
}
