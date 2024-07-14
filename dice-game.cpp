#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= (i * 1.0 / n) * (i * 1.0 / m);
    }
    return total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(10) << diceGame(n, m) << std::endl;
    return 0;
}