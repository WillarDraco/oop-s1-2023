#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Utils.h"

int main(void) {
    Utils util;
    std::tuple<int, int> position1 = util.generateRandomPos(10,10);
    std::tuple<int, int> position2 = util.generateRandomPos(10,10);
    double distance1 = util.calculateDistance(position1, position2);
    std::cout << distance1;
}