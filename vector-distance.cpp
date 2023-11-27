#include <vector>
#include <iostream>
#include <cmath>

double calculateDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double distance = 0.0;
    int n = vector1.size();

    for (int i = 0; i < n; i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }

    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> n;

    std::vector<double> vector2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateDistance(vector1, vector2);

    std::cout << distance << std::endl;

    return 0;
}