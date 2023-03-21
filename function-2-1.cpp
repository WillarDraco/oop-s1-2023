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

void hexDigits(int *numbers,int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] >= 0 && numbers[i] < 10) {
            std::cout << numbers[i] << " ";
        } else if (numbers[i] >= 10 && numbers[i] < 16) {
            switch(numbers[i]) {
                case 10:
                std::cout << "A ";
                break;
                case 11:
                std::cout << "B ";
                break;
                case 12:
                std::cout << "C ";
                break;
                case 13:
                std::cout << "D ";
                break;
                case 14:
                std::cout << "E ";
                break;
                case 15:
                std::cout << "F ";
                break;
                default:
                break;
            }

        }
        std::cout << std::endl;
    }
}