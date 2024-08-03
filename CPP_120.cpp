#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(const vector<int>& a, const vector<int>& b) {
        return a == b;
    }
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}