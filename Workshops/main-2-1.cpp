#include <iostream>
#include <math.h>

extern int *readNumbers(void);
extern void hexDigits(int *numbers,int length);

int main(void) {
    int *numbers = readNumbers();
    int length = 10;
    hexDigits(numbers, length);
    delete(numbers);
}