#include <iostream>

bool is_fanarray(int array[], int n) {

    bool fan = false;

    if (n < 1) {
        fan = false;
        return fan;
    }

    for (int i = 0; i < n; i++) {
        if (array[i] == array[n - 1 - i]) {
            fan = true;
        } else {
            fan = false;
            return fan;
        }
    }

    return fan;
}