```cpp
#include <algorithm>
#include <numeric>
#include <vector>

bool issame(vector<float> a, vector<float>b) { return a == b; }

vector<vector<float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return {{closest_pair.first}, {closest_pair.second}};
}