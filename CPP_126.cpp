#include <iostream>
#include <algorithm>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}