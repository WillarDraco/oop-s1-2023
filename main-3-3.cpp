#include <iostream>

extern double weighted_average(int[], int);

int main(void) {
    int array[] = {1,2,1,4,1,3};
    int n = sizeof(array)/sizeof(int);

    double weighted = weighted_average(array, n);
    printf("The weighted average is %0.02f.\n", weighted);
}