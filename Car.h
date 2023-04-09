#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class Car : public Vehicle {
    public:
        Car();
        Car(int ID);
        int getParkingDuration();
};
#endif
