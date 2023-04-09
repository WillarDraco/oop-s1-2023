#include <iostream>
#include <string>
#include <time.h>
#include "Car.h"

Car::Car() {
    timeOfEntry = time(NULL);
    ID = 0;
}

Car::Car(int ID) {
    timeOfEntry = time(NULL);
    this->ID = ID;
}

int Car::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.1*(time(NULL) - timeOfEntry));
    return parkingDuration;
}
