Here is the solution:

double probability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((double)n / total) * (n - (m + 1));
}