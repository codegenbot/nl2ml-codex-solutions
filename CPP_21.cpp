#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled);
    }
    return result;
}