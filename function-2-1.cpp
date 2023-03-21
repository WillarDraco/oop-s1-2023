#include <iostream>
#include <math.h>

int *readNumbers(void) {
    int *numbers = new int[10];
    
    for (int i = 0; i < 10; i++) {
        numbers[i] = i;
    }
    return numbers;
}

void hexDigits(int *numbers,int length) {
    if (length <= 0){
        return;
    }
    
    std::cout << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << i << " ";
        if (numbers[i] >= 0 && numbers[i] < 10) {
            std::cout << numbers[i] << " " << numbers[i];
        } else if (numbers[i] >= 10 && numbers[i] < 16) {
            switch(numbers[i]) {
                case 10:
                std::cout << numbers[i] << " " << "A ";
                break;
                case 11:
                std::cout << numbers[i] << " " << "B ";
                break;
                case 12:
                std::cout << numbers[i] << " " << "C ";
                break;
                case 13:
                std::cout << numbers[i] << " " << "D ";
                break;
                case 14:
                std::cout << numbers[i] << " " << "E ";
                break;
                case 15:
                std::cout << numbers[i] << " " << "F ";
                break;
                default:
                break;
            }

        }
        std::cout << std::endl;
    }
}