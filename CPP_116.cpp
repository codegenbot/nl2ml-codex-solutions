#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return sorted_arr;
}
int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    
    return 0;
}