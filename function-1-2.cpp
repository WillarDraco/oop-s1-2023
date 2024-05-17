#include <iostream>

double array_mean(int array[], int n) {
    int sumint = 0;

    if (n < 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sumint = sumint + array[i];
    }

    double sum = double(sumint);
    double ndub = double(n);

    double average = sum/ndub;

    return average;
}