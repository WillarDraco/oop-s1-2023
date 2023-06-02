#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, Effect {
    public:
        Explosion(int x, int y);
        void apply(GameEntity& entity);
};
#endif