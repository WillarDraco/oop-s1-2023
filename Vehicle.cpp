#include <iostream>
#include <string>
#include <time.h>
#include "vehicle.h"

Vehicle::Vehicle() {
    timeOfEntry = time(NULL);
    ID = 0;
}

Vehicle::Vehicle(time_t entryTime, int it_ID) {
    timeOfEntry = entryTime;
    ID = it_ID;
}

int Vehicle::getID() {
    return ID;
}
