#include <iostream>

double weighted_average(int array[], int n) {

    if (n < 1) {
        return 0;
    }

    double count[] = {};
    double counter = 0;
    double weighted_average = 0;

    for (int i = 0; i < n; i++) {
        counter = 0;
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                counter = counter + 1;
            }
        }
        weighted_average = weighted_average + (counter * array[i] / n);
    }

    return weighted_average;
}