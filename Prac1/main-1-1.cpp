#include <iostream>

extern int array_sum(int[], int);

int main(void) {
    int array[5] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(int);

    int sum = array_sum(array, n);
    printf("The sum is %d. \n", sum);
}