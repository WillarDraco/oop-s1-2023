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

    fleet[0] = &S;
    fleet[1] = &f1;
    fleet[2] = &car;
    fleet[3] = &f2;
    fleet[4] = &T;
}

Car** Fleet::get_fleet() {
    return fleet;
}