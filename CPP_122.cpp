#include <vector>
#include <algorithm>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k && i < arr.size(); i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}