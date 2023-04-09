#include <iostream>
#include <string>
#include "wizard.h"

void Wizard::castSpell(Player* opponent) {
    cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}