#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float> &numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements(numbers, 0.5) == false);
}