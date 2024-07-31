#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::pair<int, int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                ++even;
            } else {
                ++odd;
            }
        }
    }
    return {even, odd};
}

int main() {
    assert (issame(even_odd_palindrome(1) , std::make_pair(0, 1)));
    return 0;
}