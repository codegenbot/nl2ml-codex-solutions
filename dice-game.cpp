#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            probability += (double)i / n / m;
        }
    }
    
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}