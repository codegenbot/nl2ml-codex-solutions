#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::cin.ignore(); // Clear the newline character from the input stream

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        char comma; 
        std::cin >> vec2[i] >> comma;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    std::cout << std::sqrt(sum) << "\n";

    return 0;
}