#ifndef FLEET_H
#define FLEET_H
#include <iostream>
#include "Car.h"

class Fleet {
    private:
        Car** fleet;
    public:
        Fleet();
        Car** get_fleet(); //returns the array of pointers to the 5 objects
};
#endif