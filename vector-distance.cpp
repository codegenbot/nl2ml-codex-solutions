#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << std::fixed << std::setprecision(14) << distance << std::endl;

    return 0;
}