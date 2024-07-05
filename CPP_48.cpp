#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(const std::string& text) {
    int n = text.length();
    for(int i = 0; i < n / 2; i++) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("racecar") == true);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}