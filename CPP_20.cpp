#include <algorithm>
#include <limits>
#include <numeric>
#include <cmath>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    pair<float, float> closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return vector<float>(closestPair.begin(), closestPair.end());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
}