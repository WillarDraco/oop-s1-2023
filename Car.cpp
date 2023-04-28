#include <iostream>
#include "Car.h"

Car::Car() {
}

Car::Car(int price) {
    this->price = price;
    emissions = 0;
}

void Car::drive(int kms) {
    emissions = 20 * kms;
}

int Car::get_price() {
    return price;
}
void Car::set_price(price) {
    this->price = price;
}
int Car::get_emissions() {
    return emissions;
}

void Car::set_emissions(emissions) {
    this->emissions = emissions;
}