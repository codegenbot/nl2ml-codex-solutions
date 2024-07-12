#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double prob = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            prob += (double)(n - i) * (m - j) / (n * m);
        }
    }
    
    std::cout << prob << std::endl;
    
    return 0;
}