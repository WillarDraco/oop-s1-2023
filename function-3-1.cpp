#include <iostream>
#include <math.h>

int *readNumbers(void) {
    int *numbers = new int[10];
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Please enter a number: ";
     
        std::cin >> numbers[i];
    }
    return numbers;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    bool equal = false;
    for (int i = 0; i < length; i++) {
        if (numbers1[i] == numbers2[i]) {
            equal = true;
        } else {
            equal = false;
            return equal;
        }
    }
    return equal;
}