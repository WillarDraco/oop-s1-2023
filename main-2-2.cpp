# include <iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(void) {
    int binary_digits[] = {1,0,1,1};
    int number_of_digits = sizeof(binary_digits)/sizeof(int);

    int decimal = bin_to_int(binary_digits, number_of_digits);

    printf("%d\n", decimal);
}