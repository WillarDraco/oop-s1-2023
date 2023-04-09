int count(int array[], int n) {
    int count = 0;
    int length = 5;

    for (int i = 0; i<length; i++) {
        if (array[i]%2 == 0){
            count = count + 1;
        }
    }
    return count;
}
