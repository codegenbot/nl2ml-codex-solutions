#include <iostream>
#include <algorithm>
#include <vector>
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
    std::vector<int> test_vector;
    assert(move_one_ball(test_vector) == true);
    // Additional test cases can be added here
    return 0;
}