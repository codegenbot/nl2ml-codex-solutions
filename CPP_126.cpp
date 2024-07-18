#include <algorithm>
#include <cassert>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end());
}

int main() {
    assert(is_sorted({1, 2, 3, 4}));

    return 0;
}