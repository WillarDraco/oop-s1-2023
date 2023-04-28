#include "Fleet.h"
#include <iostream>

int main(void) {
    Fleet f1;
    Car** fleet2 = f1.get_fleet();
    std::cout << fleet2[4]->get_emissions() << std::endl;
}