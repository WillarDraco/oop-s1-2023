#ifndef TV_H
#define TV_H
#include <iostream>
#include "appliance.h"

class TV : public Appliance {
    private:
        double screenSize; // screen size in inches
    public:
        TV();
        TV(int powerRating, double screenSize);
        void set_ScreenSize(double screenSize);
        double get_ScreenSize();
        double getPowerConsumption();
};
#endif