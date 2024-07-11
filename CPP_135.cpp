#include <vector>

int can_arrange(std::vector<int> arr) {
    if (arr.empty()) return -1;
    int idx = -1;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            idx = i - 1;
        }
    }
    return idx;
}