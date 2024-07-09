#include <iostream>
#include <cassert>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string &txt) {
    return !isalpha(txt.back()) && txt.size() > 0 && txt[txt.size() - 1] == ' ';
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}