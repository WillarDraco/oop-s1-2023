#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {

    Vehicle v1 = Vehicle(1);
    int vehicleCount = 0;
    int carCount = 0;
    int busCount = 0;
    int motorbikeCount = 0;

    std::cout << "How many cars" << std::endl;
    std::cin >> carCount;
    std::cout << "How many busses" << std::endl;
    std::cin >> busCount;
    std::cout << "How many motorbikes" << std::endl;
    std::cin >> motorbikeCount;

    vehicleCount = carCount + busCount + motorbikeCount;

    Vehicle *array[vehicleCount];

    for (int i = 0; i < vehicleCount; i++) {
        if (i < carCount) {
            array[i] = new Car(i+1);
            std::cout << "Added car" << std::endl;
        } else if ( i < busCount + carCount) {
            array[i] = new Bus(i+1);
            std::cout << "Added bus" << std::endl;
        } else if (i < motorbikeCount + busCount + carCount) {
            array[i] = new Motorbike(i+1);
            std::cout << "Added motorbike" << std::endl;
        }
    }

    
    for (int i = 0; i < vehicleCount; i++) {
        if (i < carCount) {
            std::cout << "Duration: " << array[i]->getParkingDuration() << std::endl;
            std::cout << "ID: " << array[i]->getID() << std::endl;
        } else if ( i < busCount + carCount) {
            std::cout << "Duration:L " << array[i]->getParkingDuration() << std::endl;
            std::cout << "ID: " << array[i]->getID() << std::endl;
        } else if (i < motorbikeCount +carCount + busCount) {
            std::cout << "Duration: " << array[i]->getParkingDuration() << std::endl;
            std::cout << "ID: " << array[i]->getID() << std::endl;
        }
    }
}