#include <iostream>

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main(void) {
    int length = 10;
    int *numbers = readNumbers();
    int min = secondSmallestSum(numbers, length);

    printf("%d", min);
    delete(numbers);

}