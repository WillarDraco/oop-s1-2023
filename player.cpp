#include <iostream>
#include <string>
#include "player.h"
using namespace std;


Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

int getHealth() {
    return health;
}

int setHealth(int health) {
    this->health = health;
}

void attack(Player* opponent, int damage) {
    opponent->health = health - takeDamage
}
void takeDamage(int damage) {

}