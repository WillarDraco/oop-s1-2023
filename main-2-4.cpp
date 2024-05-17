#include <iostream>

extern bool is_ascending(int[], int);

int main(void) {
    int array[] = {1,2,3,4};
    int n = sizeof(array)/sizeof(int);

    bool ascending = is_ascending(array, n);

    if (ascending == true) {
        printf("The array is ascending.\n");
    } else if (ascending == false) {
        printf("The array is not ascending.\n");
    }
}