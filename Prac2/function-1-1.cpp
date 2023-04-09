#include <iostream>


int sum_diagonal(int array[4][4]) {
    int sum = 0;
    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 4; column++) {
            if (row == column) {
                sum = sum + array[row][column];
            }
        }
    }
    return sum;
}