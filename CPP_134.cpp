#include <string>
#include <algorithm>

bool check_if_last_char_is_a_letter(std::string txt) {
    if (txt.empty()) return false;
    char lastChar = txt.back();
    return isalpha(lastChar) && (!any_of(txt.begin(), txt.end(), ::isspace));
}