#include <iostream>
#include <vector>
#include <cassert>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = std::numeric_limits<int>::min();
    for (size_t i = 0; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}