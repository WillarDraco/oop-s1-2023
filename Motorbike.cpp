#include <iostream>
#include <string>
#include <time.h>
#include "Motorbike.h"

Motorbike::Motorbike() {
    timeOfEntry = time(NULL);
    ID = 0;
}

Motorbike::Motorbike(int it_ID) {
    timeOfEntry = time(NULL);
    ID = it_ID;
}

int Motorbike::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.15*(time(NULL) - timeOfEntry));
    return parkingDuration;
}
