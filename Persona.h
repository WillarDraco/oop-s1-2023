#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <tuple>
#include "Spot.h"

class Persona : protected Spot {
    public:
        Persona(int x, int y) {
            location = std::make_tuple(x, y);
            category = 'P';
        }

        void shift(int dx, int dy) {
            int x = std::get<0>(location) + dx;
            int y = std::get<1>(location) + dy;
            location = std::make_tuple(x, y);
        }
};
#endif