#include <iostream>
#include <tuple>
#include <cmath>
#include "Spot.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"

int main(void) {
    Snare snare(1,2);
    Persona* persona = new Persona(0,0);
    persona->shift(1,2);

}