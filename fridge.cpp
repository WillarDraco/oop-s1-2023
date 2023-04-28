#include <iostream>
#include "fridge.h"

Fridge::Fridge(){
    volume = 0;
    power_rating = 0;
    isOn = false;
}

Fridge::Fridge(int powerRating, double volume) {
    this->volume = volume;
    power_rating = powerRating;
    isOn = false;
}


void Fridge::set_Volume(double volume) {
    this->volume = volume;
}

double Fridge::get_Volume() {
    return volume;
}

double Fridge::getPowerConsumption() {
    double power_consumption = power_rating * 24 * (volume / 100);
    return power_consumption;
}