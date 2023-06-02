#include <iostream>
#include <tuple>
#include "GameEntity.h"

GameEntity::GameEntity() {

}

GameEntity::GameEntity(int x, int y, char type) {
    position = std::make_tuple(x, y);
    this->type = type;
}

std::tuple<int, int> GameEntity::getPos() { // Returns the position of the entity.
    return position;
}

char GameEntity::getType() { // Returns the type of the entity.
    return type;
}

void GameEntity::setPos(int x, int y) { // Returns the position of the entity.
    position = std::make_tuple(x, y);
}

void GameEntity::setType(char type) { // Returns the type of the entity.
    this->type = type;
}