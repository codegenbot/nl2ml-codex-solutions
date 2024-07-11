#include <iostream>
#include <vector>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    for (size_t i = 0; i < l.size(); ++i) {
        for (size_t j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    assert(pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    assert(pairs_sum_to_zero({-3, 3, 0, -5, 5}) == true);
    assert(pairs_sum_to_zero({-2, 4, -4, 2, 0}) == true);
    assert(pairs_sum_to_zero({1, 2, 3, 4, 5}) == false);
    
    return 0;
}