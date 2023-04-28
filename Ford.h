#ifndef FORD_H
#define FORD_H
#include <iostream>
#include "Car.h"

class Ford : public Car {
    private:
        int badgeNumber;
        float litresOfFuel;      // Initially 60L
    public:
        Ford();            
        Ford(int badgeNumber, int price);  
        void refuel(int litres);
        void drive(int kms);
        int get_badgeNumber();
        float get_litresOfFuel();
        void set_badgeNumber(int badgeNumber);
        void set_litresOfFuel(float fuel);
};
#endif