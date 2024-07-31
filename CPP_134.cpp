#include <iostream>
#include <cassert>
#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(std::isalpha(lastChar) && txt.find_last_of(" ") == txt.size()-1) return true;
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);

    return 0;
}