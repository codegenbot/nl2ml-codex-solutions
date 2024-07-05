#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    if (numbers.empty()) return result;
    int current_max = numbers[0];
    for (int num : numbers) {
        if (num > current_max) current_max = num;
        result.push_back(current_max);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}