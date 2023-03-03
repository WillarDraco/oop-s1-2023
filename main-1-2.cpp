#include <iostream>

extern double array_mean(int array[], int n);

int main(void) {
    int array[5] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(int);

    double average = array_mean(array, n);
    printf("The average is %0.01f. \n", average);
}