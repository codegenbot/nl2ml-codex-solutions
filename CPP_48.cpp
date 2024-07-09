#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string &text) {
    int left = 0;
    int right = text.size() - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }

    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("radar") == true);
    assert(is_palindrome("racecar") == true);

    return true;
}