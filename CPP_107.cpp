#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    assert(even_odd_palindrome(1) == std::vector<int>{0, 1});
    return 0;
}