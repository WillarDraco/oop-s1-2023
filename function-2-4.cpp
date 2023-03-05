#include <iostream>

bool is_ascending(int array[], int n) {

    if (n < 1) {
        return false;
    }

    bool ascending = true;

    for (int i = 0; i < n; i++) {
        if (array[i] < array[i + 1]) {
            ascending = true;
        } else {
            ascending = false;
            return ascending;
            break;
        }
    }

    return ascending;
}