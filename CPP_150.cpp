int x_or_y(int n, int x, int y) {
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return y;
        }
    }
    return x;
}