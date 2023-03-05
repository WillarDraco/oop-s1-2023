#include <iostream>

extern bool is_fanarray(int[], int);

int main(void) {
    int array[] = {2,1,4,2,1};
    int n = sizeof(array)/sizeof(int);

    bool fan = is_fanarray(array, n);

    if (fan == true) {
        printf("The array is a fan array.\n");
    } else if (fan == false) {
        printf("The array is not fan array.\n");
    }
}