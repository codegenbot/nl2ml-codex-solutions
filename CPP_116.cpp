#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& arr);

int main() {
    // Main function code here
}

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