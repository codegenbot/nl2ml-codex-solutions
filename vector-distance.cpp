#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    std::vector<float> vec2(n);
    float sum = 0.0f;

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> vec2[i];
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    float result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}