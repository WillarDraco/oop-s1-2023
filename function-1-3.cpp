#include <iostream>

void count_digits(int array[4][4]) {
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    int sevens = 0;
    int eights = 0;
    int nines = 0;

    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 4; column++) {
            switch (array[row][column]) {
                case 0:
                zeros = zeros + 1;
                break;
                case 1:
                ones = ones + 1;
                break;
                case 2:
                twos = twos + 1;
                break;
                case 3:
                threes = threes + 1;
                break;
                case 4:
                fours = fours + 1;
                break;
                case 5:
                fives = fives + 1;
                break;
                case 6:
                sixes = sixes + 1;
                break;
                case 7:
                sevens = sevens + 1;
                break;
                case 8:
                eights = eights + 1;
                break;
                case 9:
                nines = nines + 1;
                break;
            }

        }
    }

    printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d;\n", zeros, ones, twos, threes, fours, fives, sixes, sevens, eights, nines);
    return;    
}