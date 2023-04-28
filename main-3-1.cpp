#include "Fleet.h"
#include <iostream>

int main(void) {
    Fleet f1;
    std::cout << f1.get_fleet()[5]->get_price();
}