#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    long double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += static_cast<long double>((vec1[i] - vec2[i])) * (vec1[i] - vec2[i]);
    }

    std::cout << std::sqrt(sum) << std::endl;

    return 0;
}