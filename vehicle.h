#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
#include <time.h>

class Vehicle {
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle();
        Vehicle(time_t timeOfEntry, int ID);
        int getID();
};
#endif 