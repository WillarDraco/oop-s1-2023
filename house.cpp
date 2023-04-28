#include <iostream>
#include "house.h"

House::House() {
    numAppliances = 0;
    appliances = new Appliance*[0];
    applianceCount = 0;
}

House::House(int numAppliances) {
    this->numAppliances = numAppliances;
    appliances = new Appliance*[numAppliances];
    applianceCount = 0;
}

bool House::addAppliance(Appliance* appliance) {
    if (applianceCount < numAppliances) {
        appliances[applianceCount] = appliance;
        applianceCount = applianceCount + 1;
        return true;
    } else {
        std::cout << "Unable to add appliance. \n";
        return false;
    }
}

double House::getTotalPowerConsumption() {
    double totalConsumption;
    for (int i = 0; i < applianceCount; i++) {
        totalConsumption = totalConsumption + appliances[i]->getPowerConsumption();
    }
    return totalConsumption;
}