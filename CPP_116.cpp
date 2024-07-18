#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sortVectorBasedOnBitCount(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

int main() {
    assert(issame(sortVectorBasedOnBitCount({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}