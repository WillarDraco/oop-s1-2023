#include <iostream>

extern int min_element(int[], int);

int main(void) {
    int array[] = {1, 2, 3, 4, -1};
    int n = sizeof(array)/sizeof(int);

    int min = min_element(array, n);
    printf("The minimum element is %d. \n", min);
}