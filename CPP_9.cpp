#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    if (numbers.empty()) return result;
    
    int current_max = numbers[0];
    result.push_back(current_max);
    
    for (size_t i = 1; i < numbers.size(); ++i) {
        current_max = max(current_max, numbers[i]);
        result.push_back(current_max);
    }
    
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    cout << "All tests passed!" << endl;
    return 0;
}