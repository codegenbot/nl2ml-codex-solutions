#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <iterator>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    return result;
}

int main() {
    assert(issame(get_odd_collatz(1), std::vector<int>{1}));
    return 0;
}