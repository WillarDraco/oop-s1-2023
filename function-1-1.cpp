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

void printNumbers(int *numbers,int length) {
    if (length <= 0) {
        return;
    }
    
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
    delete(numbers);
}