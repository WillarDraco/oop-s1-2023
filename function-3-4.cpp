#include <iostream>

void print_pass_fail(char grade) {

    if (grade < 65 || grade > 70) {
        printf("Nothing\n");
        return;
    }

    switch (grade) {
        case 'A':
            printf("Pass\n");
            break;
        case 'B':
            printf("Pass\n");
            break;
        case 'C':
            printf("Pass\n");
            break;
        case 'D':
            printf("Fail\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
    }
    return;
}