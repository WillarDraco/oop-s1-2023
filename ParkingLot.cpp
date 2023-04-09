#include <iostream>
#include <string>
#include <time.h>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxVehicles) {
    vehicles = new Vehicle[maxVehicles];
    currentVehicles = 0;
    this->maxVehicles = maxVehicles;
}

int ParkingLot::getCount() {
    return currentVehicles;
}

void ParkingLot::parkVehicle(Vehicle *newVehicle) {
    if (currentVehicles == maxVehicles) {
        std::cout << "The lot is full. \n";
        return;
    } else {
        vehicles[currentVehicles] = *newVehicle;
        currentVehicles = currentVehicles + 1;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < currentVehicles; i++) {
        if (vehicles[i].getID() == ID) {
            for (int j = i; j < maxVehicles; j++) {
                vehicles[j] = Vehicle();
            }
            currentVehicles = currentVehicles - 1;
        }
    }

    if (ID > currentVehicles) {
        std::cout << "Vehicle not in the Lot \n";
    }
}