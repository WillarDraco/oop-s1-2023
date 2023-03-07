#include <iostream>
#include <math.h>

void base(int number, int n) {
    int counter = 0;
    int base = number;

    while (number != 0) {
        number = floor(number / n);
        counter = counter + 1;
    }

    int *array = new int[counter];
    
    for (int i = 0; i < counter; i++) {
        array[i] = base % n;
        base = floor(base / 2);
    }

    for (int j = 0; j < counter; j++) {
        printf("%d", array[counter - j - 1]);
    }    

    printf("\n");
    return;
}