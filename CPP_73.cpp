#include <vector>

int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            right--;
        } else {
            left++;
            right--;
        }
    }

    return changes;
}