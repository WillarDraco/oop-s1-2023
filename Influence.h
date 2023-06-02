#ifndef INFLUENCE_H
#define INFLUENCE_H

#include <iostream>
#include <tuple>
#include "Spot.h"

class Influence {
    public:
        virtual void implement(Spot& spot) {
        }
};
#endif