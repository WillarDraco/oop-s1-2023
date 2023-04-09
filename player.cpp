#include <iostream>
#include <string>
#include "player.h"
using namespace std;


Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

int Player::getHealth() {
    return health;
}

int Player::setHealth(int health) {
    this->health = health;
}

void Player::attack(Player* opponent, int damage) {
    opponent->health = health - damage;
}

void Player::takeDamage(int damage) {
    cout << name << " takes " << damage << " damage. Remaining health: " << health << endl;
}

string Player::getName() {
    return name
}

string setName(string name);

int setDamage();

int getDamage();