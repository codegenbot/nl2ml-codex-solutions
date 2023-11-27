#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    std::vector<double> vector2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin.ignore();
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}