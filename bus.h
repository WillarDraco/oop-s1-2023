#ifndef BUS_H
#define BUS_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class Bus : private Vehicle {
    public:
        int getParkingDuration();
};
#endif