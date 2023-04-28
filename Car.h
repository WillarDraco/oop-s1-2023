#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car {
    protected:
        int price;
        int emissions;   // CO2 Emissions
    public:
        Car();
        Car(int price);   // creates a Car with a price
        virtual void drive(int kms);
        int get_price();
        void set_price(int price);
        int get_emissions();
        void set_emissions(int emissions);
};
#endif