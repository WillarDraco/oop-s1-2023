#include <iostream>


int is_identity(int array[10][10]) {
    bool id = true;
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < 10; column++) {
            if (row == column && array[row][column] == 1) {
                id = true;
            }
            if (row != column && array[row][column] == 0) {
                id = true;
            } else if (row != column && array[row][column] != 0) {
                id = false;
                return 0;
            }
        }
    }

    if (id == true) {
        return 1;
    } else {
        return 0;
    }
}