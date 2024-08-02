#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        std::reverse(s.begin(), s.end());
    }
    
    return s;
}