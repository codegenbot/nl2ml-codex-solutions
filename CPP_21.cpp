#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

// Function to rescale numbers to the unit interval [0,1]
std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    for (float& num : numbers) {
        num = (num - min_val) / (max_val - min_val);
    }
    return numbers;
}

// Function to compare two floating point vectors with a tolerance
bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    const float epsilon = 1e-5;
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::fabs(a[i] - b[i]) > epsilon) return false;
    }
    return true;
}

int main() {
    std::vector<float> rescaled = rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0});
    std::vector<float> expected = {0.25, 0.0, 1.0, 0.5, 0.75};
    assert(issame(rescaled, expected));

    std::cout << "All tests passed!" << std::endl;
    return 0;
}