#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2] = {0, 0};

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair[0] = numbers[i];
            closest_pair[1] = numbers[i + 1];
        }
    }

    return {closest_pair[0], closest_pair[1]};
}