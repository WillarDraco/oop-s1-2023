#include <iostream>
#include <string>
#include <time.h>
#include "Bus.h"

int Bus::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.25*(time(NULL) - timeOfEntry));
    return parkingDuration;
}