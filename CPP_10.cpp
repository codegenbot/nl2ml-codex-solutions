#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string &str) {
    return str == std::string(str.rbegin(), str.rend());
}

std::string make_palindrome(const std::string &str) {
    std::string rev_str(str.rbegin(), str.rend());
    std::string palindrome = str;
    for (int i = str.length() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += rev_str.substr(0, str.length() - i);
            break;
        }
    }
    return palindrome;
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}