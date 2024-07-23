#include <algorithm>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for(int i = 1; i <= min(n, m); i++) {
        p += max(0.0, (n - i) / (total - (m - i)));
    }

    return p;
}