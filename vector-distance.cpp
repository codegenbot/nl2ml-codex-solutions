#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double distance = std::sqrt(sum);
    std::cout << std::fixed << std::setprecision(13) << distance << std::endl;

    return 0;
}