#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> counts(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                counts[0]++;
            } else {
                counts[1]++;
            }
        }
    }
    return counts;
}

int main() {
    assert(issame(even_odd_palindrome(1), std::vector<int>{0, 1}));

    return 0;
}