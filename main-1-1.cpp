#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(void) {
    int *numbers = readNumbers();
    int length = 10;
    printNumbers(numbers, length);
    delete(numbers);
}