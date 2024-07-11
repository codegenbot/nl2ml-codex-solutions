#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            probability += (1.0 / n) * (1.0 / m);
        }
    }

    std::cout << probability << std::endl;

    return 0;
}