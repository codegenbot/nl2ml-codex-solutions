#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2] = {0.0f, 0.0f};

    for (int i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i-1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair[0] = numbers[i-1];
            closest_pair[1] = numbers[i];
        }
    }

    return {closest_pair[0], closest_pair[1]};
}