#include "Person.h"
#include <iostream>
#include <string>

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main(void) {
    int n = 5;
    PersonList list = createPersonList(n);
    PersonList copy = shallowCopyPersonList(list);
}