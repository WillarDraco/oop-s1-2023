#ifndef ASSISTS_H
#define ASSISTS_H

#include <iostream>
#include <tuple>
#include <cmath>

class Assists {
    public:
        std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) { //(returns a random location within the game's matrix. (0,0) should be the first location),
            int x = (rand() % (matrixWidth + 1));
            int y = (rand() % (matrixHeight + 1));
            std::tuple<int, int> location = std::make_tuple(x, y);
            return location;
        }

        double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) { //(returns the Euclidean distance between two locations).
            double xs = std::get<0>(loc2) - std::get<0>(loc1);
            double ys = std::get<1>(loc2) - std::get<1>(loc1);
            xs = abs(xs);
            ys = abs(ys);
            double distance = sqrt((xs + ys));
            return distance;
        }
};
#endif