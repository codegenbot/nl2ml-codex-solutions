#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k && i < arr.size(); i++) {
        if (arr[i] <= 99) {
            sum += arr[i];
        } else if (arr[i] <= 999) {
            sum += arr[i];
        }
    }
    return sum;
}