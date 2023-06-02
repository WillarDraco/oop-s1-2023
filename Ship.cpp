#include "GameEntity.h"
#include "Ship.h"
#include <tuple>

Ship::Ship(int x, int y) {
    position = std::make_tuple(x, y);
    type = 'S';
}

void Ship::move(int dx, int dy) {
    int x = dx + std::get<0>(position);
    int y = dy + std::get<1>(position);
    position = std::make_tuple(x, y);
}