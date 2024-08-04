#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    double probability = 0.0;
    double epsilon = 1e-9;

    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j + epsilon) {
                probability += 1.0 / n / m;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(9) << probability << std::endl;

    return 0;
}