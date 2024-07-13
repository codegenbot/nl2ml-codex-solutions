#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

int main() {
    size_t n;
    std::cin >> n;
    std::vector<float> vec1(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    size_t m;
    std::cin >> m;
    std::vector<float> vec2(m);
    for (size_t i = 0; i < m; ++i) {
        std::cin >> vec2[i];
    }

    float sum = 0.0;
    for (size_t i = 0; i < std::min(n, m); ++i) {
        float diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }

    float result = std::sqrt(sum);
    std::cout << std::setprecision(12) << result << std::endl;

    return 0;
}