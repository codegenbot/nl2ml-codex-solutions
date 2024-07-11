#include <iostream>

int main() {
    int n, m;
    double probability = 0.0;
    
    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            probability += static_cast<double>(n - i) * static_cast<double>(m - j) / (n * m);
        }
    }
    
    std::cout << probability << std::endl;

    return 0;
}