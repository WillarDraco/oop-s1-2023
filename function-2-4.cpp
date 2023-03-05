#include <iostream>

bool is_ascending(int array[], int n) {

    bool ascending = true;

    if (n < 1) {
        ascending = false;
        return ascending;
    }

    for (int i = 0; i < n; i++) {
        if (array[i] < array[i + 1]) {
            ascending = true;
        } else {
            ascending = false;
            return ascending;
        }
    }

    return ascending;
}