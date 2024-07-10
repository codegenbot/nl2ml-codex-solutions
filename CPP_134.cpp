#include <iostream>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == true);
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}