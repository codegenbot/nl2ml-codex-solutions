#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sum);
}

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

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << "Euclidean Distance: " << distance << std::endl;

    return 0;
}