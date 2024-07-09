#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& text) {
    int start = 0;
    int end = text.length() - 1;
    while (start < end) {
        if (text[start] != text[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Add more test cases here
    return 0;
}