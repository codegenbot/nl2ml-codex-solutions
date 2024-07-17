#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;

    for (int i = 1; i <= n; ++i) {
        peterWins += (double)(n - i + 1) / total;
    }

    return peterWins;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << probability(n, m) << std::endl;

    return 0;
}