#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool is_palindrome(string text) {
    int n = text.length();
    for (int i = 0; i < n / 2; i++) {
        if (text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("racecar") == true);
    assert(is_palindrome("hello") == false);
    assert(is_palindrome("") == true);
    assert(is_palindrome("xywzx") == false);

    cout << "All test cases passed!" << endl;

    return 0;
}