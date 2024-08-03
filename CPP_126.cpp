#include <iostream>
#include <vector>
#include <cassert>

bool is_sorted(const std::vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || lst[i] == lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({1, 3, 2, 4}) == false);
    assert(is_sorted({4, 3, 2, 1}) == false);

    return 0;
}