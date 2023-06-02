#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <tuple>

class Spot {
    protected:
        std::tuple<int, int> location; //(representing the spot's location),
        char category; //(representing the type of entity in the spot)
    public:
        Spot(int x, int y, char category) {
            location = std::make_tuple(x, y);
            this->category = category;
        }

        std::tuple<int, int> getLoc() {
            return location;
        }

        char getCategory() {
            return category;
        }

        void setLoc(int x, int y) {
            location = std::make_tuple(x, y);
        }

        void setCategory(char category) {
            this->category = category;
        }
};
#endif