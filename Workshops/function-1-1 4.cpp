#include "Person.h"
#include <iostream>
#include <string>

Person *createPersonArray(int n) {
    Person p1;
    p1.name = "John Doe";
    p1.age = 0;

    Person *personArray = new Person[n];

    for (int i = 0; i < n; i++) {
        personArray[i] = p1;
    }
    return personArray;
}