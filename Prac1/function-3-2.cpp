#include <iostream>
#include <algorithm>
using namespace std;

int median_array(int array[], int n) {

    int median = 0;

    if (n < 1 || n % 2 == 0) {
        return median;
    }
    
    sort(array, array + n);

    median = array[n/2];

    return median;
}