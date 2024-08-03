#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    std::vector<int> test_case;
    assert(move_one_ball(test_case) == true); // Add test cases here
    return 0;
}