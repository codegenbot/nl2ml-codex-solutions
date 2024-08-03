#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<long double> vec1(n);
    std::vector<long double> vec2(n);
    
    long double distance = 0.0;

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
        distance += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    distance = std::sqrt(distance);

    std::cout << std::fixed << std::setprecision(17) << distance << std::endl;

    return 0;
}