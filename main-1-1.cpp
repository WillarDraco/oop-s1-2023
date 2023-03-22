#include "Person.h"
#include <iostream>
#include <string>

extern Person* createPersonArray(int n);

int main(void) {
    int n = 5;
    Person *array = createPersonArray(n);
    delete(array);
}