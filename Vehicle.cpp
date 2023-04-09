#include <iostream>
#include <string>
#include <time.h>
#include "Vehicle.h"

Vehicle::Vehicle() {
    timeOfEntry = time(NULL);
    ID = 0;
}

Vehicle::Vehicle(int it_ID) {
    timeOfEntry = time(NULL);
    ID = it_ID;
}

int Vehicle::getID() {
    return ID;
}

int  Vehicle::getParkingDuration() {
    int duration = time(NULL) - timeOfEntry;
    return duration;
}