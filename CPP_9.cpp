#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int maxVal = INT_MIN;
    for (int i = 0; i < numbers.size(); ++i) {
        maxVal = max(maxVal, numbers[i]);
        result.push_back(maxVal);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}