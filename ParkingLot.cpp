#include <iostream>
#include <string>
#include <time.h>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int maxVehicles) {
    Vehicle *vehicles[maxVehicles];
    currentVehicles = 0;
}

int ParkingLot::getCount() {
    return currentVehicles;
}

void ParkingLot::parkVehicle(Vehicle newVehicle) {
    if (currentVehicles < maxVehicles) {
        vehicles[currentVehicles] = newVehicle;
        currentVehicles = currentVehicles + 1;
    } else {
        std::cout << "The lot is full. \n";
        return;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < currentVehicles; i++) {
        if (i == ID) {
            for (int j = i; j < currentVehicles - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
        }
    }
    if (ID > currentVehicles) {
        std::cout << "Vehicle not in the Lot";
    }
}