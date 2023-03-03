int count_evens(int number) {
    int count = 0;

    for (int i = 1; i < number + 1; i++) {
        if (i%2 == 0){
            count = count + 1;
        }
    }
    return count;
}
