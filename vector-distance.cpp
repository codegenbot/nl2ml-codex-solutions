```cpp
#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v2[i] - v1[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;

    std::vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double distance = calculateEuclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}
```