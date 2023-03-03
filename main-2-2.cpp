#include <iostream>

extern int max_element(int[], int);

int main(void) {
    int array[] = {1, 2, 3, 4, -1};
    int n = sizeof(array)/sizeof(int);

    int max = max_element(array, n);
    printf("The maximum element is %d. \n", max);
}