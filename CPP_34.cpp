#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main_new() {
    auto v = std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123};
    assert(issame(std::vector<int>{5, 3, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{2, 3, 5, 9, 123, 0}));

    return 0;
}