double probability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - (n - 1) * (m / total);
}