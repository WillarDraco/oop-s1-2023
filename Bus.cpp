#include <iostream>
#include <string>
#include <time.h>
#include "Bus.h"

Bus::Bus() {
    timeOfEntry = time(NULL);
    ID = 0;
}

Bus::Bus(int it_ID) {
    timeOfEntry = time(NULL);
    ID = it_ID;
}

int Bus::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.25*(time(NULL) - timeOfEntry));
    return parkingDuration;
}
