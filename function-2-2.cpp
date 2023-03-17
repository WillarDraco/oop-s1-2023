#include <iostream>
#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits) {
    int number = 0;

    for (int i = 0; i < number_of_digits; i++) {
        number = number + (binary_digits[number_of_digits - 1 - i] * pow(2, i));
    }
    return number;
}