Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i <= min(n, m); i++) {
        p += (n - i) / total;
    }

    return p;
}