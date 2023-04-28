#include <iostream>
#include "TV.h"

TV::TV() {
    screenSize = 0;
    power_rating = 0;
    isOn = false;
}

TV::TV(int powerRating, double screenSize) {
    this->screenSize = screenSize;
    power_rating = powerRating;
    isOn = false;
}

void TV::set_ScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::get_ScreenSize() {
    return screenSize;
}

double TV::getPowerConsumption() {
    double power_consumption = power_rating * (screenSize / 10);
    return power_consumption;
}