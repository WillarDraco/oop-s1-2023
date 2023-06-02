#ifndef SNARE_H
#define SNARE_H

#include <iostream>
#include <tuple>
#include "Spot.h"
#include "Influence.h"

class Snare : public Spot, Influence {
    private:
        bool operative;
    public:
        Snare(int x, int y) {
            location = std::make_tuple(x, y);
            category = 'S';
            operative = true;
        }

        bool isOperative() {
            if (operative = true) {
                return true;
            } else {
                return false;
            }
        }

        void implement(Spot& spot) {
            operative = false;
            spot.setCategory('S');
        }
};
#endif