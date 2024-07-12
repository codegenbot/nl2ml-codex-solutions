#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
    }

    if (vec1.size() != vec2.size()) {
        std::cout << "Input vectors must have the same size!" << std::endl;
        return 1;
    }

    double result = 0.0;
    for (int i = 0; i < n; ++i) {
        result += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    std::cout << std::fixed << std::sqrt(static_cast<double>(result)) << std::endl;

    return 0;
}