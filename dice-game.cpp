#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    long double probability = 0.0L;
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (i > j) {
                probability += 1.0L / n / m;
            } else if (i == j) {
                probability -= 1.0L / n / m;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    
    return 0;
}