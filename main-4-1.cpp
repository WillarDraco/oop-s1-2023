#include <iostream>

extern int *readNumbers();
extern int *secondSmallestSum(int *numbers,int length);

int main(void) {
    int length = 10;
    int *numbers = readNumbers();
    int *sums = secondSmallestSum(numbers, length);

    for (int i = 0; i < length; i++) {
        std::cout << i << " " << sums[i] << std::endl;
    }

    delete(numbers);
    delete(sums);
}