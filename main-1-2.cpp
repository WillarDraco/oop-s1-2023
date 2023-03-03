#include <iostream>

extern double array_mean(int array[], int n);

int main(void) {
    int array[5] = {2,2,2,2,2};
    int n = sizeof(array)/sizeof(int);

    double mean = array_mean(array, n);
    printf("The average is %0.02f. \n", mean);
}