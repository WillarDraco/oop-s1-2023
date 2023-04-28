#include "Car.h"
#include <iostream>

int main(void) {
    Car red(20);
    std::cout << red.get_price() << std::endl;
}