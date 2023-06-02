#ifndef PLAY_H
#define PLAY_H

#include <iostream>
#include <tuple>
#include <cmath>
#include "Spot.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"
#include <vector>

class Play {
    private:
        std::vector<Spot*> matrix;
    public:
        std::vector<Spot*> initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight) {
            std::vector<Spot*> matrix(matrixWidth);

            for (int width = 0; width < matrixWidth; width++) {
                for (int height = 0; height < matrixHeight; height++) {
                    Spot* spot = new Spot(width, height, 'S');
                    matrix[width] = spot;
                }
            }

            std::tuple<int, int> random = std::make_tuple(0,0);
            int x = 0;
            int y = 0;

            for (int i = 0; i < numPersonas; i++) {
                random = Assists::createRandomLoc(matrixWidth, matrixHeight);
                x = std::get<0>(random);
                y = std::get<1>(random);
                Persona* persona = new Persona(x, y);
                matrix[x] = persona;
            }

            for (int i = 0; i < numSnares; i++) {
                random = Assists::createRandomLoc(matrixWidth, matrixHeight);
                x = std::get<0>(random);
                y = std::get<1>(random);
                Snare* snare = new Snare(x, y);
                matrix[x] = snare;
            }
        }

        int playCycle(int maxCycles, double snareTriggerDistance) {
            int length = matrix.size();
            for (int i = 0; i < maxCycles; i++) {
                for (int width = 0; width < length; width++) {
                    for (int height = 0; height < length; height++) {
                        if (matrix[width][height].getCategory() == 'P') {

                        }
                    }
                }
                
            }
        }

        std::vector<Spot*> getMatrix() {
            return matrix;
        }
};
#endif