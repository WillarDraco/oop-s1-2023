#include <iostream>

extern double sum_even(double array[], int n);

int main(void) {
    double array[] = {1, 3, 3, 4, 5};
    int n = sizeof(array)/sizeof(int);

    double even_sum = sum_even(array, n);
    printf("The sum is %0.02f. \n", even_sum);
}