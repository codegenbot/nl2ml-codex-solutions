#include <iostream>
#include <vector>
#include <algorithm>

bool has_close_elements(std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    // Test your function here if needed
    return 0;
}