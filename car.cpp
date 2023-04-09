#include <iostream>
#include <string>
#include <time.h>
#include "car.h"

int Car::getParkingDuration() {
    int parkingDuration = (time(NULL) - timeOfEntry) - (0.1*(time(NULL) - timeOfEntry));
    return parkingDuration;
} 