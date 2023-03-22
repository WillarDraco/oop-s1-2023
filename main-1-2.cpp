#include "Person.h"
#include <iostream>
#include <string>

extern PersonList createPersonList(int n);

int main(void) {
    int n = 5;
    PersonList list = createPersonList(n);
}