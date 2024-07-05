#include <iostream>
#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && std::isalpha(txt.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pie a") == true);
    assert(check_if_last_char_is_a_letter("12345") == false);
    std::cout << "All test cases pass." << std::endl;
    return 0;
}