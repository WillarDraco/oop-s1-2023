#include "fridge.h"
#include <iostream>

int main(void) {
    Fridge home(120, 60);
    std::cout << home.get_isOn() << std::endl;
    home.turnOn();
    std::cout << home.get_isOn() << std::endl;
    std::cout << home.get_power_rating() << std::endl;

    std::cout << home.getPowerConsumption() << std::endl;
    std::cout << home.get_Volume() << std::endl;
    home.set_Volume(120);
    std::cout << home.get_Volume() << std::endl;
    std::cout << home.getPowerConsumption() << std::endl;
}