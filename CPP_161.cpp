#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <cassert>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (std::count_if(s.begin(), s.end(), isalpha) == 0) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    // Add more test cases here
    return 0;
}