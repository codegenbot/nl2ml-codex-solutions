double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= m; i++) {
        p += (double)(n - i + 1) / total;
    }

    return p;
}