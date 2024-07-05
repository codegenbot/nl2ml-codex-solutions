#include <iostream>
#include <vector>
#include <limits.h>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int current_max = INT_MIN;
    for (int num : numbers) {
        if (num > current_max) {
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "Test passed!" << endl;
    return 0;
}