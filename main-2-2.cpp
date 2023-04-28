#include "Ford.h"
#include "Car.h"
#include <iostream>

int main(void) {
    Ford red(20,100);
    red.drive(151);
    std::cout << red.get_litresOfFuel() << std::endl;
}