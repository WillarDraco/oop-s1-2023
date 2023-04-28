#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include "appliance.h"

class House {
    private:
        Appliance** appliances;
        int numAppliances;
        int applianceCount;
    public:
        House(); // creates an empty House object 
        House(int numAppliances); // creates a House object with space for numAppliances appliances
        bool addAppliance(Appliance* appliances); // adds an Appliance object to the House. 
                                         // return true if there is space in the house otherwise false
        double getTotalPowerConsumption();  // returns the total power consumption of all appliances in the House
};
#endif