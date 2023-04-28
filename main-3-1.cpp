#include <iostream>
#include "house.h"
#include "TV.h"
#include "fridge.h"

int main(void) {
    House home(2);
    TV tv1(1,10);
    Fridge fridge(1,100);
    Fridge two(1,2);

    home.addAppliance(&tv1);
    home.addAppliance(&fridge);
    home.addAppliance(&two);
    std::cout << home.getTotalPowerConsumption() << std::endl;
}