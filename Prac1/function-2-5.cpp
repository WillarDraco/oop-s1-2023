#include <iostream>

bool is_descending(int array[], int n) {

    bool descending = false;

    if (n < 1) {
        descending = false;
        return descending;
    }

    for (int i = 1; i < n; i++) {
        if (array[i - 1] >= array[i]) {
            descending = true;
        } else if (array[i - 1] < array[i]) {
            descending = false;
            return descending;
        }
    }

    return descending;
}