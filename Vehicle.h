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
        Vehicle(int ID);
        int getID();
        virtual int getParkingDuration();
};
#endif
