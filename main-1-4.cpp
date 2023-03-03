#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main(void) {
    int array[5] = {1,2,3,4,5};
    int secondarray[5] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(int);

    int sum = sum_two_arrays(array, secondarray, n);
    printf("The sum is %d. \n", sum);
}