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
    public:
        Vehicle vehicles[];
        ParkingLot(int maxVehicles);
        int getCount();
        void parkVehicles(Vehicle newVehicle);
        void unparkVehicle(int ID);
};
#endif