#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double p = 0.0;
    for (int i = m + 1; i <= n; ++i)
        p += 1.0 / n;
    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(4) << diceGame(n, m) << std::endl;
    return 0;
}