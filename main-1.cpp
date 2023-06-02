#include <iostream>
#include <tuple>
#include <cmath>
#include "Spot.h"
#include "Assists.h"

int main(void) {
    Spot spot1(0, 0, 'S');
    Assists assists;
    std::tuple<int, int> loc2 = assists.createRandomLoc(10,10);
    std::cout << assists.evaluateDistance(loc2, spot1.getLoc());
}