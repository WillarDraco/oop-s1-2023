#include <iostream>
#include "Fleet.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet() {
    fleet = new Car*[5];
    Tesla S('S', 10000);
    Ford f1(1, 20000);
    Car car(30000);
    Ford f2(2, 40000); 
    Tesla T('T', 50000);

    fleet[1] = &S;
    fleet[2] = &f1;
    fleet[3] = &car;
    fleet[4] = &f2;
    fleet[5] = &T;
}

Car **Fleet::get_fleet() {
    return fleet;
}