#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cassert>

using namespace std;

pair<float, float> find_closest_elements(const vector<float>& numbers);
bool issame(const vector<float>& a, const vector<float>& b);

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return (a == b);
}

int main() {
    vector<float> numbers = {3.2, 1.5, 4.8, 2.1, 5.7};
    pair<float, float> closest_elements = find_closest_elements(numbers);
    cout << "Closest Elements: " << closest_elements.first << " " << closest_elements.second << endl;

    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});

    return 0;
}