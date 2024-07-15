#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {result.first, result.second};
}

int main() {
    vector<float> numbers = {3.5, 2.1, 5.7, 1.8, 4.2};
    pair<float, float> closest_elements = find_closest_elements(numbers);
    cout << "Closest elements: " << closest_elements.first << " and " << closest_elements.second << endl;
    return 0;
}