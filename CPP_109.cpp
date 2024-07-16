#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    return (min_idx == n - 1 || arr[min_idx] < arr[min_idx + 1]);
}