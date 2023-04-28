#include "appliance.h"
#include <iostream>

Appliance::Appliance(){
    power_rating = 0;
    isOn = false;
}

Appliance::Appliance(int powerRating) { // creates an Appliance with a power rating
    power_rating = powerRating;
    isOn = false;
}

void Appliance::turnOn() {
    isOn = true;
}
void Appliance::turnOff() {
    isOn = false;
}

double Appliance::getPowerConsumption() {
    return 0.0;
}

int Appliance::get_power_rating() {
    return power_rating;
}

bool Appliance::get_isOn() {
    return isOn;
}

void Appliance::set_power_rating(int powerRating){
    power_rating = powerRating;
}