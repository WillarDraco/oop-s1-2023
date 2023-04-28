#ifndef TESLA_H
#define TESLA_H
#include "Car.h"
#include <iostream>

class Tesla : public Car {
    private:
        char model;
        float batteryPercentage;      // Initially 100%
    public:
        Tesla();            
        Tesla(char model, int price); 
        void chargeBattery(int mins);            
        void drive(int kms);
        void set_model(char model);
        void set_batteryPercentage(float newPercentage);
        char get_model();
        float get_batteryPercentage();

};
#endif