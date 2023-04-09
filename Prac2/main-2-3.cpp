#include <iostream>
#include <math.h>

extern int sum_if_palindrome(int integers[], int length);

int main(void) {
    int integers[] = {3,1,3};
    int length = sizeof(integers) / sizeof(int);

    int sum = sum_if_palindrome(integers, length);

    printf("%d\n", sum);
}