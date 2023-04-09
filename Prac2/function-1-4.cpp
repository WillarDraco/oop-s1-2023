#include <iostream>

void print_scaled(int array[3][3],int scale) {
    
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            array[row][column] = array[row][column] * scale;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}