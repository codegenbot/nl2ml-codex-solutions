
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> rescaled;
    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }
    return rescaled;
}

bool is_same(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> numbers = {2.0, 4.0, 6.0, 8.0, 10.0};
    std::vector<float> expected_output = {0.0, 0.25, 0.5, 0.75, 1.0};
    std::vector<float> result = rescale_to_unit(numbers);
    
    if (is_same(result, expected_output)) {
        std::cout << "Output matches the expected result." << std::endl;
    } else {
        std::cout << "Output does not match the expected result." << std::endl;
    }
    
    return 0;
}