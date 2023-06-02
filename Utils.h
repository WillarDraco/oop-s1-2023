#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>

class Utils {
    public:
        Utils();
        std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight); // Returns a random position within a grid represented by gridWidth and gridHeight as a std::tuple<int, int>.
        double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2); // Returns the Euclidean distance between two positions given as pos1 and pos2 as a double.
};
#endif