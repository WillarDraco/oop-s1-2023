#include <iostream>

int array_mean(int array[], int n) {
    int sum = 0;

    if (n < 1) {
        return 0.0;
    }

    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    
    sum = double(sum);
    n = double(n);

    double average = sum/n;

    return average;
}