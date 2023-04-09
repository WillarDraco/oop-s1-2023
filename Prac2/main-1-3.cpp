#include <iostream>

extern void count_digits(int array[4][4]);

int main(void) {
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    count_digits(array);
}