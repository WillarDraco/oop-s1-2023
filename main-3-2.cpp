#include <iostream>

extern int median_array(int[], int);

int main(void) {
    int array[] = {5,4,3,2,1};
    int n = sizeof(array)/sizeof(int);

    int median = median_array(array, n);

    printf("The median is %d,\n", median);
}