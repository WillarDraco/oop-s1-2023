#ifndef ASSISTS_H
#define ASSISTS_H

#include <iostream>
#include <tuple>
#include <cmath>
#include "Spot.h"

class Assists {
    public:
        static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) { //(returns a random location within the game's matrix. (0,0) should be the first location),
            int x = (rand() % (matrixWidth));
            int y = (rand() % (matrixHeight));
            std::tuple<int, int> location = std::make_tuple(x,y);
            return location;
        }

        static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) { //(returns the Euclidean distance between two locations).
            int xs = std::get<0>(loc2) - std::get<0>(loc1);
            int ys = std::get<1>(loc2) - std::get<1>(loc1);
            xs = pow(xs,2);
            ys = pow(ys,2);
            double distance = sqrt((xs + ys));
            return distance;
        }
};
#endif