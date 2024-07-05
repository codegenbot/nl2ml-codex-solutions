#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(std::string text) {
    int n = text.size();
    for(int i = 0; i < n / 2; ++i) {
        if(text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("racecar") == true);
    assert(is_palindrome("level") == true);
    assert(is_palindrome("palindrome") == false);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}