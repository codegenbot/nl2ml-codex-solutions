```cpp
#include <initializer_list>
#include <algorithm>
#include <vector>

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return (a.first == b.first && a.second == b.second);
}

std::pair<std::pair<float, float>, float> find_closest_elements(std::vector<std::pair<float, float>> numbers);

std::pair<std::pair<float, float>, float> find_closest_elements(std::vector<std::pair<float, float>> numbers) {
    std::pair<std::pair<float, float>, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i].first - numbers[j].second);
            if (diff < min_diff) {
                min_diff = diff;
                closest.first = {numbers[i].first, numbers[j].second};
                closest.second = min_diff;
            }
        }
    }

    return closest;
}

int main() {
    std::vector<std::pair<float, float>> nums = {{1.1f, 2.2f}, {3.1f, 4.1f}};
    assert(issame(find_closest_elements(nums), std::make_pair(std::pair<float, float>(2.2f, 3.1f), 0.0f)));
}