#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({0, 6, 6, -76, -21, 23, 4}, {-76, -21, 0, 4, 23, 6, 6}));
}