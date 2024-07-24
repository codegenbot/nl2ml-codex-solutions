#include <vector>
#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i <= min(n, m); i++) {
        p += (n - i) / total;
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(5) << diceGame(n, m);
    return 0;
}