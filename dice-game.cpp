Here is the solution:

double getProbability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - (n / total) * (m / total);
}