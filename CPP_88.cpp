#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(std::vector<int>({21, 14, 23, 11}), std::vector<int>({23, 21, 14, 11})));
    return 0;
}