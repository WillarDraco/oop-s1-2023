#include "appliance.cpp"
#include <iostream>

int main(void) {
    Appliance toaster(120);
    std::cout << toaster.get_isOn() << std::endl;
    toaster.turnOn();
    std::cout << toaster.get_isOn() << std::endl;
    std::cout << toaster.get_power_rating() << std::endl;
}