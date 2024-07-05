#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};
    int min_value = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < min_value) {
            min_value = arr[i];
            min_index = i;
        }
    }
    if (min_index == -1) return {};
    return {min_value, min_index};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({7, 9, 8, 1}), {8, 2}));
    cout << "All test cases passed!" << endl;
    return 0;
}