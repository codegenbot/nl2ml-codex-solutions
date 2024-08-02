#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::vector<float> result;

    if (numbers.size() <= 1)
        return result;

    std::sort(numbers.begin(), numbers.end());

    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }

    result.push_back(closest_pair.first);
    result.push_back(closest_pair.second);

    return result;
}