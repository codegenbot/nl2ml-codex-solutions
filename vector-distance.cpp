#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    size_t n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    size_t m;
    std::cin >> m;
    std::vector<double> vec2(m);
    for (size_t i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }

    double sum = 0.0;
    for (size_t i = 0; i < std::max(n, m); ++i) {
        double diff = (i < n ? vec1[i] : 0) - (i < m ? vec2[i] : 0);
        sum += diff * diff;
    }

    double result = std::sqrt(sum);
    std::cout << std::fixed << std::setprecision(14) << result << std::endl;

    return 0;
}