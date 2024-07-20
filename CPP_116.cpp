#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    int count_a = __builtin_popcount(a);
    int count_b = __builtin_popcount(b);
    return count_a == count_b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

int main() {
    std::vector<int> arr = {5, 3, 7, 1, 6, 2, 4};
    arr = sort_array(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}