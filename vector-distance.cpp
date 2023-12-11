```cpp
#include <iostream>
#include <vector>
#include <cmath>

float calculateDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    float sum = 0.0f;
    for (int i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::cin >> n;

    std::vector<float> vec2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    float distance = calculateDistance(vec1, vec2);

    std::cout << std::fixed << std::setprecision(2) << distance << std::endl;

    return 0;
}
```