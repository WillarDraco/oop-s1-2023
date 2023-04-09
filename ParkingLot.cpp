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
    } else {
        vehicles[currentVehicles] = *newVehicle;
        currentVehicles = currentVehicles + 1;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    bool unparked = false;
    for (int i = 0; i < currentVehicles; i++) {
        if (vehicles[i].getID() == ID) {
            vehicles[i] = Vehicle();
            currentVehicles = currentVehicles - 1;
            unparked = true;
        }
    }

    if (unparked == false) {
        std::cout << "Vehicle not in the Lot \n";
    }
}