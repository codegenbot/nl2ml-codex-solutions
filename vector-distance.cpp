```cpp
#include <vector>
#include <iostream>
#include <cmath>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); ++i) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vector1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector1[i];
    }

    std::vector<float> vector2(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    std::cout << distance << std::endl;

    return 0;
}