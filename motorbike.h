#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>
#include <string>
#include <time.h>
#include "vehicle.h"

class Motorbike : private Vehicle {
    public:
        int getParkingDuration();
};
#endif