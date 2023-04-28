#ifndef FLEET_H
#define FLEET_H
#include <iostream>
#include "Car.h"

class Fleet {
    private:
        Car** fleet;
    public:
        Fleet();
        Car **get_Fleet();
};
#endif