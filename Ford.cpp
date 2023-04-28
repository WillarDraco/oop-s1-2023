#include <iostream>
#include "Ford.h"

Ford::Ford() {

}   

Ford::Ford(int badgeNumber, int price) {
    this->badgeNumber = badgeNumber;
    this->price = price;
    litresOfFuel = 60;
    emissions = 0;
}

void Ford::refuel(int litres) {
    float fuel = litres;
    litresOfFuel = litresOfFuel + fuel;
    if (litresOfFuel > 60) {
        litresOfFuel = 60;
    }
}

void Ford::drive(int kms) {
    float distance = kms;
    if (kms > 300) {
        emissions = 234 * 300;
        litresOfFuel = 0;
    } else if (kms < 300) {
        emissions = 234 * kms;
        litresOfFuel = litresOfFuel - (distance / 5);
    }
}

int Ford::get_badgeNumber() {
    return badgeNumber;
}

float Ford::get_litresOfFuel() {
    return litresOfFuel;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

void Ford::set_litresOfFuel(float fuel) {
    litresOfFuel = fuel;
    if (litresOfFuel > 60) {
        litresOfFuel = 60;
    }
}

