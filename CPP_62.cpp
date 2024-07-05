#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

vector<float> derivative(const vector<float> &xs) {
    vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(const vector<float> &a, const vector<float> &b) {
    return a == b;
}

int main() {
    assert(issame(derivative({1}), {}));        // Check for `{1}`
    assert(issame(derivative({1, 2, 3}), {2, 6})); // Check for `{1, 2, 3}`
    cout << "All test cases passed!" << endl;
    return 0;
}