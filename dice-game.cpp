#include <iostream>

int main() {
    double n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (double i = 1; i <= n; ++i) {
        for (double j = 1; j <= m; ++j) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }

    std::cout << probability << std::endl;

    return 0;
}