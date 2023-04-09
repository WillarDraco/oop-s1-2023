#include <iostream>
#include <string>
#include <time.h>
#include "ParkingLot.h"

ParkingLot::ParkingLot() {
    vehicles = new Vehicle[0];
    currentVehicles = 0;
    maxVehicles = 0;
}

ParkingLot::ParkingLot(int maxSize) {
    vehicles = new Vehicle[maxSize];
    currentVehicles = 0;
    maxVehicles = maxSize;
}

int ParkingLot::getCount() {
    return currentVehicles;
}

void ParkingLot::parkVehicle(Vehicle *newVehicle){
    if (getCount() == maxVehicles) {
        std::cout << "The lot is full" << std::endl;
    } else {   
        vehicles[currentVehicles] = *newVehicle;
        currentVehicles = currentVehicles + 1;
    }
}

void ParkingLot::unparkVehicle(int ID){
    bool unparked = false;
    for (int i = 0; i < maxVehicles; i++) {
        if(vehicles[i].getID() == ID) {
            vehicles[i] = Vehicle();
            currentVehicles = currentVehicles - 1;
            unparked = true;     
        }
    }
    if (unparked == false) {
        std::cout << "Vehicle not in the lot" << std::endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int carsExceeded = 0;
    for (int i = 0; i < getCount(); i++) {
        if(vehicles[i].getParkingDuration() > maxParkingDuration) {
            carsExceeded++;
        }
    }
return carsExceeded;
} 