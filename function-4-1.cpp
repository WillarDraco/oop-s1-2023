#include <iostream>
#include <math.h>

int *readNumbers(void) {
    int *numbers = new int[10];
    
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    return numbers;
}

int *secondSmallestSum(int *numbers,int length) {
    int *sums = new int[10];
    int sum = 0;
    for (int j = 0; j < length; j++) {
        sum = 0;
        for (int i = j; i < length; i++) {
            if (numbers[i + 1] == numbers[i] + 1) {
                sum = sum + numbers[i];
            } else {
                continue;
            }
        }  
        sums[j] = sum;      
    }
    return sums;
}