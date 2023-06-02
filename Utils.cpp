#include <iostream>
#include <tuple>
#include "Utils.h"
#include <cmath>

Utils::Utils() {
}

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    int pos1 = (rand() % (gridWidth - 0 + 1)) + 0;
    int pos2 = (rand() % (gridHeight - 0 + 1)) + 0;
    std::tuple<int,int> position = std::make_tuple(pos1, pos2);
    return position;
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    double xs = (std::get<0>(pos2)-std::get<0>(pos1));
    double ys = (std::get<1>(pos2)-std::get<1>(pos1));
    double xy = abs(xs) + abs(ys);
    double distance = sqrt(xy);
    return distance;
}