#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    int max = *max_element(arr.begin(), arr.end());
    for (int i : arr) {
        if (i > max) return false;
    }

    return true;
}