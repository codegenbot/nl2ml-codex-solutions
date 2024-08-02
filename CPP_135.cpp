#include <vector>

int can_arrange(const std::vector<int>& arr) {
    int largestIndex = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            largestIndex = i;
        }
    }
    return largestIndex;
}