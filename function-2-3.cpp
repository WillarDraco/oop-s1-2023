#include <iostream>
#include <math.h>

bool is_array_palindrome(int integers[], int length) {
    bool pal = false;
    
    if (length <= 0) {
        return -1;
    }

    for (int i = 0; i < length; i++) {
        if (integers[i] == integers [length - 1 - i]) {
            pal = true;
        } else if (integers[i] != integers [length - 1 - i]) {
            pal = false;
            return pal;
            break;
        }
    }
    return pal;
}

int sum_integers(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    bool pal = false;
    pal = is_array_palindrome(integers, length);

    if (pal == false) {
        return -2;
    }

    int sum = sum_integers(integers, length);

    return sum;
}