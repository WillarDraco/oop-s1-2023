#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void print_binary_str(string decimal_number) {

    int counter = 0;
    int n = 2;
    int number = stoi(decimal_number);
    int base = stoi(decimal_number);
    
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