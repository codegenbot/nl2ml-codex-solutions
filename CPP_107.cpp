#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(i % 2);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_palindrome(1), {0, 1}));
    return 0;
}