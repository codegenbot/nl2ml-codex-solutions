#include <string>
#include <cctype>
#include <cassert>

bool check_if_last_char_is_a_letter(const std::string& txt) {
    return !txt.empty() && std::isalpha(txt.back()) && txt.find_last_of(" ") == txt.size() - 1;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}