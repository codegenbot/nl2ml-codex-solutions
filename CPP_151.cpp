```cpp
#include <vector>
#include <cmath>

int double_the_difference(const std::vector<float>& numbers) {
    int sum = 0;
    for (float number : numbers) {
        if (std::floor(number) == std::ceil(number)) {
            sum += static_cast<int>(number);
        }
    }
    return abs(sum - double(sum));
}

float odd_sum(const std::vector<float>& numbers) {
    float total = 0.0f;
    for (float number : numbers) {
        if (std::floor(number) != std::ceil(number)) {
            total += number;
        }
    }
    return total;
}

int main() {
    std::vector<float> input_vector = {1.0f, 2.0f, 3.0f};
    int result = double_the_difference(input_vector);
    assert(result == static_cast<int>(odd_sum(input_vector)));
    return 0;
}