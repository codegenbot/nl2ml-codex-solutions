int fizz_buzz(int n) {
    int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i % 13 == 0 || i % 11 == 0) {
            int temp = i;
            while (temp > 0) {
                if (temp % 10 == 7) {
                    count++;
                }
                temp /= 10;
            }
        }
    }
    return count;
}