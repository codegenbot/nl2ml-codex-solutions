#include <iostream>
#include <string>
#include <algorithm>

bool same_chars(std::string s0, std::string s1) {
    std::sort(s0.begin(), s0.end());
    s0.erase(std::unique(s0.begin(), s0.end()), s0.end());
    std::sort(s1.begin(), s1.end());
    s1.erase(std::unique(s1.begin(), s1.end()), s1.end());
    return s0 == s1;
}