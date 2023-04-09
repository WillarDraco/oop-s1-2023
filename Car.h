#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class Car : private Vehicle {
    public:
        int getParkingDuration();
};
#endif
