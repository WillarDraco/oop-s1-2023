#include <iostream>

void two_five_nine(int array[], int n) {

    if (n < 1) {
        printf("2:0;3:0;9:0\n");
        return;
    }

    int twocount = 0;
    int fivecount = 0;
    int ninecount = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] == 2) {
            twocount = twocount + 1;
        } else if (array[i] == 5) {
            fivecount = fivecount + 1;
        } else if (array[i] == 9) {
            ninecount = ninecount + 1;
        }
    }

    printf("2:%d;5:%d;9:%d;\n", twocount, fivecount, ninecount);
}