double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i < m && i < n; i++) {
        total += (n - i) / (n * m);
    }
    return total;
}