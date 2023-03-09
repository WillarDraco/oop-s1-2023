#include <iostream>
#include <math.h>

bool is_palindrome(int integers[], int length) {

    bool pal = false;

    if (length < 1) {
        pal = false;
        return pal;
    }

    for (int i = 0; i < length; i++) {
        if (integers[i] == integers[length - 1 - i]) {
            pal = true;
        } else {
            pal = false;
            return pal;
        }
    }


    if (length % 2 == 0) {
        length = length;
    } else {
        length = length + 1;
    }

    return pal;
}

int sum_array_elements(int integers[], int length) {
    int sum = 0;

    if (length < 1) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length) {
    bool pal = is_palindrome(integers, length);

    if (length <= 0) {
        return -1;
    }

    if (pal == false) {
        return -2;
        printf("non");
    }

    if (pal == true) {
        int sum = sum_array_elements(integers, length);
        return sum;
    }
    return 0;
}