#include "Tesla.h"
#include "Car.h"
#include <iostream>

int main(void) {
    Tesla red('s',100);
    std::cout << red.get_price() << std::endl;
    std::cout << red.get_batteryPercentage() << std::endl;
}