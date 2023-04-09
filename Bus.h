#ifndef BUS_H
#define BUS_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class Bus : public Vehicle {
    public:
        Bus();
        Bus(int ID);
        int getParkingDuration();
};
#endif
