#include <iostream>

extern bool is_descending(int[], int);

int main(void) {
    int array[] = {4,3,2,1};
    int n = sizeof(array)/sizeof(int);

    bool descending = is_descending(array, n);

    if (descending == true) {
        printf("The array is descending.\n");
    } else if (descending == false) {
        printf("The array is not dscending.\n");
    }
}