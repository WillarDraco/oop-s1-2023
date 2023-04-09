#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {

ParkingLot p1(10);
std::string vehicleType;

std::cout << "What type of vehicle is parking" << std::endl;
std::cin >> vehicleType;

bool full = false;
int index = 0;
while (full == false) {
    if (vehicleType == "Car") {
        Car newVehicle = Car(index);
        p1.parkVehicle(&newVehicle);
        index++;
        std::cout << "Parked a car" << std::endl;
    } else if (vehicleType == "Bus") {
        Bus newVehicle = Bus(index);
        std::cout << "Parked a bus" << std::endl;
        p1.parkVehicle(&newVehicle);
        index++;
    } else if (vehicleType == "Motorbike") {
        Motorbike newVehicle = Motorbike(index);
        std::cout << "Parked a motorbike" << std::endl;
        p1.parkVehicle(&newVehicle);
        index++;
    }
    if (p1.getCount() == 10) {
        full = true;
    } 
}

int unPark = 0;
std::cout << "Enter an ID to remove" << std::endl;
std::cin >> unPark;
p1.unparkVehicle(unPark);

}