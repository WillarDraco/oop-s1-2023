
# include <iostream>

extern int palindrome_sum(int integers[], int length);

int main(void) {
    int integers[] = {};
    int length = sizeof(integers)/sizeof(int);

    int sum = palindrome_sum(integers, length);

    printf("%d\n", sum);
}