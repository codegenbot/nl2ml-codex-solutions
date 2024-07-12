#include <iostream>
#include <string>
#include <cassert>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        std::string s = std::to_string(i);
        if (s[0] == '1' || s.back() == '1') {
            count++;
        }
    }
    return count;
}

assert(starts_one_ends(5) == 18000);