```
double diceGame(int n, int m) {
    double total = (double)n * m;
    return (n - 1) / ((n < m ? n : m) * total);
}