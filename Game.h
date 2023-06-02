#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <tuple>
#include <vector>
#include "GameEntity.h"

class Game {
    private:
        std::vector<GameEntity*> entities;
    public:
        Game();
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
        std::vector<GameEntity*> getEntities();
        void gameLoop(int maxIterations, double mineDistanceThreshold);
        void SetEntities(GameEntity* GameEntity);
};
#endif