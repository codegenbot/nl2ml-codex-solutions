double getProbability(int n, int m) {
    return 1.0 * (n - 1) / (n * m) + (n * m - (n - 1)) / (n * m);
}