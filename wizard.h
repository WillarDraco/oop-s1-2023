#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
#include <string>
#include "player.h"

class Wizard : private Player {
    private:
        int mana;
    public:
        void castSpell(Player* opponent);
};
#endif