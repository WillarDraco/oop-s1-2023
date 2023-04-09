#include <iostream>
#include <string>
#include <time.h>
#include "Motorbike.h"

int Motorbike::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.15*(time(NULL) - timeOfEntry));
    return parkingDuration;
}
