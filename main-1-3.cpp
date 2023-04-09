#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {

    ParkingLot p1(10);
    std::string vehicleType;

    bool full = false;
    int index = 0;
    while (full == false) {
        std::cout << "What kind of vehicle would you like to park? " << std::endl;
        std::cin >> vehicleType;

        if (vehicleType == "Car") {
            Car newVehicle(index);
            std::cout << newVehicle.getID() << std::endl;
            p1.parkVehicle(&newVehicle);
            index++;
            std::cout << "Parked a car" << std::endl;
        } else if (vehicleType == "Bus") {
            Bus newVehicle(index);
            std::cout << "Parked a bus" << std::endl;
            p1.parkVehicle(&newVehicle);
            index++;
        } else if (vehicleType == "Motorbike") {
            Motorbike newVehicle(index);
            std::cout << "Parked a motorbike" << std::endl;
            p1.parkVehicle(&newVehicle);
            index++;
        }
        if (p1.getCount() == 10) {
            full = true;
        } 
    }

    int carsExceeded = p1.countOverstayingVehicles(15);
    std::cout << carsExceeded << "Cars have stayed for longer than 15 seconds" << std::endl;
}