#include <iostream>
#include <math.h>

extern int *readNumbers(void);
extern int *reverseArray(int *numbers1, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(void) {
    int length = 10;
    int *array = readNumbers();
    int *reverse = reverseArray(array, length);
    bool equal = equalsArray(array, reverse, length);

    std::cout << equal << std::endl;
    delete(array);
    delete(reverse);
}