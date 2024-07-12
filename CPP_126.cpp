#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(std::vector<int>& lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(std::is_sorted({1, 2, 3, 4}) == true);
    assert(std::is_sorted({1, 3, 2, 4}) == false);

    return 0;
}