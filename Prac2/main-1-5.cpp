#include <iostream>

extern void print_summed(int array1[3][3],int array2[3][3]);

int main(void) {
    int array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int array2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}};
    print_summed(array1, array2);
}