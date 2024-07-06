#include <vector>
#include <assert.h>

int can_arrange(vector<int> arr) {
    assert(arr.size() > 1);
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}