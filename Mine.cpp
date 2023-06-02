#include "GameEntity.h"
#include "Mine.h"
#include <tuple>
#include "Effect.h"
#include "Explosion.h"

Mine::Mine(int x, int y) {
    position = std::make_tuple(x, y);
    type = 'M';
}

Explosion Mine::explode() {
    type = 'X';
    int x = std::get<0>(position);
    int y = std::get<1>(position);
    Explosion explosion(x, y);
    return explosion;
}