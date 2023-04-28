#include <iostream>
#include "Tesla.h"

Tesla::Tesla() {
}     

Tesla::Tesla(char model, int price) {
    this->model = model;
    this->price = price;
    emissions = 0;
    batteryPercentage = 100;
}

void Tesla::chargeBattery(int mins) {
    batteryPercentage = batteryPercentage + (mins * 0.5);
    if (batteryPercentage > 100) {
        batteryPercentage = 100;
    }
}

void Tesla::drive(int kms) {
    float distance = kms;
    if (kms >= 500) {
        emissions = 74 * 500;
        batteryPercentage = 0;
    } else if (kms < 500) {
        emissions = 74 * kms;
        batteryPercentage = batteryPercentage - (distance / 5);
    }
    
}

void Tesla::set_model(char model) {
    this->model = model;
}

void Tesla::set_batteryPercentage(float newPercentage) {
    if (newPercentage < 0) {
        batteryPercentage = 0;
    } else if (newPercentage > 100) {
        batteryPercentage = 100;
    } else {
        batteryPercentage = newPercentage;
    }
}

char Tesla::get_model() {
    return model;
}

float Tesla::get_batteryPercentage() {
    return batteryPercentage;
}