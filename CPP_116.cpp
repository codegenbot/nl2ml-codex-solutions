#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

void sort_array(std::vector<int>& arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    sort_array(arr);
    assert(issame(arr, std::vector<int>{2, 4, 8, 16, 32}));
    return 0;
}