#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> result;
    for (float num : numbers) {
        float rescaled = (num - min_val) / (max_val - min_val);
        result.push_back(rescaled);
    }

    return result;
}

int main() {
    assert (issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}) , {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}