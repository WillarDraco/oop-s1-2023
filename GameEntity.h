#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

class GameEntity {
    protected:
        std::tuple<int, int> position; // (representing the position of the entity)
        char type; // (representing the type of the entity)
    public:
        GameEntity();
        GameEntity(int x, int y, char type);
        std::tuple<int, int> getPos(); // Returns the position of the entity.
        char getType(); // Returns the type of the entity.
        void setPos(int x, int y); // Returns the position of the entity.
        void setType(char type); // Returns the type of the entity.
};
#endif