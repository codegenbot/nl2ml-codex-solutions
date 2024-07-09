#include <string>
#include <algorithm>
#include <cctype>

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    return (isalpha(lastChar)) && (!any_of(txt.begin(), txt.end(), std::isspace));
}