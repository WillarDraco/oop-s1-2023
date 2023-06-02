#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include <tuple>

Explosion::Explosion(int x, int y) {
    position = std::make_tuple(x, y);
    type = 'E';
}

void Explosion::apply(GameEntity& entity) {
    entity.setPos(-1,-1);
    entity.setType('X');
}