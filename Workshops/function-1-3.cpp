#include "Person.h"
#include <iostream>
#include <string>

Person *createPersonArray(int n) {
    Person p1;
    p1.name = "Jane Doe";
    p1.age = 1;

    Person *personArray = new Person[n];

    for (int i = 0; i < n; i++) {
        personArray[i] = p1;
    }
    return personArray;
}

PersonList createPersonList(int n) {
    PersonList plist;
    plist.people = createPersonArray(n);
    plist.numPeople = n;
    return plist;
}

PersonList deepCopyPersonList(PersonList pl) {
    int n = pl.numPeople;
    PersonList deepCopy;

    Person *newArray = new Person[n];

    for (int i = 0; i < n; i++) {
        newArray[i] = pl.people[i];
    }
    deepCopy.numPeople = n;
    deepCopy.people = newArray;
    return deepCopy;
}