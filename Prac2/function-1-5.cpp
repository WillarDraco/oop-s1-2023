#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]) {
    
    int summed[3][3] = {};

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            summed[row][column] = array1[row][column] + array2[row][column];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", summed[i][j]);
        }
        printf("\n");
    }
}