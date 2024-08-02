#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    if (arr.empty()) {
        return true; // Handling case for empty input
    }

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
    assert(move_one_ball({}) == true);
    // Additional test cases can be added here
    return 0;
}