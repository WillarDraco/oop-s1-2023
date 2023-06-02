#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Utils.h"
#include "Effect.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"

int main(void) {
    Ship ship(1,2);
    Mine mine(2,3);
    ship.move(4,5);
    mine.explode();
    Explosion noship(1,1);
    noship.apply(ship);
}