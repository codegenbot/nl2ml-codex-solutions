#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    return 0;
}