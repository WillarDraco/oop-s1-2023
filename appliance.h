#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <iostream>

class Appliance{
    protected:
        int power_rating;
        bool isOn;
    public:
        Appliance();
        Appliance(int powerRating); // creates an Appliance with a power rating
        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();
        int get_power_rating();
        bool get_isOn();
        void set_power_rating(int powerRating);
};
#endif