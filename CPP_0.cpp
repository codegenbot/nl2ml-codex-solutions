#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (std::fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    assert(has_close_elements(a, 0.5) == true);
    return 0;
}