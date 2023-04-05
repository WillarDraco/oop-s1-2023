#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
#include <string>
#include "player.h"

class Warrior : private Player {
    private:
        string weapon;
    public:
        void swingWeapon(Player* opponent);
};
#endif