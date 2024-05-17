#include <iostream>

extern double array_mean(int[], int);

int main(void) {
    int array[] = {2,1};
    int n = sizeof(array)/sizeof(int);

    double mean = array_mean(array, n);
    printf("The average is %f. \n", mean);
}