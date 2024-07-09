#include <algorithm>
#include <limits>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    vector<float> a = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert (issame(vector<float>({a[0], a[1]}), vector<float>({2.2, 3.1})));
    return 0;
}

bool issame(vector<float> a, vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}