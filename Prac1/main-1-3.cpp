#include <iostream>

extern int num_count(int[], int, int);

int main(void) {
    int array[] = {1, 3, 3, 4, 5};
    int n = sizeof(array)/sizeof(int);
    int number = 3;

    int count = num_count(array, n, number);
    printf("The sum is %d. \n", count);
}