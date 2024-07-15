#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    int count_a = std::__builtin_popcount(a);
    int count_b = std::__builtin_popcount(b);
    if (count_a == count_b) {
        return a < b;
    }
    return count_a < count_b;
}

std::vector<int> sort(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = std::__builtin_popcount(a);
        int count_b = std::__builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });

    return arr;
}