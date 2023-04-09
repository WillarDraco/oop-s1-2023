#include <iostream>
#include <math.h>

extern int *readNumbers(void);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(void) {
    int *array1 = readNumbers();
    int *array2 = readNumbers();
    int length = 10;
    bool equal = equalsArray(array1, array2, length);

    std::cout << equal << std::endl;
    delete(array1);
    delete(array2);
}