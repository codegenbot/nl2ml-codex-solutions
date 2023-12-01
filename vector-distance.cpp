#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;

    for (int i = 0; i < vector1.size(); i++) {
        sum += pow(vector1[i] - vector2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::vector<double> vector2(vector1.size());
    for (int i = 0; i < vector1.size(); i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}