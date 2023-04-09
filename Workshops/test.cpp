#include "Person.h"
#include <string>
#include <iostream>

extern PersonList createPersonList(int n);

int main(void) {
    int n = 5;
    PersonList list = createPersonList(n);

    for (int i = 0; i < n; i++) {
        std::cout << list.people[i].name;
    }
}