#include "Person.h"
#include <iostream>
#include <string>

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main(void) {
    int n = 5;
    PersonList list = createPersonList(n);
    PersonList copy = deepCopyPersonList(list);
}