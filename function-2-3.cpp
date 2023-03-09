#include <iostream>
#include <math.h>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length) {
    bool pal = is_palindrome(integers, length);

    if (length <= 0) {
        return -1;
    } else if (pal == false) {
        return -2;
    }

    int sum = sum_array_elements(integers, length);
    return sum;
}