#include <iostream>

extern void two_five_nine(int[], int);

int main(void) {
    int array[] = {2,5,9,9,9,2,5,5,5};
    int n = sizeof(array)/sizeof(int);

    two_five_nine(array, n);
}