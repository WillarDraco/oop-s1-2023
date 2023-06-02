#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>
#include <tuple>
#include "GameEntity.h"

class Effect {
    public:
        Effect();
        virtual void apply(GameEntity& entity); // Accepts a GameEntity object as input and applies the effect to the entity.
};
#endif