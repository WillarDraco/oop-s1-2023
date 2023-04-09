#include <iostream>
#include <math.h>

int binary_to_int(int binary_digits[], int number_of_digits) {

    int number = 0;

    for (int j = 0; j < number_of_digits; j++) {
        number = number + (binary_digits[number_of_digits - 1 - j] * (pow(2, j)));
    }

    return number;
}