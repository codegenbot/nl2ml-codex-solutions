#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return std::equal(a.begin(), a.end(), b.begin(), b.end());
    }
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; i++) {
        result.push_back(i % 2);
    }
    return result;
}

int main() {
    assert(std::issame(even_odd_palindrome(2), {0, 1}));
    return 0;
}