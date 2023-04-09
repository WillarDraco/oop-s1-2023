#include <iostream>

double sum_even(double array[], int n) {

    if (n < 1) {
        return 0;
    }

    double sum_even = 0;

    for (int i = 0; i < n;) {
        sum_even = sum_even + array[i];
        i = i + 2;
    }

    return sum_even;
}