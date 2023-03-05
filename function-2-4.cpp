#include <iostream>

bool is_ascending(int array[], int n) {

    bool ascending = true;

    if (n < 1) {
        ascending = false;
        return ascending;
    }

    for (int i = 1; i < n; i++) {
        if (array[i - 1] <= array[i]) {
            ascending = true;
        } else if (array[i - 1] > array[i]) {
            ascending = false;
            return ascending;
        }
    }

    return ascending;
}