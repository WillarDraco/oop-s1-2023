#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int);

int main() {
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    int count = count_evens(number);
    printf("The number of evens is %d. \n", count);
}