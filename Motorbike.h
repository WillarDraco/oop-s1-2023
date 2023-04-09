#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class Motorbike : private Vehicle {
    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();
};
#endif
