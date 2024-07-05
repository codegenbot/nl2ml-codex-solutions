#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cfloat>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    pair<float, float> closest_pair;
    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i - 1], numbers[i]};
        }
    }
    return {closest_pair.first, closest_pair.second};
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {3.1, 4.1}));
    cout << "Test passed!" << endl;
    return 0;
}