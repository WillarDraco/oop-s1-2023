#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(void) {
    int length = 10;
    printNumbers(readNumbers(), length);
    delete(readNumbers());
}