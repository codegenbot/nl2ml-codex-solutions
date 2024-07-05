#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    for(auto &num : numbers) {
        num = (num - min_val) / (max_val - min_val);
    }
    return numbers;
}

bool issame(vector<float> a, vector<float> b) {
    const float EPS = 1e-5;
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > EPS) return false;
    }
    return true;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    cout << "Test passed!" << endl;
    return 0;
}