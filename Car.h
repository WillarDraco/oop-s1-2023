#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class Car : private Vehicle {
    public:
        Car();
        Car(int ID);
        int getParkingDuration();
};
#endif
