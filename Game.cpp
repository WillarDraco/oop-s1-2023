#include <iostream>
#include <tuple>
#include <vector>
#include "Game.h"
#include "Utils.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Explosion.h"

Game::Game() {
}

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight) { 
    Utils utils;
    std::tuple<int, int> position = std::make_tuple(0, 0);
    int x = 0;
    int y = 0;

    for (int i = 0; i < numShips; i++) {
        position = utils.generateRandomPos(gridWidth, gridHeight);
        x = std::get<0>(position);
        y = std::get<1>(position);
        Ship* ship = new Ship(x, y);
        entities.push_back(ship);
    }

    for (int j = 0; j < numMines; j++) {
        position = utils.generateRandomPos(gridWidth, gridHeight);
        x = std::get<0>(position);
        y = std::get<1>(position);
        Mine* mine = new Mine(x, y);
        entities.push_back(mine);
    }

    return entities;
}

std::vector<GameEntity*> Game::getEntities() {
    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold) {
    int length = entities.size();
    
    for (int i =  0; i < maxIterations; i++) {
        for (int j = 0; j < length; j++) {
            if (entities[j]->getType() == 'S') {
                Ship* ship = static_cast<Ship*>(entities[j]);
                ship->move(1,0);
            }
        }
    }
}

void Game::SetEntities(GameEntity* GameEntity);