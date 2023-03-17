#include <iostream>
#include <math.h>

void print_matrix(int array[10][10]) {
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < 10; column++) {
            printf("%d ", array[row][column]);
        }
        printf("\n");
    }
}