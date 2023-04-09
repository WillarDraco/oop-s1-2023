#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

class ParkingLot {
    private:
        int maxVehicles;
        int currentVehicles;
        Vehicle *vehicles;
    public:
        ParkingLot(int maxVehicles);
        int getCount();
        void parkVehicle(Vehicle *newVehicle);
        void unparkVehicle(int ID);
        ~ParkingLot(){
            delete[] vehicles;
        }
};
#endif