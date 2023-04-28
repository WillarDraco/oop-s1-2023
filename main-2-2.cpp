#include "TV.h"
#include <iostream>

int main(void) {
    TV home(120, 60);
    std::cout << home.get_isOn() << std::endl;
    home.turnOn();
    std::cout << home.get_isOn() << std::endl;
    std::cout << home.get_power_rating() << std::endl;

    std::cout << home.getPowerConsumption() << std::endl;
    std::cout << home.get_ScreenSize() << std::endl;
    home.set_ScreenSize(120);
    std::cout << home.get_ScreenSize() << std::endl;
    std::cout << home.getPowerConsumption() << std::endl;
}