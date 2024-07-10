```cpp
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); ++i) {
        sum += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1({1.0f, 2.0f, 3.0f});
    std::vector<float> v2({4.0f, 5.0f, 6.0f});
    double result = calculateDistance(v1, v2);
    std::cout << "The distance between the two vectors is: " << result << std::endl;
    return 0;
}