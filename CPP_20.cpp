#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size();
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(max(numbers[i], numbers[j]), min_diff), max(min(numbers[i], numbers[j]), min_diff));
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::vector<float>({2.2, 3.1}));
}