#ifndef FRIDGE_H
#define FRIDGE_H
#include <iostream>
#include "appliance.h"

class Fridge : public Appliance {
    private:
        double volume;
    public:
        Fridge();
        Fridge(int powerRating, double volume);
        void set_Volume(double volume);
        double get_Volume();
        double getPowerConsumption();
};
#endif