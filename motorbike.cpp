#include <iostream>
#include <string>
#include <time.h>
#include "motorbike.h"

int Motorbike::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.15*(time(NULL) - timeOfEntry));
    return parkingDuration;
} 